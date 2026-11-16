#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801103e8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    f2 = rdf64(0x80574130u);
    f0 = (f64)rdf32(0x80574124u);
    wrf32d(param_1, (f64)(f32)(px_b2f((u64)(rd32(param_3) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    r0 = rd32(param_3 + 4u) ^ 0x80000000u;
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2));
    wrf32d(param_2, (f64)(f32)(px_b2f((u64)(rd32(param_3 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    return;
}
