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

void fn_8032e600(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r19 = 0, r20 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
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
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    r29 = rd32(param_2);
    r12 = rd32(rd32(param_1) + 0x18u);
    wr32(0x817fdf78u, 0x43300000u);
    r31 = rd32(r29 + 0x24u);
    wr32(0x817fdf80u, 0x43300000u);
    a.r[0] = param_1;
    a.r[1] = r29;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r28 = r3;
    r30 = (u32)rd16(r31 + 0x9cu) & 0x800u;
    a.r[0] = param_1;
    a.r[1] = r30;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
    f1 = tc_lastf();
    r27 = r3;
    a.r[0] = param_1;
    a.r[1] = r30;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
    r26 = r3;
    f3 = rdf64(0x80577cb8u);
    r4 = (u32)(s8)rd8(r31 + 0x145u) ^ 0x80000000u;
    r0 = (u32)rd8(r31 + 0x14eu) & 0xc0u;
    r3 = (u32)(s8)rd8(r31 + 0x146u) ^ 0x80000000u;
    wr32(0x817fdf7cu, r4);
    f1 = (f64)rdf32(0x80577cb0u);
    c0lt = (s32)r0 < 64;
    wr32(0x817fdf84u, r3);
    f2 = (f64)(f32)px_psub(rdf64(0x817fdf78u), f3);
    r3 = (u32)rd16(r29 + 0x50u);
    f30 = (f64)(f32)px_pmul(f1, f2);
    f29 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(rdf64(0x817fdf80u), f3));
    if (r0 != 0x40u) {
        f1 = rdf64(0x80577cb8u);
        wr32(0x817fdf7cu, (r3 - 1u) ^ 0x80000000u);
        f0 = (f64)(f32)px_psub(rdf64(0x817fdf78u), f1);
        f28 = (f64)(f32)ppc_fres(f0);
        f2 = px_pack((f64)(f32)px_padd(px_hi(f28), px_hi(f28)), (f64)(f32)px_padd(px_lo(f28), px_lo(f28)));
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f28), px_hi(f28)), (f64)(f32)px_pmul(px_lo(f28), px_lo(f28)));
        f28 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f0), px_hi(f1), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f0), px_lo(f1), px_lo(f2))));
    } else {
        f28 = (f64)rdf32(0x80577cb4u);
    }
    r25 = 0u;
    r24 = 1u;
    if (r30 != 0u) {
        r25 = r3 - 1u;
        r24 = 0xffffffffu;
    }
    a.r[0] = r29;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    r3 = tc_call(r27, &a);
    wr32(0x817fdf84u, r25 ^ 0x80000000u);
    a.f[0] = f30;
    a.f[1] = f29;
    a.f[2] = (f64)(f32)px_pmul(f28, (f64)(f32)px_psub(rdf64(0x817fdf80u), rdf64(0x80577cb8u)));
    a.r[0] = param_1;
    a.r[1] = 0x817fdf50u;
    a.r[2] = param_2;
    a.r[3] = param_3;
    a.r[4] = r3;
    a.r[5] = r28;
    f1 = tc_callf(0x8032ddf4u, &a);
    r25 = r25 + r24;
    a.r[0] = r29;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(r26, &a);
    f31 = rdf64(0x80577cb8u);
    r30 = r3;
    while (r3 != 0u) {
        r4 = rd32(0x817fdf50u);
        wr32(0x817fdf7cu, r25 ^ 0x80000000u);
        r19 = rd32(0x817fdf54u);
        r20 = rd32(0x817fdf58u);
        r27 = rd32(0x817fdf5cu);
        r12 = rd32(0x817fdf60u);
        r11 = rd32(0x817fdf64u);
        r10 = rd32(0x817fdf68u);
        f3 = (f64)(f32)px_pmul(f28, (f64)(f32)px_psub(rdf64(0x817fdf78u), f31));
        r9 = rd32(0x817fdf6cu);
        r0 = rd32(0x817fdf70u);
        f0 = (f64)rdf32(0x817fdf74u);
        wr32(0x817fdf28u, r4);
        wr32(0x817fdf2cu, r19);
        wr32(0x817fdf30u, r20);
        wr32(0x817fdf34u, r27);
        wr32(0x817fdf38u, r12);
        wr32(0x817fdf3cu, r11);
        wr32(0x817fdf40u, r10);
        wr32(0x817fdf44u, r9);
        wr32(0x817fdf48u, r0);
        wrf32d(0x817fdf4cu, f0);
        a.f[0] = f30;
        a.f[1] = f29;
        a.f[2] = f3;
        a.r[0] = param_1;
        a.r[1] = 0x817fdf50u;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.r[4] = r3;
        a.r[5] = r28;
        (void)tc_call(0x8032ddf4u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdf28u;
        a.r[2] = 0x817fdf50u;
        a.r[3] = param_3;
        a.r[4] = (u32)rd8(r31 + 0x14cu);
        a.r[5] = rd32(param_2 + 0xd4u);
        f1 = tc_callf(0x8032e25cu, &a);
        a.r[0] = r29;
        a.r[1] = r30;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(r26, &a);
        r30 = r3;
        r25 = r25 + r24;
    }
    return;
}
