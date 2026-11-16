#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_800ff754(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0;
    f6 = rdf64(0x80573c50u);
    r7 = rd32((u32)param_2 + 0x10u);
    r5 = rd32(r7 + 0x30u);
    f5 = (f64)rdf32(0x80573c48u);
    wr32(param_1, rd32(r7 + 0x2cu));
    wr32(param_1 + 4u, r5);
    f3 = (f64)rdf32(param_1);
    f0 = (f64)rdf32(param_1 + 4u);
    wr32(param_1 + 8u, rd32(r7 + 0x34u));
    r5 = (u32)rd8(r7 + 0xbau);
    r4 = ppc_mulhw(1431655766, (s32)r5);
    r4 = r4 + ((r4 >> 0x1fu) & 1u);
    r0 = r4 * 3u;
    r4 = r4 & 0xffu;
    r5 = r5 - r0;
    f1 = (f64)(f32)(px_b2f((u64)((r4 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f6);
    f6 = (f64)(f32)(px_b2f((u64)(((r5 & 0xffu) - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f6);
    wrf32d(param_1, ppc_fmadds((f64)(f32)(f5 * f6), (f64)rdf32(r7 + 0x4cu), f3));
    f0 = ppc_fmadds((f64)(f32)(f5 * f1), (f64)rdf32(r7 + 0x50u), f0);
    wrf32d(param_1 + 4u, f0);
    return;
}
