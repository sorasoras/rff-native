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

u32 fn_801eacf8(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    f4 = (f64)rdf32((u32)param_1 + 0x234u);
    f1 = px_ctiw(f4, ppc_fctiwz(f4));
    f3 = (f64)rdf32((u32)param_1 + 0x238u);
    f7 = (f64)(f32)(f4 - (f64)rdf32((u32)param_1 + 0x1a0u));
    f0 = px_ctiw(f3, ppc_fctiwz(f3));
    f4 = (f64)(f32)(f3 - (f64)rdf32((u32)param_1 + 0x1a4u));
    f3 = (f64)rdf32(0x80576434u);
    f2 = (f64)rdf32((u32)param_1 + 0x244u);
    f6 = ppc_fmadds((f64)rdf32(0x80576430u), (f64)rdf32((u32)param_1 + 0x240u), f7);
    wrf64(0x817fdff0u, f1);
    f3 = ppc_fmadds(f3, f2, f4);
    f5 = (f64)rdf32(0x805763bcu);
    f2 = (f64)rdf32((u32)param_1 + 0x1acu);
    f1 = (f64)(f32)(f3 * f5);
    r4 = rd32(0x817fdff4u);
    f4 = (f64)(f32)(f6 * f5);
    r3 = rd32((u32)param_1 + 0x2ecu);
    r0 = (r4 << 0x1du) & 0xe0000000u;
    r4 = (r4 >> 0x1fu) & 1u;
    f3 = px_ctiw(f4, ppc_fctiwz(f4));
    r0 = r0 - r4;
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    wr32(0x817fdfd8u, 0x43300000u);
    f4 = rdf64(0x805763e8u);
    f2 = (f64)(f32)(f2 * f5);
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    r3 = rd32(r3 + 8u);
    wr32(0x817fdfdcu, (u32)px_f2b(f1) ^ 0x80000000u);
    r7 = r0 + r4;
    r4 = rd32(r3 + 0x14u);
    r3 = (r7 >> 0x1fu) & 1u;
    c0eq = (((r7 & 1u) ^ r3) - r3) == 0u;
    r3 = (u32)px_f2b(f0);
    r4 = rd32(r4);
    r0 = (r3 << 0x1du) & 0xe0000000u;
    r3 = (r3 >> 0x1fu) & 1u;
    r0 = r0 - r3;
    f0 = ppc_fmadds((f64)(f32)(rdf64(0x817fdfd8u) - f4), f2, (f64)(f32)(px_b2f((u64)((u32)px_f2b(f3) ^ 0x80000000u) | 0x4330000000000000ull) - f4));
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    r0 = r0 + r3;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = (r0 << 3u) & 0xfffffff8u;
    r0 = r7 + r0;
    r3 = r4 + (((u32)px_f2b(f0) << 5u) & 0xffffffe0u);
    if (c0eq) {
        r0 = (u32)rd8(r3 + r0);
        r3 = r0 & 0xfu;
    } else {
        r0 = (u32)rd8(r3 + r0);
        r0 = (r0 >> 4u) & 0xfu;
        r3 = (u32)(s8)r0;
    }
    return r3;
}
