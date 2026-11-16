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

void fn_801902e8(u32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 0x90u);
    if ((s32)r0 >= 0) {
        f2 = rdf64(0x80575350u);
        f1 = (f64)(f32)(px_b2f((u64)(r0 ^ 0x80000000u) | 0x4330000000000000ull) - f2);
        f0 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575360u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r8 = (u32)px_f2b(f0);
        r7 = ppc_mulhw(1717986919, (s32)r8);
        r5 = (u32)((s32)r7 >> 2);
        r30 = r5 + ((r5 >> 0x1fu) & 1u);
        r6 = (u32)((s32)ppc_mulhw(1374389535, (s32)r8) >> 5);
        r0 = (u32)((s32)r7 >> 2);
        r7 = (r6 >> 0x1fu) & 1u;
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xau;
        r29 = r6 + r7;
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x2e0u;
        a.r[2] = r8 - r0;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(rd32(rd32(param_1) + 0x24u), &a);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x374u;
        a.r[2] = r30;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        wr32(param_1 + 0x274u, 1u);
        wr32(param_1 + 0x308u, 1u);
        wr32(param_1 + 0x39cu, 1u);
        wr32(param_1 + 0x430u, 1u);
        if ((s32)r30 <= 0) {
            wr32(param_1 + 0x39cu, 0u);
        }
        if ((s32)r29 <= 0) {
            wr32(param_1 + 0x430u, 0u);
        }
        a.r[0] = param_1;
        (void)tc_call(0x80190440u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_1 + 0x2e0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        wr32(param_1 + 0x274u, 1u);
        wr32(param_1 + 0x308u, 0u);
        wr32(param_1 + 0x39cu, 0u);
        wr32(param_1 + 0x430u, 0u);
    }
    return;
}
