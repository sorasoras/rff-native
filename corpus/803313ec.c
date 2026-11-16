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

static f64 px_pfms(f64 a, f64 c, f64 b)
{
    f64 nb = -b, s = a * c + nb;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    u64 bits = px_f2b(s);
    if ((bits & 0x1fffffffull) == 0x10000000ull) {
        f64 ap = nb - s, bp = s + ap, da = a * c + ap, db = nb - bp, err = da + db;
        if (err != 0.0) { if ((err > 0.0) == (s > 0.0)) bits += 1; else bits -= 1; }
    }
    return px_b2f(bits);
}

static f64 px_pfnm(f64 x)
{
    return x != x ? x : -x;
}

void fn_803313ec(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6)
{
    u32 c0gt = 0, ctr = 0, r8 = 0, r10 = 0, t18 = 0, t21 = 0, t27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    (void)param_1;
    c0gt = (s32)param_2 > 0;
    f10 = rdf64(0x80577d08u);
    r10 = 0u;
    f0 = (f64)(f32)px_psub(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull), f10);
    f11 = (f64)(f32)ppc_fres(f0);
    f2 = px_pack((f64)(f32)px_padd(px_hi(f11), px_hi(f11)), (f64)(f32)px_padd(px_lo(f11), px_lo(f11)));
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f11), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f11), px_lo(f11)));
    f11 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f0), px_hi(f1), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f0), px_lo(f1), px_lo(f2))));
    if (c0gt) {
        r8 = param_6 & 1u;
        f9 = (f64)rdf32(0x80577d00u);
        f7 = (f64)rdf32(0x80577d04u);
        ctr = param_2;
        if (c0gt) {
            do {
                f28 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
                f27 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
                t18 = (u32)param_3 + 0xcu;
                f6 = px_pack((f64)rdf32(t18), (f64)rdf32(t18));
                t21 = (u32)param_4 + 0xcu;
                f4 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
                f13 = px_pack((f64)rdf32((u32)param_5), (f64)rdf32((u32)param_5));
                t27 = (u32)param_5 + 0xcu;
                f3 = px_pack((f64)rdf32(t27), (f64)rdf32(t27));
                f2 = (f64)(f32)px_pmul((f64)(f32)px_psub(px_b2f((u64)(r10 ^ 0x80000000u) | 0x4330000000000000ull), f10), f11);
                f0 = (f64)(f32)px_pmul(f2, f2);
                f8 = (f64)(f32)px_pmul(f9, f0);
                f0 = (f64)(f32)px_pmul(f7, f0);
                f0 = (f64)(f32)px_padd(f0, f2);
                f29 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f8)));
                f13 = px_pack((f64)rdf32((u32)param_5 + 8u), 1.0);
                f2 = (f64)(f32)px_padd(f9, (f64)(f32)px_psub(f8, f2));
                f5 = (f64)(f32)px_padd(f9, f0);
                f12 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f8)));
                wrf32d(0x817fdf28u, px_hi(f29));
                wrf32d(0x817fdf28u, px_lo(f29));
                f26 = px_pack((f64)(f32)px_pmul(px_hi(f28), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f28), px_hi(f2)));
                f28 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
                f30 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
                f31 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f5)));
                wrf32d(0x817fdf10u, px_hi(f26));
                wrf32d(0x817fdf10u, px_lo(f26));
                f27 = px_pack((f64)(f32)px_pmul(px_hi(f27), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f27), px_hi(f5)));
                f26 = px_pack((f64)(f32)px_pmul(px_hi(f28), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f28), px_hi(f2)));
                f3 = px_pack((f64)rdf32((u32)param_5 + 0x14u), 1.0);
                f0 = px_pack((f64)rdf32(0x817fdf10u), (f64)rdf32(0x817fdf10u));
                wrf32d(0x817fdf4cu, px_hi(f30));
                wrf32d(0x817fdf4cu, px_lo(f30));
                f29 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f8)));
                f28 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f27)), (f64)(f32)px_padd(px_lo(f0), px_lo(f27)));
                wrf32d(0x817fdf58u, px_hi(f31));
                wrf32d(0x817fdf58u, px_lo(f31));
                f1 = px_pack((f64)rdf32(0x817fdf4cu), (f64)rdf32(0x817fdf4cu));
                f27 = px_pack((f64)rdf32((u32)param_4 + 8u), 1.0);
                f0 = px_pack((f64)rdf32(0x817fdf58u), (f64)rdf32(0x817fdf58u));
                f27 = px_pack((f64)(f32)px_pmul(px_hi(f27), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f27), px_hi(f5)));
                wrf32d(0x817fdf04u, px_hi(f28));
                wrf32d(0x817fdf04u, px_lo(f28));
                f13 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
                f6 = px_pack((f64)rdf32((u32)param_3 + 0x14u), 1.0);
                wrf32d(0x817fdf64u, px_hi(f12));
                wrf32d(0x817fdf64u, px_lo(f12));
                f12 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f8)));
                f4 = px_pack((f64)rdf32((u32)param_4 + 0x14u), 1.0);
                f28 = px_pack((f64)(f32)px_padd(px_hi(f26), px_hi(f27)), (f64)(f32)px_padd(px_lo(f26), px_lo(f27)));
                f30 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
                f3 = px_pack((f64)rdf32(0x817fdf04u), (f64)rdf32(0x817fdf04u));
                f1 = px_pack((f64)rdf32(0x817fdf28u), (f64)rdf32(0x817fdf28u));
                f31 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f5)));
                wrf32d(0x817fdf40u, px_hi(f13));
                wrf32d(0x817fdf40u, px_lo(f13));
                f3 = px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f1)), (f64)(f32)px_padd(px_lo(f3), px_lo(f1)));
                f13 = px_pack((f64)(f32)px_padd(px_hi(f30), px_hi(f31)), (f64)(f32)px_padd(px_lo(f30), px_lo(f31)));
                f0 = px_pack((f64)rdf32(0x817fdf64u), (f64)rdf32(0x817fdf64u));
                f1 = px_pack((f64)rdf32(0x817fdf40u), (f64)rdf32(0x817fdf40u));
                wrf32d(0x817fdef8u, px_hi(f3));
                wrf32d(0x817fdef8u, px_lo(f3));
                f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
                f4 = (f64)rdf32(0x817fdef8u);
                wrf32d(0x817fdf00u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f28), px_hi(f29)), (f64)(f32)px_padd(px_lo(f28), px_lo(f29)))));
                f3 = (f64)rdf32(0x817fdefcu);
                wrf32d(0x817fdf34u, px_hi(f0));
                wrf32d(0x817fdf34u, px_lo(f0));
                f6 = (f64)rdf32(0x817fdf00u);
                wrf32d(0x817fdf3cu, px_hi(px_pack((f64)(f32)px_padd(px_hi(f13), px_hi(f12)), (f64)(f32)px_padd(px_lo(f13), px_lo(f12)))));
                f0 = (f64)rdf32((u32)param_4 + 0x18u);
                f1 = (f64)(f32)px_pmul((f64)rdf32((u32)param_3 + 0x18u), f2);
                wrf32d(0xcc008000u, f4);
                f0 = (f64)(f32)px_pmul(f0, f5);
                f2 = (f64)rdf32((u32)param_5 + 0x18u);
                wrf32d(0xcc008000u, f3);
                f2 = (f64)(f32)px_pmul(f2, f8);
                f0 = (f64)(f32)px_padd(f1, f0);
                f5 = (f64)rdf32(0x817fdf34u);
                f4 = (f64)rdf32(0x817fdf38u);
                f3 = (f64)rdf32(0x817fdf3cu);
                f1 = (f64)(f32)px_padd(f2, f0);
                wrf32d(0xcc008000u, f6);
                if (r8 != 0u) {
                    wrf32d(0xcc008000u, (f64)rdf32(0x80577cf4u));
                    wrf32d(0xcc008000u, f1);
                }
                wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(f5)));
                wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(f4)));
                wrf32d(0xcc008000u, (f64)px_w2f(ppc_single_bits(f3)));
                if (r8 != 0u) {
                    wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                    wrf32d(0xcc008000u, f1);
                }
                r10 = r10 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
