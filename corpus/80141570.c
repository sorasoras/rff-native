#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80141570(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wrf32d((u32)param_1 + 0x10cu, (f64)rdf32(0x80574450u));
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    (void)tc_call(0x800abca8u, &a);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 8u);
    a.f[0] = (f64)(f32)((f64)(f32)(px_b2f((u64)rd32(r3 + 0x6cu) | 0x4330000000000000ull) - rdf64(0x80574460u)) + (f64)rdf32(0x8057445cu));
    r3 = tc_call(0x802558e4u, &a);
    r31 = r3;
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 8u);
    wr32(r3 + 0x6cu, r31);
    return;
}
