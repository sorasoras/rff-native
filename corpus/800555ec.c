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

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

void fn_800555ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0eq = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r11 = 0, r12 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = (u32)param_5;
    for (;;) {
        wr32(r1 - 0x110u, r1);
        r1 = r1 - 0x110u;
        wr32(r1 + 0x114u, lr);
        wrf64(r1 + 0x100u, f31);
        wrf32d(r1 + 0x108u, px_lo(f31));
        wrf64(r1 + 0xf0u, 0.0);
        wrf32d(r1 + 0xf8u, px_lo(0.0));
        wrf64(r1 + 0xe0u, 0.0);
        wrf32d(r1 + 0xe8u, px_lo(0.0));
        wrf64(r1 + 0xd0u, 0.0);
        wrf32d(r1 + 0xd8u, px_lo(0.0));
        wrf64(r1 + 0xc0u, 0.0);
        wrf32d(r1 + 0xc8u, px_lo(0.0));
        wrf64(r1 + 0xb0u, 0.0);
        wrf32d(r1 + 0xb8u, px_lo(0.0));
        r11 = r1 + 0xb0u;
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r27 = r3;
        r3 = rd32(r3 + 0x1b4u);
        r28 = r4;
        r29 = r5;
        r12 = rd32(r3);
        r30 = r6;
        r31 = r7;
        r12 = rd32(r12 + 0x28u);
        lr = 0x80055658u;
        if (r12 != 0x800555ecu) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            f1 = (f64)rdf32(r3);
            r0 = 0u;
            f0 = (f64)rdf32(0x80572344u);
            wrf32d(r29, f1);
            wrf32d(r29 + 4u, (f64)rdf32(r3 + 4u));
            wrf32d(r29 + 8u, (f64)rdf32(r3 + 8u));
            r3 = rd32(r27 + 0x1b4u);
            f1 = (f64)rdf32(r3 + 0x78u);
            wrf32d(r30, f1);
            c0eq = f0 == f1;
            f2 = (f64)rdf32(r3 + 0x7cu);
            wrf32d(r30 + 4u, f2);
            f1 = (f64)rdf32(r3 + 0x80u);
            wrf32d(r30 + 8u, f1);
            if (c0eq && (f0 == f2 && f0 == f1)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = r30;
                a.r[1] = r30;
                f1 = tc_callf(0x802343e4u, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                f2 = 0.0;
            }
            r3 = rd32(r27 + 0x1b4u);
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x30u);
            lr = 0x800556d8u;
            if (r12 != 0x800555ecu) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r6 = rd32(r27 + 0x134u);
                r4 = r3;
                r0 = rd32(r27 + 0x138u);
                r3 = r1 + 0x80u;
                wr32(r1 + 0x80u, r6);
                wr32(r1 + 0x84u, r0);
                wr32(r1 + 0x88u, rd32(r27 + 0x13cu));
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r3;
                r3 = tc_call(0x802343a4u, &a);
                f1 = tc_lastf();
                r5 = rd32(r30);
                r3 = r1 + 0x74u;
                r0 = rd32(r30 + 4u);
                f1 = (f64)rdf32(0x80572378u);
                wr32(r1 + 0x74u, r5);
                wr32(r1 + 0x78u, r0);
                wr32(r1 + 0x7cu, rd32(r30 + 8u));
                a.f[0] = f1;
                a.r[0] = r3;
                a.r[1] = r3;
                f1 = tc_callf(0x802343c8u, &a);
                r3 = tc_lastr();
                wrf32d(r1 + 0x84u, (f64)rdf32(0x80572344u));
                a.r[0] = r1 + 0x80u;
                f1 = tc_callf(0x80234440u, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                f2 = 0.0;
                if (f1 > (f64)rdf32(0x80572340u) && (f64)rdf32(0x80572344u) != f1) {
                    r3 = r1 + 0x80u;
                    f1 = (f64)(f32)px_pdiv((f64)rdf32(0x80572358u), f1);
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = r3;
                    f1 = tc_callf(0x802343c8u, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    f2 = 0.0;
                }
                r3 = rd32(r27 + 0x1b4u);
                r12 = rd32(r3);
                r12 = rd32(r12 + 0x30u);
                lr = 0x80055778u;
                if (r12 != 0x800555ecu) {
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    f2 = 0.0;
                    r26 = r3;
                    r3 = rd32(r27 + 0x1b4u);
                    r12 = rd32(r3);
                    r12 = rd32(r12 + 0x28u);
                    lr = 0x80055790u;
                    if (r12 != 0x800555ecu) {
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        r3 = tc_call(r12, &a);
                        f1 = tc_lastf();
                        r5 = rd32(r3);
                        r0 = rd32(r3 + 4u);
                        wr32(r1 + 0x68u, r5);
                        wr32(r1 + 0x6cu, r0);
                        r0 = rd32(r3 + 8u);
                        r3 = r1 + 0x68u;
                        wr32(r1 + 0x70u, r0);
                        a.r[0] = r3;
                        a.r[1] = r26;
                        a.r[2] = r3;
                        r3 = tc_call(0x802343a4u, &a);
                        f1 = tc_lastf();
                        f1 = (f64)rdf32(0x80572344u);
                        f0 = (f64)rdf32(r1 + 0x6cu);
                        wrf32d(r1 + 0x64u, f1);
                        f3 = (f64)(f32)px_pmul(f0, f1);
                        f5 = (f64)rdf32(0x80572378u);
                        wrf32d(r1 + 0x60u, f1);
                        f2 = (f64)rdf32(r1 + 0x68u);
                        wrf32d(r1 + 0x5cu, f1);
                        f1 = (f64)rdf32(r1 + 0x70u);
                        f6 = (f64)rdf32(r30);
                        f0 = (f64)rdf32(0x80572340u);
                        wrf32d(r1 + 0x64u, f6);
                        f4 = (f64)(f32)px_pmul(f5, (f64)rdf32(r30 + 8u));
                        f3 = (f64)(f32)px_sfma(f2, f4, f3);
                        wrf32d(r1 + 0x5cu, f4);
                        f1 = (f64)(f32)px_sfma(f1, f6, f3);
                        f2 = (f64)(f32)px_sfma(f6, f6, (f64)(f32)px_pmul(f4, f4));
                        if (f2 > f0) {
                            f1 = (f64)(f32)px_pmul(f1, (f64)(f32)px_pdiv((f64)rdf32(0x80572358u), f2));
                        }
                        r3 = r1 + 0x5cu;
                        a.f[0] = f1;
                        a.r[0] = r3;
                        a.r[1] = r3;
                        f1 = tc_callf(0x802343c8u, &a);
                        r3 = tc_lastr();
                        r6 = rd32(r27 + 0x134u);
                        r3 = r1 + 0x50u;
                        r0 = rd32(r27 + 0x138u);
                        wr32(r1 + 0x50u, r6);
                        wr32(r1 + 0x54u, r0);
                        wr32(r1 + 0x58u, rd32(r27 + 0x13cu));
                        a.r[0] = r3;
                        a.r[1] = r1 + 0x5cu;
                        a.r[2] = r3;
                        r3 = tc_call(0x80234380u, &a);
                        f1 = tc_lastf();
                        r7 = rd32(r1 + 0x50u);
                        r3 = r1 + 0x44u;
                        r6 = rd32(r1 + 0x54u);
                        r0 = rd32(r1 + 0x58u);
                        wr32(r1 + 0x44u, r7);
                        wr32(r1 + 0x48u, r6);
                        wr32(r1 + 0x4cu, r0);
                        a.r[0] = r3;
                        a.r[1] = r29;
                        a.r[2] = r3;
                        r3 = tc_call(0x802343a4u, &a);
                        f1 = tc_lastf();
                        wrf32d(r1 + 0x48u, (f64)rdf32(0x80572344u));
                        a.r[0] = r1 + 0x44u;
                        f1 = tc_callf(0x80234440u, &a);
                        r3 = tc_lastr();
                        f31 = f1;
                        if (f1 > (f64)rdf32(0x80572340u) && (f64)rdf32(0x80572344u) != f1) {
                            r3 = r1 + 0x44u;
                            f1 = (f64)(f32)px_pdiv((f64)rdf32(0x80572358u), f1);
                            a.f[0] = f1;
                            a.r[0] = r3;
                            a.r[1] = r3;
                            f1 = tc_callf(0x802343c8u, &a);
                            r3 = tc_lastr();
                        }
                        f2 = (f64)rdf32(r27 + 0x1d8u);
                        f1 = (f64)rdf32(0x8057237cu);
                        f0 = (f64)(f32)px_psub(f2, f1);
                        if (!(f31 < f0)) {
                            f0 = (f64)(f32)px_padd(f1, f2);
                            if (f31 > f0) {
                                f31 = f0;
                            }
                        } else {
                            f31 = f0;
                        }
                        r5 = rd32(r30);
                        r3 = r1 + 8u;
                        r0 = rd32(r30 + 4u);
                        f0 = (f64)rdf32(0x80572378u);
                        wr32(r1 + 8u, r5);
                        wr32(r1 + 0xcu, r0);
                        wr32(r1 + 0x10u, rd32(r30 + 8u));
                        a.f[0] = (f64)(f32)px_pmul(f0, f31);
                        a.r[0] = r3;
                        a.r[1] = r3;
                        f1 = tc_callf(0x802343c8u, &a);
                        r3 = tc_lastr();
                        wrf32d(r28, (f64)rdf32(r1 + 8u));
                        wrf32d(r28 + 4u, (f64)rdf32(r1 + 0xcu));
                        wrf32d(r28 + 8u, (f64)rdf32(r1 + 0x10u));
                        a.r[0] = r28;
                        a.r[1] = r29;
                        a.r[2] = r28;
                        f1 = tc_callf(0x80234380u, &a);
                        r3 = tc_lastr();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                        r7 = 0u;
                        f2 = 0.0;
                        r3 = rd32(r27 + 0x1b4u);
                        r12 = rd32(r3);
                        r12 = rd32(r12 + 0x28u);
                        lr = 0x80055948u;
                        if (r12 != 0x800555ecu) {
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            r3 = tc_call(r12, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                            r7 = 0u;
                            f2 = 0.0;
                            f1 = (f64)rdf32(r3 + 4u);
                            wrf32d(r28 + 4u, (f64)(f32)px_padd((f64)rdf32(r27 + 0x1d0u), f1));
                            r3 = rd32(r27 + 0x1b4u);
                            r12 = rd32(r3);
                            r12 = rd32(r12 + 0x28u);
                            lr = 0x8005596cu;
                            if (r12 != 0x800555ecu) break;
                        }
                    }
                }
            }
        }
    }
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    f1 = (f64)rdf32(r3 + 4u);
    wrf32d(r29 + 4u, (f64)(f32)px_padd((f64)rdf32(r27 + 0x1d4u), f1));
    if (r31 == 0u) {
        r6 = rd32(r27 + 0x134u);
        r0 = rd32(r27 + 0x138u);
        f0 = (f64)rdf32(0x80572344u);
        wr32(r1 + 0x38u, r6);
        f1 = (f64)rdf32(0x80572370u);
        wr32(r1 + 0x3cu, r0);
        f26 = (f64)rdf32(0x80572358u);
        r0 = rd32(r27 + 0x13cu);
        f27 = (f64)rdf32(0x80572374u);
        wr32(r1 + 0x40u, r0);
        r7 = rd32(r27 + 0x140u);
        r0 = rd32(r27 + 0x144u);
        wr32(r1 + 0x2cu, r7);
        wr32(r1 + 0x30u, r0);
        wr32(r1 + 0x34u, rd32(r27 + 0x148u));
        r7 = rd32(r29);
        r0 = rd32(r29 + 4u);
        wr32(r1 + 0x20u, r7);
        wr32(r1 + 0x24u, r0);
        wr32(r1 + 0x28u, rd32(r29 + 8u));
        r7 = rd32(r28);
        r0 = rd32(r28 + 4u);
        wr32(r1 + 0x14u, r7);
        wr32(r1 + 0x18u, r0);
        wr32(r1 + 0x1cu, rd32(r28 + 8u));
        f31 = (f64)rdf32(r27 + 0x138u);
        f30 = (f64)rdf32(r27 + 0x144u);
        f29 = (f64)rdf32(r28 + 4u);
        f28 = (f64)rdf32(r29 + 4u);
        wrf32d(r1 + 0x18u, f0);
        wrf32d(r1 + 0x24u, f0);
        wrf32d(r1 + 0x30u, f0);
        wrf32d(r1 + 0x3cu, f0);
        wrf32d(r29 + 4u, f0);
        wrf32d(r28 + 4u, f0);
        a.f[0] = f1;
        a.r[0] = r29;
        a.r[1] = r1 + 0x20u;
        a.r[2] = r27 + 0x1dcu;
        a.r[3] = r1 + 0x2cu;
        r3 = tc_call(0x80054eb4u, &a);
        f1 = tc_lastf();
        a.f[0] = f28;
        a.f[1] = (f64)rdf32(r27 + 0x1f4u);
        a.f[2] = f30;
        a.f[3] = f26;
        f1 = tc_callf(0x80054ee0u, &a);
        r3 = tc_lastr();
        wrf32d(r29 + 4u, f1);
        a.f[0] = f27;
        a.r[0] = r28;
        a.r[1] = r1 + 0x14u;
        a.r[2] = r27 + 0x1e8u;
        a.r[3] = r1 + 0x38u;
        r3 = tc_call(0x80054eb4u, &a);
        f1 = tc_lastf();
        a.f[0] = f29;
        a.f[1] = (f64)rdf32(r27 + 0x1f8u);
        a.f[2] = f31;
        a.f[3] = f26;
        f1 = tc_callf(0x80054ee0u, &a);
        r3 = tc_lastr();
        wrf32d(r28 + 4u, f1);
        wrf32d(r27 + 0x1dcu, (f64)rdf32(r1 + 0x20u));
        wrf32d(r27 + 0x1e0u, (f64)rdf32(r1 + 0x24u));
        wrf32d(r27 + 0x1e4u, (f64)rdf32(r1 + 0x28u));
        wrf32d(r27 + 0x1e8u, (f64)rdf32(r1 + 0x14u));
        wrf32d(r27 + 0x1ecu, (f64)rdf32(r1 + 0x18u));
        wrf32d(r27 + 0x1f0u, (f64)rdf32(r1 + 0x1cu));
        wrf32d(r27 + 0x1f4u, f28);
        wrf32d(r27 + 0x1f8u, f29);
    } else {
        f1 = (f64)rdf32(r29);
        f0 = (f64)rdf32(0x80572344u);
        wrf32d(r27 + 0x1dcu, f1);
        wrf32d(r27 + 0x1e0u, (f64)rdf32(r29 + 4u));
        wrf32d(r27 + 0x1e4u, (f64)rdf32(r29 + 8u));
        wrf32d(r27 + 0x1e8u, (f64)rdf32(r28));
        wrf32d(r27 + 0x1ecu, (f64)rdf32(r28 + 4u));
        wrf32d(r27 + 0x1f0u, (f64)rdf32(r28 + 8u));
        wrf32d(r27 + 0x1e0u, f0);
        wrf32d(r27 + 0x1ecu, f0);
        wrf32d(r27 + 0x1f4u, (f64)rdf32(r29 + 4u));
        wrf32d(r27 + 0x1f8u, (f64)rdf32(r28 + 4u));
    }
    return;
}
