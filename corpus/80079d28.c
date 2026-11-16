#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_80079d28(s32 param_1)
{
    return (f64)(f32)(px_b2f((u64)rd16((u32)param_1 + 0xcu) | 0x4330000000000000ull) - rdf64(0x805727f0u));
}
