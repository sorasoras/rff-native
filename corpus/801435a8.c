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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_801435a8(u32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0;
    wr32(rd32(param_1) + 0x40u, 1u);
    r7 = rd32(param_1);
    r5 = ppc_mulhw(1717986919, (s32)rd8(0x804990b1u));
    r8 = rd32(r7 + 0x2cu);
    r0 = (u32)((s32)r5 >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    if ((s32)r8 <= (s32)r0) {
        wr32(r7 + 0x44u, 0u);
    } else {
        r0 = (u32)((s32)r5 >> 2);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r8 - r0;
        if ((s32)r0 < 3) {
            wr32(r7 + 0x44u, 1u);
        } else {
            r0 = (u32)((s32)r5 >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u);
            r0 = r8 - r0;
            if ((s32)r0 < 6) {
                wr32(r7 + 0x44u, 2u);
            } else {
                wr32(r7 + 0x44u, 2u);
            }
        }
    }
    f5 = rdf64(0x805744b0u);
    f3 = rdf64(0x80574498u);
    f1 = (f64)rdf32(0x805744a8u);
    f0 = (f64)rdf32(0x805744acu);
    f2 = f3 * (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805744a0u) + (f64)(f32)(px_b2f((u64)rd8(0x804990b1u) | 0x4330000000000000ull) - f5)), (f64)rdf32(0x805744a4u));
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    wr32(rd32(param_1) + 0x58u, (u32)px_f2b(f2));
    f1 = (f64)(f32)(f1 + (f64)(f32)(px_b2f((u64)rd8(0x804990b1u) | 0x4330000000000000ull) - f5));
    f0 = (f64)(f32)px_fdiv(f1, f0);
    f0 = f3 * f0;
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr32(rd32(param_1) + 0x5cu, (u32)px_f2b(f0));
    r4 = rd32(param_1);
    wr32(r4 + 0x54u, 0x64u - rd32(r4 + 0x58u) - rd32(r4 + 0x5cu));
    return 0u;
}
