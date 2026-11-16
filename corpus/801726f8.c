#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801726f8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    (void)param_1;
    f7 = (f64)rdf32(0x80574cd8u);
    r3 = (u32)(s8)param_3 ^ 0x80000000u;
    f6 = (f64)rdf32(0x80574ce0u);
    f5 = rdf64(0x80574de8u);
    f4 = (f64)rdf32(0x80574e48u);
    f2 = rdf64(0x80574e40u);
    wrf32d((u32)param_2 + 0x40u, f7);
    f0 = (f64)rdf32(0x80574e4cu);
    f2 = f2 * (f64)(f32)(f4 * (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5));
    wrf32d((u32)param_2 + 0x40u, f7);
    wrf32d((u32)param_2 + 0x48u, f6);
    f2 = (f64)(f32)f2;
    f0 = (f64)(f32)(f0 * ppc_fmadds(f4, (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f5), f4));
    wrf32d((u32)param_2 + 0x3cu, f2);
    wrf32d((u32)param_2 + 0x44u, f0);
    return;
}
