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

void fn_8033356c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r14 = 0;
    u32 r15 = 0, r16 = 0, r17 = 0, r18 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    u32 r31 = 0, t7 = 0, t10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde80u, 0x817fe000u);
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
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
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
    wr32(0x817fdf68u, 0x43300000u);
    r31 = rd32(r29 + 0x24u);
    wr32(0x817fdf70u, 0x43300000u);
    a.r[0] = param_1;
    a.r[1] = r29;
    a.r[2] = param_3;
    a.r[3] = param_4;
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
    r14 = r3;
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
    r5 = 0u;
    r27 = r3;
    f3 = rdf64(0x80577d08u);
    f1 = (f64)rdf32(0x80577d10u);
    r0 = (u32)(s8)rd8(r31 + 0x146u) ^ 0x80000000u;
    wr32(0x817fdf6cu, (u32)(s8)rd8(r31 + 0x145u) ^ 0x80000000u);
    r4 = rd32(param_2);
    wr32(0x817fdf74u, r0);
    r3 = rd32(r4 + 0x3cu);
    f31 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(rdf64(0x817fdf68u), f3));
    f30 = (f64)(f32)px_pmul(f1, (f64)(f32)px_psub(rdf64(0x817fdf70u), f3));
    while (r3 != 0u && rd32(r3 + 0xcu) != 1u) {
        r5 = (u32)rd16(r4 + 0x42u);
        r3 = rd32(r3 + r5);
        while (r3 != 0u && rd32(r3 + 0xcu) != 1u) {
            r3 = rd32(r3 + r5);
        }
    }
    t7 = param_2 + 0xa4u;
    f0 = px_pack((f64)rdf32(t7), (f64)rdf32(t7));
    t10 = r3 + 0xacu;
    f1 = px_pack((f64)rdf32(t10), (f64)rdf32(t10));
    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
    f1 = px_pack((f64)rdf32(r3 + 0xb4u), 1.0);
    f0 = px_pack((f64)rdf32(param_2 + 0xacu), 1.0);
    r0 = (u32)rd8(r31 + 0x14eu) & 0xc0u;
    c0lt = (s32)r0 < 64;
    r3 = (u32)rd16(r29 + 0x50u);
    wrf32d(0x817fde94u, px_hi(f2));
    wrf32d(0x817fde94u, px_lo(f2));
    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
    wrf32d(0x817fde9cu, px_hi(f2));
    if (r0 != 0x40u) {
        f1 = rdf64(0x80577d08u);
        wr32(0x817fdf6cu, r3 ^ 0x80000000u);
        f0 = (f64)(f32)px_psub(rdf64(0x817fdf68u), f1);
        f29 = (f64)(f32)ppc_fres(f0);
        f2 = px_pack((f64)(f32)px_padd(px_hi(f29), px_hi(f29)), (f64)(f32)px_padd(px_lo(f29), px_lo(f29)));
        f1 = px_pack((f64)(f32)px_pmul(px_hi(f29), px_hi(f29)), (f64)(f32)px_pmul(px_lo(f29), px_lo(f29)));
        f29 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f0), px_hi(f1), px_hi(f2))), px_pfnm((f64)(f32)px_pfms(px_lo(f0), px_lo(f1), px_lo(f2))));
    } else {
        f29 = (f64)rdf32(0x80577cf4u);
    }
    r26 = 0u;
    r25 = 1u;
    if (r30 != 0u) {
        r26 = r3;
        r25 = 0xffffffffu;
    }
    r24 = 0u;
    r23 = 0u;
    a.r[0] = r29;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    r3 = tc_call(r14, &a);
    r14 = r3;
    wr32(0x817fdf74u, r26 ^ 0x80000000u);
    a.f[0] = f31;
    a.f[1] = f30;
    a.f[2] = (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fdf70u), rdf64(0x80577d08u)));
    a.r[0] = param_1;
    a.r[1] = 0x817fdef0u;
    a.r[2] = param_2;
    a.r[3] = param_4;
    a.r[4] = r3;
    a.r[5] = r28;
    f1 = tc_callf(0x80330f84u, &a);
    r26 = r26 + r25;
    if (r30 == 0u) {
        wr32(0x817fdf6cu, r26 ^ 0x80000000u);
        r5 = rd32(0x817fdef0u);
        f2 = px_pack((f64)rdf32(0x817fdef0u), (f64)rdf32(0x817fdef0u));
        r26 = r26 + r25;
        f1 = px_pack((f64)rdf32(0x817fde94u), (f64)rdf32(0x817fde94u));
        r10 = rd32(0x817fdef4u);
        f3 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f1)), (f64)(f32)px_padd(px_lo(f2), px_lo(f1)));
        f2 = px_pack((f64)rdf32(0x817fdef8u), 1.0);
        f0 = (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fdf68u), rdf64(0x80577d08u)));
        f1 = px_pack((f64)rdf32(0x817fde9cu), 1.0);
        r15 = rd32(0x817fdef8u);
        r23 = 1u;
        r16 = rd32(0x817fdefcu);
        r17 = rd32(0x817fdf00u);
        r18 = rd32(0x817fdf04u);
        r12 = rd32(0x817fdf08u);
        r11 = rd32(0x817fdf0cu);
        r0 = rd32(0x817fdf10u);
        wrf32d(0x817fdef0u, px_hi(f3));
        wrf32d(0x817fdef0u, px_lo(f3));
        wr32(0x817fdf18u, r5);
        wr32(0x817fdf1cu, r10);
        wr32(0x817fdf20u, r15);
        wr32(0x817fdf24u, r16);
        wr32(0x817fdf28u, r17);
        wr32(0x817fdf2cu, r18);
        wr32(0x817fdf30u, r12);
        wr32(0x817fdf34u, r11);
        wr32(0x817fdf38u, r0);
        wrf32d(0x817fdf3cu, f0);
        wrf32d(0x817fdef8u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f1)), (f64)(f32)px_padd(px_lo(f2), px_lo(f1)))));
        wr32(0x817fdec8u, r5);
        r5 = (u32)rd8(r31 + 0x14cu);
        wr32(0x817fdeccu, r10);
        r10 = rd32(param_2 + 0xd4u);
        wr32(0x817fded0u, r15);
        wr32(0x817fded4u, r16);
        wr32(0x817fded8u, r17);
        wr32(0x817fdedcu, r18);
        wr32(0x817fdee0u, r12);
        wr32(0x817fdee4u, r11);
        wr32(0x817fdee8u, r0);
        wrf32d(0x817fdeecu, f0);
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = r5;
        a.r[3] = 0x817fdef0u;
        a.r[4] = 0x817fdef0u;
        a.r[5] = 0x817fdf18u;
        a.r[6] = param_4;
        a.r[7] = r10;
        f1 = tc_callf(0x80331884u, &a);
    }
    a.r[0] = r29;
    a.r[1] = r14;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(r27, &a);
    f28 = rdf64(0x80577d08u);
    r16 = r3;
    while (r3 != 0u) {
        r4 = r23 + 1u;
        r3 = ppc_mulhw(1431655766, (s32)r4);
        wr32(0x817fdf74u, r26 ^ 0x80000000u);
        r17 = r24;
        r24 = r23;
        r23 = r4 - ((r3 + ((r3 >> 0x1fu) & 1u)) * 3u);
        r15 = (r23 * 0x28u) - 0x7e802110u;
        a.f[0] = f31;
        a.f[1] = f30;
        a.f[2] = (f64)(f32)px_pmul(f29, (f64)(f32)px_psub(rdf64(0x817fdf70u), f28));
        a.r[0] = param_1;
        a.r[1] = r15;
        a.r[2] = param_2;
        a.r[3] = param_4;
        a.r[4] = r16;
        a.r[5] = r28;
        (void)tc_call(0x80330f84u, &a);
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = (u32)rd8(r31 + 0x14cu);
        a.r[3] = (r17 * 0x28u) - 0x7e802110u;
        a.r[4] = (r24 * 0x28u) - 0x7e802110u;
        a.r[5] = r15;
        a.r[6] = param_4;
        a.r[7] = rd32(param_2 + 0xd4u);
        f1 = tc_callf(0x80331884u, &a);
        a.r[0] = r29;
        a.r[1] = r16;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(r27, &a);
        r16 = r3;
        r26 = r26 + r25;
    }
    if (r30 != 0u) {
        r3 = r24;
        r5 = r23 + 1u;
        r24 = r23;
        r4 = ppc_mulhw(1431655766, (s32)r5);
        wr32(0x817fdf6cu, r26 ^ 0x80000000u);
        f3 = px_pack((f64)rdf32(0x817fde94u), (f64)rdf32(0x817fde94u));
        r8 = r23 * 0x28u;
        r7 = r8 - 0x7e802110u;
        r0 = (r4 + ((r4 >> 0x1fu) & 1u)) * 3u;
        f0 = (f64)(f32)px_psub(rdf64(0x817fdf68u), rdf64(0x80577d08u));
        r4 = r8 - 0x7e8020f8u;
        f2 = px_pack((f64)rdf32(r7), (f64)rdf32(r7));
        r9 = r8 - 0x7e802104u;
        r26 = rd32(r4);
        f1 = px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f3)), (f64)(f32)px_padd(px_lo(f2), px_lo(f3)));
        r23 = r5 - r0;
        r10 = r23 * 0x28u;
        r12 = rd32(r9);
        r11 = rd32(r9 + 4u);
        wrf32d(0x817fde88u, px_hi(f1));
        wrf32d(0x817fde88u, px_lo(f1));
        r17 = r10 - 0x7e802104u;
        r0 = rd32(r9 + 8u);
        r5 = rd32(0x817fde88u);
        r16 = r10 - 0x7e8020f8u;
        r25 = rd32(r4 + 4u);
        r18 = rd32(r4 + 8u);
        f2 = px_pack((f64)rdf32(r7 + 8u), 1.0);
        f3 = px_pack((f64)rdf32(0x817fde9cu), 1.0);
        f0 = (f64)(f32)px_pmul(f29, f0);
        r27 = rd32(0x817fde8cu);
        wr32(r10 - 0x7e802110u, r5);
        r8 = r10 - 0x7e802110u;
        wr32(r8 + 4u, r27);
        wrf32d(0x817fde90u, px_hi(px_pack((f64)(f32)px_padd(px_hi(f2), px_hi(f3)), (f64)(f32)px_padd(px_lo(f2), px_lo(f3)))));
        r14 = rd32(0x817fde90u);
        wr32(0x817fdea0u, r5);
        wr32(r8 + 8u, r14);
        wr32(r17, r12);
        wr32(r17 + 4u, r11);
        wr32(r17 + 8u, r0);
        wr32(r16, r26);
        wr32(r16 + 4u, r25);
        wr32(r16 + 8u, r18);
        wrf32d(r10 - 0x7e8020ecu, f0);
        wr32(0x817fdea4u, r27);
        r5 = (u32)rd8(r31 + 0x14cu);
        wr32(0x817fdea8u, r14);
        r10 = rd32(param_2 + 0xd4u);
        wr32(0x817fdeacu, r12);
        wr32(0x817fdeb0u, r11);
        wr32(0x817fdeb4u, r0);
        wr32(0x817fdeb8u, r26);
        wr32(0x817fdebcu, r25);
        wr32(0x817fdec0u, r18);
        wrf32d(0x817fdec4u, f0);
        a.r[0] = param_1;
        a.r[1] = param_3;
        a.r[2] = r5;
        a.r[3] = (r3 * 0x28u) - 0x7e802110u;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = param_4;
        a.r[7] = r10;
        (void)tc_call(0x80331884u, &a);
    }
    r7 = (r23 * 0x28u) - 0x7e802110u;
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = (u32)rd8(r31 + 0x14cu);
    a.r[3] = (r24 * 0x28u) - 0x7e802110u;
    a.r[4] = r7;
    a.r[5] = r7;
    a.r[6] = param_4;
    a.r[7] = rd32(param_2 + 0xd4u);
    (void)tc_call(0x80331884u, &a);
    return;
}
