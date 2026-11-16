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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8016c478(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    f1 = tc_callf(0x800b516cu, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_2) + 0x1c0u), &a);
    a.r[0] = param_2;
    (void)tc_call(0x800b510cu, &a);
    wr32(param_2 + 0xf78u, 0u);
    a.r[0] = param_2;
    f1 = tc_callf(0x800b2e68u, &a);
    r0 = rd32(param_2 + 0x150u);
    r4 = rd32(param_2 + 0x148u) | 0x400000u;
    r3 = rd32(param_2 + 0x9cu) | 0x8000000u;
    wr32(param_2 + 0x1b0u, 1u);
    wr32(param_2 + 0x148u, r4);
    wr8(param_2 + 0x162cu, 0u);
    wr8(param_2 + 0x162du, 1u);
    wr32(param_2 + 0xb8u, 1u);
    wr32(param_2 + 0x9cu, r3);
    if (r0 == 0x60u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_2) + 0x58u), &a);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_2) + 0x1e4u), &a);
        wr32(param_2 + 0xea8u, 1u);
    } else {
        a.r[0] = param_2;
        f1 = tc_callf(0x80064f9cu, &a);
        wr32(param_2 + 0xea8u, (u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1))) - 1u);
    }
    return;
}
