#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800ae58c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.f[0] = (f64)(f32)(px_b2f((u64)(rd32(param_2 + 4u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572bd8u));
    a.r[0] = rd32(param_2);
    (void)tc_call(0x800ae478u, &a);
    return;
}
