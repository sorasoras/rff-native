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

void fn_8008a4a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, f64 param_f1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r26 = 0, r27 = 0, r28 = 0, t23 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0;
    f64 f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde20u, 0x817fe000u);
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_hi(0.0));
    wrf32d(0x817fdfc8u, px_lo(0.0));
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, px_hi(0.0));
    wrf32d(0x817fdfb8u, px_lo(0.0));
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, px_hi(0.0));
    wrf32d(0x817fdfa8u, px_lo(0.0));
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, px_hi(0.0));
    wrf32d(0x817fdf98u, px_lo(0.0));
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, px_hi(0.0));
    wrf32d(0x817fdf88u, px_lo(0.0));
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, px_hi(0.0));
    wrf32d(0x817fdf78u, px_lo(0.0));
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    f3 = (f64)rdf32(0x80572944u);
    f0 = (f64)(f32)ppc_fabs((f64)(f32)px_psub((f64)rdf32(param_3), (f64)rdf32(param_4)));
    r0 = ((((f0 < f3) << 0x1fu) | ((f0 > f3) << 0x1eu) | ((f0 == f3) << 0x1du) | (((f0 != f0) || (f3 != f3)) << 0x1cu)) >> 0x1fu) & 1u;
    if (r0 != 0u) {
        f0 = (f64)(f32)ppc_fabs((f64)(f32)px_psub((f64)rdf32(param_3 + 4u), (f64)rdf32(param_4 + 4u)));
        r0 = ((((f0 < f3) << 0x1fu) | ((f0 > f3) << 0x1eu) | ((f0 == f3) << 0x1du) | (((f0 != f0) || (f3 != f3)) << 0x1cu)) >> 0x1fu) & 1u;
    }
    if (r0 != 0u) {
        f0 = (f64)rdf32(0x80572944u);
        f3 = (f64)(f32)ppc_fabs((f64)(f32)px_psub((f64)rdf32(param_3 + 8u), (f64)rdf32(param_4 + 8u)));
        r0 = ((((f3 < f0) << 0x1fu) | ((f3 > f0) << 0x1eu) | ((f3 == f0) << 0x1du) | (((f3 != f3) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
    }
    if (r0 == 0u) {
        f3 = (f64)rdf32(0x80572908u);
        wrf32d(param_2 + 4u, (f64)rdf32(0x80572948u));
        r27 = 0u;
        wrf32d(0x817fdf08u, f3);
        wrf32d(0x817fdf00u, f3);
        wrf32d(0x817fdf14u, f3);
        wrf32d(0x817fdf0cu, f3);
        wrf32d(0x817fdf10u, f3);
        wrf32d(0x817fdf04u, f3);
        r7 = rd32(param_4);
        r0 = rd32(param_4 + 4u);
        wrf32d(0x817fdefcu, f3);
        wr32(0x817fdedcu, r7);
        wr32(0x817fdee0u, r0);
        r0 = rd32(param_4 + 8u);
        wrf32d(0x817fde50u, f3);
        wrf32d(0x817fde58u, f3);
        wrf32d(0x817fdef0u, f3);
        wrf32d(0x817fde2cu, f3);
        wrf32d(0x817fde34u, f3);
        wrf32d(0x817fde44u, f3);
        wrf32d(0x817fde68u, f3);
        wr32(0x817fdee4u, r0);
        a.r[0] = 0x817fdedcu;
        a.r[1] = param_3;
        a.r[2] = 0x817fdedcu;
        (void)tc_call(0x802343a4u, &a);
        wrf32d(0x817fdee0u, (f64)rdf32(0x80572908u));
        a.r[0] = 0x817fdedcu;
        f1 = tc_callf(0x80234440u, &a);
        if (!(f1 < (f64)rdf32(0x8057294cu))) {
            f24 = (f64)(f32)px_pmul(param_f1, param_f1);
            f27 = (f64)rdf32(0x8057291cu);
            f28 = (f64)rdf32(0x80572918u);
            f29 = (f64)rdf32(0x80572910u);
            r28 = param_1 + ((u32)param_5 * 0xa0u);
            f26 = (f64)rdf32(0x80572908u);
            r26 = 0u;
            f31 = (f64)rdf32(0x80572944u);
            f30 = (f64)rdf32(0x80572950u);
            do {
                r4 = rd32(r28 + 0x2a4u);
                if (r4 != 0u && rd32(r28 + 0x2a8u) != 0u) {
                    a.r[0] = 0x817fdf18u;
                    a.r[1] = r4;
                    a.r[2] = param_6;
                    (void)tc_call(0x800500a8u, &a);
                    for (;;) {
                        a.f[0] = param_f1;
                        a.r[0] = 0x817fdf18u;
                        a.r[1] = param_3;
                        a.r[2] = param_4;
                        r3 = tc_call(0x80050384u, &a);
                        if (r3 == 0u) break;
                        f1 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
                        f2 = px_pack((f64)rdf32(0x817fdf38u), 1.0);
                        wrf32d(0x817fde94u, px_hi(f1));
                        wrf32d(0x817fde94u, px_lo(f1));
                        wrf32d(0x817fde9cu, px_hi(f2));
                        r6 = rd32(0x817fde98u);
                        r0 = rd32(0x817fde9cu);
                        wr32(0x817fded0u, rd32(0x817fde94u));
                        wr32(0x817fded4u, r6);
                        wr32(0x817fded8u, r0);
                        a.r[0] = 0x817fded0u;
                        a.r[1] = param_3;
                        a.r[2] = 0x817fded0u;
                        (void)tc_call(0x802343a4u, &a);
                        r3 = rd32(0x817fdedcu);
                        r0 = 0u;
                        wrf32d(0x817fded4u, f26);
                        r7 = rd32(0x817fdee0u);
                        wr32(0x817fdec4u, r3);
                        r6 = rd32(0x817fdee4u);
                        r5 = rd32(0x817fded0u);
                        r4 = rd32(0x817fded4u);
                        c0eq = f26 == (f64)rdf32(0x817fdec4u);
                        r3 = rd32(0x817fded8u);
                        wr32(0x817fdec8u, r7);
                        wr32(0x817fdeccu, r6);
                        wr32(0x817fdeb8u, r5);
                        wr32(0x817fdebcu, r4);
                        wr32(0x817fdec0u, r3);
                        if (c0eq && f26 == (f64)rdf32(0x817fdec8u) && f26 == (f64)rdf32(0x817fdeccu)) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            a.r[0] = 0x817fdec4u;
                            a.r[1] = 0x817fdec4u;
                            (void)tc_call(0x802343e4u, &a);
                        }
                        r0 = 0u;
                        if (f26 == (f64)rdf32(0x817fdeb8u) && f26 == (f64)rdf32(0x817fdebcu) && f26 == (f64)rdf32(0x817fdec0u)) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            a.r[0] = 0x817fdeb8u;
                            a.r[1] = 0x817fdeb8u;
                            (void)tc_call(0x802343e4u, &a);
                        }
                        wrf32d(0x817fde78u, f26);
                        wrf32d(0x817fde74u, f26);
                        wrf32d(0x817fde70u, f26);
                        a.r[0] = 0x817fdec4u;
                        a.r[1] = 0x817fde70u;
                        (void)tc_call(0x802343e4u, &a);
                        a.f[0] = (f64)rdf32(0x817fde70u);
                        a.f[1] = (f64)rdf32(0x817fde78u);
                        f1 = tc_callf(0x80262c68u, &a);
                        if (!(f29 < (f64)(f32)f1)) {
                            a.f[0] = (f64)rdf32(0x817fde70u);
                            a.f[1] = (f64)rdf32(0x817fde78u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f0 = (f64)(f32)f1;
                            if (!((f27 > f0) || (f27 == f0))) {
                                a.f[0] = (f64)rdf32(0x817fde70u);
                                a.f[1] = (f64)rdf32(0x817fde78u);
                                f1 = tc_callf(0x80262c68u, &a);
                                f25 = (f64)(f32)f1;
                            } else {
                                a.f[0] = (f64)rdf32(0x817fde70u);
                                a.f[1] = (f64)rdf32(0x817fde78u);
                                f1 = tc_callf(0x80262c68u, &a);
                                f25 = (f64)(f32)px_padd(f28, (f64)(f32)f1);
                            }
                        } else {
                            a.f[0] = (f64)rdf32(0x817fde70u);
                            a.f[1] = (f64)rdf32(0x817fde78u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f25 = (f64)(f32)px_psub((f64)(f32)f1, f28);
                        }
                        wrf32d(0x817fde84u, f26);
                        wrf32d(0x817fde80u, f26);
                        wrf32d(0x817fde7cu, f26);
                        a.r[0] = 0x817fdeb8u;
                        a.r[1] = 0x817fde7cu;
                        (void)tc_call(0x802343e4u, &a);
                        a.f[0] = (f64)rdf32(0x817fde7cu);
                        a.f[1] = (f64)rdf32(0x817fde84u);
                        f1 = tc_callf(0x80262c68u, &a);
                        if (!(f29 < (f64)(f32)f1)) {
                            a.f[0] = (f64)rdf32(0x817fde7cu);
                            a.f[1] = (f64)rdf32(0x817fde84u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f0 = (f64)(f32)f1;
                            if (!((f27 > f0) || (f27 == f0))) {
                                a.f[0] = (f64)rdf32(0x817fde7cu);
                                a.f[1] = (f64)rdf32(0x817fde84u);
                                f1 = tc_callf(0x80262c68u, &a);
                                f3 = (f64)(f32)f1;
                            } else {
                                a.f[0] = (f64)rdf32(0x817fde7cu);
                                a.f[1] = (f64)rdf32(0x817fde84u);
                                f1 = tc_callf(0x80262c68u, &a);
                                f3 = (f64)(f32)px_padd(f28, (f64)(f32)f1);
                            }
                        } else {
                            a.f[0] = (f64)rdf32(0x817fde7cu);
                            a.f[1] = (f64)rdf32(0x817fde84u);
                            f1 = tc_callf(0x80262c68u, &a);
                            f3 = (f64)(f32)px_psub((f64)(f32)f1, f28);
                        }
                        if (!(f29 < f25)) {
                            if (!((f27 > f25) || (f27 == f25))) {
                                f0 = f25;
                            } else {
                                f0 = (f64)(f32)px_padd(f28, f25);
                            }
                        } else {
                            f0 = (f64)(f32)px_psub(f25, f28);
                        }
                        f0 = (f64)(f32)px_psub(f0, f3);
                        if (!(f0 > f29)) {
                            if (f0 < f27) {
                                f0 = (f64)(f32)px_padd(f0, f28);
                            }
                        } else {
                            f0 = (f64)(f32)px_psub(f0, f28);
                        }
                        if (!(f29 < f0)) {
                            if (!(f29 < f25)) {
                                if (!((f27 > f25) || (f27 == f25))) {
                                    f0 = f25;
                                } else {
                                    f0 = (f64)(f32)px_padd(f28, f25);
                                }
                            } else {
                                f0 = (f64)(f32)px_psub(f25, f28);
                            }
                            f0 = (f64)(f32)px_psub(f0, f3);
                            if (!(f0 > f29)) {
                                if (f0 < f27) {
                                    f0 = (f64)(f32)px_padd(f0, f28);
                                }
                            } else {
                                f0 = (f64)(f32)px_psub(f0, f28);
                            }
                            if (!((f27 > f0) || (f27 == f0))) {
                                if (!(f29 < f25)) {
                                    if ((f27 > f25) || (f27 == f25)) {
                                        f25 = (f64)(f32)px_padd(f28, f25);
                                    }
                                } else {
                                    f25 = (f64)(f32)px_psub(f25, f28);
                                }
                                f0 = (f64)(f32)px_psub(f25, f3);
                                if (!(f0 > f29)) {
                                    if (f0 < f27) {
                                        f0 = (f64)(f32)px_padd(f0, f28);
                                    }
                                } else {
                                    f0 = (f64)(f32)px_psub(f0, f28);
                                }
                            } else {
                                if (!(f29 < f25)) {
                                    if ((f27 > f25) || (f27 == f25)) {
                                        f25 = (f64)(f32)px_padd(f28, f25);
                                    }
                                } else {
                                    f25 = (f64)(f32)px_psub(f25, f28);
                                }
                                f0 = (f64)(f32)px_psub(f25, f3);
                                if (!(f0 > f29)) {
                                    if (f0 < f27) {
                                        f0 = (f64)(f32)px_padd(f0, f28);
                                    }
                                } else {
                                    f0 = (f64)(f32)px_psub(f0, f28);
                                }
                                f0 = (f64)(f32)px_padd(f28, f0);
                            }
                        } else {
                            if (!(f29 < f25)) {
                                if ((f27 > f25) || (f27 == f25)) {
                                    f25 = (f64)(f32)px_padd(f28, f25);
                                }
                            } else {
                                f25 = (f64)(f32)px_psub(f25, f28);
                            }
                            f0 = (f64)(f32)px_psub(f25, f3);
                            if (!(f0 > f29)) {
                                if (f0 < f27) {
                                    f0 = (f64)(f32)px_padd(f0, f28);
                                }
                            } else {
                                f0 = (f64)(f32)px_psub(f0, f28);
                            }
                            f0 = (f64)(f32)px_psub(f0, f28);
                        }
                        f0 = ppc_fabs(f0);
                        f0 = (f64)(f32)f0;
                        if (!(f0 > f30) && f0 != f30) {
                            a.r[0] = 0x817fded0u;
                            f1 = tc_callf(0x80234428u, &a);
                            f0 = (f64)rdf32(param_2 + 4u);
                            if ((f1 < f0) || (f1 == f0)) {
                                if (f1 < f24) {
                                    wr32(param_2 + 0x60u, 1u);
                                }
                                wrf32d(param_2 + 4u, f1);
                                f0 = (f64)rdf32(0x804890c8u);
                                f3 = (f64)rdf32(0x817fdf00u);
                                wrf32d(0x817fdeb4u, f26);
                                f0 = (f64)(f32)px_psub(f3, f0);
                                wrf32d(0x817fdeb0u, f26);
                                f0 = ppc_fabs(f0);
                                wrf32d(0x817fdeacu, f26);
                                wrf32d(0x817fdea8u, f26);
                                f0 = (f64)(f32)f0;
                                wrf32d(0x817fdea4u, f26);
                                wrf32d(0x817fdea0u, f26);
                                r0 = (ppc_cntlzw(((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                                if (r0 == 0u) {
                                    f0 = (f64)(f32)ppc_fabs((f64)(f32)px_psub((f64)rdf32(0x817fdf04u), (f64)rdf32(0x804890ccu)));
                                    r0 = (ppc_cntlzw(((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                                }
                                if (r0 == 0u) {
                                    f0 = (f64)(f32)ppc_fabs((f64)(f32)px_psub((f64)rdf32(0x817fdf08u), (f64)rdf32(0x804890d0u)));
                                    r0 = (ppc_cntlzw(((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u) >> 5u) & 0x7ffffffu;
                                }
                                if (r0 != 0u) {
                                    f3 = (f64)rdf32(0x817fdf04u);
                                    f0 = (f64)rdf32(0x817fdf08u);
                                    wrf32d(0x817fdf0cu, (f64)rdf32(0x817fdf00u));
                                    wrf32d(0x817fdf10u, f3);
                                    wrf32d(0x817fdf14u, f0);
                                    f7 = (f64)rdf32(param_2 + 0xcu);
                                    f6 = (f64)rdf32(param_2 + 0x10u);
                                    f5 = (f64)rdf32(param_2 + 0x20u);
                                    f4 = (f64)rdf32(param_2 + 0x24u);
                                    f3 = (f64)rdf32(param_2 + 0x28u);
                                    f0 = (f64)rdf32(param_2 + 0x2cu);
                                    wrf32d(param_2 + 0x40u, (f64)rdf32(param_2 + 8u));
                                    wrf32d(param_2 + 0x44u, f7);
                                    wrf32d(param_2 + 0x48u, f6);
                                    wrf32d(param_2 + 0x4cu, f5);
                                    wrf32d(param_2 + 0x50u, f4);
                                    wrf32d(param_2 + 0x54u, f3);
                                    wrf32d(param_2 + 0x58u, f0);
                                }
                                r6 = rd32(0x817fdf28u);
                                r8 = rd32(0x817fdf2cu);
                                f3 = (f64)rdf32(r6 + 4u);
                                f0 = (f64)rdf32(r8);
                                wrf32d(0x817fdeacu, (f64)rdf32(r6));
                                r6 = rd32(0x817fdeb0u);
                                wrf32d(0x817fdeb4u, f3);
                                r7 = rd32(0x817fdeacu);
                                wrf32d(0x817fdea0u, f0);
                                r0 = rd32(0x817fdeb4u);
                                wrf32d(0x817fdea8u, (f64)rdf32(r8 + 4u));
                                wr32(0x817fde88u, r7);
                                wr32(0x817fde8cu, r6);
                                wr32(0x817fde90u, r0);
                                a.r[0] = 0x817fde88u;
                                a.r[1] = 0x817fdea0u;
                                a.r[2] = 0x817fde88u;
                                (void)tc_call(0x802343a4u, &a);
                                f3 = (f64)rdf32(0x817fde8cu);
                                f0 = (f64)rdf32(0x817fde90u);
                                wrf32d(0x817fdf00u, (f64)rdf32(0x817fde88u));
                                wrf32d(0x817fdf04u, f3);
                                wrf32d(0x817fdf08u, f0);
                                f1 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
                                f2 = px_pack((f64)rdf32(0x817fdf38u), 1.0);
                                t23 = param_2 + 8u;
                                wrf32d(t23, px_hi(f1));
                                wrf32d(t23, px_lo(f1));
                                wrf32d(param_2 + 0x10u, px_hi(f2));
                                r27 = 1u;
                                c0eq = (f64)rdf32(0x817fdeacu) == (f64)rdf32(param_2 + 8u);
                                wrf32d(param_2 + 0x20u, (f64)rdf32(rd32(0x817fdf28u)));
                                wrf32d(param_2 + 0x24u, (f64)rdf32(rd32(0x817fdf28u) + 4u));
                                wrf32d(param_2 + 0x28u, (f64)rdf32(rd32(0x817fdf2cu)));
                                wrf32d(param_2 + 0x2cu, (f64)rdf32(rd32(0x817fdf2cu) + 4u));
                                if ((!c0eq || (f64)rdf32(0x817fdeb4u) != (f64)rdf32(param_2 + 0x10u)) && ((f64)rdf32(0x817fdea0u) != (f64)rdf32(param_2 + 8u) || (f64)rdf32(0x817fdea8u) != (f64)rdf32(param_2 + 0x10u))) {
                                    wr32(param_2 + 0x5cu, 0u);
                                } else {
                                    wr32(param_2 + 0x5cu, 1u);
                                }
                            }
                        }
                    }
                }
                r26 = r26 + 1u;
                r28 = r28 + 8u;
            } while ((s32)r26 < 20);
            if (r27 != 0u) {
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 0x817fdf18u;
                a.r[3] = param_3;
                a.r[4] = param_4;
                a.r[5] = 0x817fdf00u;
                a.r[6] = 0x817fdf0cu;
                (void)tc_call(0x8008ae3cu, &a);
            } else {
                wr32(param_2, 0u);
            }
        }
    }
    return;
}
