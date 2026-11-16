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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8032a310(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r22 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t66 = 0, t69 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f18 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0;
    f64 f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdbb0u, 0x817fe000u);
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
    wr32(0x817fdef8u, 0u);
    wr32(0x817fdefcu, 0u);
    wr32(0x817fdf00u, 0u);
    wr32(0x817fdf04u, 0u);
    wr32(0x817fdf08u, 0u);
    wr32(0x817fdf0cu, 0u);
    wr32(0x817fdf10u, 0u);
    wr32(0x817fdf14u, 0u);
    wr32(0x817fdf18u, 0u);
    wr32(0x817fdf1cu, 0u);
    r7 = rd32((u32)param_3 + 0x24u);
    wr32(0x817fded8u, 0x43300000u);
    wr32(0x817fdee0u, 0x43300000u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = r7 + 0x9cu;
    a.r[3] = param_2;
    (void)tc_call(0x80325f9cu, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x80250e00u, &a);
    a.r[0] = 0xdu;
    a.r[1] = 0x80570f80u;
    a.r[2] = 2u;
    (void)tc_call(0x8024fef4u, &a);
    (void)tc_call(0x8024f870u, &a);
    a.r[0] = 9u;
    a.r[1] = 1u;
    (void)tc_call(0x8024f27cu, &a);
    if ((u32)rd8(param_1 + 0xc0u) != 0u) {
        a.r[0] = 0xdu;
        a.r[1] = 2u;
        (void)tc_call(0x8024f27cu, &a);
    }
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    a.r[1] = 0xdu;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    (void)tc_call(0x8024f8a4u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80254548u, &a);
    r31 = rd32((u32)param_3 + 0x24u) + 0x9cu;
    r12 = rd32(param_2 + 4u);
    c0eq = (f64)rdf32(0x80577c40u) == (f64)rdf32(param_2 + 0x88u);
    r11 = rd32(param_2 + 8u);
    r10 = rd32(param_2 + 0xcu);
    r9 = rd32(param_2 + 0x10u);
    r8 = rd32(param_2 + 0x14u);
    r7 = rd32(param_2 + 0x18u);
    r6 = rd32(param_2 + 0x1cu);
    r5 = rd32(param_2 + 0x20u);
    r4 = rd32(param_2 + 0x24u);
    r3 = rd32(param_2 + 0x28u);
    r0 = rd32(param_2 + 0x2cu);
    wr32(0x817fdde8u, rd32(param_2));
    wr32(0x817fddecu, r12);
    wr32(0x817fddf0u, r11);
    wr32(0x817fddf4u, r10);
    wr32(0x817fddf8u, r9);
    wr32(0x817fddfcu, r8);
    wr32(0x817fde00u, r7);
    wr32(0x817fde04u, r6);
    wr32(0x817fde08u, r5);
    wr32(0x817fde0cu, r4);
    wr32(0x817fde10u, r3);
    wr32(0x817fde14u, r0);
    if (!c0eq) {
        a.r[0] = 0x817fdc78u;
        (void)tc_call(0x80254460u, &a);
        f0 = (f64)rdf32(0x817fdc78u);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdee8u, f0);
        r0 = rd32(0x817fdeecu);
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wrf32d(0x817fde14u, (f64)(f32)px_padd((f64)rdf32(0x817fde14u), (f64)rdf32(param_2 + 0x88u)));
        } else if (c0lt && (s32)r0 >= 0) {
            a.r[0] = param_2;
            a.r[1] = param_2 + 0x8cu;
            a.r[2] = 0x817fdbe8u;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = 0x817fdbe8u;
            a.r[1] = 0x817fdbe8u;
            r3 = tc_call(0x80320984u, &a);
            if (r3 == 0u) {
                wrf32d(0x817fde14u, (f64)(f32)px_padd((f64)rdf32(0x817fde14u), (f64)rdf32(param_2 + 0x88u)));
            } else {
                f1 = (f64)rdf32(0x817fdbf0u);
                f0 = (f64)rdf32(0x80577c40u);
                if (!((f1 > f0) || (f1 == f0))) {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)px_pmul(f1, f3);
                    f5 = (f64)(f32)px_pmul((f64)rdf32(0x817fdbe8u), f3);
                    f3 = (f64)(f32)px_pmul((f64)rdf32(0x817fdbecu), f3);
                    f2 = (f64)(f32)px_psub((f64)rdf32(0x817fde04u), f3);
                    f0 = (f64)(f32)px_psub((f64)rdf32(0x817fde14u), f1);
                    wrf32d(0x817fddf4u, (f64)(f32)px_psub((f64)rdf32(0x817fddf4u), f5));
                    wrf32d(0x817fde04u, f2);
                    wrf32d(0x817fde14u, f0);
                } else {
                    f3 = (f64)rdf32(param_2 + 0x88u);
                    f1 = (f64)(f32)px_pmul(f1, f3);
                    f5 = (f64)(f32)px_pmul((f64)rdf32(0x817fdbe8u), f3);
                    f3 = (f64)(f32)px_pmul((f64)rdf32(0x817fdbecu), f3);
                    f2 = (f64)(f32)px_padd((f64)rdf32(0x817fde04u), f3);
                    f0 = (f64)(f32)px_padd((f64)rdf32(0x817fde14u), f1);
                    wrf32d(0x817fddf4u, (f64)(f32)px_padd((f64)rdf32(0x817fddf4u), f5));
                    wrf32d(0x817fde04u, f2);
                    wrf32d(0x817fde14u, f0);
                }
            }
        }
    }
    a.r[0] = 0x817fde18u;
    a.r[1] = 0x817fdde8u;
    a.r[2] = (u32)param_3;
    f1 = tc_callf(0x80327b38u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
    r30 = r3;
    if ((u32)rd8(r31 + 0xaeu) != 7u) {
        a.r[0] = 0x817fdde8u;
        a.r[1] = 0x817fde50u;
        a.r[2] = 0x817fdd88u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fdd88u;
        a.r[1] = 0u;
        (void)tc_call(0x802544a0u, &a);
        a.r[0] = rd32((u32)param_3 + 0x20u);
        a.r[1] = 0x817fdd58u;
        (void)tc_call(0x80313b9cu, &a);
        a.r[0] = 0x817fde80u;
        a.r[1] = 0x817fdd58u;
        a.r[2] = 0x817fdd58u;
        (void)tc_call(0x802337a0u, &a);
        f7 = (f64)rdf32(0x817fdd80u);
        f6 = (f64)rdf32(0x817fdd70u);
        wrf32d(0x817fdc68u, f7);
        f5 = (f64)rdf32(0x817fdd60u);
        wrf32d(0x817fdc64u, f6);
        f4 = (f64)rdf32(0x817fdd7cu);
        f1 = px_pack((f64)rdf32(0x817fdc64u), (f64)rdf32(0x817fdc64u));
        wrf32d(0x817fdc60u, f5);
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
        f3 = (f64)rdf32(0x817fdd6cu);
        f0 = px_pack((f64)rdf32(0x817fdc60u), 1.0);
        f2 = (f64)rdf32(0x817fdd5cu);
        f8 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f1)));
        f0 = (f64)rdf32(0x80577c44u);
        wrf32d(0x817fdc00u, f2);
        f1 = px_pack((f64)(f32)px_padd(px_hi(f8), px_lo(f1)), px_lo(f1));
        wrf32d(0x817fdc04u, f3);
        wrf32d(0x817fdc08u, f4);
        wrf32d(0x817fdc6cu, f2);
        wrf32d(0x817fdc70u, f3);
        wrf32d(0x817fdc74u, f4);
        wrf32d(0x817fdbf4u, f5);
        wrf32d(0x817fdbf8u, f6);
        wrf32d(0x817fdbfcu, f7);
        if (!(f1 < f0)) {
            a.f[0] = f1;
            f1 = tc_callf(0x802eff54u, &a);
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f2 = px_pack((f64)rdf32(0x817fdc60u), (f64)rdf32(0x817fdc60u));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
            f2 = px_pack((f64)rdf32(0x817fdc68u), 1.0);
            wrf32d(0x817fdc60u, px_hi(f0));
            wrf32d(0x817fdc60u, px_lo(f0));
            wrf32d(0x817fdc68u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
        }
    } else {
        a.r[0] = 0x817fdde8u;
        a.r[1] = 0x817fde50u;
        a.r[2] = 0x817fddb8u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fddb8u;
        a.r[1] = 0u;
        (void)tc_call(0x802544a0u, &a);
        f7 = (f64)rdf32(0x817fdea8u);
        f6 = (f64)rdf32(0x817fde98u);
        wrf32d(0x817fdc68u, f7);
        f5 = (f64)rdf32(0x817fde88u);
        wrf32d(0x817fdc64u, f6);
        f4 = (f64)rdf32(0x817fdea4u);
        f1 = px_pack((f64)rdf32(0x817fdc64u), (f64)rdf32(0x817fdc64u));
        wrf32d(0x817fdc60u, f5);
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
        f3 = (f64)rdf32(0x817fde94u);
        f0 = px_pack((f64)rdf32(0x817fdc60u), 1.0);
        f2 = (f64)rdf32(0x817fde84u);
        f8 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f1)));
        f0 = (f64)rdf32(0x80577c44u);
        wrf32d(0x817fdc18u, f2);
        f1 = px_pack((f64)(f32)px_padd(px_hi(f8), px_lo(f1)), px_lo(f1));
        wrf32d(0x817fdc1cu, f3);
        wrf32d(0x817fdc20u, f4);
        wrf32d(0x817fdc6cu, f2);
        wrf32d(0x817fdc70u, f3);
        wrf32d(0x817fdc74u, f4);
        wrf32d(0x817fdc0cu, f5);
        wrf32d(0x817fdc10u, f6);
        wrf32d(0x817fdc14u, f7);
        if (!(f1 < f0)) {
            a.f[0] = f1;
            f1 = tc_callf(0x802eff54u, &a);
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f2 = px_pack((f64)rdf32(0x817fdc60u), (f64)rdf32(0x817fdc60u));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
            f2 = px_pack((f64)rdf32(0x817fdc68u), 1.0);
            wrf32d(0x817fdc60u, px_hi(f0));
            wrf32d(0x817fdc60u, px_lo(f0));
            wrf32d(0x817fdc68u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
        }
    }
    r3 = rd32((u32)param_3 + 0x3cu);
    f0 = (f64)rdf32(0x80577c48u);
    f4 = (f64)rdf32(0x817fdc6cu);
    f3 = (f64)rdf32(0x817fdc70u);
    f2 = (f64)rdf32(0x817fdc74u);
    while (r3 != 0u && (f64)rdf32(r3 + 0xccu) > f0) {
        wrf32d(r3 + 0xccu, f4);
        wrf32d(r3 + 0xd0u, f3);
        wrf32d(r3 + 0xd4u, f2);
        r3 = rd32(r3 + (u32)rd16((u32)param_3 + 0x42u));
    }
    r12 = rd32(param_1);
    f3 = rdf64(0x80577c58u);
    r6 = (u32)(s8)rd8(r31 + 0xa9u) ^ 0x80000000u;
    f1 = (f64)rdf32(0x80577c4cu);
    r5 = (u32)(s8)rd8(r31 + 0xaau) ^ 0x80000000u;
    wr32(0x817fdedcu, r6);
    r0 = (u32)rd16(r31);
    wr32(0x817fdee4u, r5);
    f2 = (f64)(f32)px_psub(rdf64(0x817fded8u), f3);
    r12 = rd32(r12 + 0x10u);
    f23 = (f64)(f32)px_pdiv(f2, f1);
    f22 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(0x817fdee0u), f3), f1);
    a.r[0] = param_1;
    a.r[1] = r0 & 0x800u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r22 = r3;
    a.r[0] = param_1;
    a.r[1] = (u32)rd16(r31) & 0x800u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    f1 = tc_lastf();
    r29 = r3;
    r28 = 1u;
    a.r[0] = (u32)param_3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    r3 = tc_call(r22, &a);
    f26 = (f64)rdf32(0x80577c40u);
    r27 = r3;
    f27 = (f64)rdf32(0x80577c50u);
    f28 = rdf64(0x80577c60u);
    f29 = (f64)rdf32(0x80577c54u);
    f30 = (f64)rdf32(0x80577c48u);
    f31 = (f64)rdf32(0x80577c44u);
    while (r3 != 0u) {
        f2 = (f64)rdf32(r3 + 0x30u);
        f1 = (f64)rdf32(r3 + 0x38u);
        r3 = rd32(r3 + 0xc8u);
        f3 = (f64)(f32)px_pmul(f2, f1);
        f25 = (f64)(f32)px_pmul(f3, (f64)rdf32(r3 + 0x58u));
        if (!(f25 < f31)) {
            r3 = rd32(r3 + 0x24u);
            r0 = (u32)rd16(r3 + 0x9cu) & 0x6000u;
            c0lt = (s32)r0 < 16384;
            if (r0 == 0x4000u) {
                f3 = (f64)(f32)px_pmul((f64)rdf32(r27 + 0x34u), f1);
            } else if (!c0lt) {
                if (r0 != 0x6000u) {
                    f1 = (f64)rdf32(r27 + 0x34u);
                    f3 = (f64)(f32)px_pmul(f1, (f64)rdf32(r27 + 0x3cu));
                }
            } else if (r0 == 0x2000u) {
                f3 = (f64)(f32)px_pmul(f2, (f64)rdf32(r27 + 0x3cu));
            } else {
                f1 = (f64)rdf32(r27 + 0x34u);
                f3 = (f64)(f32)px_pmul(f1, (f64)rdf32(r27 + 0x3cu));
            }
            f24 = (f64)(f32)px_pmul(f3, (f64)rdf32(rd32(r27 + 0xc8u) + 0x5cu));
            if (!(f24 < f31)) {
                f21 = (f64)rdf32(0x80577c48u);
                if ((u32)rd8(r31 + 0xb0u) != 0u) {
                    t66 = r27 + 0xacu;
                    f2 = px_pack((f64)rdf32(t66), (f64)rdf32(t66));
                    t69 = r27 + 0xb8u;
                    f1 = px_pack((f64)rdf32(t69), (f64)rdf32(t69));
                    f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
                    f2 = px_pack((f64)rdf32(r27 + 0xb4u), 1.0);
                    f1 = px_pack((f64)rdf32(r27 + 0xc0u), 1.0);
                    wrf32d(0x817fdbdcu, px_hi(f0));
                    wrf32d(0x817fdbdcu, px_lo(f0));
                    f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
                    f1 = (f64)rdf32(0x817fdbe0u);
                    wrf32d(0x817fdbe4u, px_hi(f0));
                    f2 = (f64)rdf32(0x817fdbdcu);
                    f0 = (f64)rdf32(0x817fdbe4u);
                    wrf32d(0x817fdc58u, f1);
                    wrf32d(0x817fdc5cu, f0);
                    f1 = px_pack((f64)rdf32(0x817fdc58u), (f64)rdf32(0x817fdc58u));
                    wrf32d(0x817fdc54u, f2);
                    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
                    f0 = px_pack((f64)rdf32(0x817fdc54u), 1.0);
                    f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f1)));
                    f18 = px_pack((f64)(f32)px_padd(px_hi(f0), px_lo(f1)), px_lo(f1));
                    if (!((f18 < f26) || (f18 == f26))) {
                        a.f[0] = f18;
                        f1 = tc_callf(0x802eff54u, &a);
                        f0 = (f64)(f32)px_pmul(f18, f1);
                    } else {
                        f0 = f26;
                    }
                    f0 = (f64)(f32)px_pmul(f27, f0);
                    f0 = (f64)(f32)px_pdiv(f0, f24);
                    f21 = (f64)(f32)px_padd(f21, f0);
                }
                a.r[0] = param_1;
                a.r[1] = r27;
                a.r[2] = r31;
                a.r[3] = param_2;
                a.r[4] = r28;
                (void)tc_call(0x80326730u, &a);
                r0 = (u32)rd8(r27 + 0x9au);
                r28 = 0u;
                f2 = (f64)rdf32(r27 + 0x40u);
                f1 = (f64)rdf32(r27 + 0x44u);
                f0 = (f64)rdf32(r27 + 0x48u);
                wrf32d(0x817fdbd0u, f2);
                r3 = (u32)rd8(r31 + 0xafu);
                wrf32d(0x817fdbd4u, f1);
                wrf32d(0x817fdbd8u, f0);
                if (r0 != 0u) {
                    wr32(0x817fdedcu, r0);
                    wrf32d(0x817fdbd0u, (f64)(f32)px_padd(f2, (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fded8u), f28))));
                }
                r0 = (u32)rd8(r27 + 0x9bu);
                if (r0 != 0u) {
                    wr32(0x817fdee4u, r0);
                    wrf32d(0x817fdbd4u, (f64)(f32)px_padd((f64)rdf32(0x817fdbd4u), (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fdee0u), f28))));
                }
                r0 = (u32)rd8(r27 + 0x9cu);
                if (r0 != 0u) {
                    wr32(0x817fdedcu, r0);
                    wrf32d(0x817fdbd8u, (f64)(f32)px_padd((f64)rdf32(0x817fdbd8u), (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fded8u), f28))));
                }
                r4 = rd32(r27 + 0xc8u);
                c0lt = (s32)r3 < 2;
                f4 = (f64)(f32)px_padd((f64)rdf32(0x817fdbd0u), (f64)rdf32(r4 + 0x60u));
                f0 = (f64)rdf32(r4 + 0x68u);
                f1 = (f64)rdf32(0x817fdbd8u);
                f2 = (f64)(f32)px_padd((f64)rdf32(0x817fdbd4u), (f64)rdf32(r4 + 0x64u));
                wrf32d(0x817fdbd0u, f4);
                f0 = (f64)(f32)px_padd(f1, f0);
                wrf32d(0x817fdbd4u, f2);
                wrf32d(0x817fdbd8u, f0);
                wrf32d(0x817fdbb8u, f26);
                wrf32d(0x817fdbbcu, f30);
                wrf32d(0x817fdbc0u, f26);
                wrf32d(0x817fdbc4u, f30);
                wrf32d(0x817fdbc8u, f26);
                wrf32d(0x817fdbccu, f30);
                do {
                    if (r3 == 2u) {
                        if (f26 != f0) {
                            a.f[0] = -f0;
                            a.r[0] = 0x817fdbc8u;
                            a.r[1] = 0x817fdbccu;
                            (void)tc_call(0x80320a58u, &a);
                        }
                        f1 = (f64)rdf32(0x817fdbc8u);
                        f0 = (f64)rdf32(0x817fdbccu);
                        wrf32d(0x817fdd30u, f26);
                        wrf32d(0x817fdd28u, f0);
                        wrf32d(0x817fdd2cu, -f1);
                        wrf32d(0x817fdd34u, f26);
                        wrf32d(0x817fdd38u, f1);
                        wrf32d(0x817fdd3cu, f0);
                        wrf32d(0x817fdd40u, f26);
                        wrf32d(0x817fdd44u, f26);
                        wrf32d(0x817fdd48u, f26);
                        wrf32d(0x817fdd4cu, f26);
                        wrf32d(0x817fdd50u, f30);
                        wrf32d(0x817fdd54u, f26);
                    } else {
                        if (c0lt) {
                            c0lt = (s32)r3 < 0;
                            if (r3 == 0u) {
                                if (f26 != f4) {
                                    a.f[0] = -f4;
                                    a.r[0] = 0x817fdbb8u;
                                    a.r[1] = 0x817fdbbcu;
                                    (void)tc_call(0x80320a58u, &a);
                                }
                                f1 = (f64)rdf32(0x817fdbb8u);
                                f0 = (f64)rdf32(0x817fdbbcu);
                                wrf32d(0x817fdd28u, f30);
                                wrf32d(0x817fdd2cu, f26);
                                wrf32d(0x817fdd30u, f26);
                                wrf32d(0x817fdd34u, f26);
                                wrf32d(0x817fdd38u, f26);
                                wrf32d(0x817fdd3cu, f0);
                                wrf32d(0x817fdd40u, -f1);
                                wrf32d(0x817fdd44u, f26);
                                wrf32d(0x817fdd48u, f26);
                                wrf32d(0x817fdd4cu, f1);
                                wrf32d(0x817fdd50u, f0);
                                wrf32d(0x817fdd54u, f26);
                                break;
                            }
                            if (!c0lt) {
                                if (f26 != f2) {
                                    a.f[0] = -f2;
                                    a.r[0] = 0x817fdbc0u;
                                    a.r[1] = 0x817fdbc4u;
                                    (void)tc_call(0x80320a58u, &a);
                                }
                                f0 = (f64)rdf32(0x817fdbc0u);
                                f1 = (f64)rdf32(0x817fdbc4u);
                                wrf32d(0x817fdd2cu, f26);
                                wrf32d(0x817fdd28u, f1);
                                wrf32d(0x817fdd30u, f0);
                                wrf32d(0x817fdd34u, f26);
                                wrf32d(0x817fdd38u, f26);
                                wrf32d(0x817fdd3cu, f30);
                                wrf32d(0x817fdd40u, f26);
                                wrf32d(0x817fdd44u, f26);
                                wrf32d(0x817fdd48u, -f0);
                                wrf32d(0x817fdd4cu, f26);
                                wrf32d(0x817fdd50u, f1);
                                wrf32d(0x817fdd54u, f26);
                                break;
                            }
                        }
                        f0 = (f64)rdf32(0x817fdbd0u);
                        if (f26 != f0) {
                            a.f[0] = -f0;
                            a.r[0] = 0x817fdbb8u;
                            a.r[1] = 0x817fdbbcu;
                            (void)tc_call(0x80320a58u, &a);
                        }
                        f0 = (f64)rdf32(0x817fdbd4u);
                        if (f26 != f0) {
                            a.f[0] = -f0;
                            a.r[0] = 0x817fdbc0u;
                            a.r[1] = 0x817fdbc4u;
                            (void)tc_call(0x80320a58u, &a);
                        }
                        f0 = (f64)rdf32(0x817fdbd8u);
                        if (f26 != f0) {
                            a.f[0] = -f0;
                            a.r[0] = 0x817fdbc8u;
                            a.r[1] = 0x817fdbccu;
                            (void)tc_call(0x80320a58u, &a);
                        }
                        f0 = (f64)rdf32(0x817fdbc0u);
                        f7 = (f64)rdf32(0x817fdbbcu);
                        f8 = (f64)rdf32(0x817fdbb8u);
                        f4 = (f64)rdf32(0x817fdbccu);
                        f1 = (f64)(f32)px_pmul(f7, f0);
                        f5 = (f64)rdf32(0x817fdbc8u);
                        f12 = (f64)(f32)px_pmul(f8, f0);
                        f3 = (f64)(f32)px_pmul(f1, f5);
                        f6 = (f64)rdf32(0x817fdbc4u);
                        wrf32d(0x817fdd48u, -f0);
                        f1 = (f64)(f32)px_pmul(f1, f4);
                        f11 = (f64)(f32)px_psub(f3, (f64)(f32)px_pmul(f8, f4));
                        wrf32d(0x817fdd34u, f26);
                        f10 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul(f8, f5));
                        wrf32d(0x817fdd44u, f26);
                        wrf32d(0x817fdd38u, (f64)(f32)px_pmul(f6, f5));
                        wrf32d(0x817fdd28u, (f64)(f32)px_pmul(f6, f4));
                        f8 = (f64)(f32)px_pmul(f6, f8);
                        wrf32d(0x817fdd30u, f10);
                        wrf32d(0x817fdd4cu, f8);
                        wrf32d(0x817fdd40u, f11);
                        wrf32d(0x817fdd3cu, (f64)(f32)px_padd((f64)(f32)px_pmul(f12, f5), (f64)(f32)px_pmul(f7, f4)));
                        wrf32d(0x817fdd2cu, (f64)(f32)px_psub((f64)(f32)px_pmul(f12, f4), (f64)(f32)px_pmul(f7, f5)));
                        wrf32d(0x817fdd50u, (f64)(f32)px_pmul(f7, f6));
                        wrf32d(0x817fdd54u, f26);
                    }
                } while (0);
                r0 = (u32)rd8(r31 + 0xb1u);
                c0lt = (s32)r0 < 1;
                do {
                    if ((r0 != 1u && c0lt) && (s32)r0 >= 0) {
                        f12 = (f64)rdf32(0x817fdd38u);
                        f7 = (f64)rdf32(0x817fdd28u);
                        f2 = (f64)(f32)px_pmul(f25, f23);
                        f18 = (f64)rdf32(0x817fdd48u);
                        f8 = (f64)rdf32(0x817fdd40u);
                        f3 = (f64)rdf32(0x817fdd30u);
                        f0 = (f64)(f32)px_pmul(f24, (f64)(f32)px_psub((f64)(f32)px_padd(f22, f21), f30));
                        f5 = (f64)rdf32(0x817fdd2cu);
                        f10 = (f64)rdf32(0x817fdd3cu);
                        f20 = (f64)rdf32(0x817fdd4cu);
                        wrf32d(0x817fdd20u, (f64)(f32)px_pmul((f64)rdf32(0x817fdd50u), f25));
                        f1 = (f64)(f32)px_pmul(f24, f21);
                        f4 = (f64)(f32)px_psub((f64)(f32)px_pmul(-f7, f2), (f64)(f32)px_pmul(f5, f0));
                        f5 = (f64)(f32)px_pmul(f5, f1);
                        wrf32d(0x817fdd1cu, (f64)(f32)px_pmul(f20, f1));
                        wrf32d(0x817fdcfcu, f5);
                        f8 = (f64)(f32)px_pmul(f8, f25);
                        wrf32d(0x817fdd0cu, (f64)(f32)px_pmul(f10, f1));
                        f4 = (f64)(f32)px_padd(f23, f4);
                        f3 = (f64)(f32)px_pmul(f3, f25);
                        wrf32d(0x817fdd14u, (f64)(f32)px_padd(f22, (f64)(f32)px_psub((f64)(f32)px_pmul(-f12, f2), (f64)(f32)px_pmul(f10, f0))));
                        f6 = (f64)(f32)px_pmul(f7, f25);
                        f1 = (f64)(f32)px_pmul(-f18, f2);
                        wrf32d(0x817fdd04u, f4);
                        f0 = (f64)(f32)px_pmul(f20, f0);
                        wrf32d(0x817fdcf8u, f6);
                        f0 = (f64)(f32)px_psub(f1, f0);
                        wrf32d(0x817fdd00u, f3);
                        wrf32d(0x817fdd08u, (f64)(f32)px_pmul(f12, f25));
                        wrf32d(0x817fdd10u, f8);
                        wrf32d(0x817fdd18u, (f64)(f32)px_pmul(f18, f25));
                        wrf32d(0x817fdd24u, f0);
                        break;
                    }
                    f20 = (f64)rdf32(0x817fdd48u);
                    f1 = (f64)(f32)px_pmul(f25, f23);
                    f6 = (f64)rdf32(0x817fdd28u);
                    f0 = (f64)(f32)px_pmul(f24, f22);
                    f13 = (f64)rdf32(0x817fdd50u);
                    f10 = (f64)rdf32(0x817fdd38u);
                    f4 = (f64)rdf32(0x817fdd30u);
                    f8 = (f64)rdf32(0x817fdd40u);
                    f11 = (f64)(f32)px_pmul((f64)rdf32(0x817fdd4cu), f25);
                    f3 = (f64)(f32)px_psub((f64)(f32)px_pmul(-f6, f1), (f64)(f32)px_pmul(f4, f0));
                    f7 = (f64)rdf32(0x817fdd3cu);
                    f5 = (f64)(f32)px_psub((f64)(f32)px_psub((f64)(f32)px_pmul(-f20, f1), (f64)(f32)px_pmul(f13, f0)), f22);
                    f2 = (f64)rdf32(0x817fdd2cu);
                    f1 = (f64)(f32)px_pmul(-f10, f1);
                    wrf32d(0x817fdd24u, f5);
                    f0 = (f64)(f32)px_pmul(f8, f0);
                    wrf32d(0x817fdd20u, f11);
                    f7 = (f64)(f32)px_pmul(f7, f25);
                    f10 = (f64)(f32)px_pmul(f10, f25);
                    wrf32d(0x817fdd0cu, (f64)(f32)px_pmul(f8, f24));
                    f3 = (f64)(f32)px_padd(f23, f3);
                    f2 = (f64)(f32)px_pmul(f2, f25);
                    wrf32d(0x817fdd18u, (f64)(f32)px_pmul(f20, f25));
                    f4 = (f64)(f32)px_pmul(f4, f24);
                    f5 = (f64)(f32)px_pmul(f6, f25);
                    wrf32d(0x817fdd04u, f3);
                    f0 = (f64)(f32)px_psub(f1, f0);
                    wrf32d(0x817fdcfcu, f4);
                    wrf32d(0x817fdcf8u, f5);
                    wrf32d(0x817fdd00u, f2);
                    wrf32d(0x817fdd08u, f10);
                    wrf32d(0x817fdd10u, f7);
                    wrf32d(0x817fdd14u, f0);
                    wrf32d(0x817fdd1cu, (f64)(f32)px_pmul(f13, f24));
                } while (0);
                a.r[0] = 0x817fdc3cu;
                a.r[1] = 0x817fde18u;
                a.r[2] = r27;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                (void)tc_call(r30, &a);
                a.r[0] = r27 + 0xccu;
                a.r[1] = 0x817fdc3cu;
                a.r[2] = 0x817fdc30u;
                (void)tc_call(0x80234484u, &a);
                f0 = px_pack((f64)rdf32(0x817fdc34u), (f64)rdf32(0x817fdc34u));
                f1 = px_pack((f64)rdf32(0x817fdc30u), 1.0);
                f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f0), px_lo(f0)));
                f1 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f0)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f0)));
                f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f0)), px_lo(f0));
                if (!(f1 < f31)) {
                    a.f[0] = f1;
                    f1 = tc_callf(0x802eff54u, &a);
                    f2 = px_pack((f64)rdf32(0x817fdc30u), (f64)rdf32(0x817fdc30u));
                    r0 = 1u;
                    f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)));
                    f2 = px_pack((f64)rdf32(0x817fdc38u), 1.0);
                    wrf32d(0x817fdc30u, px_hi(f0));
                    wrf32d(0x817fdc30u, px_lo(f0));
                    wrf32d(0x817fdc38u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f1)))));
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    f1 = (f64)rdf32(0x817fdc64u);
                    f0 = (f64)rdf32(0x817fdc68u);
                    wrf32d(0x817fdc30u, (f64)rdf32(0x817fdc60u));
                    wrf32d(0x817fdc34u, f1);
                    wrf32d(0x817fdc38u, f0);
                }
                a.r[0] = 0x817fdc3cu;
                a.r[1] = 0x817fdc30u;
                a.r[2] = 0x817fdc48u;
                (void)tc_call(0x80234484u, &a);
                wrf32d(r27 + 0xccu, (f64)rdf32(0x817fdc48u));
                wrf32d(r27 + 0xd0u, (f64)rdf32(0x817fdc4cu));
                wrf32d(r27 + 0xd4u, (f64)rdf32(0x817fdc50u));
                r6 = rd32(r27 + 0xb0u);
                r0 = rd32(r27 + 0xb4u);
                wr32(0x817fdc24u, rd32(r27 + 0xacu));
                f10 = (f64)rdf32(0x817fdc38u);
                wr32(0x817fdc28u, r6);
                f9 = (f64)rdf32(0x817fdc44u);
                wr32(0x817fdc2cu, r0);
                f8 = (f64)rdf32(0x817fdc50u);
                f11 = (f64)rdf32(0x817fdc2cu);
                f7 = (f64)rdf32(0x817fdc28u);
                f6 = (f64)rdf32(0x817fdc34u);
                f5 = (f64)rdf32(0x817fdc40u);
                f4 = (f64)rdf32(0x817fdc4cu);
                f3 = (f64)rdf32(0x817fdc24u);
                f2 = (f64)rdf32(0x817fdc30u);
                f0 = (f64)rdf32(0x817fdc48u);
                wrf32d(0x817fdcccu, (f64)rdf32(0x817fdc3cu));
                wrf32d(0x817fdcc8u, f0);
                wrf32d(0x817fdcd0u, f2);
                wrf32d(0x817fdcd4u, f3);
                wrf32d(0x817fdcd8u, f4);
                wrf32d(0x817fdcdcu, f5);
                wrf32d(0x817fdce0u, f6);
                wrf32d(0x817fdce4u, f7);
                wrf32d(0x817fdce8u, f8);
                wrf32d(0x817fdcecu, f9);
                wrf32d(0x817fdcf0u, f10);
                wrf32d(0x817fdcf4u, f11);
                a.r[0] = 0x817fdcc8u;
                a.r[1] = 0x817fdcf8u;
                a.r[2] = 0x817fdc98u;
                (void)tc_call(0x802337a0u, &a);
                r5 = (u32)rd8(param_1 + 0xc0u);
                r5 = (((0u - r5) | r5) >> 0x1fu) & 1u;
                a.r[0] = 0x817fdc98u;
                a.r[1] = 0x8034c328u;
                a.r[2] = r5;
                f1 = tc_callf(0x80329ef4u, &a);
                f2 = 0.0;
                f3 = 0.0;
                if ((u32)rd8(r31 + 0xadu) == 1u) {
                    r5 = (u32)rd8(param_1 + 0xc0u);
                    r5 = (((0u - r5) | r5) >> 0x1fu) & 1u;
                    a.r[0] = 0x817fdc98u;
                    a.r[1] = 0x8034c358u;
                    a.r[2] = r5;
                    f1 = tc_callf(0x80329ef4u, &a);
                    f2 = 0.0;
                    f3 = 0.0;
                }
            }
        }
        a.r[0] = (u32)param_3;
        a.r[1] = r27;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(r29, &a);
        r27 = r3;
    }
    return;
}
