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

static f64 px_qscale(u32 sc)
{
    f64 m = 1.0;
    s32 n = (s32)(sc & 0x3fu);
    if (n >= 32) n -= 64;
    for (; n > 0; n--) m *= 2.0;
    for (; n < 0; n++) m *= 0.5;
    return m;
}

static f64 px_dq(u32 g, u32 ea)
{
    u32 t = (g >> 16) & 7u;
    f64 m = px_qscale(g >> 24);
    if (t == 4u) return (f64)(f32)((f64)rd8(ea) / m);
    if (t == 5u) return (f64)(f32)((f64)rd16(ea) / m);
    if (t == 6u) return (f64)(f32)((f64)(s8)rd8(ea) / m);
    if (t == 7u) return (f64)(f32)((f64)(s16)rd16(ea) / m);
    return (f64)rdf32(ea);
}

u64 fn_80039104(s32 param_1, s32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6, u32 param_7, s32 param_8)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r9 = 0, t15 = 0, t18 = 0, t21 = 0, t24 = 0, t27 = 0, t33 = 0, t36 = 0;
    u32 t39 = 0, t42 = 0, t45 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f20 = 0.0, f21 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    r4 = (u32)param_2;
    r9 = param_7;
    f25 = (f64)rdf32(0x80571f10u);
    f2 = px_pack((f64)rdf32((u32)param_1), (f64)rdf32((u32)param_1));
    t15 = (u32)param_1 + 8u;
    f3 = px_pack((f64)rdf32(t15), (f64)rdf32(t15));
    t18 = (u32)param_1 + 0x10u;
    f4 = px_pack((f64)rdf32(t18), (f64)rdf32(t18));
    t21 = (u32)param_1 + 0x18u;
    f5 = px_pack((f64)rdf32(t21), (f64)rdf32(t21));
    t24 = (u32)param_1 + 0x20u;
    f6 = px_pack((f64)rdf32(t24), (f64)rdf32(t24));
    t27 = (u32)param_1 + 0x28u;
    f7 = px_pack((f64)rdf32(t27), (f64)rdf32(t27));
    f8 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
    t33 = (u32)param_2 + 8u;
    f9 = px_pack((f64)rdf32(t33), (f64)rdf32(t33));
    t36 = (u32)param_2 + 0x10u;
    f10 = px_pack((f64)rdf32(t36), (f64)rdf32(t36));
    t39 = (u32)param_2 + 0x18u;
    f11 = px_pack((f64)rdf32(t39), (f64)rdf32(t39));
    t42 = (u32)param_2 + 0x20u;
    f12 = px_pack((f64)rdf32(t42), (f64)rdf32(t42));
    t45 = (u32)param_2 + 0x28u;
    f13 = px_pack((f64)rdf32(t45), (f64)rdf32(t45));
    f21 = px_pack(px_dq(0u, param_3), px_dq(0u, param_3));
    f21 = px_pack((f64)(f32)px_pmul(px_hi(f21), px_hi(f25)), (f64)(f32)px_pmul(px_lo(f21), px_hi(f25)));
    f20 = px_pack((f64)rdf32(param_4), 1.0);
    ctr = (u32)param_8;
    if (param_8 > 0) {
        do {
            r3 = (u32)rd16(r9);
            r0 = ((r3 << 2u) & 0xfffffffcu) - r3;
            r3 = (r0 << 1u) & 0xfffffffeu;
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = (u32)param_5 + r3;
            r4 = (u32)param_6 + r0;
            f0 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f1 = px_pack(px_dq(0u, r3 + 4u), 1.0);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f20)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f20)));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f20)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f20)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f30)));
            f28 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f28)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f1), px_lo(f30)));
            f28 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f28)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f7), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f7), px_lo(f1), px_lo(f30)));
            f29 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f29)), px_lo(f31));
            f28 = px_pack((f64)(f32)px_pmul(px_hi(f28), px_hi(f21)), (f64)(f32)px_pmul(px_lo(f28), px_hi(f21)));
            f29 = px_pack((f64)(f32)px_pmul(px_hi(f29), px_hi(f21)), (f64)(f32)px_pmul(px_lo(f29), px_hi(f21)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f11), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f12), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f12), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f13), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f13), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pfma(px_hi(f26), px_lo(f21), px_hi(f28)), (f64)(f32)px_pfma(px_lo(f26), px_lo(f21), px_lo(f28)));
            wrf32d(r4, px_hi(f30));
            wrf32d(r4, px_lo(f30));
            wrf32d(r4 + 8u, px_hi(px_pack((f64)(f32)px_pfma(px_hi(f27), px_lo(f21), px_hi(f29)), (f64)(f32)px_pfma(px_lo(f27), px_lo(f21), px_lo(f29)))));
            r9 = r9 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return ((u64)r9 << 0x20ull) | (u64)r4;
}
