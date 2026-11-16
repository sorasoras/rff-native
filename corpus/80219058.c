#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80219058(u32 param_r3)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    if (rd32(param_r3 + 0x68u) != 0u) {
        r3 = tc_call(0x80218620u, &a);
        r31 = r3;
        if (r3 == 0xffffffffu) {
            a.r[0] = param_r3;
            a.r[1] = 0u;
            (void)tc_call(0x8021854cu, &a);
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x80096df0u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x8007d150u, &a);
            if (rd32(r3 + 4u) != 1u) {
                a.r[0] = rd32(param_r3 + 0x68u);
                r3 = tc_call(0x80074e90u, &a);
                if (r3 != 0u || r31 == rd32(param_r3 + 0x34u)) {
                    r3 = rd32(param_r3 + 0x208u);
                    if ((s32)r3 > 0) {
                        wr32(param_r3 + 0x208u, r3 - 1u);
                    } else {
                        a.r[0] = param_r3;
                        r3 = tc_call(0x80218830u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(param_r3 + 0x68u);
                            r3 = tc_call(0x800a4500u, &a);
                            if (r3 != 0u) {
                                a.r[0] = rd32(param_r3 + 0x68u);
                                r3 = tc_call(0x80074e90u, &a);
                                if (r3 != 0u) {
                                    r5 = rd32(param_r3 + 0x24u);
                                    r4 = rd32(param_r3 + 0x28u);
                                    r0 = rd32(param_r3 + 0x2cu);
                                    wr32(0x817fdf8cu, r5);
                                    wr32(0x817fdf90u, r4);
                                    wr32(0x817fdf94u, r0);
                                    wr32(0x817fdf98u, r5);
                                    wr32(0x817fdf9cu, r4);
                                    wr32(0x817fdfa0u, r0);
                                    a.r[0] = param_r3;
                                    r3 = tc_call(0x80218684u, &a);
                                    a.r[0] = r3;
                                    a.r[1] = r31;
                                    a.r[2] = 0x817fdf98u;
                                    (void)tc_call(0x80215ab0u, &a);
                                    r6 = rd32(param_r3 + 0x3cu);
                                    r0 = rd32(0x80471a18u);
                                    wr32(0x817fdfa4u, rd32(param_r3 + 0x38u));
                                    r0 = r0 * 0x4150u;
                                    wr32(0x817fdfa8u, r6);
                                    f1 = (f64)rdf32(0x817fdfa4u);
                                    wr32(0x817fdfacu, rd32(param_r3 + 0x40u));
                                    a.f[0] = f1;
                                    a.f[1] = (f64)rdf32(0x817fdfacu);
                                    a.r[0] = r0 - 0x7fb92738u;
                                    a.r[1] = 0u;
                                    a.r[2] = 0u;
                                    f1 = tc_callf(0x80089fc8u, &a);
                                    wrf32d(0x817fdfa8u, f1);
                                    r29 = rd32(param_r3 + 0x34u);
                                    r3 = tc_call(0x80218620u, &a);
                                    if (((ppc_cntlzw(r29 - r3) >> 5u) & 0x7ffffffu) != 0u) {
                                        r4 = rd32(0x817fdfa8u);
                                        r0 = rd32(0x817fdfacu);
                                        wr32(0x817fdf80u, rd32(0x817fdfa4u));
                                        wr32(0x817fdf84u, r4);
                                        wr32(0x817fdf88u, r0);
                                        a.r[0] = param_r3;
                                        r3 = tc_call(0x80218684u, &a);
                                        a.r[0] = r3;
                                        a.r[1] = r31;
                                        a.r[2] = 0x817fdf80u;
                                        (void)tc_call(0x80215ab0u, &a);
                                    } else {
                                        r28 = rd32(param_r3 + 0x34u);
                                        r3 = tc_call(0x80218620u, &a);
                                        r29 = r3;
                                        a.r[0] = param_r3;
                                        r3 = tc_call(0x80218660u, &a);
                                        a.r[0] = r3;
                                        a.r[1] = r28;
                                        a.r[2] = r29;
                                        r3 = tc_call(0x8021b37cu, &a);
                                        r28 = r3;
                                        a.r[0] = param_r3;
                                        r3 = tc_call(0x80218684u, &a);
                                        a.r[0] = r3;
                                        a.r[1] = r31;
                                        a.r[2] = r28;
                                        r3 = tc_call(0x80215bc4u, &a);
                                        r29 = r3;
                                        if (r3 != 0xffffffffu) {
                                            a.r[0] = param_r3;
                                            r3 = tc_call(0x80218684u, &a);
                                            r3 = rd32(r3 + ((r31 << 2u) & 0xfffffffcu));
                                            r3 = r3 + (r29 * 0xcu);
                                            f2 = (f64)rdf32(r3 + 0xcu);
                                            f1 = (f64)rdf32(r3 + 8u);
                                            f0 = (f64)rdf32(r3 + 4u);
                                            wrf32d(0x817fdf78u, f1);
                                            wrf32d(0x817fdf74u, f0);
                                            wrf32d(0x817fdf7cu, f2);
                                            wrf32d(0x817fdfa4u, f0);
                                            wrf32d(0x817fdfa8u, f1);
                                            wrf32d(0x817fdfacu, f2);
                                        }
                                    }
                                    r0 = rd32(param_r3 + 0x28u);
                                    wr32(0x817fdf68u, rd32(param_r3 + 0x24u));
                                    wr32(0x817fdf6cu, r0);
                                    wr32(0x817fdf70u, rd32(param_r3 + 0x2cu));
                                    a.r[0] = param_r3;
                                    r3 = tc_call(0x80218684u, &a);
                                    a.r[0] = r3;
                                    a.r[1] = r31;
                                    a.r[2] = 0x817fdf68u;
                                    a.r[3] = 0x817fdfa4u;
                                    a.r[4] = 0x817fdf58u;
                                    r3 = tc_call(0x80215ce8u, &a);
                                    r29 = rd32(param_r3 + 0x68u);
                                    r31 = r3;
                                    a.r[0] = param_r3;
                                    r3 = tc_call(0x80218684u, &a);
                                    r3 = rd32(r3 + 0x3dcu);
                                    r3 = r3 + ((r29 << 2u) & 0xfffffffcu);
                                    f31 = (f64)rdf32(r3 + 4u);
                                    r3 = tc_call(0x80218648u, &a);
                                    r3 = r3 ^ 0x80000000u;
                                    wr32(0x817fdfb4u, r3);
                                    r28 = r31 + 0x18u;
                                    f1 = rdf64(0x80576a00u);
                                    r29 = 2u;
                                    wr32(0x817fdfb0u, 0x43300000u);
                                    f29 = (f64)rdf32(0x805769dcu);
                                    f30 = (f64)(f32)(rdf64(0x817fdfb0u) - f1);
                                    while ((s32)r29 < (s32)(rd32(0x817fdf58u) - 1u)) {
                                        r4 = rd32(r28 + 4u);
                                        wr32(0x817fdf5cu, rd32(r28));
                                        wr32(0x817fdf60u, r4);
                                        wr32(0x817fdf64u, rd32(r28 + 8u));
                                        a.r[0] = 0x817fdf5cu;
                                        a.r[1] = r31 + ((r29 - 1u) * 0xcu);
                                        a.r[2] = 0x817fdf5cu;
                                        (void)tc_call(0x802343a4u, &a);
                                        a.r[0] = 0x817fdf5cu;
                                        f1 = tc_callf(0x80234440u, &a);
                                        f29 = (f64)(f32)(f29 + f1);
                                        r28 = r28 + 0xcu;
                                        r29 = r29 + 1u;
                                    }
                                    c0gt = f29 > (f64)rdf32(0x805769dcu);
                                    wrf64(0x817fdfb0u, px_ctiw(f30, ppc_fctiwz(f30)));
                                    wr32(param_r3 + 0x204u, rd32(0x817fdfb4u));
                                    if (c0gt) {
                                        r3 = rd32(param_r3 + 0x208u);
                                        if ((s32)r3 > 0) {
                                            wr32(param_r3 + 0x208u, r3 - 1u);
                                            return;
                                        }
                                        f2 = (f64)rdf32(0x805769d8u);
                                        f0 = (f64)rdf32(0x80576a10u);
                                        while ((f64)(f32)px_fdiv(f29, f31) > f0) {
                                            f31 = (f64)(f32)(f31 + f2);
                                        }
                                        r28 = param_r3;
                                        r27 = 0u;
                                        wr32(param_r3 + 0x90u, rd32(0x817fdf58u));
                                        while ((s32)r27 < (s32)rd32(0x817fdf58u) && (s32)r27 < 30) {
                                            f1 = (f64)rdf32(r31);
                                            wrf32d(r28 + 0x94u, f1);
                                            wrf32d(r28 + 0x98u, (f64)rdf32(r31 + 4u));
                                            f2 = (f64)rdf32(r31 + 8u);
                                            wrf32d(r28 + 0x9cu, f2);
                                            a.f[0] = f1;
                                            a.f[1] = f2;
                                            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                                            a.r[1] = 0u;
                                            a.r[2] = 0u;
                                            f1 = tc_callf(0x80089fc8u, &a);
                                            wrf32d(r28 + 0x98u, f1);
                                            r31 = r31 + 0xcu;
                                            r28 = r28 + 0xcu;
                                            r27 = r27 + 1u;
                                        }
                                        wrf32d(param_r3 + 0x1fcu, f31);
                                        wrf32d(param_r3 + 0x200u, f29);
                                        a.r[0] = param_r3;
                                        a.r[1] = 2u;
                                        (void)tc_call(0x8021854cu, &a);
                                        return;
                                    }
                                    r28 = rd32(param_r3 + 0x34u);
                                    r3 = tc_call(0x80218620u, &a);
                                    if (r3 == r28) {
                                        a.r[0] = param_r3;
                                        a.r[1] = 3u;
                                        (void)tc_call(0x8021854cu, &a);
                                        return;
                                    }
                                    a.r[0] = param_r3;
                                    a.r[1] = rd32(param_r3 + 0x68u);
                                    (void)tc_call(0x80218828u, &a);
                                    a.r[0] = param_r3;
                                    a.r[1] = 3u;
                                    (void)tc_call(0x8021854cu, &a);
                                    return;
                                }
                            }
                            a.r[0] = param_r3;
                            a.r[1] = 3u;
                            (void)tc_call(0x8021854cu, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
