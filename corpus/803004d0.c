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

void fn_803004d0(s32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 t6 = 0, t36 = 0, t39 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
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
    f31 = (f64)rdf32((u32)param_1 + 0x24u);
    wr32(0x817fdfccu, 0u);
    f0 = (f64)rdf32(0x80577700u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc0u, 0u);
    if (f0 == f31) {
        wrf32d(param_4, (f64)rdf32(0x805776fcu));
    } else {
        f2 = px_pack((f64)rdf32((u32)param_3), (f64)rdf32((u32)param_3));
        t6 = (u32)param_2 + 0x30u;
        f1 = px_pack((f64)rdf32(t6), (f64)rdf32(t6));
        f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
        f2 = px_pack((f64)rdf32((u32)param_3 + 8u), 1.0);
        f1 = px_pack((f64)rdf32((u32)param_2 + 0x38u), 1.0);
        wrf32d(0x817fdfa8u, px_hi(f0));
        wrf32d(0x817fdfa8u, px_lo(f0));
        wrf32d(0x817fdfb0u, px_hi(px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)))));
        a.r[0] = 0x817fdfa8u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(0x80577700u)) {
            f2 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            f3 = (f64)(f32)px_pdiv((f64)rdf32(0x805776fcu), f1);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f3)));
            f2 = px_pack((f64)rdf32(0x817fdfb0u), 1.0);
            wrf32d(0x817fdfa8u, px_hi(f0));
            wrf32d(0x817fdfa8u, px_lo(f0));
            wrf32d(0x817fdfb0u, px_hi(px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f3)))));
        }
        f0 = (f64)rdf32(0x80577700u);
        wr32(0x817fdfbcu, (u32)rd8((u32)param_3 + 0x1eu));
        f2 = rdf64(0x80577708u);
        wr32(0x817fdfb8u, 0x43300000u);
        f30 = (f64)(f32)px_pmul((f64)(f32)px_psub(rdf64(0x817fdfb8u), f2), (f64)rdf32(0x80577718u));
        if (f1 > f0) {
            f2 = px_pack((f64)rdf32(0x817fdfacu), (f64)rdf32(0x817fdfacu));
            t36 = (u32)param_3 + 0x10u;
            f1 = px_pack((f64)rdf32(t36), (f64)rdf32(t36));
            f4 = f2;
            t39 = (u32)param_2 + 0x40u;
            f3 = px_pack((f64)rdf32(t39), (f64)rdf32(t39));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f1)));
            f0 = px_pack((f64)rdf32(0x817fdfa8u), 1.0);
            f1 = px_pack((f64)rdf32((u32)param_3 + 0xcu), 1.0);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f3)));
            f3 = px_pack((f64)rdf32((u32)param_2 + 0x3cu), 1.0);
            f1 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f1), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f1), px_lo(f2)));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f3), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f3), px_lo(f4)));
            f29 = -px_pack((f64)(f32)px_padd(px_hi(f1), px_lo(f2)), px_lo(f2));
            f1 = -px_pack((f64)(f32)px_padd(px_hi(f3), px_lo(f4)), px_lo(f4));
        } else {
            a.r[0] = (u32)param_3 + 0xcu;
            f1 = tc_callf(0x80234440u, &a);
            f29 = -f1;
            a.r[0] = (u32)param_2 + 0x3cu;
            f1 = tc_callf(0x80234440u, &a);
        }
        f1 = (f64)(f32)px_pmul(f1, f30);
        f29 = (f64)(f32)px_pmul(f29, f30);
        if (f1 > f31) {
            f0 = (f64)rdf32(0x80577700u);
        } else {
            if ((f29 > f31) || (f29 == f31)) {
                f0 = (f64)rdf32(0x8057771cu);
            } else {
                f1 = (f64)(f32)px_psub(f31, f1);
                f0 = (f64)(f32)px_pdiv(f1, (f64)(f32)px_psub(f31, f29));
            }
        }
        wrf32d(param_4, f0);
    }
    return;
}
