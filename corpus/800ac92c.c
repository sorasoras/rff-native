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

void fn_800ac92c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x6cu);
    if ((s32)r0 > 0) {
        f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(r0 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572bd8u)) - (f64)(f32)px_fdiv((f64)rdf32(0x80572bd4u), (f64)rdf32(0x80571118u)));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r4 = (u32)px_f2b(f0);
        wr32((u32)param_1 + 0x6cu, r4 & (u32)((s32)((0u - r4) & ~r4) >> 31));
    }
    if (rd32((u32)param_1 + 0x78u) != 0u) {
        r3 = tc_call(0x801e89bcu, &a);
        if (r3 == 0u) {
            (void)tc_call(0x801e89b0u, &a);
            wr32((u32)param_1 + 0x78u, 0u);
        }
    }
    if (rd32((u32)param_1 + 0x7cu) != 0u) {
        r3 = tc_call(0x80194c48u, &a);
        if (r3 == 0u) {
            (void)tc_call(0x80194c3cu, &a);
            wr32((u32)param_1 + 0x7cu, 0u);
        }
    }
    if (rd32((u32)param_1 + 0x70u) != 0u) {
        if (rd32(0x805706d0u) != 7u) {
            wr32((u32)param_1 + 0x74u, 1u);
        } else {
            if (rd32((u32)param_1 + 0x74u) != 0u) {
                (void)tc_call(0x800520b0u, &a);
                wr32((u32)param_1 + 0x74u, 0u);
                wr32((u32)param_1 + 0x70u, 0u);
            }
        }
    }
    f30 = (f64)rdf32((u32)param_1 + 0x84u);
    f2 = (f64)rdf32(0x80572bc0u);
    if (f2 != f30) {
        a.f[0] = (f64)(f32)((f64)rdf32((u32)param_1 + 0x80u) + f30);
        a.f[1] = f2;
        a.f[2] = (f64)rdf32(0x80572bc8u);
        f1 = tc_callf(0x800acaf8u, &a);
        f31 = f1;
        a.f[0] = f1;
        (void)tc_call(0x80077aa0u, &a);
        f1 = (f64)rdf32(0x80572bc0u);
        wrf32d((u32)param_1 + 0x80u, f31);
        if (f30 > f1 && (f64)rdf32(0x80572bc8u) == f31) {
            wrf32d((u32)param_1 + 0x84u, f1);
        } else {
            f0 = (f64)rdf32(0x80572bc0u);
            if (f30 < f0 && f0 == f31) {
                wrf32d((u32)param_1 + 0x84u, f0);
            }
        }
    }
    r3 = tc_call(0x80097da4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x80097c5cu, &a);
    if (r3 == 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        if (rd32(r3 + 0x1cu) == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800ae1d0u, &a);
            if (r3 != 0u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800ae1c8u, &a);
            }
        }
    }
    return;
}
