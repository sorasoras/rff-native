#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801eb2d8(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f2 = 0.0, f4 = 0.0, f5 = 0.0;
    (void)param_1;
    r3 = (u32)(s8)param_3 ^ 0x80000000u;
    f2 = (f64)rdf32(0x80576348u);
    f5 = rdf64(0x805763e8u);
    f4 = rdf64(0x80576440u);
    wrf32d((u32)param_2 + 0x48u, (f64)rdf32(0x805763a8u));
    wrf32d((u32)param_2 + 0x40u, f2);
    wrf32d((u32)param_2 + 0x3cu, (f64)(f32)(f4 * (px_b2f((u64)r3 | 0x4330000000000000ull) - f5)));
    wrf32d((u32)param_2 + 0x44u, (f64)(f32)((f4 * (px_b2f((u64)r3 | 0x4330000000000000ull) - f5)) + f4));
    return;
}
