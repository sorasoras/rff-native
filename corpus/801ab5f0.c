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

void fn_801ab5f0(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r3 = rd32(param_2 + 0x60u);
    if (r3 != 0u) {
        f0 = (f64)(f32)((f64)rdf32(0x80575a68u) * (f64)rdf32(r3 + 0xe4u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        a.r[0] = rd32(param_2 + 0x4cu);
        a.r[1] = (u32)(s16)px_f2b(f0);
        (void)tc_call(0x8004220cu, &a);
    }
    f0 = (f64)rdf32(0x80575a50u);
    f1 = (f64)rdf32(0x80575a48u);
    wrf32d(param_2 + 0x10u, f0);
    r3 = rd32(param_2 + 0x4cu);
    wrf32d(param_2, f1);
    wrf32d(param_2 + 0x20u, f0);
    wrf32d(param_2 + 4u, f0);
    wrf32d(param_2 + 0x14u, f1);
    wrf32d(param_2 + 0x24u, f0);
    wrf32d(param_2 + 8u, f0);
    wrf32d(param_2 + 0x18u, f0);
    wrf32d(param_2 + 0x28u, f1);
    wrf32d(param_2 + 0xcu, f0);
    wrf32d(param_2 + 0x1cu, f0);
    wrf32d(param_2 + 0x2cu, f0);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = param_2;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = rd32(param_2 + 0x30u);
    a.r[1] = param_2;
    a.r[2] = param_2;
    (void)tc_call(0x802337a0u, &a);
    return;
}
