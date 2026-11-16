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

void fn_800416a0(void)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8004114cu, &a);
    r10 = 0x80335b88u;
    r6 = 0u;
    r0 = rd32(0x8034f810u);
    r7 = 0u;
    r9 = 0x280u;
    r8 = 0x1e0u;
    if (r0 != 0u) {
        if (r0 == 1u && rd32(0x8034f80cu) != 1u) {
            if ((u32)rd8(0x8034f81cu) == 0u) {
                r10 = 0x80335ba8u;
            } else {
                r8 = 0x150u;
                f0 = (f64)(f32)((f64)rdf32(0x80572008u) * (f64)(f32)(px_b2f(0x4330000080000090ull) - rdf64(0x80572010u)));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r7 = (u32)px_f2b(f0);
            }
        }
    } else if (rd32(0x8034f80cu) != 0u) {
        if ((u32)rd8(0x8034f81cu) == 0u) {
            r10 = 0x80335bc8u;
        } else {
            f3 = rdf64(0x80572010u);
            f1 = (f64)(f32)((f64)rdf32(0x80572004u) * (f64)(f32)(px_b2f(0x4330000080000280ull) - f3));
            f1 = px_ctiw(f1, ppc_fctiwz(f1));
            r9 = (u32)px_f2b(f1);
            f0 = (f64)(f32)((f64)rdf32(0x80572008u) * (f64)(f32)(px_b2f((u64)((0x280u - (u32)(s16)r9) ^ 0x80000000u) | 0x4330000000000000ull) - f3));
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            r6 = (u32)px_f2b(f0);
        }
    }
    wr16(0x8034f848u, (u16)r6);
    wr16(0x8034f84au, (u16)r7);
    wr16(0x8034f84cu, (u16)rd32(r3));
    wr16(0x8034f84eu, (u16)rd32(r3 + 4u));
    wr16(0x8034f850u, (u16)r9);
    wr16(0x8034f852u, (u16)r8);
    wr32(0x8034f854u, r10);
    return;
}
