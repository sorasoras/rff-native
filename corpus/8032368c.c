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

void fn_8032368c(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0;
    f64 f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
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
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, px_hi(0.0));
    wrf32d(0x817fdf68u, px_lo(0.0));
    wrf64(0x817fdf50u, 0.0);
    wrf32d(0x817fdf58u, px_hi(0.0));
    wrf32d(0x817fdf58u, px_lo(0.0));
    wrf64(0x817fdf40u, 0.0);
    wrf32d(0x817fdf48u, px_hi(0.0));
    wrf32d(0x817fdf48u, px_lo(0.0));
    wrf64(0x817fdf30u, 0.0);
    wrf32d(0x817fdf38u, px_hi(0.0));
    wrf32d(0x817fdf38u, px_lo(0.0));
    wrf64(0x817fdf20u, 0.0);
    wrf32d(0x817fdf28u, px_hi(0.0));
    wrf32d(0x817fdf28u, px_lo(0.0));
    wrf64(0x817fdf10u, 0.0);
    wrf32d(0x817fdf18u, px_hi(0.0));
    wrf32d(0x817fdf18u, px_lo(0.0));
    wrf64(0x817fdf00u, 0.0);
    wrf32d(0x817fdf08u, px_hi(0.0));
    wrf32d(0x817fdf08u, px_lo(0.0));
    wrf64(0x817fdef0u, 0.0);
    wrf32d(0x817fdef8u, px_hi(0.0));
    wrf32d(0x817fdef8u, px_lo(0.0));
    wrf64(0x817fdee0u, 0.0);
    wrf32d(0x817fdee8u, px_hi(0.0));
    wrf32d(0x817fdee8u, px_lo(0.0));
    wr32(0x817fdeb0u, 0u);
    wr32(0x817fdeb4u, 0u);
    wr32(0x817fdeb8u, 0u);
    wr32(0x817fdebcu, 0u);
    wr32(0x817fdec0u, 0u);
    wr32(0x817fdec4u, 0u);
    wr32(0x817fdec8u, 0u);
    wr32(0x817fdeccu, 0u);
    wr32(0x817fded0u, 0u);
    wr32(0x817fded4u, 0u);
    wr32(0x817fded8u, 0u);
    wr32(0x817fdedcu, 0u);
    wr32(0x817fde90u, 0x43300000u);
    wr32(0x817fde98u, 0x43300000u);
    if ((s32)param_4 >= 1) {
        f19 = (f64)rdf32(param_6);
        f0 = (f64)rdf32(0x80577b60u);
        if (!((f64)(f32)ppc_fabs(f19) > f0)) {
            f19 = f0;
        }
        f21 = (f64)rdf32(param_6 + 0x10u);
        f0 = (f64)rdf32(0x80577b60u);
        if (!((f64)(f32)ppc_fabs(f21) > f0)) {
            f21 = f0;
        }
        if ((param_5 & 0x2000000u) == 0u) {
            f18 = (f64)rdf32(param_6 + 0x14u);
            f0 = (f64)rdf32(0x80577b60u);
            if (!((f64)(f32)ppc_fabs(f18) > f0)) {
                f18 = f0;
            }
        } else {
            f18 = f19;
        }
        f17 = (f64)rdf32(0x80577b64u);
        f16 = f17;
        if ((param_5 & 0x40000u) == 0u) {
            f4 = rdf64(0x80577b98u);
            f2 = (f64)rdf32(0x80577b68u);
            f1 = (f64)rdf32(0x80577b70u);
            f0 = (f64)rdf32(0x80577b6cu);
            r3 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r3);
            wr32(0x817fde94u, (r3 >> 0x10u) & 0xffffu);
            f2 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fde90u), f4), f2);
            f1 = (f64)(f32)px_pmul(f1, f2);
            f15 = (f64)(f32)px_pmul(f0, f1);
        } else {
            f15 = (f64)rdf32(param_6 + 8u);
        }
        r28 = param_5 & 0x20000u;
        if (r28 != 0u) {
            a.f[0] = (f64)(f32)px_psub((f64)rdf32(param_6 + 0xcu), (f64)rdf32(param_6 + 8u));
            a.f[1] = rdf64(0x80577b78u);
            f1 = tc_callf(0x80262c6cu, &a);
            f1 = (f64)(f32)f1;
            if (f1 < (f64)rdf32(0x80577b80u) || f1 > (f64)rdf32(0x80577b84u)) {
                f3 = (f64)rdf32(param_6 + 0xcu);
                wr32(0x817fde9cu, (u32)rd16(param_2 + 0x32u));
                f16 = (f64)(f32)px_pdiv((f64)(f32)px_psub(f3, (f64)rdf32(param_6 + 8u)), (f64)(f32)px_psub(rdf64(0x817fde98u), rdf64(0x80577b98u)));
            } else {
                f2 = (f64)rdf32(param_6 + 0xcu);
                f0 = (f64)rdf32(param_6 + 8u);
                f1 = rdf64(0x80577ba0u);
                wr32(0x817fde94u, ((u32)rd16(param_2 + 0x32u) - 1u) ^ 0x80000000u);
                f2 = (f64)(f32)px_psub(f2, f0);
                f16 = (f64)(f32)px_pdiv(f2, (f64)(f32)px_psub(rdf64(0x817fde90u), f1));
            }
        }
        r29 = param_4;
        if (r28 != 0u) {
            r29 = param_4 * param_4;
        }
        f14 = (f64)rdf32(0x80577b64u);
        wrf64(0x817fdea0u, (f64)rdf32(0x80577b90u));
        r27 = 0u;
        f28 = f14;
        f29 = f14;
        f23 = rdf64(0x80577b98u);
        f24 = (f64)rdf32(0x80577b68u);
        f25 = (f64)rdf32(0x80577b70u);
        f26 = (f64)rdf32(0x80577b6cu);
        f22 = (f64)rdf32(0x80577b88u);
        f27 = (f64)rdf32(0x80577b8cu);
        f30 = rdf64(0x80577ba0u);
        wrf64(0x817fdea8u, (f64)rdf32(0x80577b94u));
        while ((s32)r27 < (s32)r29) {
            f0 = (f64)rdf32(param_6 + 4u);
            f1 = (f64)(f32)px_psub(f22, f0);
            f0 = (f64)(f32)px_padd(f22, f0);
            f20 = (f64)(f32)px_pdiv(f1, f0);
            if (r28 == 0u) {
                r0 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
                r3 = r0 * 0x343fdu;
                wr32(param_2 + 0xecu, r0);
                r0 = (r0 >> 0x10u) & 0xffffu;
                wr32(0x817fde9cu, r0);
                f2 = (f64)rdf32(param_6 + 0xcu);
                r3 = r3 + 0x270000u;
                f0 = (f64)(f32)px_psub(rdf64(0x817fde98u), f23);
                r3 = r3 - 0x613du;
                f1 = (f64)rdf32(param_6 + 8u);
                wr32(0x817fde94u, (r3 >> 0x10u) & 0xffffu);
                f3 = (f64)(f32)px_pdiv(f0, f24);
                f0 = rdf64(0x817fde90u);
                wr32(param_2 + 0xecu, r3);
                f0 = (f64)(f32)px_psub(f0, f23);
                f1 = (f64)(f32)px_psub(f2, f1);
                f0 = (f64)(f32)px_pdiv(f0, f24);
                f0 = (f64)(f32)px_pmul(f25, f0);
                f17 = (f64)(f32)px_pmul(f1, f3);
                f14 = (f64)(f32)px_pmul(f26, f0);
            }
            a.f[0] = (f64)(f32)px_padd(f15, f17);
            a.r[0] = 0x817fde34u;
            a.r[1] = 0x817fde30u;
            (void)tc_call(0x80320a58u, &a);
            a.f[0] = f14;
            a.r[0] = 0x817fde2cu;
            a.r[1] = 0x817fde28u;
            (void)tc_call(0x80320a58u, &a);
            f1 = (f64)rdf32(0x817fde28u);
            f3 = (f64)(f32)px_pmul(f20, f1);
            f4 = (f64)rdf32(0x817fde34u);
            f0 = (f64)(f32)px_pmul(-f20, f1);
            f1 = (f64)rdf32(0x817fde30u);
            f3 = (f64)(f32)px_pmul(f4, f3);
            f0 = (f64)(f32)px_pmul(f1, f0);
            wrf32d(0x817fde84u, (f64)(f32)px_pmul(f21, (f64)rdf32(0x817fde2cu)));
            f2 = (f64)(f32)px_padd(f27, f20);
            f3 = (f64)(f32)px_padd(f4, f3);
            f0 = (f64)(f32)px_psub(f0, f1);
            f0 = (f64)(f32)px_pmul(f18, f0);
            wr32(0x817fde6cu, rd32(0x817fde84u));
            f0 = (f64)(f32)px_pdiv(f0, f2);
            wrf32d(0x817fde80u, (f64)(f32)px_pdiv((f64)(f32)px_pmul(f19, f3), f2));
            wr32(0x817fde68u, rd32(0x817fde80u));
            wrf32d(0x817fde88u, f0);
            wr32(0x817fde70u, rd32(0x817fde88u));
            a.r[0] = 0x817fde68u;
            a.r[1] = 0x817fde68u;
            (void)tc_call(0x80320984u, &a);
            f1 = (f64)rdf32(0x817fde88u);
            f0 = (f64)rdf32(0x817fde80u);
            wrf32d(0x817fde60u, f28);
            wrf32d(0x817fde5cu, f0);
            wrf32d(0x817fde64u, f1);
            a.r[0] = 0x817fde5cu;
            a.r[1] = 0x817fde5cu;
            (void)tc_call(0x80320984u, &a);
            if (f29 != f20) {
                f1 = (f64)rdf32(0x817fde28u);
                f3 = (f64)(f32)px_padd(f27, f20);
                f5 = (f64)(f32)px_pmul(f20, f1);
                f1 = (f64)(f32)px_pmul(-f20, f1);
                f4 = (f64)(f32)px_pmul((f64)rdf32(0x817fde34u), f5);
                f0 = (f64)(f32)px_pmul((f64)rdf32(0x817fde30u), f1);
                wrf32d(0x817fde54u, (f64)(f32)px_pmul(f21, (f64)rdf32(0x817fde2cu)));
                f0 = (f64)(f32)px_pmul(f18, f0);
                f0 = (f64)(f32)px_pdiv(f0, f3);
                wrf32d(0x817fde50u, (f64)(f32)px_pdiv((f64)(f32)px_pmul(f19, f4), f3));
                wrf32d(0x817fde58u, f0);
            } else {
                f1 = (f64)rdf32(0x817fde28u);
                f4 = (f64)(f32)px_pmul(f19, f1);
                f1 = (f64)(f32)px_pmul(-f18, f1);
                f3 = (f64)(f32)px_pmul((f64)rdf32(0x817fde34u), f4);
                f0 = (f64)(f32)px_pmul((f64)rdf32(0x817fde30u), f1);
                wrf32d(0x817fde54u, (f64)(f32)px_pmul(f21, (f64)rdf32(0x817fde2cu)));
                wrf32d(0x817fde50u, f3);
                wrf32d(0x817fde58u, f0);
            }
            a.r[0] = 0x817fde50u;
            a.r[1] = 0x817fde50u;
            (void)tc_call(0x80320984u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fde74u;
            a.r[2] = param_2;
            a.r[3] = 0x817fde80u;
            a.r[4] = 0x817fde50u;
            a.r[5] = 0x817fde68u;
            a.r[6] = 0x817fde5cu;
            (void)tc_call(0x80321050u, &a);
            r6 = (rd32(param_2 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(param_2 + 0xecu, r6);
            wr32(0x817fde9cu, (r6 >> 0x10u) & 0xffffu);
            r9 = rd32(0x817fde78u);
            r8 = rd32(0x817fde7cu);
            r7 = rd32(0x817fde80u);
            r6 = rd32(0x817fde84u);
            f20 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fde98u), f23), f24);
            r0 = rd32(0x817fde88u);
            wr32(0x817fde38u, rd32(0x817fde74u));
            wr32(0x817fde3cu, r9);
            wr32(0x817fde40u, r8);
            wr32(0x817fde44u, r7);
            wr32(0x817fde48u, r6);
            wr32(0x817fde4cu, r0);
            a.f[0] = param_f1;
            a.r[0] = param_1;
            a.r[1] = param_7;
            a.r[2] = param_2;
            r3 = tc_call(0x80321518u, &a);
            r12 = rd32(rd32((u32)param_3 + 0x1cu) + 0x14u);
            wr32(0x817fde94u, (u32)(s8)rd8(param_2 + 0x67u) ^ 0x80000000u);
            a.r[0] = (u32)param_3;
            a.r[1] = r3 & 0xffffu;
            a.r[2] = 0x817fde44u;
            a.r[3] = 0x817fde38u;
            a.r[4] = param_8;
            a.r[5] = param_2 + 0xfcu;
            a.r[6] = rd32(param_2 + 0xf8u);
            a.r[7] = (u32)rd16(param_2 + 0xe8u);
            a.f[0] = (f64)(f32)px_padd(f27, (f64)(f32)px_pmul((f64)(f32)px_pmul(rdf64(0x817fdea0u), (f64)(f32)px_psub(rdf64(0x817fde90u), f30)), f20));
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(r12, &a);
            if (r28 != 0u) {
                r3 = r27 + 1u;
                if ((r3 - ((u32)ppc_divw((s32)r3, (s32)param_4) * param_4)) != 0u) {
                    wr32(0x817fde9cu, param_4 ^ 0x80000000u);
                    f14 = (f64)(f32)px_padd(f14, (f64)(f32)px_pdiv(rdf64(0x817fdea8u), (f64)(f32)px_psub(rdf64(0x817fde98u), f30)));
                } else {
                    f17 = (f64)(f32)px_padd(f17, f16);
                    f14 = (f64)rdf32(0x80577b64u);
                }
            }
            r27 = r27 + 1u;
        }
    }
    return;
}
