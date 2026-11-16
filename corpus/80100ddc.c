#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_80100ddc(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x80100d88u, &a);
    wrf32d(param_1, (f64)rdf32(r3));
    wrf32d(param_1 + 4u, (f64)rdf32(r3 + 4u));
    wrf32d(param_1 + 8u, (f64)rdf32(r3 + 8u));
    r4 = rd32(param_2);
    f0 = (f64)rdf32(r4 + 0x50u);
    wrf32d(0x817fdfc8u, (f64)rdf32(r4 + 0x4cu));
    r30 = (u32)rd8(r4 + 0xbau);
    wrf32d(0x817fdfccu, f0);
    a.r[0] = param_2;
    r3 = tc_call(0x80100fd8u, &a);
    wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(0x817fdfc8u) * (f64)px_w2f(r3)));
    a.r[0] = param_2;
    (void)tc_call(0x80100fd8u, &a);
    wr32(0x817fdfbcu, tc_lastr4());
    r6 = ppc_mulhw(1431655766, (s32)r30);
    f10 = (f64)(f32)((f64)rdf32(0x817fdfccu) * (f64)rdf32(0x817fdfbcu));
    r5 = r6 + ((r6 >> 0x1fu) & 1u);
    f9 = rdf64(0x80573ce8u);
    r6 = r5 * 3u;
    r5 = r5 & 0xffu;
    f8 = (f64)rdf32(0x80573ce0u);
    f4 = -f10;
    r6 = r30 - r6;
    r6 = r6 & 0xffu;
    f6 = (f64)rdf32(0x817fdfc8u);
    r6 = 1u - r6;
    r6 = r6 ^ 0x80000000u;
    r5 = 1u - r5;
    f2 = (f64)rdf32(param_1 + 4u);
    f5 = ppc_fmadds(f6, (f64)(f32)(f8 * (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f9)), (f64)rdf32(param_1));
    wrf32d(0x817fdfccu, f10);
    f2 = ppc_fmadds(f4, (f64)(f32)(f8 * (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - f9)), f2);
    wrf32d(param_1, ppc_fmadds(f6, (f64)(f32)(f8 * (f64)(f32)(px_b2f((u64)(((u32)param_3 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f9)), f5));
    wrf32d(param_1 + 4u, ppc_fmadds(f4, (f64)(f32)(f8 * (f64)(f32)(px_b2f((u64)(((u32)param_4 - 1u) ^ 0x80000000u) | 0x4330000000000000ull) - f9)), f2));
    return;
}
