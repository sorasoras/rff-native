#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8011005c(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f3 = rdf64(0x80574130u);
    f4 = (f64)(f32)(px_b2f((u64)(rd32(param_2) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    f0 = (f64)rdf32(0x80574124u);
    f5 = (f64)(f32)(px_b2f((u64)(rd32(param_2 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    f1 = px_b2f((u64)(rd32(param_2 + 0xcu) ^ 0x80000000u) | 0x4330000000000000ull);
    f2 = (f64)(f32)(px_b2f((u64)(rd32(param_2 + 8u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    wrf32d(param_1 + 0x18u, f4);
    f1 = (f64)(f32)(f1 - f3);
    wrf32d(param_1, f4);
    wrf32d(param_1 + 0x24u, f2);
    wrf32d(param_1 + 0xcu, f2);
    wrf32d(param_1 + 0x14u, f5);
    wrf32d(param_1 + 8u, f5);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x20u, f1);
    wrf32d(param_1 + 0x28u, f0);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x10u, f0);
    wrf32d(param_1 + 4u, f0);
    return;
}
