#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800dd174(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r6 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r6 = param_3 ^ 0x80000000u;
    f3 = rdf64(0x80573a88u);
    f1 = (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f3);
    f2 = (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f3);
    f3 = (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f3);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x800dd1d0u, &a);
    return;
}
