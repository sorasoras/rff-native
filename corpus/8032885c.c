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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8032885c(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = tc_argr(8u), r12 = tc_argr(9u), r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, t23 = 0, t26 = 0, t41 = 0, t44 = 0, t59 = 0, t62 = 0, t77 = 0, t80 = 0;
    u32 t96 = 0, t99 = 0, t102 = 0, t105 = 0, t108 = 0, t111 = 0, t114 = 0, t117 = 0, t120 = 0, t123 = 0, t126 = 0, t129 = 0;
    u32 t132 = 0, t135 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0;
    f64 f29 = 0.0, f30 = 0.0, f31 = 0.0, t24 = 0.0, t27 = 0.0, t42 = 0.0, t45 = 0.0, t60 = 0.0, t63 = 0.0, t78 = 0.0, t81 = 0.0, t97 = 0.0;
    f64 t98 = 0.0, t100 = 0.0, t101 = 0.0, t103 = 0.0, t104 = 0.0, t106 = 0.0, t107 = 0.0, t109 = 0.0, t110 = 0.0, t112 = 0.0, t113 = 0.0, t115 = 0.0;
    f64 t116 = 0.0, t118 = 0.0, t119 = 0.0, t121 = 0.0, t122 = 0.0, t124 = 0.0, t125 = 0.0, t127 = 0.0, t128 = 0.0, t130 = 0.0, t131 = 0.0, t133 = 0.0;
    f64 t134 = 0.0, t136 = 0.0, t137 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    for (;;) {
        wr32(r1 - 0x240u, r1);
        r1 = r1 - 0x240u;
        wr32(r1 + 0x244u, lr);
        wrf64(r1 + 0x230u, f31);
        wrf32d(r1 + 0x238u, px_lo(f31));
        wrf64(r1 + 0x220u, f30);
        wrf32d(r1 + 0x228u, px_lo(f30));
        wrf64(r1 + 0x210u, f29);
        wrf32d(r1 + 0x218u, px_lo(f29));
        wrf64(r1 + 0x200u, f28);
        wrf32d(r1 + 0x208u, px_lo(f28));
        wrf64(r1 + 0x1f0u, f27);
        wrf32d(r1 + 0x1f8u, px_lo(f27));
        wrf64(r1 + 0x1e0u, f26);
        wrf32d(r1 + 0x1e8u, px_lo(f26));
        wrf64(r1 + 0x1d0u, f25);
        wrf32d(r1 + 0x1d8u, px_lo(f25));
        wrf64(r1 + 0x1c0u, f24);
        wrf32d(r1 + 0x1c8u, px_lo(f24));
        wrf64(r1 + 0x1b0u, f23);
        wrf32d(r1 + 0x1b8u, px_lo(f23));
        wrf64(r1 + 0x1a0u, f22);
        wrf32d(r1 + 0x1a8u, px_lo(f22));
        wrf64(r1 + 0x190u, f21);
        wrf32d(r1 + 0x198u, px_lo(f21));
        wrf64(r1 + 0x180u, f20);
        wrf32d(r1 + 0x188u, px_lo(f20));
        wrf64(r1 + 0x170u, f19);
        wrf32d(r1 + 0x178u, px_lo(f19));
        wrf64(r1 + 0x160u, f18);
        wrf32d(r1 + 0x168u, px_lo(f18));
        r11 = r1 + 0x160u;
        wr32(r11 - 0x38u, r18);
        wr32(r11 - 0x34u, r19);
        wr32(r11 - 0x30u, r20);
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, r24);
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        f1 = (f64)rdf32(0x80577c10u);
        r20 = 0x43300000u;
        f0 = (f64)rdf32(r4 + 0x88u);
        r23 = r3;
        r19 = rd32(r4);
        r25 = r5;
        r18 = rd32(r4 + 4u);
        r12 = rd32(r4 + 8u);
        r24 = r4;
        r11 = rd32(r4 + 0xcu);
        r10 = rd32(r4 + 0x10u);
        r9 = rd32(r4 + 0x14u);
        r8 = rd32(r4 + 0x18u);
        r7 = rd32(r4 + 0x1cu);
        r6 = rd32(r4 + 0x20u);
        r5 = rd32(r4 + 0x24u);
        r3 = rd32(r4 + 0x28u);
        r0 = rd32(r4 + 0x2cu);
        wr32(r1 + 0x110u, 0x43300000u);
        wr32(r1 + 0x118u, 0x43300000u);
        wr32(r1 + 0xe0u, r19);
        wr32(r1 + 0xe4u, r18);
        wr32(r1 + 0xe8u, r12);
        wr32(r1 + 0xecu, r11);
        wr32(r1 + 0xf0u, r10);
        wr32(r1 + 0xf4u, r9);
        wr32(r1 + 0xf8u, r8);
        wr32(r1 + 0xfcu, r7);
        wr32(r1 + 0x100u, r6);
        wr32(r1 + 0x104u, r5);
        wr32(r1 + 0x108u, r3);
        wr32(r1 + 0x10cu, r0);
        if (f1 != f0) {
            a.r[0] = r1 + 0x90u;
            f1 = tc_callf(0x80254460u, &a);
            r3 = tc_lastr();
            f0 = (f64)rdf32(r1 + 0x90u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(r1 + 0x120u, f0);
            r0 = rd32(r1 + 0x124u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                f1 = (f64)rdf32(r1 + 0x10cu);
                wrf32d(r1 + 0x10cu, (f64)(f32)px_padd(f1, (f64)rdf32(r4 + 0x88u)));
            } else if (c0lt && (s32)r0 >= 0) {
                r4 = r4 + 0x8cu;
                a.r[0] = r24;
                a.r[1] = r4;
                a.r[2] = r1 + 0x84u;
                f1 = tc_callf(0x8023411cu, &a);
                r3 = tc_lastr();
                r3 = r1 + 0x84u;
                a.r[0] = r3;
                a.r[1] = r3;
                r3 = tc_call(0x80320984u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    f1 = (f64)rdf32(r1 + 0x10cu);
                    wrf32d(r1 + 0x10cu, (f64)(f32)px_padd(f1, (f64)rdf32(r24 + 0x88u)));
                } else {
                    f1 = (f64)rdf32(r1 + 0x8cu);
                    f0 = (f64)rdf32(0x80577c10u);
                    if (!((f1 > f0) || (f1 == f0))) {
                        f3 = (f64)rdf32(r24 + 0x88u);
                        f4 = (f64)rdf32(r1 + 0x84u);
                        f2 = (f64)rdf32(r1 + 0x88u);
                        f1 = (f64)(f32)px_pmul(f1, f3);
                        f5 = (f64)(f32)px_pmul(f4, f3);
                        f0 = (f64)rdf32(r1 + 0x10cu);
                        f3 = (f64)(f32)px_pmul(f2, f3);
                        f4 = (f64)(f32)px_psub((f64)rdf32(r1 + 0xecu), f5);
                        f2 = (f64)(f32)px_psub((f64)rdf32(r1 + 0xfcu), f3);
                        f0 = (f64)(f32)px_psub(f0, f1);
                        wrf32d(r1 + 0xecu, f4);
                        wrf32d(r1 + 0xfcu, f2);
                        wrf32d(r1 + 0x10cu, f0);
                    } else {
                        f3 = (f64)rdf32(r24 + 0x88u);
                        f4 = (f64)rdf32(r1 + 0x84u);
                        f2 = (f64)rdf32(r1 + 0x88u);
                        f1 = (f64)(f32)px_pmul(f1, f3);
                        f5 = (f64)(f32)px_pmul(f4, f3);
                        f0 = (f64)rdf32(r1 + 0x10cu);
                        f3 = (f64)(f32)px_pmul(f2, f3);
                        f4 = (f64)(f32)px_padd((f64)rdf32(r1 + 0xecu), f5);
                        f2 = (f64)(f32)px_padd((f64)rdf32(r1 + 0xfcu), f3);
                        f0 = (f64)(f32)px_padd(f0, f1);
                        wrf32d(r1 + 0xecu, f4);
                        wrf32d(r1 + 0xfcu, f2);
                        wrf32d(r1 + 0x10cu, f0);
                    }
                }
            }
        }
        r30 = rd32(r25 + 0x24u) + 0x9cu;
        a.r[0] = r23;
        a.r[1] = r24;
        a.r[2] = r25;
        r3 = tc_call(0x80329848u, &a);
        f1 = tc_lastf();
        r5 = (u32)rd8(r30 + 0xaau);
        r0 = (u32)rd8(r30 + 0xa9u);
        r5 = (u32)(s8)r5;
        r7 = (u32)rd8(r23 + 0xc0u);
        r0 = (u32)(s8)r0;
        f3 = rdf64(0x80577c28u);
        r5 = r5 ^ 0x80000000u;
        f1 = (f64)rdf32(0x80577c14u);
        r0 = r0 ^ 0x80000000u;
        wr32(r1 + 0x114u, r5);
        wr32(r1 + 0x11cu, r0);
        r29 = (((0u - r7) | r7) >> 0x1fu) & 1u;
        f2 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(r1 + 0x110u), f3), f1);
        f0 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(r1 + 0x118u), f3), f1);
        wrf32d(r1 + 0x14u, f2);
        wrf32d(r1 + 0x10u, f0);
        a.r[0] = r25;
        a.r[1] = r1 + 0xb0u;
        r3 = tc_call(0x8031efa8u, &a);
        f1 = tc_lastf();
        r4 = r1 + 0xb0u;
        a.r[0] = r1 + 0xe0u;
        a.r[1] = r4;
        a.r[2] = r4;
        f1 = tc_callf(0x802337a0u, &a);
        r3 = tc_lastr();
        a.r[0] = r1 + 0xb0u;
        a.r[1] = 0u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        f26 = f1;
        a.r[0] = r1 + 0xb0u;
        a.r[1] = 1u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        f3 = 0.0;
        f4 = 0.0;
        f0 = (f64)rdf32(r1 + 0x104u);
        f27 = f1;
        f2 = (f64)rdf32(r1 + 0xf4u);
        f0 = (f64)(f32)px_pmul(f0, f0);
        f1 = (f64)(f32)px_pmul(f2, f2);
        f2 = (f64)rdf32(0x80577c10u);
        f18 = (f64)(f32)px_padd(f1, f0);
        if (!((f18 < f2) || (f18 == f2))) {
            a.f[0] = f18;
            f1 = tc_callf(0x802eff54u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f3 = 0.0;
            f4 = 0.0;
            f2 = (f64)(f32)px_pmul(f18, f1);
        }
        f19 = (f64)rdf32(0x80577c10u);
        if (f19 != f2) {
            f3 = (f64)(f32)ppc_fres(f2);
            f1 = (f64)rdf32(r1 + 0x104u);
            f4 = px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f3)), (f64)(f32)px_padd(px_lo(f3), px_lo(f3)));
            f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f3)));
            f3 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f2), px_hi(f3), px_hi(f4))), px_pfnm((f64)(f32)px_pfms(px_lo(f2), px_lo(f3), px_lo(f4))));
            f18 = (f64)(f32)px_pmul(f1, f3);
            f19 = (f64)(f32)px_pmul((f64)rdf32(r1 + 0xf4u), f3);
        } else {
            f18 = (f64)rdf32(0x80577c18u);
        }
        r12 = rd32(r23);
        r3 = r23;
        r0 = (u32)rd16(r30);
        r12 = rd32(r12 + 0x10u);
        r4 = r0 & 0x800u;
        lr = 0x80328ba4u;
        if (r12 != 0x8032885cu) {
            a.r[0] = r23;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r23);
            r18 = r3;
            r0 = (u32)rd16(r30);
            r3 = r23;
            r12 = rd32(r12 + 0x14u);
            r4 = r0 & 0x800u;
            lr = 0x80328bc4u;
            if (r12 != 0x8032885cu) {
                a.r[0] = r23;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r28 = r3;
                r3 = r25;
                r27 = 1u;
                lr = 0x80328bdcu;
                if (r18 != 0x8032885cu) {
                    a.r[0] = r25;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r18, &a);
                    f1 = tc_lastf();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    f2 = 0.0;
                    f3 = 0.0;
                    f29 = rdf64(0x80577c30u);
                    r26 = r3;
                    f30 = (f64)rdf32(0x80577c20u);
                    r31 = r1 + 0xb0u;
                    f31 = (f64)rdf32(0x80577c10u);
                    r18 = 0u;
                    f28 = (f64)rdf32(0x80577c1cu);
                    r19 = 0xcc010000u;
                    r20 = 1u;
                    r21 = 2u;
                    r22 = 3u;
                    for (;;) {
                        if (r3 == 0u) {
                            t96 = r1 + 0x238u;
                            t97 = (f64)rdf32(t96);
                            t98 = (f64)rdf32(t96);
                            f31 = rdf64(r1 + 0x230u);
                            t99 = r1 + 0x228u;
                            t100 = (f64)rdf32(t99);
                            t101 = (f64)rdf32(t99);
                            f30 = rdf64(r1 + 0x220u);
                            t102 = r1 + 0x218u;
                            t103 = (f64)rdf32(t102);
                            t104 = (f64)rdf32(t102);
                            f29 = rdf64(r1 + 0x210u);
                            t105 = r1 + 0x208u;
                            t106 = (f64)rdf32(t105);
                            t107 = (f64)rdf32(t105);
                            f28 = rdf64(r1 + 0x200u);
                            t108 = r1 + 0x1f8u;
                            t109 = (f64)rdf32(t108);
                            t110 = (f64)rdf32(t108);
                            f27 = rdf64(r1 + 0x1f0u);
                            t111 = r1 + 0x1e8u;
                            t112 = (f64)rdf32(t111);
                            t113 = (f64)rdf32(t111);
                            f26 = rdf64(r1 + 0x1e0u);
                            t114 = r1 + 0x1d8u;
                            t115 = (f64)rdf32(t114);
                            t116 = (f64)rdf32(t114);
                            f25 = rdf64(r1 + 0x1d0u);
                            t117 = r1 + 0x1c8u;
                            t118 = (f64)rdf32(t117);
                            t119 = (f64)rdf32(t117);
                            f24 = rdf64(r1 + 0x1c0u);
                            t120 = r1 + 0x1b8u;
                            t121 = (f64)rdf32(t120);
                            t122 = (f64)rdf32(t120);
                            f23 = rdf64(r1 + 0x1b0u);
                            t123 = r1 + 0x1a8u;
                            t124 = (f64)rdf32(t123);
                            t125 = (f64)rdf32(t123);
                            f22 = rdf64(r1 + 0x1a0u);
                            t126 = r1 + 0x198u;
                            t127 = (f64)rdf32(t126);
                            t128 = (f64)rdf32(t126);
                            f21 = rdf64(r1 + 0x190u);
                            t129 = r1 + 0x188u;
                            t130 = (f64)rdf32(t129);
                            t131 = (f64)rdf32(t129);
                            f20 = rdf64(r1 + 0x180u);
                            t132 = r1 + 0x178u;
                            t133 = (f64)rdf32(t132);
                            t134 = (f64)rdf32(t132);
                            f19 = rdf64(r1 + 0x170u);
                            t135 = r1 + 0x168u;
                            t136 = (f64)rdf32(t135);
                            t137 = (f64)rdf32(t135);
                            r11 = r1 + 0x160u;
                            f18 = rdf64(r1 + 0x160u);
                            r18 = rd32(r11 - 0x38u);
                            r19 = rd32(r11 - 0x34u);
                            r20 = rd32(r11 - 0x30u);
                            r21 = rd32(r11 - 0x2cu);
                            r22 = rd32(r11 - 0x28u);
                            r23 = rd32(r11 - 0x24u);
                            r24 = rd32(r11 - 0x20u);
                            r25 = rd32(r11 - 0x1cu);
                            r26 = rd32(r11 - 0x18u);
                            r27 = rd32(r11 - 0x14u);
                            r28 = rd32(r11 - 0x10u);
                            r29 = rd32(r11 - 0xcu);
                            r30 = rd32(r11 - 8u);
                            r31 = rd32(r11 - 4u);
                            r0 = rd32(r1 + 0x244u);
                            return;
                        }
                        if (rd32(r3 + 0xcu) == 1u) {
                            f2 = (f64)rdf32(r3 + 0x30u);
                            f1 = (f64)rdf32(r3 + 0x38u);
                            r4 = rd32(r3 + 0xc8u);
                            f3 = (f64)(f32)px_pmul(f2, f1);
                            f21 = (f64)(f32)px_pmul(f3, (f64)rdf32(r4 + 0x58u));
                            if (!(f21 < f28)) {
                                r3 = rd32(r4 + 0x24u);
                                r0 = (u32)rd16(r3 + 0x9cu) & 0x6000u;
                                c0lt = (s32)r0 < 16384;
                                if (r0 == 0x4000u) {
                                    f3 = (f64)(f32)px_pmul((f64)rdf32(r26 + 0x34u), f1);
                                } else if (!c0lt) {
                                    if (r0 != 0x6000u) {
                                        f1 = (f64)rdf32(r26 + 0x34u);
                                        f3 = (f64)(f32)px_pmul(f1, (f64)rdf32(r26 + 0x3cu));
                                    }
                                } else if (r0 == 0x2000u) {
                                    f3 = (f64)(f32)px_pmul(f2, (f64)rdf32(r26 + 0x3cu));
                                } else {
                                    f1 = (f64)rdf32(r26 + 0x34u);
                                    f3 = (f64)(f32)px_pmul(f1, (f64)rdf32(r26 + 0x3cu));
                                }
                                f20 = (f64)(f32)px_pmul(f3, (f64)rdf32(r4 + 0x5cu));
                                if (!(f20 < f28)) {
                                    a.r[0] = r23;
                                    a.r[1] = r26;
                                    a.r[2] = r30;
                                    a.r[3] = r24;
                                    a.r[4] = r27;
                                    r3 = tc_call(0x80326730u, &a);
                                    f1 = tc_lastf();
                                    r0 = (u32)rd8(r26 + 0x9au);
                                    r27 = 0u;
                                    f2 = (f64)rdf32(r26 + 0x40u);
                                    f1 = (f64)rdf32(r26 + 0x44u);
                                    f0 = (f64)rdf32(r26 + 0x48u);
                                    wrf32d(r1 + 0x18u, f2);
                                    wrf32d(r1 + 0x1cu, f1);
                                    wrf32d(r1 + 0x20u, f0);
                                    if (r0 != 0u) {
                                        wr32(r1 + 0x114u, r0);
                                        wrf32d(r1 + 0x18u, (f64)(f32)px_padd(f2, (f64)(f32)px_pmul(f30, (f64)(f32)px_psub(rdf64(r1 + 0x110u), f29))));
                                    }
                                    r0 = (u32)rd8(r26 + 0x9bu);
                                    if (r0 != 0u) {
                                        wr32(r1 + 0x11cu, r0);
                                        f0 = (f64)rdf32(r1 + 0x1cu);
                                        f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul(f30, (f64)(f32)px_psub(rdf64(r1 + 0x118u), f29)));
                                        wrf32d(r1 + 0x1cu, f0);
                                    }
                                    r0 = (u32)rd8(r26 + 0x9cu);
                                    if (r0 != 0u) {
                                        wr32(r1 + 0x114u, r0);
                                        f0 = (f64)rdf32(r1 + 0x20u);
                                        f0 = (f64)(f32)px_padd(f0, (f64)(f32)px_pmul(f30, (f64)(f32)px_psub(rdf64(r1 + 0x110u), f29)));
                                        wrf32d(r1 + 0x20u, f0);
                                    }
                                    r6 = rd32(r26 + 0xc8u);
                                    f1 = (f64)rdf32(r1 + 0x18u);
                                    f0 = (f64)rdf32(r6 + 0x60u);
                                    f3 = (f64)rdf32(r1 + 0x1cu);
                                    f4 = (f64)(f32)px_padd(f1, f0);
                                    f2 = (f64)rdf32(r6 + 0x64u);
                                    f1 = (f64)rdf32(r1 + 0x20u);
                                    f0 = (f64)rdf32(r6 + 0x68u);
                                    f2 = (f64)(f32)px_padd(f3, f2);
                                    wrf32d(r1 + 0x18u, f4);
                                    f0 = (f64)(f32)px_padd(f1, f0);
                                    wrf32d(r1 + 0x1cu, f2);
                                    wrf32d(r1 + 0x20u, f0);
                                    a.r[0] = r31;
                                    a.r[1] = r26 + 0xacu;
                                    a.r[2] = r1 + 0x24u;
                                    f1 = tc_callf(0x8023411cu, &a);
                                    r3 = tc_lastr();
                                    f0 = (f64)rdf32(r1 + 0x20u);
                                    f22 = (f64)(f32)px_pmul(f27, f19);
                                    f23 = (f64)(f32)px_pmul(f27, f18);
                                    f24 = (f64)rdf32(r1 + 0x10u);
                                    f25 = (f64)rdf32(r1 + 0x14u);
                                    if (f31 == f0) {
                                        f6 = (f64)rdf32(r1 + 0x24u);
                                        f4 = (f64)rdf32(r1 + 0x28u);
                                        f0 = (f64)(f32)px_pmul(f26, f21);
                                        f2 = (f64)rdf32(r1 + 0x2cu);
                                        f3 = (f64)(f32)px_psub((f64)(f32)px_pmul(f25, f20), f25);
                                        wrf32d(r1 + 0x3cu, f0);
                                        wrf32d(r1 + 0x48u, f0);
                                        f5 = (f64)(f32)px_padd(f4, (f64)(f32)px_pmul(f22, f3));
                                        f3 = (f64)(f32)px_pmul(f23, f3);
                                        f6 = (f64)(f32)px_padd(f6, (f64)(f32)px_pmul(f26, (f64)(f32)px_psub(f24, (f64)(f32)px_pmul(f24, f21))));
                                        wrf32d(r1 + 0x34u, f5);
                                        wrf32d(r1 + 0x30u, f6);
                                        wrf32d(r1 + 0x38u, (f64)(f32)px_padd(f2, f3));
                                        wrf32d(r1 + 0x40u, (f64)(f32)px_pmul(f22, f20));
                                        wrf32d(r1 + 0x44u, (f64)(f32)px_pmul(f23, f20));
                                        wrf32d(r1 + 0x4cu, (f64)(f32)px_pmul(-f22, f20));
                                        wrf32d(r1 + 0x50u, (f64)(f32)px_pmul(-f23, f20));
                                    } else {
                                        a.f[0] = -f0;
                                        a.r[0] = r1 + 8u;
                                        a.r[1] = r1 + 0xcu;
                                        r3 = tc_call(0x80320a58u, &a);
                                        f1 = tc_lastf();
                                        f2 = (f64)rdf32(r1 + 0xcu);
                                        f1 = (f64)rdf32(r1 + 8u);
                                        f0 = (f64)(f32)px_pmul(f2, f21);
                                        f12 = (f64)(f32)px_pmul(f1, f21);
                                        f11 = (f64)(f32)px_pmul(f2, f20);
                                        f10 = (f64)(f32)px_pmul(f1, f20);
                                        f9 = (f64)(f32)px_padd((f64)(f32)px_psub(-f25, (f64)(f32)px_pmul(f12, f24)), (f64)(f32)px_pmul(f11, f25));
                                        f1 = (f64)(f32)px_padd(f12, f11);
                                        f2 = (f64)(f32)px_psub(f12, f11);
                                        f7 = (f64)(f32)px_pmul(f22, f9);
                                        f5 = (f64)(f32)px_pmul(f23, f9);
                                        f9 = (f64)(f32)px_pmul(f26, (f64)(f32)px_psub((f64)(f32)px_psub(f24, (f64)(f32)px_pmul(f0, f24)), (f64)(f32)px_pmul(f10, f25)));
                                        f3 = (f64)(f32)px_psub(f0, f10);
                                        f0 = (f64)(f32)px_padd(f0, f10);
                                        f9 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x24u), f9);
                                        f8 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x28u), f7);
                                        f7 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x2cu), f5);
                                        wrf32d(r1 + 0x30u, f9);
                                        wrf32d(r1 + 0x34u, f8);
                                        wrf32d(r1 + 0x38u, f7);
                                        wrf32d(r1 + 0x3cu, (f64)(f32)px_pmul(f26, f3));
                                        wrf32d(r1 + 0x40u, (f64)(f32)px_pmul(f22, f1));
                                        wrf32d(r1 + 0x44u, (f64)(f32)px_pmul(f23, f1));
                                        wrf32d(r1 + 0x48u, (f64)(f32)px_pmul(f26, f0));
                                        wrf32d(r1 + 0x4cu, (f64)(f32)px_pmul(f22, f2));
                                        wrf32d(r1 + 0x50u, (f64)(f32)px_pmul(f23, f2));
                                    }
                                    a.r[0] = 0x80u;
                                    a.r[1] = 0u;
                                    a.r[2] = 4u;
                                    r3 = tc_call(0x80250b74u, &a);
                                    f1 = tc_lastf();
                                    r5 = tc_junkr(5u);
                                    r6 = tc_junkr(6u);
                                    r7 = tc_junkr(7u);
                                    r8 = tc_junkr(8u);
                                    r9 = tc_junkr(9u);
                                    r10 = tc_junkr(0xau);
                                    f3 = 0.0;
                                    t23 = r1 + 0x30u;
                                    t24 = (f64)rdf32(t23);
                                    f0 = px_pack(t24, (f64)rdf32(t23));
                                    t26 = r1 + 0x3cu;
                                    t27 = (f64)rdf32(t26);
                                    f1 = px_pack(t27, (f64)rdf32(t26));
                                    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                    f0 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f1 = px_pack((f64)rdf32(r1 + 0x44u), 1.0);
                                    wrf32d(r1 + 0x78u, px_lo(f2));
                                    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                    f0 = (f64)rdf32(r1 + 0x78u);
                                    wrf32d(r1 + 0x80u, px_hi(f2));
                                    f1 = (f64)rdf32(r1 + 0x7cu);
                                    wrf32d(0xcc008000u, f0);
                                    f0 = (f64)rdf32(r1 + 0x80u);
                                    wrf32d(0xcc008000u, f1);
                                    wrf32d(0xcc008000u, f0);
                                    if (r29 != 0u) {
                                        wr8(0xcc008000u, 0u);
                                    }
                                    t41 = r1 + 0x30u;
                                    t42 = (f64)rdf32(t41);
                                    f0 = px_pack(t42, (f64)rdf32(t41));
                                    t44 = r1 + 0x48u;
                                    t45 = (f64)rdf32(t44);
                                    f1 = px_pack(t45, (f64)rdf32(t44));
                                    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                    f0 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f1 = px_pack((f64)rdf32(r1 + 0x50u), 1.0);
                                    wrf32d(r1 + 0x6cu, px_lo(f2));
                                    f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                    f0 = (f64)rdf32(r1 + 0x6cu);
                                    wrf32d(r1 + 0x74u, px_hi(f2));
                                    f1 = (f64)rdf32(r1 + 0x70u);
                                    wrf32d(0xcc008000u, f0);
                                    f0 = (f64)rdf32(r1 + 0x74u);
                                    wrf32d(0xcc008000u, f1);
                                    wrf32d(0xcc008000u, f0);
                                    if (r29 != 0u) {
                                        wr8(0xcc008000u, 1u);
                                    }
                                    t59 = r1 + 0x30u;
                                    t60 = (f64)rdf32(t59);
                                    f0 = px_pack(t60, (f64)rdf32(t59));
                                    t62 = r1 + 0x3cu;
                                    t63 = (f64)rdf32(t62);
                                    f1 = px_pack(t63, (f64)rdf32(t62));
                                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                    f0 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f1 = px_pack((f64)rdf32(r1 + 0x44u), 1.0);
                                    wrf32d(r1 + 0x60u, px_lo(f2));
                                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                    f0 = (f64)rdf32(r1 + 0x60u);
                                    wrf32d(r1 + 0x68u, px_hi(f2));
                                    f1 = (f64)rdf32(r1 + 0x64u);
                                    wrf32d(0xcc008000u, f0);
                                    f0 = (f64)rdf32(r1 + 0x68u);
                                    wrf32d(0xcc008000u, f1);
                                    wrf32d(0xcc008000u, f0);
                                    if (r29 != 0u) {
                                        wr8(0xcc008000u, 2u);
                                    }
                                    t77 = r1 + 0x30u;
                                    t78 = (f64)rdf32(t77);
                                    f0 = px_pack(t78, (f64)rdf32(t77));
                                    t80 = r1 + 0x48u;
                                    t81 = (f64)rdf32(t80);
                                    f1 = px_pack(t81, (f64)rdf32(t80));
                                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                    f0 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f1 = px_pack((f64)rdf32(r1 + 0x50u), 1.0);
                                    wrf32d(r1 + 0x54u, px_lo(f2));
                                    f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                    f0 = (f64)rdf32(r1 + 0x54u);
                                    wrf32d(r1 + 0x5cu, px_hi(f2));
                                    f1 = (f64)rdf32(r1 + 0x58u);
                                    wrf32d(0xcc008000u, f0);
                                    f0 = (f64)rdf32(r1 + 0x5cu);
                                    wrf32d(0xcc008000u, f1);
                                    wrf32d(0xcc008000u, f0);
                                    if (r29 != 0u) {
                                        wr8(0xcc008000u, 3u);
                                    }
                                }
                            }
                        }
                        r3 = r25;
                        r4 = r26;
                        lr = 0x80329014u;
                        if (r28 == 0x8032885cu) break;
                        a.r[0] = r25;
                        a.r[1] = r26;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        r3 = tc_call(r28, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        f2 = 0.0;
                        f3 = 0.0;
                        r26 = r3;
                    }
                }
            }
        }
    }
}
