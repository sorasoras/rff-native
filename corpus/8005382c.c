#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8005382c(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    f0 = rdf64(0x805722c8u);
    r5 = ((u32)param_3 * 0x70u) - 0x7fc2d850u;
    r3 = (u32)rd8(r5 + 0x58u);
    wr32(0x817fdfc8u, 0x43300000u);
    r6 = ((u32)param_2 * 0x70u) - 0x7fc2d850u;
    wr32(0x817fdfccu, r3);
    r3 = (u32)rd8(r6 + 0x58u);
    f4 = (f64)(f32)(rdf64(0x817fdfc8u) - f0);
    r0 = (u32)rd8(r5 + 0x59u);
    r7 = (u32)rd8(r6 + 0x59u);
    wr32(0x817fdfccu, r3);
    f2 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f0);
    r3 = (u32)rd8(r5 + 0x5au);
    f5 = (f64)(f32)(f4 - f2);
    r8 = (u32)rd8(r6 + 0x5au);
    f3 = (f64)(f32)(rdf64(0x817fdfc8u) - f0);
    wr32(0x817fdfccu, r7);
    f4 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f0);
    f5 = ppc_fmadds(param_1, f5, f3);
    r0 = (u32)rd8(r5 + 0x5bu);
    f7 = px_ctiw(f5, ppc_fctiwz(f5));
    wr32(0x817fdfccu, r3);
    r5 = (u32)rd8(r6 + 0x5bu);
    f5 = ppc_fmadds(param_1, (f64)(f32)(f4 - (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f0)), (f64)(f32)(px_b2f((u64)r7 | 0x4330000000000000ull) - f0));
    wr32(0x817fdfccu, r8);
    f6 = px_ctiw(f5, ppc_fctiwz(f5));
    wr32(0x817fdfccu, r5);
    f5 = ppc_fmadds(param_1, (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f0) - (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f0)), (f64)(f32)(px_b2f((u64)r8 | 0x4330000000000000ull) - f0));
    f5 = px_ctiw(f5, ppc_fctiwz(f5));
    f3 = (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f0) - (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f0));
    f0 = (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f0);
    f0 = ppc_fmadds(param_1, f3, f0);
    wr8(0x805710f5u, (u8)px_f2b(f6));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr8(0x805710f4u, (u8)px_f2b(f7));
    wr8(0x805710f6u, (u8)px_f2b(f5));
    wr8(0x805710f7u, (u8)px_f2b(f0));
    return;
}
