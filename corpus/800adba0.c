#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800adba0(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    f4 = rdf64(0x80572be8u);
    f2 = (f64)(f32)(px_b2f((u64)rd8(param_2 + 1u) | 0x4330000000000000ull) - f4);
    f0 = px_b2f((u64)rd8(param_2 + 3u) | 0x4330000000000000ull);
    f1 = (f64)(f32)(px_b2f((u64)rd8(param_2 + 2u) | 0x4330000000000000ull) - f4);
    wrf32d(param_1, (f64)(f32)(px_b2f((u64)rd8(param_2) | 0x4330000000000000ull) - f4));
    f0 = (f64)(f32)(f0 - f4);
    wrf32d(param_1 + 4u, f2);
    wrf32d(param_1 + 8u, f1);
    wrf32d(param_1 + 0xcu, f0);
    return;
}
