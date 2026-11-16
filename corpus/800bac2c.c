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

void fn_800bac2c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0;
    (void)param_1;
    r3 = (u32)(s8)param_3 ^ 0x80000000u;
    f5 = (f64)rdf32(0x80572ca0u);
    f4 = rdf64(0x80572d08u);
    f2 = rdf64(0x80572d48u);
    f0 = rdf64(0x80572d50u);
    wrf32d((u32)param_2 + 0x40u, (f64)rdf32(0x80572c98u));
    wrf32d((u32)param_2 + 0x48u, f5);
    f0 = f0 + px_fdiv(px_b2f((u64)r3 | 0x4330000000000000ull) - f4, f2);
    f0 = (f64)(f32)f0;
    wrf32d((u32)param_2 + 0x44u, f0);
    wrf32d((u32)param_2 + 0x3cu, (f64)(f32)px_fdiv(px_b2f((u64)r3 | 0x4330000000000000ull) - f4, f2));
    return;
}
