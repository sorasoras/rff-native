#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8011ebbc(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.f[0] = (f64)(f32)((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80574278u)) * (f64)rdf32(0x80574270u));
    a.r[0] = param_1;
    (void)tc_call(0x8011eb74u, &a);
    return;
}
