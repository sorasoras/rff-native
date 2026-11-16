#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_801cd018(s32 param_1)
{
    u32 c0gt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f2 = rdf64(0x80575ec8u);
    r0 = rd32((u32)param_1 + 0xd18u) + 1u;
    f0 = (f64)rdf32(0x80575ed0u);
    wr32((u32)param_1 + 0xd18u, r0);
    f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2);
    c0gt = f1 > f0;
    return ((((f1 < f0) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
}
