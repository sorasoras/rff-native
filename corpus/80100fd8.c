#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u64 fn_80100fd8(u32 param_1)
{
    u32 r12 = 0;
    r12 = rd32(param_1);
    return ((u64)ppc_single_bits((f64)px_w2f(rd32(r12 + 0x84u))) << 0x20ull) | (u64)ppc_single_bits((f64)px_w2f(rd32(r12 + 0x98u)));
}
