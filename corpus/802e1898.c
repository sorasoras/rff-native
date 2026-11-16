#include "tc_rt.h"

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

void fn_802e1898(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_3 + 0x48u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = param_1;
    a.f[1] = param_2;
    r3 = tc_call(rd32(rd32(r3) + 0x10u), &a);
    r0 = r3 ^ 0x80000000u;
    r3 = rd32((u32)param_3 + 0x48u);
    f1 = rdf64(0x80577428u);
    f31 = (f64)(f32)px_fdiv(param_2, (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f1));
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
    f1 = rdf64(0x80577428u);
    wrf32d((u32)param_3 + 0x28u, f31);
    wrf32d((u32)param_3 + 0x24u, (f64)(f32)px_fdiv(param_1, (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f1)));
    return;
}
