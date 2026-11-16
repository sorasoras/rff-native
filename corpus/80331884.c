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

void fn_80331884(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6, u32 param_7, u32 param_8)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r10 = 0, r11 = 0, r20 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0, t71 = 0, t74 = 0, t79 = 0, t84 = 0, t109 = 0, t112 = 0, t200 = 0, t263 = 0, t266 = 0;
    u32 t271 = 0, t281 = 0, t298 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f24 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    f2 = (f64)rdf32(0x80577cf0u);
    f30 = (f64)rdf32(0x80577d00u);
    f31 = (f64)rdf32(0x80577d04u);
    f11 = (f64)(f32)px_pmul(f30, f2);
    f5 = px_pack((f64)rdf32((u32)param_6), (f64)rdf32((u32)param_6));
    f29 = rdf64(0x80577d08u);
    f24 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f11)));
    f8 = (f64)(f32)px_padd(f30, (f64)(f32)px_psub(f11, f2));
    f10 = (f64)(f32)px_padd(f30, (f64)(f32)px_padd((f64)(f32)px_pmul(f31, f2), f2));
    f6 = px_pack((f64)rdf32((u32)param_5), (f64)rdf32((u32)param_5));
    f1 = (f64)(f32)px_psub(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull), f29);
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f24), px_hi(f8)));
    f12 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f10)));
    f24 = px_pack((f64)rdf32((u32)param_4 + 8u), 1.0);
    f3 = (f64)(f32)px_psub(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull), f29);
    f6 = px_pack((f64)rdf32((u32)param_5 + 8u), 1.0);
    f28 = (f64)(f32)ppc_fres(f1);
    f5 = px_pack((f64)rdf32((u32)param_6 + 8u), 1.0);
    f9 = px_pack((f64)(f32)px_padd(px_hi(f13), px_hi(f12)), (f64)(f32)px_padd(px_lo(f13), px_lo(f12)));
    f13 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f24), px_hi(f8)));
    f12 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f10)));
    wrf32d(0x817fdd48u, px_hi(f9));
    wrf32d(0x817fdd48u, px_lo(f9));
    f4 = f7;
    f7 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f11)));
    f5 = px_pack((f64)rdf32(0x817fdd48u), (f64)rdf32(0x817fdd48u));
    f9 = px_pack((f64)(f32)px_padd(px_hi(f13), px_hi(f12)), (f64)(f32)px_padd(px_lo(f13), px_lo(f12)));
    f27 = (f64)(f32)ppc_fres(f3);
    f6 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f4)), (f64)(f32)px_padd(px_lo(f5), px_lo(f4)));
    f2 = px_pack((f64)(f32)px_padd(px_hi(f28), px_hi(f28)), (f64)(f32)px_padd(px_lo(f28), px_lo(f28)));
    f0 = px_pack((f64)(f32)px_pmul(px_hi(f28), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f28), px_lo(f28)));
    f5 = px_pack((f64)(f32)px_padd(px_hi(f27), px_hi(f27)), (f64)(f32)px_padd(px_lo(f27), px_lo(f27)));
    f4 = px_pack((f64)(f32)px_pmul(px_hi(f27), px_hi(f27)), (f64)(f32)px_pmul(px_lo(f27), px_lo(f27)));
    wrf32d(0x817fdd3cu, px_hi(f6));
    wrf32d(0x817fdd3cu, px_lo(f6));
    f28 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f1), px_hi(f0), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f1), px_lo(f0), px_lo(f2))));
    f27 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f3), px_hi(f4), px_hi(f5))), px_pfnm((f64)(f32)px_pfms(px_lo(f3), px_lo(f4), px_lo(f5))));
    wrf32d(0x817fdd44u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f7)), (f64)(f32)px_padd(px_lo(f9), px_lo(f7)))));
    t71 = (u32)param_4 + 0xcu;
    f2 = px_pack((f64)rdf32(t71), (f64)rdf32(t71));
    t74 = (u32)param_5 + 0xcu;
    f4 = px_pack((f64)rdf32(t74), (f64)rdf32(t74));
    r28 = 1u;
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f8)));
    t79 = (u32)param_4 + 0x18u;
    f2 = px_pack((f64)rdf32(t79), (f64)rdf32(t79));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f10)));
    t84 = (u32)param_5 + 0x18u;
    f1 = px_pack((f64)rdf32(t84), (f64)rdf32(t84));
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f8)));
    f9 = (f64)rdf32((u32)param_6 + 0x24u);
    wrf32d(0x817fdd90u, px_hi(f6));
    wrf32d(0x817fdd90u, px_lo(f6));
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f10)));
    f4 = px_pack((f64)rdf32((u32)param_5 + 0x14u), 1.0);
    f9 = (f64)(f32)px_pmul(f9, f11);
    wrf32d(0x817fddccu, px_hi(f2));
    wrf32d(0x817fddccu, px_lo(f2));
    f2 = px_pack((f64)rdf32((u32)param_4 + 0x14u), 1.0);
    wrf32d(0x817fdd9cu, px_hi(f5));
    wrf32d(0x817fdd9cu, px_lo(f5));
    f5 = px_pack((f64)(f32)px_pmul(px_hi(f4), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f4), px_hi(f10)));
    f6 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f8)));
    f2 = px_pack((f64)rdf32((u32)param_4 + 0x20u), 1.0);
    f2 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f8)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f8)));
    f8 = (f64)(f32)px_pmul((f64)rdf32((u32)param_4 + 0x24u), f8);
    f7 = (f64)(f32)px_pmul((f64)rdf32((u32)param_5 + 0x24u), f10);
    t109 = (u32)param_6 + 0xcu;
    f3 = px_pack((f64)rdf32(t109), (f64)rdf32(t109));
    t112 = (u32)param_6 + 0x18u;
    f0 = px_pack((f64)rdf32(t112), (f64)rdf32(t112));
    wrf32d(0x817fddd8u, px_hi(f1));
    wrf32d(0x817fddd8u, px_lo(f1));
    f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f11)));
    f7 = (f64)(f32)px_padd(f8, f7);
    f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f11)));
    f12 = px_pack((f64)rdf32(0x817fdd90u), (f64)rdf32(0x817fdd90u));
    f4 = px_pack((f64)rdf32(0x817fdd9cu), (f64)rdf32(0x817fdd9cu));
    f7 = (f64)(f32)px_padd(f9, f7);
    wrf32d(0x817fdda8u, px_hi(f3));
    wrf32d(0x817fdda8u, px_lo(f3));
    f4 = px_pack((f64)(f32)px_padd(px_hi(f12), px_hi(f4)), (f64)(f32)px_padd(px_lo(f12), px_lo(f4)));
    f3 = px_pack((f64)rdf32((u32)param_6 + 0x14u), 1.0);
    wrf32d(0x817fdde4u, px_hi(f0));
    wrf32d(0x817fdde4u, px_lo(f0));
    f0 = px_pack((f64)rdf32((u32)param_6 + 0x20u), 1.0);
    f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f11)));
    wrf32d(0x817fdd84u, px_hi(f4));
    wrf32d(0x817fdd84u, px_lo(f4));
    f4 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f5)), (f64)(f32)px_padd(px_lo(f6), px_lo(f5)));
    f0 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f11)));
    f1 = px_pack((f64)rdf32((u32)param_5 + 0x20u), 1.0);
    f9 = px_pack((f64)rdf32(0x817fddccu), (f64)rdf32(0x817fddccu));
    f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f1), px_hi(f10)));
    f8 = px_pack((f64)rdf32(0x817fddd8u), (f64)rdf32(0x817fddd8u));
    f11 = px_pack((f64)rdf32(0x817fdd84u), (f64)rdf32(0x817fdd84u));
    f24 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f8)), (f64)(f32)px_padd(px_lo(f9), px_lo(f8)));
    f9 = px_pack((f64)rdf32(0x817fdda8u), (f64)rdf32(0x817fdda8u));
    f10 = (f64)rdf32(0x817fdd3cu);
    f11 = px_pack((f64)(f32)px_padd(px_hi(f11), px_hi(f9)), (f64)(f32)px_padd(px_lo(f11), px_lo(f9)));
    f8 = px_pack((f64)rdf32(0x817fdde4u), (f64)rdf32(0x817fdde4u));
    wrf32d(0x817fddc0u, px_hi(f24));
    wrf32d(0x817fddc0u, px_lo(f24));
    f24 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f1)), (f64)(f32)px_padd(px_lo(f2), px_lo(f1)));
    wrf32d(0x817fdd78u, px_hi(f11));
    wrf32d(0x817fdd78u, px_lo(f11));
    f9 = px_pack((f64)rdf32(0x817fddc0u), (f64)rdf32(0x817fddc0u));
    f26 = (f64)rdf32(0x817fdd44u);
    f8 = px_pack((f64)(f32)px_padd(px_hi(f9), px_hi(f8)), (f64)(f32)px_padd(px_lo(f9), px_lo(f8)));
    f13 = (f64)rdf32(0x817fdd78u);
    wrf32d(0x817fdd80u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f3)), (f64)(f32)px_padd(px_lo(f4), px_lo(f3)))));
    wrf32d(0x817fddb4u, px_hi(f8));
    wrf32d(0x817fddb4u, px_lo(f8));
    f11 = (f64)rdf32(0x817fdd80u);
    wrf32d(0x817fdef0u, f10);
    f10 = (f64)rdf32(0x817fddb4u);
    wrf32d(0x817fddbcu, px_hi(px_pack((f64)(f32)px_padd(px_hi(f24), px_hi(f0)), (f64)(f32)px_padd(px_lo(f24), px_lo(f0)))));
    f8 = (f64)rdf32(0x817fddbcu);
    wrf32d(0x817fdef8u, f26);
    wrf32d(0x817fdefcu, f13);
    wrf32d(0x817fdf04u, f11);
    wrf32d(0x817fdf08u, f10);
    wrf32d(0x817fdf10u, f8);
    wrf32d(0x817fdf14u, f7);
    if ((s32)param_2 >= 1) {
        r30 = param_7 & 4u;
        r31 = ((param_3 << 1u) & 0xfffffffeu) + 2u;
        r29 = param_7 & 1u;
        while ((s32)r28 <= (s32)param_2) {
            r8 = rd32(0x817fdef8u);
            r7 = rd32(0x817fdefcu);
            r5 = rd32(0x817fdf04u);
            f4 = (f64)(f32)px_pmul((f64)(f32)px_psub(px_b2f((u64)(r28 ^ 0x80000000u) | 0x4330000000000000ull), f29), f28);
            r4 = rd32(0x817fdf08u);
            r0 = rd32(0x817fdf10u);
            f0 = (f64)(f32)px_pmul(f4, f4);
            f3 = (f64)rdf32(0x817fdf14u);
            f13 = px_pack((f64)rdf32((u32)param_4), (f64)rdf32((u32)param_4));
            f7 = px_pack((f64)rdf32((u32)param_5), (f64)rdf32((u32)param_5));
            f11 = (f64)(f32)px_pmul(f30, f0);
            f5 = px_pack((f64)rdf32((u32)param_6), (f64)rdf32((u32)param_6));
            f0 = (f64)(f32)px_pmul(f31, f0);
            t200 = (u32)param_4 + 0xcu;
            f2 = px_pack((f64)rdf32(t200), (f64)rdf32(t200));
            wr32(0x817fdf18u, rd32(0x817fdef0u));
            f1 = (f64)(f32)px_psub(f11, f4);
            f0 = (f64)(f32)px_padd(f0, f4);
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f11)));
            f5 = px_pack((f64)rdf32((u32)param_6 + 8u), 1.0);
            f10 = (f64)(f32)px_padd(f30, f1);
            f9 = (f64)(f32)px_padd(f30, f0);
            wrf32d(0x817fdcb8u, px_hi(f4));
            wrf32d(0x817fdcb8u, px_lo(f4));
            f4 = px_pack((f64)(f32)px_pmul(px_hi(f5), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f5), px_hi(f11)));
            f12 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f10)));
            f13 = px_pack((f64)rdf32((u32)param_4 + 8u), 1.0);
            f6 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f9)));
            f8 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f10)));
            f7 = px_pack((f64)rdf32((u32)param_5 + 8u), 1.0);
            wrf32d(0x817fdca0u, px_hi(f12));
            wrf32d(0x817fdca0u, px_lo(f12));
            f12 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f10)));
            f0 = px_pack((f64)rdf32(0x817fdcb8u), (f64)rdf32(0x817fdcb8u));
            wrf32d(0x817fdcacu, px_hi(f6));
            wrf32d(0x817fdcacu, px_lo(f6));
            f5 = px_pack((f64)rdf32(0x817fdca0u), (f64)rdf32(0x817fdca0u));
            f6 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f9)));
            f1 = px_pack((f64)rdf32(0x817fdcacu), (f64)rdf32(0x817fdcacu));
            f2 = px_pack((f64)rdf32((u32)param_4 + 0x14u), 1.0);
            f5 = px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f1)), (f64)(f32)px_padd(px_lo(f5), px_lo(f1)));
            wrf32d(0x817fdcdcu, px_hi(f8));
            wrf32d(0x817fdcdcu, px_lo(f8));
            f8 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f10)));
            wr32(0x817fdf20u, r8);
            wrf32d(0x817fdc94u, px_hi(f5));
            wrf32d(0x817fdc94u, px_lo(f5));
            f5 = px_pack((f64)(f32)px_padd(px_hi(f12), px_hi(f6)), (f64)(f32)px_padd(px_lo(f12), px_lo(f6)));
            f1 = px_pack((f64)rdf32(0x817fdc94u), (f64)rdf32(0x817fdc94u));
            wr32(0x817fdf24u, r7);
            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f0)), (f64)(f32)px_padd(px_lo(f1), px_lo(f0)));
            wrf32d(0x817fdc88u, px_hi(f0));
            wrf32d(0x817fdc88u, px_lo(f0));
            f2 = (f64)rdf32(0x817fdc88u);
            wrf32d(0x817fdc90u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f5), px_hi(f4)), (f64)(f32)px_padd(px_lo(f5), px_lo(f4)))));
            f0 = (f64)rdf32(0x817fdc90u);
            wr32(0x817fdf2cu, r5);
            wr32(0x817fdf30u, r4);
            wr32(0x817fdf38u, r0);
            wrf32d(0x817fdf3cu, f3);
            wrf32d(0x817fdec8u, f2);
            wrf32d(0x817fded0u, f0);
            t263 = (u32)param_5 + 0xcu;
            f2 = px_pack((f64)rdf32(t263), (f64)rdf32(t263));
            t266 = (u32)param_4 + 0x18u;
            f0 = px_pack((f64)rdf32(t266), (f64)rdf32(t266));
            f5 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f9)));
            t271 = (u32)param_5 + 0x18u;
            f7 = px_pack((f64)rdf32(t271), (f64)rdf32(t271));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f10)));
            f0 = px_pack((f64)rdf32(0x817fdcdcu), (f64)rdf32(0x817fdcdcu));
            t281 = (u32)param_6 + 0x18u;
            f6 = px_pack((f64)rdf32(t281), (f64)rdf32(t281));
            f4 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f5)), (f64)(f32)px_padd(px_lo(f0), px_lo(f5)));
            wrf32d(0x817fdd18u, px_hi(f2));
            wrf32d(0x817fdd18u, px_lo(f2));
            f2 = px_pack((f64)rdf32((u32)param_5 + 0x14u), 1.0);
            f13 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f11)));
            f5 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f9)));
            f0 = px_pack((f64)rdf32((u32)param_4 + 0x20u), 1.0);
            t298 = (u32)param_6 + 0xcu;
            f3 = px_pack((f64)rdf32(t298), (f64)rdf32(t298));
            f2 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f10)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f10)));
            f6 = px_pack((f64)rdf32(0x817fdd18u), (f64)rdf32(0x817fdd18u));
            wrf32d(0x817fdcd0u, px_hi(f4));
            wrf32d(0x817fdcd0u, px_lo(f4));
            f0 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f9)));
            f7 = px_pack((f64)rdf32((u32)param_5 + 0x20u), 1.0);
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f11)));
            f1 = px_pack((f64)(f32)px_pmul(px_hi(f7), px_hi(f9)), (f64)(f32)px_pmul(px_lo(f7), px_hi(f9)));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f6), px_hi(f0)), (f64)(f32)px_padd(px_lo(f6), px_lo(f0)));
            wrf32d(0x817fdcf4u, px_hi(f3));
            wrf32d(0x817fdcf4u, px_lo(f3));
            f4 = px_pack((f64)(f32)px_padd(px_hi(f8), px_hi(f5)), (f64)(f32)px_padd(px_lo(f8), px_lo(f5)));
            f7 = (f64)rdf32((u32)param_4 + 0x24u);
            wrf32d(0x817fdd0cu, px_hi(f0));
            wrf32d(0x817fdd0cu, px_lo(f0));
            f0 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f1)), (f64)(f32)px_padd(px_lo(f2), px_lo(f1)));
            f7 = (f64)(f32)px_pmul(f7, f10);
            f3 = px_pack((f64)rdf32((u32)param_6 + 0x14u), 1.0);
            f8 = (f64)rdf32((u32)param_6 + 0x24u);
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f3), px_hi(f11)));
            f6 = px_pack((f64)rdf32((u32)param_6 + 0x20u), 1.0);
            wrf32d(0x817fdd30u, px_hi(f13));
            wrf32d(0x817fdd30u, px_lo(f13));
            f13 = px_pack((f64)(f32)px_pmul(px_hi(f6), px_hi(f11)), (f64)(f32)px_pmul(px_lo(f6), px_hi(f11)));
            f24 = px_pack((f64)rdf32(0x817fdcd0u), (f64)rdf32(0x817fdcd0u));
            f12 = px_pack((f64)rdf32(0x817fdcf4u), (f64)rdf32(0x817fdcf4u));
            f10 = px_pack((f64)rdf32(0x817fdd0cu), (f64)rdf32(0x817fdd0cu));
            f24 = px_pack((f64)(f32)px_padd(px_hi(f24), px_hi(f12)), (f64)(f32)px_padd(px_lo(f24), px_lo(f12)));
            r20 = rd32(0x817fdec8u);
            r11 = rd32(0x817fded0u);
            f6 = (f64)(f32)px_padd(f7, (f64)(f32)px_pmul((f64)rdf32((u32)param_5 + 0x24u), f9));
            wrf32d(0x817fdcc4u, px_hi(f24));
            wrf32d(0x817fdcc4u, px_lo(f24));
            f8 = (f64)(f32)px_pmul(f8, f11);
            f9 = px_pack((f64)rdf32(0x817fdd30u), (f64)rdf32(0x817fdd30u));
            f12 = (f64)rdf32(0x817fdcc4u);
            f7 = px_pack((f64)(f32)px_padd(px_hi(f10), px_hi(f9)), (f64)(f32)px_padd(px_lo(f10), px_lo(f9)));
            f6 = (f64)(f32)px_padd(f8, f6);
            wrf32d(0x817fdcccu, px_hi(px_pack((f64)(f32)px_padd(px_hi(f4), px_hi(f3)), (f64)(f32)px_padd(px_lo(f4), px_lo(f3)))));
            wrf32d(0x817fdd00u, px_hi(f7));
            wrf32d(0x817fdd00u, px_lo(f7));
            f10 = (f64)rdf32(0x817fdcccu);
            f9 = (f64)rdf32(0x817fdd00u);
            wrf32d(0x817fdd08u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f13)), (f64)(f32)px_padd(px_lo(f0), px_lo(f13)))));
            r10 = ppc_single_bits(f12);
            r8 = ppc_single_bits(f10);
            r7 = ppc_single_bits(f9);
            r0 = ppc_single_bits((f64)rdf32(0x817fdd08u));
            wr32(0x817fdef0u, r20);
            wr32(0x817fdef8u, r11);
            wr32(0x817fdefcu, r10);
            wr32(0x817fdf04u, r8);
            wr32(0x817fdf08u, r7);
            wr32(0x817fdf10u, r0);
            wrf32d(0x817fdf14u, f6);
            a.r[0] = 0x98u;
            a.r[1] = 0u;
            a.r[2] = r31 & 0xffffu;
            (void)tc_call(0x80250b74u, &a);
            if (r30 == 0u) {
                c0lt = (s32)param_3 < 0;
                r4 = 0u;
                if (!c0lt) {
                    r3 = param_8;
                    ctr = param_3 + 1u;
                    if (!c0lt) {
                        do {
                            f5 = (f64)rdf32(r3 + 4u);
                            f2 = px_pack((f64)px_w2f(r7), (f64)px_w2f(r7));
                            f6 = (f64)rdf32(r3);
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f0 = px_pack((f64)px_w2f(r10), (f64)px_w2f(r10));
                            f2 = px_pack((f64)rdf32(0x817fdf10u), 1.0);
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f0 = px_pack((f64)px_w2f(r8), 1.0);
                            wrf32d(0x817fde20u, px_hi(f3));
                            wrf32d(0x817fde20u, px_lo(f3));
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f4 = px_pack((f64)px_w2f(r20), (f64)px_w2f(r20));
                            wrf32d(0x817fde2cu, px_hi(f1));
                            wrf32d(0x817fde2cu, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f2 = px_pack((f64)rdf32(0x817fde20u), (f64)rdf32(0x817fde20u));
                            f0 = px_pack((f64)rdf32(0x817fde2cu), (f64)rdf32(0x817fde2cu));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f2)), (f64)(f32)px_padd(px_lo(f0), px_lo(f2)));
                            wrf32d(0x817fde38u, px_hi(f0));
                            wrf32d(0x817fde38u, px_lo(f0));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f3)), (f64)(f32)px_padd(px_lo(f1), px_lo(f3)));
                            f1 = px_pack((f64)rdf32(0x817fde38u), (f64)rdf32(0x817fde38u));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f4)), (f64)(f32)px_padd(px_lo(f1), px_lo(f4)));
                            f4 = px_pack((f64)px_w2f(r11), 1.0);
                            wrf32d(0x817fde44u, px_hi(f1));
                            wrf32d(0x817fde44u, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f4)), (f64)(f32)px_padd(px_lo(f0), px_lo(f4)));
                            f0 = (f64)rdf32(0x817fde44u);
                            wrf32d(0x817fde4cu, px_hi(f1));
                            f1 = (f64)rdf32(0x817fde48u);
                            wrf32d(0xcc008000u, f0);
                            f0 = (f64)rdf32(0x817fde4cu);
                            wrf32d(0xcc008000u, f1);
                            wrf32d(0xcc008000u, f0);
                            if (r29 != 0u) {
                                f1 = (f64)rdf32(0x817fdf14u);
                                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f27, (f64)(f32)px_psub(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull), f29)));
                                wrf32d(0xcc008000u, f1);
                            }
                            f0 = px_pack((f64)rdf32(0x817fdf24u), (f64)rdf32(0x817fdf24u));
                            f2 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f0 = px_pack((f64)rdf32(0x817fdf2cu), 1.0);
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f2 = px_pack((f64)rdf32(0x817fdf38u), 1.0);
                            f4 = px_pack((f64)rdf32(0x817fdf18u), (f64)rdf32(0x817fdf18u));
                            wrf32d(0x817fddfcu, px_hi(f1));
                            wrf32d(0x817fddfcu, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            wrf32d(0x817fddf0u, px_hi(f3));
                            wrf32d(0x817fddf0u, px_lo(f3));
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f0 = px_pack((f64)rdf32(0x817fddfcu), (f64)rdf32(0x817fddfcu));
                            f2 = px_pack((f64)rdf32(0x817fddf0u), (f64)rdf32(0x817fddf0u));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f2)), (f64)(f32)px_padd(px_lo(f0), px_lo(f2)));
                            wrf32d(0x817fde08u, px_hi(f0));
                            wrf32d(0x817fde08u, px_lo(f0));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f3)), (f64)(f32)px_padd(px_lo(f1), px_lo(f3)));
                            f1 = px_pack((f64)rdf32(0x817fde08u), (f64)rdf32(0x817fde08u));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f4)), (f64)(f32)px_padd(px_lo(f1), px_lo(f4)));
                            f4 = px_pack((f64)rdf32(0x817fdf20u), 1.0);
                            wrf32d(0x817fde14u, px_hi(f1));
                            wrf32d(0x817fde14u, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f4)), (f64)(f32)px_padd(px_lo(f0), px_lo(f4)));
                            f0 = (f64)rdf32(0x817fde14u);
                            wrf32d(0x817fde1cu, px_hi(f1));
                            f1 = (f64)rdf32(0x817fde18u);
                            wrf32d(0xcc008000u, f0);
                            f0 = (f64)rdf32(0x817fde1cu);
                            wrf32d(0xcc008000u, f1);
                            wrf32d(0xcc008000u, f0);
                            if (r29 != 0u) {
                                f1 = (f64)rdf32(0x817fdf3cu);
                                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f27, (f64)(f32)px_psub(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull), f29)));
                                wrf32d(0xcc008000u, f1);
                            }
                            r3 = r3 + 8u;
                            r4 = r4 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            } else {
                c0lt = (s32)param_3 < 0;
                r4 = 0u;
                if (!c0lt) {
                    r3 = param_8;
                    ctr = param_3 + 1u;
                    if (!c0lt) {
                        do {
                            f5 = (f64)rdf32(r3 + 4u);
                            f2 = px_pack((f64)rdf32(0x817fdf30u), (f64)rdf32(0x817fdf30u));
                            f6 = (f64)rdf32(r3);
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f0 = px_pack((f64)rdf32(0x817fdf24u), (f64)rdf32(0x817fdf24u));
                            f2 = px_pack((f64)rdf32(0x817fdf38u), 1.0);
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f0 = px_pack((f64)rdf32(0x817fdf2cu), 1.0);
                            wrf32d(0x817fde80u, px_hi(f3));
                            wrf32d(0x817fde80u, px_lo(f3));
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f4 = px_pack((f64)rdf32(0x817fdf18u), (f64)rdf32(0x817fdf18u));
                            wrf32d(0x817fde8cu, px_hi(f1));
                            wrf32d(0x817fde8cu, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f2 = px_pack((f64)rdf32(0x817fde80u), (f64)rdf32(0x817fde80u));
                            f0 = px_pack((f64)rdf32(0x817fde8cu), (f64)rdf32(0x817fde8cu));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f2)), (f64)(f32)px_padd(px_lo(f0), px_lo(f2)));
                            wrf32d(0x817fde98u, px_hi(f0));
                            wrf32d(0x817fde98u, px_lo(f0));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f3)), (f64)(f32)px_padd(px_lo(f1), px_lo(f3)));
                            f1 = px_pack((f64)rdf32(0x817fde98u), (f64)rdf32(0x817fde98u));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f4)), (f64)(f32)px_padd(px_lo(f1), px_lo(f4)));
                            f4 = px_pack((f64)rdf32(0x817fdf20u), 1.0);
                            wrf32d(0x817fdea4u, px_hi(f1));
                            wrf32d(0x817fdea4u, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f4)), (f64)(f32)px_padd(px_lo(f0), px_lo(f4)));
                            f0 = (f64)rdf32(0x817fdea4u);
                            wrf32d(0x817fdeacu, px_hi(f1));
                            f1 = (f64)rdf32(0x817fdea8u);
                            wrf32d(0xcc008000u, f0);
                            f0 = (f64)rdf32(0x817fdeacu);
                            wrf32d(0xcc008000u, f1);
                            wrf32d(0xcc008000u, f0);
                            if (r29 != 0u) {
                                f1 = (f64)rdf32(0x817fdf3cu);
                                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f27, (f64)(f32)px_psub(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull), f29)));
                                wrf32d(0xcc008000u, f1);
                            }
                            f0 = px_pack((f64)px_w2f(r10), (f64)px_w2f(r10));
                            f2 = px_pack((f64)px_w2f(r7), (f64)px_w2f(r7));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            f0 = px_pack((f64)px_w2f(r8), 1.0);
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f2 = px_pack((f64)rdf32(0x817fdf10u), 1.0);
                            f4 = px_pack((f64)px_w2f(r20), (f64)px_w2f(r20));
                            wrf32d(0x817fde5cu, px_hi(f1));
                            wrf32d(0x817fde5cu, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f0), px_hi(f6)), (f64)(f32)px_pmul(px_lo(f0), px_hi(f6)));
                            wrf32d(0x817fde50u, px_hi(f3));
                            wrf32d(0x817fde50u, px_lo(f3));
                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f5)), (f64)(f32)px_pmul(px_lo(f2), px_hi(f5)));
                            f0 = px_pack((f64)rdf32(0x817fde5cu), (f64)rdf32(0x817fde5cu));
                            f2 = px_pack((f64)rdf32(0x817fde50u), (f64)rdf32(0x817fde50u));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f2)), (f64)(f32)px_padd(px_lo(f0), px_lo(f2)));
                            wrf32d(0x817fde68u, px_hi(f0));
                            wrf32d(0x817fde68u, px_lo(f0));
                            f0 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f3)), (f64)(f32)px_padd(px_lo(f1), px_lo(f3)));
                            f1 = px_pack((f64)rdf32(0x817fde68u), (f64)rdf32(0x817fde68u));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f1), px_hi(f4)), (f64)(f32)px_padd(px_lo(f1), px_lo(f4)));
                            f4 = px_pack((f64)px_w2f(r11), 1.0);
                            wrf32d(0x817fde74u, px_hi(f1));
                            wrf32d(0x817fde74u, px_lo(f1));
                            f1 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f4)), (f64)(f32)px_padd(px_lo(f0), px_lo(f4)));
                            f0 = (f64)rdf32(0x817fde74u);
                            wrf32d(0x817fde7cu, px_hi(f1));
                            f1 = (f64)rdf32(0x817fde78u);
                            wrf32d(0xcc008000u, f0);
                            f0 = (f64)rdf32(0x817fde7cu);
                            wrf32d(0xcc008000u, f1);
                            wrf32d(0xcc008000u, f0);
                            if (r29 != 0u) {
                                f1 = (f64)rdf32(0x817fdf14u);
                                wrf32d(0xcc008000u, (f64)(f32)px_pmul(f27, (f64)(f32)px_psub(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull), f29)));
                                wrf32d(0xcc008000u, f1);
                            }
                            r3 = r3 + 8u;
                            r4 = r4 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r28 = r28 + 1u;
        }
    }
    return;
}
