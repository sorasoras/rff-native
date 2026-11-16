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

u64 fn_800398e8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5, u32 param_6, s32 param_7, s32 param_8, u32 param_9, u32 param_10)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r11 = 0, t21 = 0, t24 = 0, t27 = 0, t30 = 0, t33 = 0, t39 = 0, t42 = 0;
    u32 t45 = 0, t48 = 0, t51 = 0, t57 = 0, t60 = 0, t63 = 0, t66 = 0, t69 = 0, t75 = 0, t164 = 0, t173 = 0, t176 = 0;
    u32 t185 = 0, t188 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0;
    f64 f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t19 = 0.0, t22 = 0.0, t25 = 0.0, t28 = 0.0;
    f64 t31 = 0.0, t34 = 0.0, t37 = 0.0, t40 = 0.0, t43 = 0.0, t46 = 0.0, t49 = 0.0, t52 = 0.0, t55 = 0.0, t58 = 0.0, t61 = 0.0, t64 = 0.0;
    f64 t67 = 0.0, t70 = 0.0, t162 = 0.0, t165 = 0.0, t174 = 0.0, t177 = 0.0, t186 = 0.0, t189 = 0.0;
    (void)param_9;
    (void)param_10;
    r4 = (u32)param_2;
    r11 = rd32(0x817fe008u);
    r0 = (u32)rd16(0x817fe00eu);
    f23 = (f64)rdf32(0x80571f10u);
    t19 = (f64)rdf32((u32)param_1);
    f2 = px_pack(t19, (f64)rdf32((u32)param_1));
    t21 = (u32)param_1 + 8u;
    t22 = (f64)rdf32(t21);
    f3 = px_pack(t22, (f64)rdf32(t21));
    t24 = (u32)param_1 + 0x10u;
    t25 = (f64)rdf32(t24);
    f4 = px_pack(t25, (f64)rdf32(t24));
    t27 = (u32)param_1 + 0x18u;
    t28 = (f64)rdf32(t27);
    f5 = px_pack(t28, (f64)rdf32(t27));
    t30 = (u32)param_1 + 0x20u;
    t31 = (f64)rdf32(t30);
    f6 = px_pack(t31, (f64)rdf32(t30));
    t33 = (u32)param_1 + 0x28u;
    t34 = (f64)rdf32(t33);
    f7 = px_pack(t34, (f64)rdf32(t33));
    t37 = (f64)rdf32((u32)param_2);
    f8 = px_pack(t37, (f64)rdf32((u32)param_2));
    t39 = (u32)param_2 + 8u;
    t40 = (f64)rdf32(t39);
    f9 = px_pack(t40, (f64)rdf32(t39));
    t42 = (u32)param_2 + 0x10u;
    t43 = (f64)rdf32(t42);
    f10 = px_pack(t43, (f64)rdf32(t42));
    t45 = (u32)param_2 + 0x18u;
    t46 = (f64)rdf32(t45);
    f11 = px_pack(t46, (f64)rdf32(t45));
    t48 = (u32)param_2 + 0x20u;
    t49 = (f64)rdf32(t48);
    f12 = px_pack(t49, (f64)rdf32(t48));
    t51 = (u32)param_2 + 0x28u;
    t52 = (f64)rdf32(t51);
    f13 = px_pack(t52, (f64)rdf32(t51));
    t55 = (f64)rdf32((u32)param_3);
    f14 = px_pack(t55, (f64)rdf32((u32)param_3));
    t57 = (u32)param_3 + 8u;
    t58 = (f64)rdf32(t57);
    f15 = px_pack(t58, (f64)rdf32(t57));
    t60 = (u32)param_3 + 0x10u;
    t61 = (f64)rdf32(t60);
    f16 = px_pack(t61, (f64)rdf32(t60));
    t63 = (u32)param_3 + 0x18u;
    t64 = (f64)rdf32(t63);
    f17 = px_pack(t64, (f64)rdf32(t63));
    t66 = (u32)param_3 + 0x20u;
    t67 = (f64)rdf32(t66);
    f18 = px_pack(t67, (f64)rdf32(t66));
    t69 = (u32)param_3 + 0x28u;
    t70 = (f64)rdf32(t69);
    f19 = px_pack(t70, (f64)rdf32(t69));
    f21 = px_pack(px_dq(0u, (u32)param_5), px_dq(0u, (u32)param_5));
    t75 = (u32)param_5 + 2u;
    f22 = px_pack(px_dq(0u, t75), px_dq(0u, t75));
    f21 = px_pack((f64)(f32)px_pmul(px_hi(f21), px_hi(f23)), (f64)(f32)px_pmul(px_lo(f21), px_hi(f23)));
    f22 = px_pack((f64)(f32)px_pmul(px_hi(f22), px_hi(f23)), (f64)(f32)px_pmul(px_lo(f22), px_hi(f23)));
    f20 = px_pack((f64)rdf32(param_6), 1.0);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            r3 = (u32)rd16(r11);
            r0 = ((r3 << 2u) & 0xfffffffcu) - r3;
            r3 = (r0 << 1u) & 0xfffffffeu;
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = (u32)param_7 + r3;
            r4 = (u32)param_8 + r0;
            f0 = px_pack(px_dq(0u, r3), px_dq(0u, r3));
            f1 = px_pack(px_dq(0u, r3 + 4u), 1.0);
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f20)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f20)));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f20)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f20)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f4), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f5), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f5), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f6), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f7), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f7), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            f28 = px_pack((f64)(f32)px_pmul(px_hi(f26), px_hi(f21)), (f64)(f32)px_pmul(px_lo(f26), px_hi(f21)));
            f29 = px_pack((f64)(f32)px_pmul(px_hi(f27), px_hi(f21)), (f64)(f32)px_pmul(px_lo(f27), px_hi(f21)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f10), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f10), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f11), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f11), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f12), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f12), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f13), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f13), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            f28 = px_pack((f64)(f32)px_pfma(px_hi(f26), px_lo(f21), px_hi(f28)), (f64)(f32)px_pfma(px_lo(f26), px_lo(f21), px_lo(f28)));
            f29 = px_pack((f64)(f32)px_pfma(px_hi(f27), px_lo(f21), px_hi(f29)), (f64)(f32)px_pfma(px_lo(f27), px_lo(f21), px_lo(f29)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f14), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f14), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f15), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f15), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f16), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f16), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f17), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f17), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f18), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f18), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f19), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f19), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            f28 = px_pack((f64)(f32)px_pfma(px_hi(f26), px_hi(f22), px_hi(f28)), (f64)(f32)px_pfma(px_lo(f26), px_hi(f22), px_lo(f28)));
            f29 = px_pack((f64)(f32)px_pfma(px_hi(f27), px_hi(f22), px_hi(f29)), (f64)(f32)px_pfma(px_lo(f27), px_hi(f22), px_lo(f29)));
            t162 = (f64)rdf32((u32)param_4);
            f24 = px_pack(t162, (f64)rdf32((u32)param_4));
            t164 = (u32)param_4 + 8u;
            t165 = (f64)rdf32(t164);
            f25 = px_pack(t165, (f64)rdf32(t164));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f24), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f25), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f25), px_lo(f1), px_lo(f30)));
            f26 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f26)), px_lo(f31));
            t173 = (u32)param_4 + 0x10u;
            t174 = (f64)rdf32(t173);
            f24 = px_pack(t174, (f64)rdf32(t173));
            t176 = (u32)param_4 + 0x18u;
            t177 = (f64)rdf32(t176);
            f25 = px_pack(t177, (f64)rdf32(t176));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f24), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f25), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f25), px_lo(f1), px_lo(f30)));
            f26 = px_pack(px_hi(f31), (f64)(f32)px_padd(px_hi(f31), px_lo(f26)));
            t185 = (u32)param_4 + 0x20u;
            t186 = (f64)rdf32(t185);
            f24 = px_pack(t186, (f64)rdf32(t185));
            t188 = (u32)param_4 + 0x28u;
            t189 = (f64)rdf32(t188);
            f25 = px_pack(t189, (f64)rdf32(t188));
            f30 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f24), px_lo(f0)));
            f31 = px_pack((f64)(f32)px_pfma(px_hi(f25), px_hi(f1), px_hi(f30)), (f64)(f32)px_pfma(px_lo(f25), px_lo(f1), px_lo(f30)));
            f27 = px_pack((f64)(f32)px_padd(px_hi(f31), px_lo(f27)), px_lo(f31));
            f28 = px_pack((f64)(f32)px_pfma(px_hi(f26), px_lo(f22), px_hi(f28)), (f64)(f32)px_pfma(px_lo(f26), px_lo(f22), px_lo(f28)));
            f29 = px_pack((f64)(f32)px_pfma(px_hi(f27), px_lo(f22), px_hi(f29)), (f64)(f32)px_pfma(px_lo(f27), px_lo(f22), px_lo(f29)));
            wrf32d(r4, px_lo(f28));
            wrf32d(r4 + 8u, px_hi(f29));
            r11 = r11 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return ((u64)r11 << 0x20ull) | (u64)r4;
}
