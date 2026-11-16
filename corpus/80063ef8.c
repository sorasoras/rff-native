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

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
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

u32 fn_80063ef8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_hi(0.0));
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc0u, 0u);
    if (rd32(param_1 + 0xb8u) == 1u && rd32(param_3 + 0xb8u) == 1u) {
        r4 = 0x80571148u;
        if (rd32(0x8057114cu) == 6u) {
            r3 = 0u;
            return r3;
        }
    }
    f31 = (f64)rdf32(param_1 + 0xb0u);
    f30 = (f64)rdf32(param_3 + 0xb0u);
    f29 = (f64)(f32)px_padd(f31, f30);
    f29 = (f64)(f32)px_pmul(f29, f29);
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    r28 = r3;
    a.r[0] = param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfb4u, rd32(r3));
    wr32(0x817fdfb8u, r0);
    wr32(0x817fdfbcu, rd32(r3 + 8u));
    a.r[0] = 0x817fdfb4u;
    a.r[1] = r28;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfb4u;
    f1 = tc_callf(0x80234428u, &a);
    a.r[0] = param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfa8u, rd32(r3));
    wr32(0x817fdfacu, r0);
    wr32(0x817fdfb0u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfa8u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfacu, (f64)rdf32(0x80572550u));
    a.r[0] = 0x817fdfa8u;
    f1 = tc_callf(0x80234428u, &a);
    if (!(f29 < f1)) {
        a.r[0] = 0x817fdfa8u;
        f1 = tc_callf(0x80234440u, &a);
        r4 = tc_lastr4();
        if (!(f1 < (f64)rdf32(0x80572578u))) {
            f2 = (f64)(f32)px_padd(f31, f30);
            f29 = (f64)(f32)px_psub(f2, f1);
            if ((f64)rdf32(0x80572550u) != f1) {
                f1 = (f64)(f32)px_pdiv((f64)rdf32(0x80572554u), f1);
                a.f[0] = f1;
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdfa8u;
                f1 = tc_callf(0x802343c8u, &a);
                r4 = tc_lastr4();
                f2 = 0.0;
            }
            if ((u32)((s32)((rd32(param_3 + 0x9cu) << 4u) & 0xc0000000u) >> 31) == 0u) {
                if ((u32)((s32)((rd32(param_1 + 0x9cu) << 4u) & 0xc0000000u) >> 31) == 0u) {
                    if (rd32(param_1 + 0xb8u) != 0u) {
                        if (rd32(param_3 + 0xb8u) != 0u) {
                            f0 = (f64)rdf32(0x80572594u);
                            if (f29 > f0) {
                                f29 = f0;
                            }
                            a.f[0] = f29;
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = 0x817fdfa8u;
                            (void)tc_call(0x802343c8u, &a);
                            wrf32d(param_3 + 0x90u, (f64)rdf32(0x817fdfa8u));
                            wrf32d(param_3 + 0x94u, (f64)rdf32(0x817fdfacu));
                            wrf32d(param_3 + 0x98u, (f64)rdf32(0x817fdfb0u));
                            a.r[0] = param_2;
                            a.r[1] = 0x817fdfa8u;
                            a.r[2] = param_2;
                            (void)tc_call(0x802343a4u, &a);
                        } else {
                            f0 = (f64)rdf32(0x80572564u);
                            if (f29 > f0) {
                                f29 = f0;
                            }
                            a.f[0] = f29;
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = 0x817fdfa8u;
                            (void)tc_call(0x802343c8u, &a);
                            a.r[0] = param_2;
                            a.r[1] = 0x817fdfa8u;
                            a.r[2] = param_2;
                            (void)tc_call(0x802343a4u, &a);
                        }
                    } else {
                        f0 = (f64)rdf32(0x80572590u);
                        if (f29 > f0) {
                            f29 = f0;
                        }
                        a.f[0] = f29;
                        a.r[0] = 0x817fdfa8u;
                        a.r[1] = 0x817fdfa8u;
                        (void)tc_call(0x802343c8u, &a);
                        wrf32d(param_3 + 0x90u, (f64)rdf32(0x817fdfa8u));
                        wrf32d(param_3 + 0x94u, (f64)rdf32(0x817fdfacu));
                        wrf32d(param_3 + 0x98u, (f64)rdf32(0x817fdfb0u));
                        a.r[0] = param_2;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = param_2;
                        (void)tc_call(0x802343a4u, &a);
                    }
                } else {
                    a.f[0] = f29;
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = 0x817fdfa8u;
                    (void)tc_call(0x802343c8u, &a);
                    wrf32d(param_3 + 0x90u, (f64)rdf32(0x817fdfa8u));
                    wrf32d(param_3 + 0x94u, (f64)rdf32(0x817fdfacu));
                    wrf32d(param_3 + 0x98u, (f64)rdf32(0x817fdfb0u));
                }
            } else if ((u32)((s32)((rd32(param_1 + 0x9cu) << 4u) & 0xc0000000u) >> 31) != 0u) {
                r0 = rd32(param_1 + 0xb8u);
                if (r0 != 1u) {
                    if (r0 == 0u && rd32(param_3 + 0xb8u) == 2u) {
                        a.r[0] = param_3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(param_3) + 0x140u), &a);
                        if (r3 != 0u) {
                            a.f[0] = f29;
                            a.r[0] = 0x817fdfa8u;
                            a.r[1] = 0x817fdfa8u;
                            (void)tc_call(0x802343c8u, &a);
                            r3 = 1u;
                            wrf32d(param_3 + 0x90u, (f64)rdf32(0x817fdfa8u));
                            wrf32d(param_3 + 0x94u, (f64)rdf32(0x817fdfacu));
                            wrf32d(param_3 + 0x98u, (f64)rdf32(0x817fdfb0u));
                            return r3;
                        }
                    }
                } else if (rd32(param_3 + 0xb8u) != 1u) {
                    a.f[0] = f29;
                    a.r[0] = 0x817fdfa8u;
                    a.r[1] = 0x817fdfa8u;
                    (void)tc_call(0x802343c8u, &a);
                    r3 = 1u;
                    wrf32d(param_3 + 0x90u, (f64)rdf32(0x817fdfa8u));
                    wrf32d(param_3 + 0x94u, (f64)rdf32(0x817fdfacu));
                    wrf32d(param_3 + 0x98u, (f64)rdf32(0x817fdfb0u));
                    return r3;
                }
                f0 = (f64)rdf32(0x80572564u);
                if (f29 > f0) {
                    f29 = f0;
                }
                a.f[0] = f29;
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x802343c8u, &a);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfa8u;
                a.r[2] = param_2;
                f1 = tc_callf(0x802343a4u, &a);
                a.r[0] = param_3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_3) + 0x28u), &a);
                r0 = rd32(param_2 + 4u);
                wr32(0x817fdf9cu, rd32(param_2));
                wr32(0x817fdfa0u, r0);
                wr32(0x817fdfa4u, rd32(param_2 + 8u));
                a.r[0] = 0x817fdf9cu;
                a.r[1] = r3;
                a.r[2] = 0x817fdf9cu;
                (void)tc_call(0x802343a4u, &a);
                wrf32d(0x817fdfa0u, (f64)rdf32(0x80572550u));
                a.r[0] = 0x817fdf9cu;
                f1 = tc_callf(0x80234440u, &a);
                r4 = tc_lastr4();
                if (f1 < (f64)(f32)px_padd(f31, f30)) {
                    f0 = (f64)rdf32(0x80572550u);
                    wrf32d(0x817fdf98u, f0);
                    wrf32d(0x817fdf94u, f0);
                    wrf32d(0x817fdf90u, f0);
                    a.r[0] = param_3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    r3 = tc_call(rd32(rd32(param_3) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdf84u, rd32(r3));
                    wr32(0x817fdf88u, r0);
                    wr32(0x817fdf8cu, rd32(r3 + 8u));
                    a.f[0] = (f64)rdf32(param_3 + 0xb0u);
                    a.f[1] = (f64)rdf32(param_1 + 0xb0u);
                    a.r[0] = 0x817fdf90u;
                    a.r[1] = 0x817fdf84u;
                    a.r[2] = param_1 + 4u;
                    a.r[3] = param_2;
                    r3 = tc_call(0x80078ba4u, &a);
                    if (r3 != 0u) {
                        r6 = rd32(0x817fdf94u);
                        r0 = rd32(0x817fdf98u);
                        wr32(0x817fdf78u, rd32(0x817fdf90u));
                        wr32(0x817fdf7cu, r6);
                        wr32(0x817fdf80u, r0);
                        a.r[0] = 0x817fdf78u;
                        a.r[1] = 0x817fdf84u;
                        a.r[2] = 0x817fdf78u;
                        (void)tc_call(0x802343a4u, &a);
                        wrf32d(0x817fdf7cu, (f64)rdf32(0x80572550u));
                        a.r[0] = 0x817fdf78u;
                        f1 = tc_callf(0x80234440u, &a);
                        if (!(f1 > (f64)rdf32(0x80572578u))) {
                            f2 = (f64)rdf32(0x804890d4u);
                            f1 = (f64)rdf32(0x804890d8u);
                            f0 = (f64)rdf32(0x804890dcu);
                            wrf32d(0x817fdf78u, f2);
                            wrf32d(0x817fdf7cu, f1);
                            wrf32d(0x817fdf80u, f0);
                            a.r[0] = param_1;
                            a.r[1] = 0x804890d4u;
                            a.r[2] = 0x80490000u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                            f31 = f1;
                            r3 = rd32(0x817fdf7cu);
                            r0 = rd32(0x817fdf80u);
                            wr32(0x817fdf48u, rd32(0x817fdf78u));
                            wr32(0x817fdf4cu, r3);
                            wr32(0x817fdf50u, r0);
                            a.f[0] = f1;
                            f1 = tc_callf(0x80262704u, &a);
                            f30 = (f64)(f32)f1;
                            a.f[0] = f31;
                            f1 = tc_callf(0x80262b10u, &a);
                            f4 = (f64)(f32)f1;
                            f1 = (f64)rdf32(0x817fdf50u);
                            f3 = (f64)rdf32(0x817fdf48u);
                            wrf32d(0x817fdf78u, (f64)(f32)px_sfma(f3, f30, (f64)(f32)px_pmul(f1, f4)));
                            wrf32d(0x817fdf80u, (f64)(f32)px_sfma(f3, -f4, (f64)(f32)px_pmul(f1, f30)));
                        } else {
                            f1 = (f64)rdf32(0x80572550u);
                            r0 = 0u;
                            if (f1 == (f64)rdf32(0x817fdf78u) && f1 == (f64)rdf32(0x817fdf7cu) && f1 == (f64)rdf32(0x817fdf80u)) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                a.r[0] = 0x817fdf78u;
                                a.r[1] = 0x817fdf78u;
                                (void)tc_call(0x802343e4u, &a);
                            }
                        }
                        f1 = (f64)rdf32(param_1 + 0xb0u);
                        r5 = rd32(0x817fdf7cu);
                        r0 = rd32(0x817fdf80u);
                        wr32(0x817fdf54u, rd32(0x817fdf78u));
                        wr32(0x817fdf58u, r5);
                        wr32(0x817fdf5cu, r0);
                        a.f[0] = f1;
                        a.r[0] = 0x817fdf54u;
                        a.r[1] = 0x817fdf54u;
                        (void)tc_call(0x802343c8u, &a);
                        r5 = rd32(0x817fdf58u);
                        r0 = rd32(0x817fdf5cu);
                        wr32(0x817fdf60u, rd32(0x817fdf54u));
                        f1 = (f64)rdf32(0x8057258cu);
                        wr32(0x817fdf64u, r5);
                        wr32(0x817fdf68u, r0);
                        a.f[0] = f1;
                        a.r[0] = 0x817fdf60u;
                        a.r[1] = 0x817fdf60u;
                        (void)tc_call(0x802343c8u, &a);
                        r6 = rd32(0x817fdf94u);
                        r0 = rd32(0x817fdf98u);
                        wr32(0x817fdf6cu, rd32(0x817fdf90u));
                        wr32(0x817fdf70u, r6);
                        wr32(0x817fdf74u, r0);
                        a.r[0] = 0x817fdf6cu;
                        a.r[1] = 0x817fdf60u;
                        a.r[2] = 0x817fdf6cu;
                        (void)tc_call(0x80234380u, &a);
                        wrf32d(param_2, (f64)rdf32(0x817fdf6cu));
                        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdf70u));
                        wrf32d(param_2 + 8u, (f64)rdf32(0x817fdf74u));
                    }
                }
            } else {
                a.f[0] = f29;
                a.r[0] = 0x817fdfa8u;
                a.r[1] = 0x817fdfa8u;
                (void)tc_call(0x802343c8u, &a);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfa8u;
                a.r[2] = param_2;
                (void)tc_call(0x802343a4u, &a);
            }
            r3 = 1u;
        } else {
            r3 = 1u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
