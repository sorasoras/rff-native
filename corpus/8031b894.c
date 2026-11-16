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

void fn_8031b894(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, s32 param_6, s32 param_7, s32 param_8, u32 param_9, u32 param_10, u32 param_11, u32 param_12, u32 param_13, u32 param_14)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r21 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    (void)param_11;
    (void)param_12;
    (void)param_13;
    (void)param_14;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
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
    r0 = (u32)rd8((u32)param_3 + 0x29u);
    r27 = rd32(0x817fe008u);
    c0lt = (s32)r0 < 3;
    r28 = rd32(0x817fe00cu);
    r21 = rd32(0x817fe010u);
    r29 = rd32(0x817fe014u);
    r30 = rd32(0x817fe018u);
    r31 = rd32(0x817fe01cu);
    r4 = (u32)rd8((u32)param_3 + 0x2au);
    if (r0 == 3u) {
        a.r[0] = (u32)param_8;
        (void)tc_call(0x80318f38u, &a);
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            a.r[0] = (u32)param_8;
            (void)tc_call(0x80319018u, &a);
        } else if (c0lt) {
            a.r[0] = (u32)param_8;
            a.r[1] = r4;
            (void)tc_call(0x80318e20u, &a);
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            a.r[0] = (u32)param_8;
            a.r[1] = r4;
            (void)tc_call(0x803191ecu, &a);
        } else if (!c0lt) {
            a.r[0] = (u32)param_8;
            a.r[1] = r4;
            (void)tc_call(0x803190e0u, &a);
        } else if ((s32)r0 >= 0) {
            a.r[0] = (u32)param_8;
            a.r[1] = r4;
            (void)tc_call(0x803192dcu, &a);
        }
    }
    f2 = px_pack((f64)rdf32((u32)param_8), (f64)rdf32((u32)param_8));
    f1 = px_pack((f64)rdf32((u32)param_7), (f64)rdf32((u32)param_7));
    r0 = (u32)rd8((u32)param_3 + 0x29u);
    f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
    f2 = px_pack((f64)rdf32((u32)param_8 + 8u), 1.0);
    f1 = px_pack((f64)rdf32((u32)param_7 + 8u), 1.0);
    c0lt = (s32)r0 < 3;
    f31 = (f64)rdf32(0x805778ecu);
    wrf32d(0x817fdfacu, px_hi(f0));
    wrf32d(0x817fdfacu, px_lo(f0));
    wrf32d(0x817fdfb4u, px_hi(px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)))));
    if (r0 == 3u) {
        wr32(0x817fdf98u, r29);
        a.r[0] = param_1;
        a.r[1] = (u32)param_3;
        a.r[2] = (u32)param_8;
        a.r[3] = (u32)param_7;
        a.r[4] = (u32)param_6;
        a.r[5] = 0x817fdfacu;
        a.r[6] = r27;
        a.r[7] = r21;
        a.s[0] = rd32(0x817fdf98u);
        f1 = tc_callf(0x8031b170u, &a);
        f31 = f1;
    } else if (!c0lt) {
        c0lt = (s32)r0 < 5;
        if (r0 == 5u) {
            wr32(0x817fdf98u, r29);
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_8;
            a.r[3] = (u32)param_7;
            a.r[4] = (u32)param_6;
            a.r[5] = 0x817fdfacu;
            a.r[6] = r27;
            a.r[7] = r21;
            a.s[0] = rd32(0x817fdf98u);
            f1 = tc_callf(0x8031a99cu, &a);
            f31 = f1;
        } else if (c0lt) {
            wr32(0x817fdf98u, r29);
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_8;
            a.r[3] = (u32)param_7;
            a.r[4] = (u32)param_6;
            a.r[5] = 0x817fdfacu;
            a.r[6] = r27;
            a.r[7] = r21;
            a.s[0] = rd32(0x817fdf98u);
            f1 = tc_callf(0x8031a364u, &a);
            f31 = f1;
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            wr32(0x817fdf98u, r29);
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_8;
            a.r[3] = (u32)param_7;
            a.r[4] = (u32)param_6;
            a.r[5] = 0x817fdfacu;
            a.r[6] = r27;
            a.r[7] = r21;
            a.s[0] = rd32(0x817fdf98u);
            f1 = tc_callf(0x8031982cu, &a);
            f31 = f1;
        } else if (!c0lt) {
            wr32(0x817fdf98u, r29);
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_8;
            a.r[3] = (u32)param_7;
            a.r[4] = (u32)param_6;
            a.r[5] = 0x817fdfacu;
            a.r[6] = r27;
            a.r[7] = r21;
            a.s[0] = rd32(0x817fdf98u);
            f1 = tc_callf(0x80319dd4u, &a);
            f31 = f1;
        } else if ((s32)r0 >= 0) {
            wr32(0x817fdf98u, r29);
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = (u32)param_8;
            a.r[3] = (u32)param_7;
            a.r[4] = (u32)param_6;
            a.r[5] = 0x817fdfacu;
            a.r[6] = r27;
            a.r[7] = r21;
            a.s[0] = rd32(0x817fdf98u);
            f1 = tc_callf(0x8031938cu, &a);
            f31 = f1;
        }
    }
    if (!(f31 > (f64)rdf32(0x80577910u))) {
        r3 = (u32)rd16((u32)param_3 + 0x2cu);
        if ((r3 & 2u) != 0u || (r3 & 8u) != 0u || ((r3 & 4u) != 0u && (((u32)param_6 + 0xffu) & 0xffu) <= 1u)) {
            a.r[0] = param_2;
            a.r[1] = r27;
            a.r[2] = r31;
            (void)tc_call(0x8023411cu, &a);
            f2 = (f64)rdf32((u32)param_3 + 0x34u);
            f4 = (f64)(f32)px_psub((f64)rdf32(0x805778e4u), f31);
            f1 = (f64)rdf32((u32)param_3 + 0x38u);
            wrf32d(r31, (f64)(f32)px_pmul((f64)rdf32(r31), (f64)rdf32((u32)param_3 + 0x30u)));
            wrf32d(r31 + 4u, (f64)(f32)px_pmul((f64)rdf32(r31 + 4u), f2));
            wrf32d(r31 + 8u, (f64)(f32)px_pmul((f64)rdf32(r31 + 8u), f1));
            f1 = px_pack((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfacu));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f4)));
            f1 = px_pack((f64)rdf32(0x817fdfb4u), 1.0);
            wrf32d(0x817fdfa0u, px_hi(f0));
            wrf32d(0x817fdfa0u, px_lo(f0));
            wrf32d(0x817fdfa8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f4)))));
            a.r[0] = param_2;
            a.r[1] = 0x817fdfa0u;
            a.r[2] = 0x817fdfa0u;
            (void)tc_call(0x8023411cu, &a);
            f1 = (f64)rdf32(0x817fdfa8u);
            f0 = (f64)rdf32((u32)param_3 + 0x38u);
            f2 = (f64)(f32)px_pmul((f64)rdf32(0x817fdfa4u), (f64)rdf32((u32)param_3 + 0x34u));
            wrf32d(0x817fdfa0u, (f64)(f32)px_pmul((f64)rdf32(0x817fdfa0u), (f64)rdf32((u32)param_3 + 0x30u)));
            f0 = (f64)(f32)px_pmul(f1, f0);
            wrf32d(0x817fdfa4u, f2);
            wrf32d(0x817fdfa8u, f0);
            f0 = px_pack((f64)rdf32(0x817fdfa0u), (f64)rdf32(0x817fdfa0u));
            f1 = px_pack((f64)rdf32(r29), (f64)rdf32(r29));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
            wrf32d(r30, px_hi(f0));
            wrf32d(r30, px_lo(f0));
            f1 = px_pack((f64)rdf32(r29 + 8u), 1.0);
            f0 = px_pack((f64)rdf32(0x817fdfa8u), 1.0);
            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
            wrf32d(r30 + 8u, px_hi(f0));
        }
        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x40u) != 0u) {
            wr8(r28, 1u);
            wrf32d(r30, (f64)rdf32(r29));
            wrf32d(r30 + 4u, (f64)rdf32(r29 + 4u));
            wrf32d(r30 + 8u, (f64)rdf32(r29 + 8u));
        }
        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x10u) != 0u && (u32)param_4 != 0u) {
            a.r[0] = rd32(rd32(rd32(rd32((u32)param_5 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
            a.r[1] = (u32)param_3 + 0x3cu;
            a.r[2] = (u32)param_5;
            a.r[3] = (u32)param_4;
            a.r[4] = (u32)rd16((u32)param_5 + 0xe2u);
            a.r[5] = r29;
            a.r[6] = 0u;
            (void)tc_call(0x803215f8u, &a);
        }
        if (((u32)rd16((u32)param_3 + 0x2cu) & 0x20u) != 0u && (u32)param_4 != 0u) {
            a.r[0] = rd32(rd32(rd32(rd32((u32)param_5 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0x10u;
            a.r[1] = (u32)param_3 + 0x3cu;
            a.r[2] = (u32)param_5;
            a.r[3] = (u32)param_4;
            a.r[4] = (u32)rd16((u32)param_5 + 0xe2u);
            a.r[5] = r29;
            a.r[6] = 0u;
            (void)tc_call(0x80321774u, &a);
        }
    }
    return;
}
