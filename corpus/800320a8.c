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

static f64 px_sfma(f64 a, f64 c, f64 b)
{
    f64 s = a * c + b;
    if (s != s) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        if (c != c) return px_pq(c);
        return px_b2f(0x7ff8000000000000ull);
    }
    return s;
}

void fn_800320a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, f64 param_f1)
{
    u32 t8 = 0, t14 = 0, t30 = 0, t36 = 0, t70 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f27 = 0.0, f28 = 0.0;
    f64 f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80571e4cu);
    f30 = (f64)(f32)px_pmul((f64)(f32)px_pmul((f64)rdf32(0x80571e48u), param_f1), (f64)(f32)px_psub(f31, param_f1));
    f9 = (f64)(f32)px_sfma((f64)rdf32(param_2 + 0xcu), (f64)rdf32(param_5 + 0xcu), (f64)(f32)px_sfma((f64)rdf32(param_2 + 8u), (f64)rdf32(param_5 + 8u), (f64)(f32)px_sfma((f64)rdf32(param_2), (f64)rdf32(param_5), (f64)(f32)px_pmul((f64)rdf32(param_2 + 4u), (f64)rdf32(param_5 + 4u)))));
    if (f9 < (f64)rdf32(0x80571e50u)) {
        f9 = -f9;
        f31 = -f31;
    }
    f0 = (f64)rdf32(0x80571e54u);
    if ((f9 < f0) || (f9 == f0)) {
        a.f[0] = f9;
        f1 = tc_callf(0x80262c60u, &a);
        f27 = (f64)(f32)f1;
        a.f[0] = f27;
        f1 = tc_callf(0x80262b10u, &a);
        f9 = (f64)rdf32(0x80571e4cu);
        f28 = (f64)(f32)px_pdiv(f9, (f64)(f32)f1);
        a.f[0] = (f64)(f32)px_pmul((f64)(f32)px_psub(f9, param_f1), f27);
        f1 = tc_callf(0x80262b10u, &a);
        f0 = (f64)(f32)f1;
        f1 = (f64)(f32)px_pmul(param_f1, f27);
        f27 = (f64)(f32)px_pmul(f28, f0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f31 = (f64)(f32)px_pmul(f31, (f64)(f32)px_pmul(f28, (f64)(f32)f1));
    } else {
        f31 = (f64)(f32)px_pmul(f31, param_f1);
        f27 = (f64)(f32)px_psub((f64)rdf32(0x80571e4cu), param_f1);
    }
    f1 = px_pack((f64)rdf32(param_2), (f64)rdf32(param_2));
    t8 = param_2 + 8u;
    f2 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f3 = px_pack((f64)rdf32(param_5), (f64)rdf32(param_5));
    t14 = param_5 + 8u;
    f4 = px_pack((f64)rdf32(t14), (f64)rdf32(t14));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f27)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f27)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f27)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f27)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f31), px_lo(f5)));
    f8 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f6)));
    wrf32d(0x817fdf88u, px_hi(f7));
    wrf32d(0x817fdf88u, px_lo(f7));
    wrf32d(0x817fdf90u, px_hi(f8));
    wrf32d(0x817fdf90u, px_lo(f8));
    f31 = (f64)rdf32(0x80571e4cu);
    f1 = (f64)(f32)px_sfma((f64)rdf32(param_3 + 0xcu), (f64)rdf32(param_4 + 0xcu), (f64)(f32)px_sfma((f64)rdf32(param_3 + 8u), (f64)rdf32(param_4 + 8u), (f64)(f32)px_sfma((f64)rdf32(param_3), (f64)rdf32(param_4), (f64)(f32)px_pmul((f64)rdf32(param_3 + 4u), (f64)rdf32(param_4 + 4u)))));
    if (f1 < (f64)rdf32(0x80571e50u)) {
        f1 = -f1;
        f31 = -f31;
    }
    f0 = (f64)rdf32(0x80571e54u);
    if ((f1 < f0) || (f1 == f0)) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262c60u, &a);
        f28 = (f64)(f32)f1;
        a.f[0] = f28;
        f1 = tc_callf(0x80262b10u, &a);
        f9 = (f64)rdf32(0x80571e4cu);
        f27 = (f64)(f32)px_pdiv(f9, (f64)(f32)f1);
        a.f[0] = (f64)(f32)px_pmul((f64)(f32)px_psub(f9, param_f1), f28);
        f1 = tc_callf(0x80262b10u, &a);
        f0 = (f64)(f32)f1;
        f1 = (f64)(f32)px_pmul(param_f1, f28);
        f28 = (f64)(f32)px_pmul(f27, f0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f31 = (f64)(f32)px_pmul(f31, (f64)(f32)px_pmul(f27, (f64)(f32)f1));
    } else {
        f31 = (f64)(f32)px_pmul(f31, param_f1);
        f28 = (f64)(f32)px_psub((f64)rdf32(0x80571e4cu), param_f1);
    }
    f1 = px_pack((f64)rdf32(param_3), (f64)rdf32(param_3));
    t30 = param_3 + 8u;
    f2 = px_pack((f64)rdf32(t30), (f64)rdf32(t30));
    f3 = px_pack((f64)rdf32(param_4), (f64)rdf32(param_4));
    t36 = param_4 + 8u;
    f4 = px_pack((f64)rdf32(t36), (f64)rdf32(t36));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f28)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f28)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f31), px_lo(f5)));
    f8 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f6)));
    wrf32d(0x817fdf78u, px_hi(f7));
    wrf32d(0x817fdf78u, px_lo(f7));
    wrf32d(0x817fdf80u, px_hi(f8));
    wrf32d(0x817fdf80u, px_lo(f8));
    f31 = (f64)rdf32(0x80571e4cu);
    f1 = (f64)(f32)px_sfma((f64)rdf32(0x817fdf94u), (f64)rdf32(0x817fdf84u), (f64)(f32)px_sfma((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf80u), (f64)(f32)px_sfma((f64)rdf32(0x817fdf88u), (f64)rdf32(0x817fdf78u), (f64)(f32)px_pmul((f64)rdf32(0x817fdf8cu), (f64)rdf32(0x817fdf7cu)))));
    if (f1 < (f64)rdf32(0x80571e50u)) {
        f1 = -f1;
        f31 = -f31;
    }
    f0 = (f64)rdf32(0x80571e54u);
    if ((f1 < f0) || (f1 == f0)) {
        a.f[0] = f1;
        f1 = tc_callf(0x80262c60u, &a);
        f28 = (f64)(f32)f1;
        a.f[0] = f28;
        f1 = tc_callf(0x80262b10u, &a);
        f9 = (f64)rdf32(0x80571e4cu);
        f27 = (f64)(f32)px_pdiv(f9, (f64)(f32)f1);
        a.f[0] = (f64)(f32)px_pmul((f64)(f32)px_psub(f9, f30), f28);
        f1 = tc_callf(0x80262b10u, &a);
        f0 = (f64)(f32)f1;
        f1 = (f64)(f32)px_pmul(f30, f28);
        f28 = (f64)(f32)px_pmul(f27, f0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f31 = (f64)(f32)px_pmul(f31, (f64)(f32)px_pmul(f27, (f64)(f32)f1));
    } else {
        f31 = (f64)(f32)px_pmul(f31, f30);
        f28 = (f64)(f32)px_psub((f64)rdf32(0x80571e4cu), f30);
    }
    f1 = px_pack((f64)rdf32(0x817fdf88u), (f64)rdf32(0x817fdf88u));
    f2 = px_pack((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf90u));
    f3 = px_pack((f64)rdf32(0x817fdf78u), (f64)rdf32(0x817fdf78u));
    f4 = px_pack((f64)rdf32(0x817fdf80u), (f64)rdf32(0x817fdf80u));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f28)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f28)));
    f7 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f31), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f31), px_lo(f5)));
    f8 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f31), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f31), px_lo(f6)));
    wrf32d(param_1, px_hi(f7));
    wrf32d(param_1, px_lo(f7));
    t70 = param_1 + 8u;
    wrf32d(t70, px_hi(f8));
    wrf32d(t70, px_lo(f8));
    return;
}
