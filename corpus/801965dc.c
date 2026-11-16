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

u32 fn_801965dc(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    f5 = (f64)rdf32(0x805754bcu);
    f4 = (f64)rdf32(0x805754c0u);
    f2 = ppc_fnmsubs(f5, (f64)rdf32((u32)param_1 + 0x528u), (f64)rdf32((u32)param_1 + 0x51cu));
    f3 = (f64)(f32)(ppc_fmadds(f5, (f64)rdf32((u32)param_1 + 0x524u), (f64)rdf32((u32)param_1 + 0x518u)) * f4);
    r3 = rd32((u32)param_1 + 0x788u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x118u) * f4);
    wr32(0x817fdfe8u, 0x43300000u);
    f0 = (f64)(f32)(f2 * f4);
    r3 = rd32(r3 + 8u);
    f2 = px_ctiw(f3, ppc_fctiwz(f3));
    wr32(0x817fdff0u, 0x43300000u);
    r5 = rd32(r3 + 0x14u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    f3 = rdf64(0x80575498u);
    r4 = (u32)px_f2b(f2);
    r3 = r4 ^ 0x80000000u;
    r0 = (r4 << 0x1du) & 0xe0000000u;
    r7 = (u32)px_f2b(f0);
    r4 = (r4 >> 0x1fu) & 1u;
    wr32(0x817fdff4u, r3);
    r3 = r0 - r4;
    wr32(0x817fdfecu, r7 ^ 0x80000000u);
    r3 = (r3 << 3u) | (r3 >> 0x1du);
    r6 = r3 + r4;
    r3 = (r7 >> 0x1fu) & 1u;
    r0 = ((r7 << 0x1du) & 0xe0000000u) - r3;
    r0 = (r0 << 3u) | (r0 >> 0x1du);
    r4 = r0 + r3;
    r3 = (r6 >> 0x1fu) & 1u;
    f0 = ppc_fmadds((f64)(f32)(rdf64(0x817fdfe8u) - f3), f1, (f64)(f32)(rdf64(0x817fdff0u) - f3));
    r5 = rd32(r5);
    c0eq = (((r6 & 1u) ^ r3) - r3) == 0u;
    r4 = (r4 << 3u) & 0xfffffff8u;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = r6 + r4;
    r3 = r5 + (((u32)px_f2b(f0) << 5u) & 0xffffffe0u);
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
