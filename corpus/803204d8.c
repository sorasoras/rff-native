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

f64 fn_803204d8(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    f1 = (f64)rdf32(param_1 + 0x10u);
    wrf32d(0x817fdfccu, (f64)rdf32(param_1));
    f0 = (f64)rdf32(param_1 + 0x20u);
    wrf32d(0x817fdfd0u, f1);
    f3 = (f64)rdf32(0x805779ccu);
    f2 = px_pack((f64)rdf32(0x817fdfccu), (f64)rdf32(0x817fdfccu));
    wr32(0x817fdfecu, 0u);
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
    wr32(0x817fdfe8u, 0u);
    wrf32d(0x817fdfd4u, f0);
    f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f2)))), px_lo(f2)), px_lo(f2));
    if (!(f1 > f3)) {
        f2 = (f64)rdf32(0x805779bcu);
        f0 = (f64)rdf32(param_1 + 4u);
        wrf32d(param_2, f2);
        f1 = (f64)rdf32(param_1 + 0x14u);
        wrf32d(0x817fdfc0u, f0);
        f0 = (f64)rdf32(param_1 + 0x24u);
        wrf32d(0x817fdfc4u, f1);
        f4 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
        wrf32d(0x817fdfc8u, f0);
        f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f4)));
        f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f4)))), px_lo(f4)), px_lo(f4));
        if (!(f1 > f3)) {
            wrf32d(param_2 + 4u, f2);
            f1 = (f64)rdf32(param_1 + 0x18u);
            f0 = (f64)rdf32(param_1 + 0x28u);
            wrf32d(0x817fdfb4u, (f64)rdf32(param_1 + 8u));
            wrf32d(0x817fdfb8u, f1);
            wrf32d(0x817fdfbcu, f0);
            a.r[0] = 0x817fdfb4u;
            f1 = tc_callf(0x80234440u, &a);
            wrf32d(param_2 + 8u, f1);
        } else {
            a.f[0] = f1;
            f1 = tc_callf(0x802eff54u, &a);
            f4 = (f64)(f32)ppc_fres(f1);
            f3 = (f64)rdf32(param_1 + 8u);
            f2 = (f64)rdf32(param_1 + 0x18u);
            f0 = (f64)rdf32(param_1 + 0x28u);
            f5 = px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f4)), (f64)(f32)px_padd(px_lo(f4), px_lo(f4)));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f4)));
            f4 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f4), px_hi(f5))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f4), px_lo(f5))));
            wrf32d(param_2 + 4u, f4);
            f4 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
            wrf32d(0x817fdfb4u, f3);
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f1)));
            f4 = px_pack((f64)rdf32(0x817fdfc8u), 1.0);
            wrf32d(0x817fdfb8u, f2);
            f2 = px_pack((f64)rdf32(0x817fdfb4u), 1.0);
            wrf32d(0x817fdfc0u, px_hi(f3));
            wrf32d(0x817fdfc0u, px_lo(f3));
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f1)));
            f6 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            wrf32d(0x817fdfbcu, f0);
            f0 = px_pack((f64)rdf32(0x817fdfc0u), 1.0);
            wrf32d(0x817fdfc8u, px_hi(f3));
            f1 = px_pack((f64)rdf32(0x817fdfb8u), (f64)rdf32(0x817fdfb8u));
            f4 = px_pack((f64)rdf32(0x817fdfc4u), (f64)rdf32(0x817fdfc4u));
            f5 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f1)));
            f0 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f2), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f2), px_lo(f4)))), px_lo(f4)), px_lo(f4));
            f1 = (f64)(f32)f0;
            wrf32d(0x817fdfe0u, f0);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f1)));
            wrf32d(0x817fdfa8u, px_hi(f0));
            wrf32d(0x817fdfa8u, px_lo(f0));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f1)));
            f1 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            wrf32d(0x817fdfb0u, px_hi(f0));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f1)), (f64)(f32)px_psub(px_lo(f6), px_lo(f1)));
            f6 = px_pack((f64)rdf32(0x817fdfbcu), 1.0);
            wrf32d(0x817fdfb4u, px_hi(f1));
            wrf32d(0x817fdfb4u, px_lo(f1));
            wrf32d(0x817fdfbcu, px_hi(px_pack((f64)(f32)px_psub(px_hi(f6), px_hi(f0)), (f64)(f32)px_psub(px_lo(f6), px_lo(f0)))));
            a.r[0] = 0x817fdfb4u;
            f1 = tc_callf(0x80234440u, &a);
            wrf32d(param_2 + 8u, f1);
        }
    } else {
        a.f[0] = f1;
        f1 = tc_callf(0x802eff54u, &a);
        f5 = (f64)(f32)ppc_fres(f1);
        f8 = px_pack((f64)rdf32(0x817fdfccu), (f64)rdf32(0x817fdfccu));
        f2 = (f64)rdf32(param_1 + 0x14u);
        f0 = (f64)rdf32(param_1 + 0x24u);
        f4 = (f64)rdf32(param_1 + 4u);
        f3 = (f64)rdf32(0x805779ccu);
        f7 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f1)));
        f8 = px_pack((f64)rdf32(0x817fdfd4u), 1.0);
        f6 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f5)), (f64)(f32)px_padd(px_lo(f5), px_lo(f5)));
        f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f5)));
        wrf32d(0x817fdfccu, px_hi(f7));
        wrf32d(0x817fdfccu, px_lo(f7));
        f7 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f1)));
        f5 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f5), px_hi(f6))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f5), px_lo(f6))));
        f6 = px_pack((f64)rdf32(0x817fdfccu), 1.0);
        wrf32d(0x817fdfd4u, px_hi(f7));
        f8 = px_pack((f64)rdf32(0x817fdfccu), (f64)rdf32(0x817fdfccu));
        wrf32d(param_2, f5);
        f5 = px_pack((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfd0u));
        wrf32d(0x817fdfc0u, f4);
        wrf32d(0x817fdfc4u, f2);
        f1 = px_pack((f64)rdf32(0x817fdfc0u), 1.0);
        wrf32d(0x817fdfc8u, f0);
        f2 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
        f0 = px_pack((f64)rdf32(0x817fdfc4u), (f64)rdf32(0x817fdfc4u));
        f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f0)));
        f0 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f1), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f6), px_lo(f1), px_lo(f5)))), px_lo(f5)), px_lo(f5));
        f1 = (f64)(f32)f0;
        wrf32d(0x817fdfd8u, f0);
        f0 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f1)));
        wrf32d(0x817fdfa8u, px_hi(f0));
        wrf32d(0x817fdfa8u, px_lo(f0));
        f0 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f1)));
        f1 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
        wrf32d(0x817fdfb0u, px_hi(f0));
        f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
        f2 = px_pack((f64)rdf32(0x817fdfc8u), 1.0);
        wrf32d(0x817fdfc0u, px_hi(f1));
        wrf32d(0x817fdfc0u, px_lo(f1));
        f1 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f0)), (f64)(f32)px_psub(px_lo(f2), px_lo(f0)));
        f2 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
        wrf32d(0x817fdfc8u, px_hi(f1));
        f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
        f0 = (f64)rdf32(0x817fdfc8u);
        f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f2)))), px_lo(f2)), px_lo(f2));
        if (!(f1 > f3)) {
            f2 = (f64)rdf32(0x805779bcu);
            f1 = (f64)rdf32(param_1 + 0x18u);
            wrf32d(param_2 + 4u, f2);
            f0 = (f64)rdf32(param_1 + 0x28u);
            wrf32d(0x817fdfb8u, f1);
            f1 = (f64)rdf32(param_1 + 8u);
            wrf32d(0x817fdfbcu, f0);
            f4 = px_pack((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfd0u));
            wrf32d(0x817fdfb4u, f1);
            f1 = px_pack((f64)rdf32(0x817fdfb8u), (f64)rdf32(0x817fdfb8u));
            f0 = px_pack((f64)rdf32(0x817fdfb4u), 1.0);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f1)));
            f5 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            f0 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f6), px_hi(f0), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f6), px_lo(f0), px_lo(f4)))), px_lo(f4)), px_lo(f4));
            f1 = (f64)(f32)f0;
            wrf32d(0x817fdfdcu, f0);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f8), px_hi(f1)));
            wrf32d(0x817fdfa8u, px_hi(f0));
            wrf32d(0x817fdfa8u, px_lo(f0));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f1)));
            f1 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            wrf32d(0x817fdfb0u, px_hi(f0));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f1)), (f64)(f32)px_psub(px_lo(f5), px_lo(f1)));
            f5 = px_pack((f64)rdf32(0x817fdfbcu), 1.0);
            wrf32d(0x817fdfb4u, px_hi(f1));
            wrf32d(0x817fdfb4u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_psub(px_hi(f5), px_hi(f0)), (f64)(f32)px_psub(px_lo(f5), px_lo(f0)));
            f4 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            wrf32d(0x817fdfbcu, px_hi(f1));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f4)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f4)));
            f0 = (f64)rdf32(0x817fdfbcu);
            f31 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f4)))), px_lo(f4)), px_lo(f4));
            if (!(f31 > f3)) {
                wrf32d(param_2 + 8u, f2);
            } else {
                if (!((f31 < f2) || (f31 == f2))) {
                    a.f[0] = f31;
                    f1 = tc_callf(0x802eff54u, &a);
                    f2 = (f64)(f32)px_pmul(f31, f1);
                }
                wrf32d(param_2 + 8u, f2);
            }
        } else {
            a.f[0] = f1;
            f1 = tc_callf(0x802eff54u, &a);
            f6 = (f64)(f32)ppc_fres(f1);
            f4 = (f64)rdf32(param_1 + 8u);
            f3 = (f64)rdf32(param_1 + 0x18u);
            f2 = (f64)rdf32(param_1 + 0x28u);
            f9 = px_pack((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfd0u));
            f7 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f6)), (f64)(f32)px_padd(px_lo(f6), px_lo(f6)));
            f8 = px_pack((f64)rdf32(0x817fdfccu), 1.0);
            f6 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f6)));
            f10 = px_pack((f64)rdf32(0x817fdfccu), (f64)rdf32(0x817fdfccu));
            f0 = (f64)rdf32(0x805779ccu);
            f6 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f6), px_hi(f7))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f6), px_lo(f7))));
            wrf32d(0x817fdfd8u, (f64)(f32)px_pmul((f64)rdf32(0x817fdfd8u), f1));
            wrf32d(param_2 + 4u, f6);
            f5 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
            wrf32d(0x817fdfb4u, f4);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f1)));
            f5 = px_pack((f64)rdf32(0x817fdfc8u), 1.0);
            wrf32d(0x817fdfb8u, f3);
            f3 = px_pack((f64)rdf32(0x817fdfb4u), 1.0);
            wrf32d(0x817fdfc0u, px_hi(f4));
            wrf32d(0x817fdfc0u, px_lo(f4));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f1)));
            f7 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            wrf32d(0x817fdfbcu, f2);
            f1 = px_pack((f64)rdf32(0x817fdfc0u), 1.0);
            wrf32d(0x817fdfc8u, px_hi(f4));
            f2 = px_pack((f64)rdf32(0x817fdfb8u), (f64)rdf32(0x817fdfb8u));
            f5 = px_pack((f64)rdf32(0x817fdfc4u), (f64)rdf32(0x817fdfc4u));
            f6 = px_pack((f64)rdf32(0x817fdfc0u), (f64)rdf32(0x817fdfc0u));
            f5 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f5), px_lo(f2)));
            f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f3), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f3), px_lo(f5)))), px_lo(f5)), px_lo(f5));
            f2 = (f64)(f32)f1;
            wrf32d(0x817fdfe0u, f1);
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f2)));
            wrf32d(0x817fdfa8u, px_hi(f1));
            wrf32d(0x817fdfa8u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f2)));
            f2 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            f2 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f2)), (f64)(f32)px_psub(px_lo(f7), px_lo(f2)));
            f7 = px_pack((f64)rdf32(0x817fdfbcu), 1.0);
            wrf32d(0x817fdfb4u, px_hi(f2));
            wrf32d(0x817fdfb4u, px_lo(f2));
            f2 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f1)), (f64)(f32)px_psub(px_lo(f7), px_lo(f1)));
            f1 = px_pack((f64)rdf32(0x817fdfb4u), 1.0);
            wrf32d(0x817fdfbcu, px_hi(f2));
            f4 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            f3 = px_pack((f64)rdf32(0x817fdfb8u), (f64)rdf32(0x817fdfb8u));
            f9 = px_pack((f64)(f32)px_pmul(px_hi(f9), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f9), px_lo(f3)));
            f1 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f8), px_hi(f1), px_hi(f9)), (f64)(f32)px_pfma(px_lo(f8), px_lo(f1), px_lo(f9)))), px_lo(f9)), px_lo(f9));
            f3 = (f64)(f32)f1;
            wrf32d(0x817fdfdcu, f1);
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f3)));
            f10 = px_pack((f64)rdf32(0x817fdfd4u), 1.0);
            wrf32d(0x817fdfa8u, px_hi(f1));
            wrf32d(0x817fdfa8u, px_lo(f1));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f10), px_hi(f3)));
            f3 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            wrf32d(0x817fdfb0u, px_hi(f1));
            f3 = px_pack((f64)(f32)px_psub(px_hi(f4), px_hi(f3)), (f64)(f32)px_psub(px_lo(f4), px_lo(f3)));
            wrf32d(0x817fdfb4u, px_hi(f3));
            wrf32d(0x817fdfb4u, px_lo(f3));
            f3 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
            f2 = px_pack((f64)rdf32(0x817fdfb4u), (f64)rdf32(0x817fdfb4u));
            wrf32d(0x817fdfbcu, px_hi(f3));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
            f1 = (f64)rdf32(0x817fdfbcu);
            f31 = px_pack((f64)(f32)px_padd(px_hi(px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f1), px_lo(f2)))), px_lo(f2)), px_lo(f2));
            if (!(f31 > f0)) {
                wrf32d(param_2 + 8u, (f64)rdf32(0x805779bcu));
            } else {
                f0 = (f64)rdf32(0x805779bcu);
                if (!((f31 < f0) || (f31 == f0))) {
                    a.f[0] = f31;
                    f1 = tc_callf(0x802eff54u, &a);
                    f0 = (f64)(f32)px_pmul(f31, f1);
                }
                wrf32d(param_2 + 8u, f0);
                a.r[0] = 0x817fdfc0u;
                a.r[1] = 0x817fdfb4u;
                a.r[2] = 0x817fdfa8u;
                (void)tc_call(0x80234484u, &a);
                f3 = px_pack((f64)rdf32(0x817fdfd0u), (f64)rdf32(0x817fdfd0u));
                f2 = px_pack((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfacu));
                f1 = px_pack((f64)rdf32(0x817fdfccu), 1.0);
                f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f2)));
                f2 = px_pack((f64)rdf32(0x817fdfa8u), 1.0);
                f2 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f2), px_hi(f3)), (f64)(f32)px_pfma(px_lo(f1), px_lo(f2), px_lo(f3)));
                f1 = px_pack((f64)(f32)px_padd(px_hi(f2), px_lo(f3)), px_lo(f3));
                if (f1 < (f64)rdf32(0x805779bcu)) {
                    f3 = rdf64(0x805779d8u);
                    f1 = (f64)(f32)px_pmul((f64)rdf32(param_2 + 4u), f3);
                    f0 = (f64)(f32)px_pmul((f64)rdf32(param_2 + 8u), f3);
                    wrf32d(param_2, (f64)(f32)px_pmul((f64)rdf32(param_2), f3));
                    wrf32d(param_2 + 4u, f1);
                    wrf32d(param_2 + 8u, f0);
                }
            }
        }
    }
    return f1;
}
