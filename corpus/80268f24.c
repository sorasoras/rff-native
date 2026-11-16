#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80268f24(u32 param_1)
{
    wrf64(param_1, px_b2f(0x0ull));
    return;
}
