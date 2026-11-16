"""Regenerate the native dispatch from the corpus signatures, mapping params by their
Ghidra-register ORDER (param_1 = the first register arg) instead of by name.

Ghidra names register params param_1..param_N in order when it cannot recover the register;
those are r3.. in order. Parameters it *can* recover are named param_rN/param_fN. Stack
params (storage == "stack") are rare and read from the fixed judge SP.
"""
import glob, json, os, re, collections

CORPUS = 'E:/Games/wii-decomp/rff-native/corpus'
GEN = 'E:/Games/wii-decomp/rff-native/gen'
SIG = re.compile(r'^(?:static )?(u32|s32|f32|f64|u64|void)\s+(fn_([0-9a-f]{8}))\(([^)]*)\)', re.M)

REG_ORDER = ['r3', 'r4', 'r5', 'r6', 'r7', 'r8', 'r9', 'r10']

# Ghidra return-type misses: bodies decompiled as `void` whose PPC epilogue actually leaves a
# result in r3 before blr. Verified against the packet asm (the `or r3,rN,rN` / computed-r3
# idiom right before the register-restore helper). The wrapper must publish that r3, or callers
# that do `r3 = tc_call(addr); return r3;` read 0. Map guest address -> the r3 result expression
# in terms of the incoming TcArgs. Each entry cites the asm evidence.
RET_VOID_FIX = {
    # MEMiAllocFromExpHeapEx carve helper: 8026c854 `or r27,r5,r5` (r27=param_3),
    # 8026ca08 `or r3,r27,r27` -> returns param_3 (the aligned data pointer, r5).
    '8026c81c': 'a->r[2]',
    # Game heap create: 80040f68 `bl 8003acb0` is the last instruction before the restore/blr,
    # so r3 = 8003acb0's return (the carved heap block). tc_lastr() is that call's published r3.
    '80040f10': 'tc_lastr()',
    # Game heap alloc header-init: asm 8003ac8c..8003ac98 computes r3 = (param_2+param_3+31)&~(param_3-1)
    # (the aligned data pointer; param_3 is the 0x20 alignment) and blr leaves it in r3. Ghidra typed
    # the body void, but fn_8003AFB4 returns this r3 as the allocation result.
    '8003ac8c': '((a->r[1] + a->r[2] + 0x1fu) & ~(a->r[2] - 1u))',
    # Resource-heap alloc wrapper: 80040d2c `bl 8003afb4` then restore/blr -> r3 = the alloc pointer.
    '80040cd8': 'tc_lastr()',
}


def parse_args(s):
    s = s.strip()
    if not s or s == 'void':
        return []
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch in '(*':
            depth += 1
        if ch in ')*':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    res = []
    for p in out:
        m = re.match(r'^(u32|s32|f32|f64|u64)\s+(\w+)$', p)
        res.append((m.group(2), m.group(1)) if m else ('?', '?'))
    return res


def main():
    sigs = {}
    for f in sorted(glob.glob(CORPUS + '/*.c')):
        base = os.path.basename(f)[:-2]
        txt = open(f, encoding='utf-8', errors='replace').read(3000)
        m = SIG.search(txt)
        if not m:
            sigs[base] = ('u32', [])
            continue
        sigs[base] = (m.group(1), parse_args(m.group(4)))

    # param_1..param_N with no r/f suffix = register args in order; r/f names keep their slot
    decl, wrap, table = [], [], []
    order_log = collections.Counter()
    for a in sorted(sigs):
        ret, params = sigs[a]
        name = 'fn_' + a
        args = []
        nextreg = 0
        for pname, kind in params:
            mr = re.match(r'param_r(\d+)$', pname)
            mf = re.match(r'param_f(\d+)$', pname)
            mp = re.match(r'param_(\d+)$', pname)
            ms = re.match(r'param_ps(\d)_([01])$', pname)
            if mr:
                rn = int(mr.group(1))
                i = rn - 3
                if 0 <= i < 8:
                    args.append(f'a->r[{i}]' if kind in ('u32', 's32') else
                                (f'(s32)a->r[{i}]' if kind == 's32' else
                                 (f'tc_gprf32(a->r[{i}])' if kind == 'f32' else
                                  f'tc_gprf64(a->r[{i}], a->r[{i + 1}])')))
                    nextreg = max(nextreg, i + 1)
                else:
                    args.append('0u')
                order_log['named-r'] += 1
            elif mf:
                i = int(mf.group(1)) - 1
                args.append(f'a->f[{i}]' if 0 <= i < 8 else '0.0')
                order_log['named-f'] += 1
            elif mp:
                # A bare param_N: Ghidra numbered it by argument order. A FLOAT kind is an FPR
                # argument (param_1 -> f1, param_2 -> f2...); an integer kind is a GPR (r3, r4...).
                i = int(mp.group(1)) - 1
                if kind in ('f32', 'f64'):
                    args.append(f'a->f[{i}]' if i < 8 else '0.0')
                    order_log['plain-f'] += 1
                else:
                    args.append(args_plain(kind, i, order_log))
            elif ms:
                args.append('0u')
                order_log['ps'] += 1
            else:
                args.append(args_plain(kind, nextreg, order_log))
        arglist = ', '.join(args)
        ps = ', '.join(f'{k} {n}' for n, k in params) or 'void'
        decl.append(f'{ret} {name}({ps});')
        if ret == 'void':
            if a in RET_VOID_FIX:
                body = f'{name}({arglist}); return (u32)({RET_VOID_FIX[a]});'
                cbody = f'{name}({arglist}); return 0.0;'
            else:
                body, cbody = f'{name}({arglist}); return 0u;', f'{name}({arglist}); return 0.0;'
        elif ret in ('u32', 's32'):
            body, cbody = f'return (u32){name}({arglist});', f'{name}({arglist}); return 0.0;'
        elif ret == 'u64':
            # the PowerPC ABI's 64-bit result: the high word in r3, the low word in r4. The caller
            # reads both (tc_lastr4 for the low half), so the wrapper must publish the pair.
            body = f'u64 v = {name}({arglist}); tc_set_lastr4((u32)v); return (u32)(v >> 32);'
            cbody = f'u64 v = {name}({arglist}); tc_set_lastr4((u32)v); return (f64)(u32)(v >> 32);'
        elif ret in ('f32', 'f64'):
            body, cbody = f'{name}({arglist}); return 0u;', f'return (f64){name}({arglist});'
        else:
            body, cbody = f'{name}({arglist}); return 0u;', f'return (f64){name}({arglist});'
        wrap.append(f'static u32 w_{a}(const TcArgs *a) {{ {body} }}')
        wrap.append(f'static f64 wf_{a}(const TcArgs *a) {{ {cbody} }}')
        table.append(f'{{ 0x{a}u, w_{a}, wf_{a} }},')
    print('plain-param mapping:', dict(order_log))

    out = ['/* GENERATED: the real-call dispatch, params by Ghidra register order. */',
           '#include "tc_rt.h"', '#include "dispatch.h"', '']
    out += decl + [''] + wrap + ['', 'const DispatchEntry DISPATCH[] = {'] + table + ['};',
           f'const int DISPATCH_N = {len(table)};']
    open(GEN + '/dispatch.c', 'w', encoding='utf-8', newline='\n').write('\n'.join(out))
    print('wrote dispatch.c:', len(table), 'functions')


def args_plain(kind, i, log):
    log['plain'] += 1
    if i < 8:
        if kind == 's32':
            return f'(s32)a->r[{i}]'
        if kind == 'f32':
            return f'tc_gprf32(a->r[{i}])'
        if kind == 'f64':
            return f'tc_gprf64(a->r[{i}], a->r[{i + 1}])'
        return f'a->r[{i}]'
    if i == 8:
        return 'a->r[8]'
    return 'a->r[9]'


if __name__ == '__main__':
    main()
