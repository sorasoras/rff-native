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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_pmul(f64 a, f64 c)
{
    f64 r = a * c;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

static f64 px_pdiv(f64 a, f64 b)
{
    f64 r = a / b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_801af470(u32 param_r3)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t5 = 0, t8 = 0, t11 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f29 = 0.0, f30 = 0.0, f31 = 0.0, t6 = 0.0, t7 = 0.0, t9 = 0.0, t10 = 0.0, t12 = 0.0, t13 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    for (;;) {
        wr32(r1 - 0x70u, r1);
        r1 = r1 - 0x70u;
        wr32(r1 + 0x74u, lr);
        wrf64(r1 + 0x60u, f31);
        wrf32d(r1 + 0x68u, px_lo(f31));
        wrf64(r1 + 0x50u, f30);
        wrf32d(r1 + 0x58u, px_lo(f30));
        wrf64(r1 + 0x40u, f29);
        wrf32d(r1 + 0x48u, px_lo(f29));
        r11 = r1 + 0x40u;
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r26 = param_r3;
        wr32(r1 + 0xcu, rd32(param_r3 + 0x150u));
        wr32(r1 + 8u, 0xau);
        a.r[0] = r1 + 8u;
        a.r[1] = 1u;
        f1 = tc_callf(0x8014a130u, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        f30 = (f64)rdf32(0x80575b24u);
        f31 = rdf64(0x80575ae8u);
        r29 = 0x8033b360u;
        f29 = (f64)(f32)px_pdiv(f1, f30);
        r28 = 0u;
        r30 = 0x110000u;
        r31 = 0x43300000u;
        for (;;) {
            r12 = rd32(param_r3);
            r12 = rd32(r12 + 0x2cu);
            lr = 0x801af4f0u;
            if (r12 == 0x801af470u) break;
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            a.f[0] = f1;
            a.r[0] = rd32(r29);
            a.r[1] = 5u;
            r3 = tc_call(0x8017748cu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(param_r3);
            r27 = r3;
            r12 = rd32(r12 + 0x28u);
            lr = 0x801af514u;
            if (r12 == 0x801af470u) break;
            a.r[0] = param_r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r0 = rd32(r3 + 4u);
            r4 = rd32(r3);
            wr32(r1 + 0x14u, r0);
            r0 = rd32(r3 + 8u);
            f0 = (f64)rdf32(r1 + 0x14u);
            wr32(r1 + 0x10u, r4);
            f0 = (f64)(f32)px_padd(f0, f30);
            wr32(r1 + 0x18u, r0);
            wrf32d(r1 + 0x14u, f0);
            if (r27 != 0u) {
                a.r[0] = r27;
                r3 = tc_call(0x801af464u, &a);
                f1 = tc_lastf();
                f2 = (f64)rdf32(r1 + 0x10u);
                f1 = (f64)rdf32(r1 + 0x14u);
                wrf32d(r27 + 0x100u, f2);
                f0 = (f64)rdf32(r1 + 0x18u);
                wrf32d(r27 + 0x104u, f1);
                wrf32d(r27 + 0x108u, f0);
                wrf32d(r27 + 8u, f2);
                wrf32d(r27 + 0xcu, f1);
                wrf32d(r27 + 0x10u, f0);
                wr32(r27 + 0x124u, 0x108047u);
                a.r[0] = r27;
                a.r[1] = param_r3;
                r3 = tc_call(0x80177d54u, &a);
                f1 = tc_lastf();
                a.r[0] = r1 + 0xcu;
                r3 = tc_call(0x80149604u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                wr32(r1 + 0x20u, 0x43300000u);
                wr32(r1 + 0x24u, r3 ^ 0x80000000u);
                f0 = (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(r1 + 0x20u), f31));
                wrf32d(r27 + 0x130u, f0);
                wrf32d(r27 + 0x24u, f0);
            }
            r28 = r28 + 1u;
            r29 = r29 + 4u;
            if ((s32)r28 >= 5) {
                t5 = r1 + 0x68u;
                t6 = (f64)rdf32(t5);
                t7 = (f64)rdf32(t5);
                f31 = rdf64(r1 + 0x60u);
                t8 = r1 + 0x58u;
                t9 = (f64)rdf32(t8);
                t10 = (f64)rdf32(t8);
                f30 = rdf64(r1 + 0x50u);
                t11 = r1 + 0x48u;
                t12 = (f64)rdf32(t11);
                t13 = (f64)rdf32(t11);
                f29 = rdf64(r1 + 0x40u);
                r11 = r1 + 0x40u;
                r26 = rd32(r11 - 0x18u);
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x74u);
                return;
            }
        }
    }
}
