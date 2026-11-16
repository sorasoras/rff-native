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

u32 fn_80318e20(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    r0 = rd32(param_1 + 4u);
    r5 = rd32(param_1);
    wr32(0x817fdfecu, r0);
    f1 = (f64)px_w2f(r0);
    c0lt = f1 < (f64)rdf32(0x805778e0u);
    wr32(0x817fdff0u, rd32(param_1 + 8u));
    if (c0lt || f1 > (f64)rdf32(0x805778e4u)) {
        r3 = 3u;
    } else if ((param_2 & 1u) == 0u || !(f1 < (f64)rdf32(0x805778e8u))) {
        if ((param_2 & 2u) == 0u || !((f64)rdf32(0x817fdfecu) > (f64)rdf32(0x805778e8u))) {
            f0 = (f64)px_w2f(r5);
            f2 = (f64)rdf32(0x805778e0u);
            if (!(f0 < f2)) {
                f1 = (f64)rdf32(0x805778e4u);
                if (!(f0 > f1)) {
                    f0 = (f64)rdf32(0x817fdff0u);
                    if (f0 < f2 || f0 > f1) {
                        r3 = 3u;
                        return r3;
                    }
                    f2 = px_pack((f64)px_w2f(r5), (f64)px_w2f(r5));
                    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f2)));
                    f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f2)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f2)));
                    f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_lo(f2)), px_lo(f2));
                    if (!(f0 > f1)) {
                        if (f1 != f0) {
                            if (param_2 == 0u || (f64)rdf32(0x805778e8u) != (f64)rdf32(0x817fdfecu)) {
                                r3 = 2u;
                                return r3;
                            }
                            r3 = 1u;
                            return r3;
                        }
                        r3 = 1u;
                        return r3;
                    }
                    r3 = 3u;
                    return r3;
                }
            }
            r3 = 3u;
        } else {
            r3 = 3u;
        }
    } else {
        r3 = 3u;
    }
    return r3;
}
