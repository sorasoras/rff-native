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

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
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

static f64 px_pfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = b - s, bp = s + ap, da = a * c + ap, db = b - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

void fn_8031bca8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9, u32 param_10)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r20 = 0, r21 = 0, r22 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t61 = 0, t69 = 0, t73 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    wr32(0x817fde40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r29 = rd32(0x817fe008u);
    r28 = rd32(0x817fe00cu);
    a.r[0] = 0x817fdf90u;
    (void)tc_call(0x80233740u, &a);
    a.r[0] = 0x817fdf90u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf90u;
    (void)tc_call(0x80320dfcu, &a);
    a.f[0] = (f64)rdf32(param_2 + 0xcu);
    a.f[1] = (f64)rdf32(param_2 + 0x10u);
    a.f[2] = (f64)rdf32(param_2 + 0x14u);
    a.r[0] = 0x817fdf60u;
    (void)tc_call(0x80320c10u, &a);
    a.r[0] = 0x817fdf60u;
    a.r[1] = 0x817fdf90u;
    a.r[2] = 0x817fdf90u;
    (void)tc_call(0x802337a0u, &a);
    a.f[0] = (f64)rdf32(param_2 + 0x18u);
    a.f[1] = (f64)rdf32(param_2 + 0x1cu);
    a.f[2] = (f64)rdf32(param_2 + 0x20u);
    a.r[0] = 0x817fdf90u;
    a.r[1] = 0x817fdf90u;
    (void)tc_call(0x80233cb8u, &a);
    if (((u32)rd16((u32)param_3 + 0x2cu) & 1u) != 0u) {
        f3 = (f64)rdf32((u32)param_5 + 0x2cu);
        f2 = (f64)rdf32((u32)param_5 + 0x1cu);
        f1 = (f64)rdf32((u32)param_5 + 0xcu);
        wrf32d(0x817fdec4u, f2);
        wrf32d(0x817fdec0u, f1);
        wrf32d(0x817fdec8u, f3);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.r[0] = 0x817fdf90u;
        a.r[1] = 0x817fdf90u;
        (void)tc_call(0x80233cb8u, &a);
    }
    a.r[0] = param_6;
    a.r[1] = 0x817fdf90u;
    a.r[2] = 0x817fdf90u;
    (void)tc_call(0x802337a0u, &a);
    r8 = rd32(0x817fdfacu);
    r0 = rd32(0x817fdfbcu);
    r22 = rd32(0x817fdf90u);
    r21 = rd32(0x817fdf94u);
    r20 = rd32(0x817fdf98u);
    r11 = rd32(0x817fdfa0u);
    r10 = rd32(0x817fdfa4u);
    r9 = rd32(0x817fdfa8u);
    r7 = rd32(0x817fdfb0u);
    r6 = rd32(0x817fdfb4u);
    r5 = rd32(0x817fdfb8u);
    wr32(0x817fdf3cu, rd32(0x817fdf9cu));
    f0 = (f64)rdf32(0x805778e8u);
    wr32(0x817fdf4cu, r8);
    wr32(0x817fdf5cu, r0);
    wr32(0x817fdf30u, r22);
    wr32(0x817fdf34u, r21);
    wr32(0x817fdf38u, r20);
    wr32(0x817fdf40u, r11);
    wr32(0x817fdf44u, r10);
    wr32(0x817fdf48u, r9);
    wr32(0x817fdf50u, r7);
    wr32(0x817fdf54u, r6);
    wr32(0x817fdf58u, r5);
    wrf32d(0x817fdf3cu, f0);
    wrf32d(0x817fdf4cu, f0);
    wrf32d(0x817fdf5cu, f0);
    a.r[0] = 0x817fdf90u;
    a.r[1] = 0x817fdf00u;
    (void)tc_call(0x8023386cu, &a);
    r9 = rd32(0x817fdf1cu);
    r0 = rd32(0x817fdf2cu);
    r30 = rd32(0x817fdf00u);
    r22 = rd32(0x817fdf04u);
    r21 = rd32(0x817fdf08u);
    r12 = rd32(0x817fdf10u);
    r11 = rd32(0x817fdf14u);
    r10 = rd32(0x817fdf18u);
    r8 = rd32(0x817fdf20u);
    r7 = rd32(0x817fdf24u);
    r6 = rd32(0x817fdf28u);
    wr32(0x817fdedcu, rd32(0x817fdf0cu));
    f0 = (f64)rdf32(0x805778e8u);
    wr32(0x817fdeecu, r9);
    wr32(0x817fdefcu, r0);
    wr32(0x817fded0u, r30);
    wr32(0x817fded4u, r22);
    wr32(0x817fded8u, r21);
    wr32(0x817fdee0u, r12);
    wr32(0x817fdee4u, r11);
    wr32(0x817fdee8u, r10);
    wr32(0x817fdef0u, r8);
    wr32(0x817fdef4u, r7);
    wr32(0x817fdef8u, r6);
    wrf32d(0x817fdedcu, f0);
    wrf32d(0x817fdeecu, f0);
    wrf32d(0x817fdefcu, f0);
    a.r[0] = 0x817fdf00u;
    a.r[1] = param_7;
    a.r[2] = 0x817fdeb4u;
    (void)tc_call(0x8023411cu, &a);
    r0 = (u32)rd8((u32)param_3 + 0x29u);
    r4 = (u32)rd8((u32)param_3 + 0x2au);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        a.r[0] = 0x817fdeb4u;
        r3 = tc_call(0x80318f38u, &a);
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            a.r[0] = 0x817fdeb4u;
            r3 = tc_call(0x80319018u, &a);
        } else if (!c0lt) {
            r3 = 1u;
        } else {
            a.r[0] = 0x817fdeb4u;
            a.r[1] = r4;
            r3 = tc_call(0x80318e20u, &a);
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            a.r[0] = 0x817fdeb4u;
            a.r[1] = r4;
            r3 = tc_call(0x803191ecu, &a);
        } else if (!c0lt) {
            a.r[0] = 0x817fdeb4u;
            a.r[1] = r4;
            r3 = tc_call(0x803190e0u, &a);
        } else if ((s32)r0 >= 0) {
            a.r[0] = 0x817fdeb4u;
            a.r[1] = r4;
            r3 = tc_call(0x803192dcu, &a);
        } else {
            r3 = 1u;
        }
    }
    r30 = (u32)rd8(param_1 + 0x9du);
    r31 = r3 & 0xffu;
    wr8(param_1 + 0x9du, (u8)r3);
    f2 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
    r0 = (u32)rd8((u32)param_3 + 0x28u);
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
    f0 = (f64)rdf32(r29 + 8u);
    c0lt = (s32)r0 < 2;
    f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f2)))), px_lo(f2)), px_lo(f2));
    if (r0 == 2u) {
        f0 = (f64)rdf32((u32)param_3 + 0x24u);
        f0 = (f64)(f32)px_pmul(f0, f0);
        if (f1 > f0) {
            wr8(r28, 1u);
        }
    } else if (c0lt && (s32)r0 >= 1) {
        f0 = (f64)rdf32((u32)param_3 + 0x24u);
        f0 = (f64)(f32)px_pmul(f0, f0);
        if (f1 > f0) {
            a.r[0] = r29;
            a.r[1] = r29;
            (void)tc_call(0x80320984u, &a);
            f0 = (f64)rdf32((u32)param_3 + 0x24u);
            f1 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
            wrf32d(r29, px_hi(f1));
            wrf32d(r29, px_lo(f1));
            f1 = px_pack((f64)rdf32(r29 + 8u), 1.0);
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
            wrf32d(r29 + 8u, px_hi(f1));
        }
    }
    if ((u32)rd8(r28) == 0u) {
        if ((u32)rd16(param_1 + 0xdcu) >= (u32)rd16((u32)param_3 + 0x2eu)) {
            r4 = (u32)rd16((u32)param_3 + 0x2cu);
            if (r4 != 0u) {
                r3 = (u32)rd8((u32)param_3 + 0x2bu);
                if (((r3 + 0xffu) & 0xffu) > 1u) {
                    f5 = (f64)rdf32(param_8 + 4u);
                    f1 = (f64)rdf32(param_7 + 4u);
                    f3 = (f64)rdf32(param_8 + 8u);
                    f0 = (f64)rdf32(param_7 + 8u);
                    wrf32d(0x817fdea8u, (f64)(f32)px_padd((f64)rdf32(param_7), (f64)(f32)px_pmul((f64)rdf32(param_1 + 0xc4u), (f64)(f32)px_padd((f64)rdf32(param_8), (f64)rdf32(r29)))));
                    f1 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul((f64)rdf32(param_1 + 0xc4u), (f64)(f32)px_padd(f5, (f64)rdf32(r29 + 4u))));
                    wrf32d(0x817fdeacu, f1);
                    f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul((f64)rdf32(param_1 + 0xc4u), (f64)(f32)px_padd(f3, (f64)rdf32(r29 + 8u))));
                    wrf32d(0x817fdeb0u, f0);
                    a.r[0] = 0x817fdf00u;
                    a.r[1] = 0x817fdea8u;
                    a.r[2] = 0x817fdea8u;
                    (void)tc_call(0x8023411cu, &a);
                    a.r[0] = 0x817fded0u;
                    a.r[1] = r29;
                    a.r[2] = 0x817fde9cu;
                    (void)tc_call(0x8023411cu, &a);
                    f31 = (f64)rdf32(0x80577914u);
                    r29 = 0u;
                    for (;;) {
                        a.r[0] = 0x817fdeb4u;
                        a.r[1] = 0x817fdea8u;
                        f1 = tc_callf(0x802344c0u, &a);
                        if (!(f1 < f31)) {
                            r9 = rd32(0x817fdea0u);
                            r0 = rd32(0x817fdea4u);
                            wr32(0x817fde60u, rd32(0x817fde9cu));
                            wr32(0x817fde64u, r9);
                            wr32(0x817fde68u, r0);
                            wr32(0x817fde48u, 0x817fde60u);
                            wr32(0x817fde4cu, r28);
                            wr32(0x817fde50u, 0x817fde90u);
                            wr32(0x817fde54u, 0x817fde84u);
                            wr32(0x817fde58u, 0x817fde78u);
                            wr32(0x817fde5cu, 0x817fde6cu);
                            a.r[0] = 0x817fdf90u;
                            a.r[1] = 0x817fdf30u;
                            a.r[2] = (u32)param_3;
                            a.r[3] = (u32)param_4;
                            a.r[4] = param_1;
                            a.r[5] = r31;
                            a.r[6] = 0x817fdeb4u;
                            a.r[7] = 0x817fdea8u;
                            a.s[0] = rd32(0x817fde48u);
                            a.s[1] = rd32(0x817fde4cu);
                            a.s[2] = rd32(0x817fde50u);
                            a.s[3] = rd32(0x817fde54u);
                            a.s[4] = rd32(0x817fde58u);
                            a.s[5] = rd32(0x817fde5cu);
                            r3 = tc_call(0x8031b894u, &a);
                        } else {
                            r3 = 0u;
                        }
                        if (r3 == 0u) break;
                        r0 = (u32)rd8(param_1 + 0x9du);
                        wrf32d(param_1 + 0xacu, (f64)rdf32(0x817fde78u));
                        r0 = r0 | 0x80u;
                        wrf32d(param_1 + 0xb0u, (f64)rdf32(0x817fde7cu));
                        wrf32d(param_1 + 0xb4u, (f64)rdf32(0x817fde80u));
                        wrf32d(param_1 + 0xa0u, (f64)rdf32(0x817fde6cu));
                        wrf32d(param_1 + 0xa4u, (f64)rdf32(0x817fde70u));
                        wrf32d(param_1 + 0xa8u, (f64)rdf32(0x817fde74u));
                        wr8(param_1 + 0x9du, (u8)r0);
                        if ((u32)rd8(r28) != 0u) {
                            return;
                        }
                        f1 = (f64)rdf32(0x817fde94u);
                        f0 = (f64)rdf32(0x817fde98u);
                        wrf32d(0x817fdeb4u, (f64)rdf32(0x817fde90u));
                        r31 = 1u;
                        wrf32d(0x817fdeb8u, f1);
                        wrf32d(0x817fdebcu, f0);
                        a.r[0] = 0x817fdf00u;
                        a.r[1] = 0x817fde78u;
                        a.r[2] = 0x817fdea8u;
                        (void)tc_call(0x8023411cu, &a);
                        a.r[0] = 0x817fded0u;
                        a.r[1] = 0x817fde6cu;
                        a.r[2] = 0x817fde9cu;
                        (void)tc_call(0x8023411cu, &a);
                        r29 = r29 + 1u;
                        if ((s32)r29 >= 5) {
                            wr8(r28, 1u);
                            return;
                        }
                    }
                    if (r29 != 0u) {
                        r0 = (u32)rd8((u32)param_3 + 0x28u);
                        c0lt = (s32)r0 < 2;
                        if (r0 == 2u) {
                            t73 = param_1 + 0xa0u;
                            f2 = px_pack((f64)rdf32(t73), (f64)rdf32(t73));
                            f0 = (f64)rdf32((u32)param_3 + 0x24u);
                            f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
                            f1 = (f64)rdf32(param_1 + 0xa8u);
                            f0 = (f64)(f32)px_pmul(f0, f0);
                            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
                            if (f1 > f0) {
                                wr8(r28, 1u);
                            }
                        } else if (c0lt && (s32)r0 >= 1) {
                            r3 = param_1 + 0xa0u;
                            f0 = (f64)rdf32((u32)param_3 + 0x24u);
                            f2 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
                            f1 = (f64)rdf32(param_1 + 0xa8u);
                            f0 = (f64)(f32)px_pmul(f0, f0);
                            f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
                            f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
                            if (f1 > f0) {
                                a.r[0] = r3;
                                a.r[1] = r3;
                                (void)tc_call(0x80320984u, &a);
                                f0 = (f64)rdf32((u32)param_3 + 0x24u);
                                t61 = param_1 + 0xa0u;
                                f2 = px_pack((f64)rdf32(t61), (f64)rdf32(t61));
                                f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
                                f2 = px_pack((f64)rdf32(param_1 + 0xa8u), 1.0);
                                t69 = param_1 + 0xa0u;
                                wrf32d(t69, px_hi(f1));
                                wrf32d(t69, px_lo(f1));
                                wrf32d(param_1 + 0xa8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
                            }
                        }
                        return;
                    }
                    if ((u32)rd16(param_1 + 0xdcu) > (u32)rd16((u32)param_3 + 0x2eu) && ((r30 == 2u && (r31 == 3u || r31 == 1u)) || (r30 == 3u && ((r31 + 0xffu) & 0xffu) <= 1u))) {
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x40u) != 0u) {
                            wr8(r28, 1u);
                        }
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x10u) != 0u && (u32)param_4 != 0u) {
                            a.r[0] = rd32(rd32(rd32(rd32(param_1 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
                            a.r[1] = (u32)param_3 + 0x3cu;
                            a.r[2] = param_1;
                            a.r[3] = (u32)param_4;
                            a.r[4] = (u32)rd16(param_1 + 0xe2u);
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            (void)tc_call(0x803215f8u, &a);
                        }
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x20u) != 0u && (u32)param_4 != 0u) {
                            a.r[0] = rd32(rd32(rd32(rd32(param_1 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
                            a.r[1] = (u32)param_3 + 0x3cu;
                            a.r[2] = param_1;
                            a.r[3] = (u32)param_4;
                            a.r[4] = (u32)rd16(param_1 + 0xe2u);
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            (void)tc_call(0x80321774u, &a);
                        }
                    }
                    return;
                }
                if (r3 != 1u || r31 == 2u) {
                    if (r3 != 2u || r31 == 3u) {
                        if ((r4 & 8u) != 0u) {
                            f0 = (f64)rdf32((u32)param_3 + 0x30u);
                            f5 = f0;
                            f3 = (f64)rdf32((u32)param_3 + 0x34u);
                            f0 = (f64)(f32)px_pmul((f64)rdf32(r29), f0);
                            f2 = (f64)rdf32((u32)param_3 + 0x38u);
                            f1 = (f64)rdf32(param_8);
                            f4 = (f64)rdf32(param_8 + 4u);
                            wrf32d(r29, f0);
                            f5 = (f64)(f32)px_pmul(f1, f5);
                            f4 = (f64)(f32)px_pmul(f4, f3);
                            f1 = (f64)rdf32(r29 + 4u);
                            f0 = (f64)rdf32((u32)param_3 + 0x34u);
                            f2 = (f64)(f32)px_pmul((f64)rdf32(param_8 + 8u), f2);
                            wrf32d(param_8, f5);
                            f0 = (f64)(f32)px_pmul(f1, f0);
                            wrf32d(param_8 + 4u, f4);
                            wrf32d(r29 + 4u, f0);
                            f1 = (f64)rdf32(r29 + 8u);
                            f0 = (f64)rdf32((u32)param_3 + 0x38u);
                            wrf32d(param_8 + 8u, f2);
                            f0 = (f64)(f32)px_pmul(f1, f0);
                            wrf32d(r29 + 8u, f0);
                            r0 = (u32)rd8((u32)param_3 + 0x28u);
                            c0lt = (s32)r0 < 2;
                            if (r0 == 2u) {
                                f2 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
                                f0 = (f64)rdf32((u32)param_3 + 0x24u);
                                f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
                                f1 = (f64)rdf32(r29 + 8u);
                                f0 = (f64)(f32)px_pmul(f0, f0);
                                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)));
                                f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
                                if (f1 > f0) {
                                    wr8(r28, 1u);
                                }
                            } else if (c0lt && (s32)r0 >= 1) {
                                f2 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
                                f0 = (f64)rdf32((u32)param_3 + 0x24u);
                                f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
                                f1 = (f64)rdf32(r29 + 8u);
                                f0 = (f64)(f32)px_pmul(f0, f0);
                                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)));
                                f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
                                if (f1 > f0) {
                                    a.r[0] = r29;
                                    a.r[1] = r29;
                                    (void)tc_call(0x80320984u, &a);
                                    f0 = (f64)rdf32((u32)param_3 + 0x24u);
                                    f1 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
                                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
                                    wrf32d(r29, px_hi(f1));
                                    wrf32d(r29, px_lo(f1));
                                    f1 = px_pack((f64)rdf32(r29 + 8u), 1.0);
                                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
                                    wrf32d(r29 + 8u, px_hi(f1));
                                }
                            }
                        }
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x40u) != 0u) {
                            wr8(r28, 1u);
                        }
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x10u) != 0u && (u32)param_4 != 0u) {
                            a.r[0] = rd32(rd32(rd32(rd32(param_1 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
                            a.r[1] = (u32)param_3 + 0x3cu;
                            a.r[2] = param_1;
                            a.r[3] = (u32)param_4;
                            a.r[4] = (u32)rd16(param_1 + 0xe2u);
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            (void)tc_call(0x803215f8u, &a);
                        }
                        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x20u) != 0u && (u32)param_4 != 0u) {
                            a.r[0] = rd32(rd32(rd32(rd32(param_1 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
                            a.r[1] = (u32)param_3 + 0x3cu;
                            a.r[2] = param_1;
                            a.r[3] = (u32)param_4;
                            a.r[4] = (u32)rd16(param_1 + 0xe2u);
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            (void)tc_call(0x80321774u, &a);
                        }
                        return;
                    }
                    return;
                }
                return;
            }
            return;
        }
        return;
    }
    return;
}
