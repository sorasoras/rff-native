#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80120d14(u32 param_1, u32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = param_2;
    if ((s32)param_2 < 0) {
        r4 = 0u;
    }
    if ((s32)r4 > 128) {
        r4 = 0x80u;
    }
    r4 = r4 ^ 0x80000000u;
    a.f[0] = (f64)(f32)((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - rdf64(0x805742b8u)) * (f64)rdf32(0x805742b0u));
    a.r[0] = param_1;
    (void)tc_call(0x80120c84u, &a);
    return;
}
