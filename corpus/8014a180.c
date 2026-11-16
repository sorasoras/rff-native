#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_8014a180(u32 param_1, s32 param_2)
{
    return (f64)(f32)(px_b2f((u64)(rd32(rd32(0x805712fcu) + (rd32(param_1) * 0x418u) + ((u32)param_2 * 0x28u) + 0x5cu) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805746c8u));
}
