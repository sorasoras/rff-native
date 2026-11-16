#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8019fa34(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    f64 f2 = 0.0;
    (void)param_3;
    f2 = rdf64(0x80575818u);
    wrf32d((u32)param_1 + 0x134u, (f64)(f32)(px_b2f((u64)param_2 | 0x4330000000000000ull) - f2));
    wrf32d((u32)param_1 + 0x130u, (f64)(f32)(px_b2f((u64)param_4 | 0x4330000000000000ull) - f2));
    return;
}
