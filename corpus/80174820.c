#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80174820(u32 param_1)
{
    u32 r3 = 0;
    f64 f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f2 = (f64)rdf32(0x80574ed4u);
    a.f[0] = (f64)rdf32(0x80574ed0u);
    a.f[1] = f2;
    a.f[2] = f2;
    a.f[3] = (f64)(f32)(px_b2f((u64)rd32(param_1 + 0x130u) | 0x4330000000000000ull) - rdf64(0x80574ed8u));
    a.r[0] = param_1 + 0x7c4u;
    a.r[1] = r3;
    a.r[2] = 0x8fu;
    a.r[3] = 1u;
    a.r[4] = 0u;
    (void)tc_call(0x800cdc78u, &a);
    return;
}
