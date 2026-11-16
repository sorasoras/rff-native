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

f64 fn_800a685c(u32 param_1)
{
    return (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80572b0cu) * (f64)(f32)(px_b2f((u64)(param_1 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572b20u))), (f64)rdf32(0x80572b18u));
}
