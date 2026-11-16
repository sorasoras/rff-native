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

static f64 px_pneg(f64 b)
{
    return px_b2f(px_f2b(b) ^ 0x8000000080000000ull);
}

static f64 px_pmg01(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

static f64 px_pmg10(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) >> 32));
}

static f64 px_pmg11(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) & 0xffffffffull));
}

f64 fn_80234484(s32 param_1, s32 param_2, s32 param_3)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, t1 = 0.0, t4 = 0.0;
    t1 = (f64)rdf32((u32)param_2);
    f1 = px_pack(t1, (f64)rdf32((u32)param_2));
    f2 = (f64)rdf32((u32)param_1 + 8u);
    t4 = (f64)rdf32((u32)param_1);
    f0 = px_pack(t4, (f64)rdf32((u32)param_1));
    f6 = px_pmg10(f1, f1);
    f3 = (f64)rdf32((u32)param_2 + 8u);
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f2)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f2)));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f0)));
    f5 = px_pack((f64)(f32)px_pfms(px_hi(f0), px_hi(f3), px_hi(f4)), (f64)(f32)px_pfms(px_lo(f0), px_lo(f3), px_lo(f4)));
    wrf32d((u32)param_3, px_hi(px_pmg11(f5, f5)));
    wrf32d((u32)param_3 + 4u, px_lo(px_pneg(px_pmg01(f5, px_pack((f64)(f32)px_pfms(px_hi(f0), px_hi(f6), px_hi(f7)), (f64)(f32)px_pfms(px_lo(f0), px_lo(f6), px_lo(f7)))))));
    return f1;
}
