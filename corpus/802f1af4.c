#include "tc_rt.h"

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

void fn_802f1af4(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0, f2 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    if ((u32)(s8)rd8(0x80571d70u) == 0u) {
        a.r[0] = 0x80548270u;
        (void)tc_call(0x802f03acu, &a);
        a.r[0] = 0x80548270u;
        a.r[1] = 0x802f0930u;
        a.r[2] = 0x80548260u;
        r3 = tc_call(0x802551b8u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr8(0x80571d70u, 1u);
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(0x805482bcu), &a);
    if ((u32)rd8(0x80571d71u) == 0u) {
        r4 = rd32(0x805482b4u);
        r0 = rd32(0x805482b8u);
        if ((s32)r0 < (s32)r4) {
            r0 = r0 ^ 0x80000000u;
            wr32(0x817fdfecu, r0);
            f4 = rdf64(0x80577540u);
            wr32(0x817fdfe8u, 0x43300000u);
            f2 = (f64)rdf32(0x805482acu);
            f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(rdf64(0x817fdfe8u) - f4) * (f64)(f32)((f64)rdf32(0x805482b0u) - f2)), (f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
        } else {
            f1 = (f64)rdf32(0x805482b0u);
        }
        if ((f64)rdf32(0x80577538u) == f1) {
            wr8(0x80571d71u, 1u);
        }
    } else if ((s32)rd32(0x805482c0u) < 0) {
        a.r[0] = 0u;
        (void)tc_call(0x802465b8u, &a);
        wr32(0x805482c0u, 6u);
    }
    if ((s32)rd32(0x805482c0u) > 0) {
        wr32(0x805482c0u, rd32(0x805482c0u) - 1u);
    }
    return;
}
