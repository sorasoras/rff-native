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

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
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

f64 fn_800326f4(s32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, t7 = 0, t15 = 0, t19 = 0, t27 = 0, t31 = 0, t43 = 0, t73 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f28 = 0.0;
    f64 f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
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
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfb8u, 0u);
    a.f[0] = param_f1;
    a.r[0] = (u32)param_2;
    a.r[1] = 0x817fdf8cu;
    a.r[2] = 0x817fdf88u;
    f1 = tc_callf(0x800323ccu, &a);
    r0 = rd32(0x817fdf8cu);
    f31 = f1;
    r5 = rd32(0x817fdf88u);
    r4 = rd32((u32)param_2 + 0x10u);
    r3 = r4 + ((r0 << 3u) & 0xfffffff8u);
    f0 = (f64)rdf32((u32)param_2 + 4u);
    f9 = (f64)rdf32((u32)param_2 + 8u);
    r4 = r4 + ((r5 << 3u) & 0xfffffff8u);
    if (r0 == 0xffffffffu) {
        f10 = px_pmg00(f9, f9);
        f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
        t7 = r4 + 4u;
        f2 = px_pack(px_dq(0u, t7), px_dq(0u, t7));
        f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
        f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
        wrf32d((u32)param_1, px_hi(f3));
        wrf32d((u32)param_1, px_lo(f3));
        t15 = (u32)param_1 + 8u;
        wrf32d(t15, px_hi(f4));
        wrf32d(t15, px_lo(f4));
    } else {
        if (r5 == 0xffffffffu) {
            f10 = px_pmg00(f9, f9);
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            t19 = r3 + 4u;
            f2 = px_pack(px_dq(0u, t19), px_dq(0u, t19));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d((u32)param_1, px_hi(f3));
            wrf32d((u32)param_1, px_lo(f3));
            t27 = (u32)param_1 + 8u;
            wrf32d(t27, px_hi(f4));
            wrf32d(t27, px_lo(f4));
        } else {
            f10 = px_pmg00(f9, f9);
            f1 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            t31 = r3 + 4u;
            f2 = px_pack(px_dq(0u, t31), px_dq(0u, t31));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fdf90u, px_hi(f3));
            wrf32d(0x817fdf90u, px_lo(f3));
            wrf32d(0x817fdf98u, px_hi(f4));
            wrf32d(0x817fdf98u, px_lo(f4));
            f10 = px_pmg00(f9, f9);
            f1 = px_pack(px_dq(0u, r4), px_dq(0u, r4));
            t43 = r4 + 4u;
            f2 = px_pack(px_dq(0u, t43), px_dq(0u, t43));
            f3 = px_pack((f64)(f32)px_pfma(px_hi(f1), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f1), px_hi(f0), px_lo(f10)));
            f4 = px_pack((f64)(f32)px_pfma(px_hi(f2), px_hi(f0), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f2), px_hi(f0), px_lo(f10)));
            wrf32d(0x817fdfa0u, px_hi(f3));
            wrf32d(0x817fdfa0u, px_lo(f3));
            wrf32d(0x817fdfa8u, px_hi(f4));
            wrf32d(0x817fdfa8u, px_lo(f4));
            f30 = (f64)rdf32(0x80571e4cu);
            f1 = (f64)(f32)px_sfma((f64)rdf32(0x817fdf9cu), (f64)rdf32(0x817fdfacu), (f64)(f32)px_sfma((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdfa8u), (f64)(f32)px_sfma((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdfa0u), (f64)(f32)px_pmul((f64)rdf32(0x817fdf94u), (f64)rdf32(0x817fdfa4u)))));
            if (f1 < (f64)rdf32(0x80571e50u)) {
                f1 = -f1;
                f30 = -f30;
            }
            f0 = (f64)rdf32(0x80571e54u);
            if ((f1 < f0) || (f1 == f0)) {
                a.f[0] = f1;
                f1 = tc_callf(0x80262c60u, &a);
                f28 = (f64)(f32)f1;
                a.f[0] = f28;
                f1 = tc_callf(0x80262b10u, &a);
                f9 = (f64)rdf32(0x80571e4cu);
                f29 = (f64)(f32)px_pdiv(f9, (f64)(f32)f1);
                a.f[0] = (f64)(f32)px_pmul((f64)(f32)px_psub(f9, f31), f28);
                f1 = tc_callf(0x80262b10u, &a);
                f0 = (f64)(f32)f1;
                f1 = (f64)(f32)px_pmul(f31, f28);
                f31 = (f64)(f32)px_pmul(f29, f0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262b10u, &a);
                f30 = (f64)(f32)px_pmul(f30, (f64)(f32)px_pmul(f29, (f64)(f32)f1));
            } else {
                f30 = (f64)(f32)px_pmul(f30, f31);
                f31 = (f64)(f32)px_psub((f64)rdf32(0x80571e4cu), f31);
            }
            f1 = px_pack((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf90u));
            f2 = px_pack((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf98u));
            f3 = px_pack((f64)rdf32(0x817fdfa0u), (f64)rdf32(0x817fdfa0u));
            f4 = px_pack((f64)rdf32(0x817fdfa8u), (f64)rdf32(0x817fdfa8u));
            f5 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f31)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f31)));
            f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f31)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f31)));
            f7 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f30), px_hi(f5)), (f64)(f32)px_pfma(px_lo(f3), px_hi(f30), px_lo(f5)));
            f8 = px_pack((f64)(f32)px_pfma(px_hi(f4), px_hi(f30), px_hi(f6)), (f64)(f32)px_pfma(px_lo(f4), px_hi(f30), px_lo(f6)));
            wrf32d((u32)param_1, px_hi(f7));
            wrf32d((u32)param_1, px_lo(f7));
            t73 = (u32)param_1 + 8u;
            wrf32d(t73, px_hi(f8));
            wrf32d(t73, px_lo(f8));
        }
    }
    return f1;
}
