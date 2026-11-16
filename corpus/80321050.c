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

void fn_80321050(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, s32 param_6, s32 param_7)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    (void)param_4;
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    f1 = (f64)rdf32(0x805779f8u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    f0 = (f64)rdf32((u32)param_3 + 0x68u);
    wr32(0x817fdfb8u, 0x43300000u);
    wr32(0x817fdfc0u, 0x43300000u);
    if (f1 != f0) {
        f2 = px_pack((f64)rdf32((u32)param_6), (f64)rdf32((u32)param_6));
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
        f2 = px_pack((f64)rdf32((u32)param_6 + 8u), 1.0);
        wrf32d(param_2, px_hi(f1));
        wrf32d(param_2, px_lo(f1));
        wrf32d(param_2 + 8u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)))));
    } else {
        wrf32d(param_2, f1);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f1);
    }
    f0 = (f64)rdf32((u32)param_3 + 0x6cu);
    if ((f64)rdf32(0x805779f8u) != f0) {
        f2 = px_pack((f64)rdf32((u32)param_7), (f64)rdf32((u32)param_7));
        f3 = px_pack((f64)rdf32(param_2), (f64)rdf32(param_2));
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
        f2 = px_pack((f64)rdf32((u32)param_7 + 8u), 1.0);
        wrf32d(0x817fdf1cu, px_hi(f1));
        wrf32d(0x817fdf1cu, px_lo(f1));
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f0)));
        f0 = px_pack((f64)rdf32(0x817fdf1cu), (f64)rdf32(0x817fdf1cu));
        wrf32d(0x817fdf24u, px_hi(f1));
        f0 = px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f0)), (f64)(f32)px_padd(px_lo(f3), px_lo(f0)));
        f3 = px_pack((f64)rdf32(param_2 + 8u), 1.0);
        wrf32d(param_2, px_hi(f0));
        wrf32d(param_2, px_lo(f0));
        wrf32d(param_2 + 8u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f1)), (f64)(f32)px_padd(px_lo(f3), px_lo(f1)))));
    }
    if ((f64)rdf32(0x805779f8u) != (f64)rdf32((u32)param_3 + 0x70u)) {
        f6 = rdf64(0x80577a10u);
        f5 = (f64)rdf32(0x805779fcu);
        f4 = (f64)rdf32(0x80577a04u);
        f3 = (f64)rdf32(0x80577a00u);
        r0 = (rd32((u32)param_3 + 0xecu) * 0x343fdu) + 0x269ec3u;
        r6 = r0 * 0x343fdu;
        wr32((u32)param_3 + 0xecu, r0);
        r0 = (r0 >> 0x10u) & 0xffffu;
        wr32(0x817fdfbcu, r0);
        r6 = r6 + 0x270000u;
        r0 = r6 - 0x613du;
        f0 = (f64)(f32)px_psub(rdf64(0x817fdfb8u), f6);
        r6 = r0 * 0x343fdu;
        wr32((u32)param_3 + 0xecu, r0);
        r0 = (r0 >> 0x10u) & 0xffffu;
        wr32(0x817fdfc4u, r0);
        r6 = r6 + 0x270000u;
        r6 = r6 - 0x613du;
        f1 = (f64)(f32)px_psub(rdf64(0x817fdfc0u), f6);
        wr32(0x817fdfbcu, (r6 >> 0x10u) & 0xffffu);
        f2 = (f64)(f32)px_pmul(f4, (f64)(f32)px_pdiv(f0, f5));
        f0 = rdf64(0x817fdfb8u);
        wr32((u32)param_3 + 0xecu, r6);
        f0 = (f64)(f32)px_psub(f0, f6);
        f0 = (f64)(f32)px_pdiv(f0, f5);
        f0 = (f64)(f32)px_pmul(f4, f0);
        a.f[0] = (f64)(f32)px_pmul(f3, f2);
        a.r[0] = 0x817fdf0cu;
        a.r[1] = 0x817fdf08u;
        (void)tc_call(0x80320a58u, &a);
        a.f[0] = (f64)(f32)px_pmul(f3, (f64)(f32)px_pmul(f4, (f64)(f32)px_pdiv(f1, f5)));
        a.r[0] = 0x817fdf04u;
        a.r[1] = 0x817fdf00u;
        (void)tc_call(0x80320a58u, &a);
        a.f[0] = (f64)(f32)px_pmul(f3, f0);
        a.r[0] = 0x817fdefcu;
        a.r[1] = 0x817fdef8u;
        (void)tc_call(0x80320a58u, &a);
        f1 = (f64)rdf32(param_2 + 4u);
        f0 = (f64)rdf32(param_2 + 8u);
        f2 = (f64)(f32)px_padd((f64)rdf32(param_2), (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x70u), (f64)(f32)px_padd((f64)(f32)px_pmul((f64)rdf32(0x817fdef8u), (f64)(f32)px_pmul((f64)rdf32(0x817fdf08u), (f64)rdf32(0x817fdf04u))), (f64)(f32)px_pmul((f64)rdf32(0x817fdf0cu), (f64)rdf32(0x817fdefcu)))));
        wrf32d(param_2, f2);
        f1 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x70u), (f64)(f32)px_psub((f64)(f32)px_pmul((f64)rdf32(0x817fdefcu), (f64)(f32)px_pmul((f64)rdf32(0x817fdf08u), (f64)rdf32(0x817fdf04u))), (f64)(f32)px_pmul((f64)rdf32(0x817fdf0cu), (f64)rdf32(0x817fdef8u)))));
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul((f64)rdf32(0x817fdf00u), (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x70u), (f64)rdf32(0x817fdf08u))));
        wrf32d(param_2 + 8u, f0);
    }
    f2 = (f64)rdf32((u32)param_3 + 0x74u);
    if ((f64)rdf32(0x805779f8u) != f2) {
        f3 = (f64)(f32)px_pmul((f64)rdf32(param_5), f2);
        f4 = (f64)rdf32(param_5 + 4u);
        f1 = (f64)rdf32(param_2 + 4u);
        f2 = (f64)rdf32(param_5 + 8u);
        f3 = (f64)(f32)px_padd((f64)rdf32(param_2), f3);
        f0 = (f64)rdf32(param_2 + 8u);
        wrf32d(param_2, f3);
        f1 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul(f4, (f64)rdf32((u32)param_3 + 0x74u)));
        wrf32d(param_2 + 4u, f1);
        f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul(f2, (f64)rdf32((u32)param_3 + 0x74u)));
        wrf32d(param_2 + 8u, f0);
    }
    f3 = (f64)rdf32(0x805779f8u);
    if (f3 != (f64)rdf32((u32)param_3 + 0x7cu)) {
        f6 = (f64)rdf32((u32)param_3 + 0x80u);
        if (f3 == f6) {
            a.f[0] = (f64)rdf32((u32)param_3 + 0x84u);
            a.f[1] = (f64)rdf32((u32)param_3 + 0x88u);
            a.f[2] = (f64)rdf32((u32)param_3 + 0x8cu);
            a.r[0] = 0x817fdf88u;
            (void)tc_call(0x80320c10u, &a);
            f1 = (f64)rdf32(0x805779f8u);
            f0 = (f64)rdf32(0x80577a08u);
            wrf32d(0x817fdf10u, f1);
            wrf32d(0x817fdf14u, f0);
            wrf32d(0x817fdf18u, f1);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf10u;
            a.r[2] = 0x817fdf10u;
            (void)tc_call(0x8023411cu, &a);
            f1 = (f64)rdf32(param_2 + 4u);
            f0 = (f64)rdf32(param_2 + 8u);
            wrf32d(param_2, (f64)(f32)px_padd((f64)rdf32(param_2), (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x7cu), (f64)rdf32(0x817fdf10u))));
            f1 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x7cu), (f64)rdf32(0x817fdf14u)));
            wrf32d(param_2 + 4u, f1);
            f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x7cu), (f64)rdf32(0x817fdf18u)));
            wrf32d(param_2 + 8u, f0);
        } else {
            f4 = rdf64(0x80577a10u);
            f5 = (f64)rdf32(0x805779fcu);
            f1 = (f64)rdf32(0x80577a04u);
            f0 = (f64)rdf32(0x80577a00u);
            r0 = (rd32((u32)param_3 + 0xecu) * 0x343fdu) + 0x269ec3u;
            r4 = r0 * 0x343fdu;
            wr32((u32)param_3 + 0xecu, r0);
            r0 = (r0 >> 0x10u) & 0xffffu;
            wr32(0x817fdfc4u, r0);
            r4 = r4 + 0x270000u;
            f2 = (f64)(f32)px_psub(rdf64(0x817fdfc0u), f4);
            r4 = r4 - 0x613du;
            wr32((u32)param_3 + 0xecu, r4);
            wr32(0x817fdfbcu, (r4 >> 0x10u) & 0xffffu);
            f4 = (f64)(f32)px_psub(rdf64(0x817fdfb8u), f4);
            f2 = (f64)(f32)px_pmul(f1, (f64)(f32)px_pdiv(f2, f5));
            f2 = (f64)(f32)px_pmul(f0, f2);
            a.f[0] = (f64)(f32)px_pmul(f6, (f64)(f32)px_pdiv(f4, f5));
            a.f[1] = f2;
            a.f[2] = f3;
            a.r[0] = 0x817fdf58u;
            (void)tc_call(0x80320c10u, &a);
            a.f[0] = (f64)rdf32((u32)param_3 + 0x84u);
            a.f[1] = (f64)rdf32((u32)param_3 + 0x88u);
            a.f[2] = (f64)rdf32((u32)param_3 + 0x8cu);
            a.r[0] = 0x817fdf28u;
            (void)tc_call(0x80320c10u, &a);
            a.r[0] = 0x817fdf28u;
            a.r[1] = 0x817fdf58u;
            a.r[2] = 0x817fdf58u;
            (void)tc_call(0x802337a0u, &a);
            f1 = (f64)rdf32(param_2 + 4u);
            f0 = (f64)rdf32(param_2 + 8u);
            wrf32d(param_2, (f64)(f32)px_padd((f64)rdf32(param_2), (f64)(f32)px_pmul((f64)rdf32(0x817fdf5cu), (f64)rdf32((u32)param_3 + 0x7cu))));
            f1 = (f64)(f32)px_padd(f1, (f64)(f32)px_pmul((f64)rdf32(0x817fdf6cu), (f64)rdf32((u32)param_3 + 0x7cu)));
            wrf32d(param_2 + 4u, f1);
            f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul((f64)rdf32(0x817fdf7cu), (f64)rdf32((u32)param_3 + 0x7cu)));
            wrf32d(param_2 + 8u, f0);
        }
    }
    r0 = (u32)(s8)rd8((u32)param_3 + 0x66u);
    if (r0 != 0u) {
        r0 = r0 ^ 0x80000000u;
        r3 = rd32((u32)param_3 + 0xecu) * 0x343fdu;
        wr32(0x817fdfbcu, r0);
        f7 = rdf64(0x80577a10u);
        f1 = (f64)(f32)px_psub(rdf64(0x817fdfb8u), rdf64(0x80577a18u));
        r3 = r3 + 0x270000u;
        f0 = (f64)rdf32(0x80577a0cu);
        r3 = r3 - 0x613du;
        f6 = (f64)rdf32(0x805779fcu);
        wr32((u32)param_3 + 0xecu, r3);
        f3 = (f64)rdf32(0x80577a00u);
        wr32(0x817fdfc4u, (r3 >> 0x10u) & 0xffffu);
        f4 = (f64)rdf32(0x80577a08u);
        f7 = (f64)(f32)px_psub(rdf64(0x817fdfc0u), f7);
        f6 = (f64)(f32)px_pdiv(f7, f6);
        f3 = (f64)(f32)px_pmul(f3, f6);
        f3 = (f64)(f32)px_psub(f3, f4);
        f3 = (f64)(f32)px_pmul((f64)(f32)px_pmul(f0, f1), f3);
        f3 = (f64)(f32)px_psub(f4, f3);
        f1 = (f64)(f32)px_pmul((f64)rdf32(param_2 + 4u), f3);
        f0 = (f64)(f32)px_pmul((f64)rdf32(param_2 + 8u), f3);
        wrf32d(param_2, (f64)(f32)px_pmul((f64)rdf32(param_2), f3));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
    }
    return;
}
