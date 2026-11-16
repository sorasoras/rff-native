#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

u32 fn_802595f4(f64 param_1)
{
    return (u32)(px_f2b(param_1) >> 0x20ull) & 0x80000000u;
}
