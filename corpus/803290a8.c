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

void fn_803290a8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = tc_argr(8u), r12 = tc_argr(9u), r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, t23 = 0, t26 = 0, t41 = 0, t53 = 0, t56 = 0, t71 = 0, t74 = 0, t89 = 0;
    u32 t92 = 0, t107 = 0, t110 = 0, t126 = 0, t129 = 0, t132 = 0, t135 = 0, t138 = 0, t141 = 0, t144 = 0, t147 = 0, t150 = 0;
    u32 t153 = 0, t156 = 0, t159 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f20 = 0.0;
    f64 f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t24 = 0.0;
    f64 t27 = 0.0, t42 = 0.0, t54 = 0.0, t57 = 0.0, t72 = 0.0, t75 = 0.0, t90 = 0.0, t93 = 0.0, t108 = 0.0, t111 = 0.0, t127 = 0.0, t128 = 0.0;
    f64 t130 = 0.0, t131 = 0.0, t133 = 0.0, t134 = 0.0, t136 = 0.0, t137 = 0.0, t139 = 0.0, t140 = 0.0, t142 = 0.0, t143 = 0.0, t145 = 0.0, t146 = 0.0;
    f64 t148 = 0.0, t149 = 0.0, t151 = 0.0, t152 = 0.0, t154 = 0.0, t155 = 0.0, t157 = 0.0, t158 = 0.0, t160 = 0.0, t161 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    for (;;) {
        wr32(r1 - 0x2f0u, r1);
        r1 = r1 - 0x2f0u;
        wr32(r1 + 0x2f4u, lr);
        wrf64(r1 + 0x2e0u, f31);
        wrf32d(r1 + 0x2e8u, px_lo(f31));
        wrf64(r1 + 0x2d0u, f30);
        wrf32d(r1 + 0x2d8u, px_lo(f30));
        wrf64(r1 + 0x2c0u, f29);
        wrf32d(r1 + 0x2c8u, px_lo(f29));
        wrf64(r1 + 0x2b0u, f28);
        wrf32d(r1 + 0x2b8u, px_lo(f28));
        wrf64(r1 + 0x2a0u, f27);
        wrf32d(r1 + 0x2a8u, px_lo(f27));
        wrf64(r1 + 0x290u, f26);
        wrf32d(r1 + 0x298u, px_lo(f26));
        wrf64(r1 + 0x280u, f25);
        wrf32d(r1 + 0x288u, px_lo(f25));
        wrf64(r1 + 0x270u, f24);
        wrf32d(r1 + 0x278u, px_lo(f24));
        wrf64(r1 + 0x260u, f23);
        wrf32d(r1 + 0x268u, px_lo(f23));
        wrf64(r1 + 0x250u, f22);
        wrf32d(r1 + 0x258u, px_lo(f22));
        wrf64(r1 + 0x240u, f21);
        wrf32d(r1 + 0x248u, px_lo(f21));
        wrf64(r1 + 0x230u, f20);
        wrf32d(r1 + 0x238u, px_lo(f20));
        r11 = r1 + 0x230u;
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
        r23 = r3;
        f0 = (f64)rdf32(r4 + 0x88u);
        r25 = r5;
        r19 = rd32(r4);
        r24 = r4;
        r18 = rd32(r4 + 4u);
        r12 = rd32(r4 + 8u);
        r11 = rd32(r4 + 0xcu);
        r10 = rd32(r4 + 0x10u);
        r9 = rd32(r4 + 0x14u);
        r8 = rd32(r4 + 0x18u);
        r7 = rd32(r4 + 0x1cu);
        r6 = rd32(r4 + 0x20u);
        r5 = rd32(r4 + 0x24u);
        r3 = rd32(r4 + 0x28u);
        r0 = rd32(r4 + 0x2cu);
        wr32(r1 + 0xf0u, r19);
        wr32(r1 + 0xf4u, r18);
        wr32(r1 + 0xf8u, r12);
        wr32(r1 + 0xfcu, r11);
        wr32(r1 + 0x100u, r10);
        wr32(r1 + 0x104u, r9);
        wr32(r1 + 0x108u, r8);
        wr32(r1 + 0x10cu, r7);
        wr32(r1 + 0x110u, r6);
        wr32(r1 + 0x114u, r5);
        wr32(r1 + 0x118u, r3);
        wr32(r1 + 0x11cu, r0);
        if (f1 != f0) {
            a.r[0] = r1 + 0xa0u;
            f1 = tc_callf(0x80254460u, &a);
            r3 = tc_lastr();
            f0 = (f64)rdf32(r1 + 0xa0u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(r1 + 0x1e0u, f0);
            r0 = rd32(r1 + 0x1e4u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                f1 = (f64)rdf32(r1 + 0x11cu);
                wrf32d(r1 + 0x11cu, (f64)(f32)px_padd(f1, (f64)rdf32(r4 + 0x88u)));
            } else if (c0lt && (s32)r0 >= 0) {
                r4 = r4 + 0x8cu;
                a.r[0] = r24;
                a.r[1] = r4;
                a.r[2] = r1 + 0x7cu;
                f1 = tc_callf(0x8023411cu, &a);
                r3 = tc_lastr();
                r3 = r1 + 0x7cu;
                a.r[0] = r3;
                a.r[1] = r3;
                r3 = tc_call(0x80320984u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) {
                    f1 = (f64)rdf32(r1 + 0x11cu);
                    wrf32d(r1 + 0x11cu, (f64)(f32)px_padd(f1, (f64)rdf32(r24 + 0x88u)));
                } else {
                    f1 = (f64)rdf32(r1 + 0x84u);
                    f0 = (f64)rdf32(0x80577c10u);
                    if (!((f1 > f0) || (f1 == f0))) {
                        f3 = (f64)rdf32(r24 + 0x88u);
                        f4 = (f64)rdf32(r1 + 0x7cu);
                        f2 = (f64)rdf32(r1 + 0x80u);
                        f1 = (f64)(f32)px_pmul(f1, f3);
                        f5 = (f64)(f32)px_pmul(f4, f3);
                        f0 = (f64)rdf32(r1 + 0x11cu);
                        f3 = (f64)(f32)px_pmul(f2, f3);
                        f4 = (f64)(f32)px_psub((f64)rdf32(r1 + 0xfcu), f5);
                        f2 = (f64)(f32)px_psub((f64)rdf32(r1 + 0x10cu), f3);
                        f0 = (f64)(f32)px_psub(f0, f1);
                        wrf32d(r1 + 0xfcu, f4);
                        wrf32d(r1 + 0x10cu, f2);
                        wrf32d(r1 + 0x11cu, f0);
                    } else {
                        f3 = (f64)rdf32(r24 + 0x88u);
                        f4 = (f64)rdf32(r1 + 0x7cu);
                        f2 = (f64)rdf32(r1 + 0x80u);
                        f1 = (f64)(f32)px_pmul(f1, f3);
                        f5 = (f64)(f32)px_pmul(f4, f3);
                        f0 = (f64)rdf32(r1 + 0x11cu);
                        f3 = (f64)(f32)px_pmul(f2, f3);
                        f4 = (f64)(f32)px_padd((f64)rdf32(r1 + 0xfcu), f5);
                        f2 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x10cu), f3);
                        f0 = (f64)(f32)px_padd(f0, f1);
                        wrf32d(r1 + 0xfcu, f4);
                        wrf32d(r1 + 0x10cu, f2);
                        wrf32d(r1 + 0x11cu, f0);
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
        r4 = (u32)rd8(r30 + 0xa9u);
        r0 = (u32)rd8(r30 + 0xaau);
        r4 = (u32)(s8)r4;
        r7 = (u32)rd8(r23 + 0xc0u);
        r4 = r4 ^ 0x80000000u;
        r0 = (u32)(s8)r0;
        wr32(r1 + 0x1e0u, 0x43300000u);
        r0 = r0 ^ 0x80000000u;
        f3 = rdf64(0x80577c28u);
        wr32(r1 + 0x1e4u, r4);
        r31 = (((0u - r7) | r7) >> 0x1fu) & 1u;
        f2 = (f64)rdf32(0x80577c14u);
        f0 = rdf64(r1 + 0x1e0u);
        wr32(r1 + 0x1ecu, r0);
        wr32(r1 + 0x1e8u, 0x43300000u);
        f1 = (f64)(f32)px_pdiv((f64)(f32)px_psub(f0, f3), f2);
        f0 = (f64)(f32)px_psub(rdf64(r1 + 0x1e8u), f3);
        wrf32d(r1 + 8u, f1);
        f0 = (f64)(f32)px_pdiv(f0, f2);
        wrf32d(r1 + 0xcu, f0);
        a.r[0] = r25;
        a.r[1] = r1 + 0xc0u;
        r3 = tc_call(0x8031efa8u, &a);
        f1 = tc_lastf();
        r4 = r1 + 0xc0u;
        a.r[0] = r1 + 0xf0u;
        a.r[1] = r4;
        a.r[2] = r4;
        f1 = tc_callf(0x802337a0u, &a);
        r3 = tc_lastr();
        a.r[0] = r1 + 0xc0u;
        a.r[1] = 0u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        f26 = f1;
        a.r[0] = r1 + 0xc0u;
        a.r[1] = 1u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        f27 = f1;
        a.r[0] = r1 + 0x120u;
        a.r[1] = r1 + 0xf0u;
        a.r[2] = r25;
        f1 = tc_callf(0x80327b38u, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r23);
        r3 = r23;
        r4 = r25;
        r12 = rd32(r12 + 0x18u);
        lr = 0x80329384u;
        if (r12 != 0x803290a8u) {
            a.r[0] = r23;
            a.r[1] = r25;
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
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r23);
            r29 = r3;
            r0 = (u32)rd16(r30);
            r3 = r23;
            r12 = rd32(r12 + 0x10u);
            r4 = r0 & 0x800u;
            lr = 0x803293a4u;
            if (r12 != 0x803290a8u) {
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
                lr = 0x803293c4u;
                if (r12 != 0x803290a8u) {
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
                    lr = 0x803293dcu;
                    if (r18 != 0x803290a8u) {
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
                        f29 = (f64)rdf32(0x80577c10u);
                        r26 = r3;
                        f30 = (f64)rdf32(0x80577c38u);
                        r18 = 0u;
                        f31 = (f64)rdf32(0x80577c18u);
                        r19 = 0xcc010000u;
                        f28 = (f64)rdf32(0x80577c1cu);
                        r20 = 1u;
                        r21 = 2u;
                        r22 = 3u;
                        for (;;) {
                            if (r3 == 0u) {
                                t126 = r1 + 0x2e8u;
                                t127 = (f64)rdf32(t126);
                                t128 = (f64)rdf32(t126);
                                f31 = rdf64(r1 + 0x2e0u);
                                t129 = r1 + 0x2d8u;
                                t130 = (f64)rdf32(t129);
                                t131 = (f64)rdf32(t129);
                                f30 = rdf64(r1 + 0x2d0u);
                                t132 = r1 + 0x2c8u;
                                t133 = (f64)rdf32(t132);
                                t134 = (f64)rdf32(t132);
                                f29 = rdf64(r1 + 0x2c0u);
                                t135 = r1 + 0x2b8u;
                                t136 = (f64)rdf32(t135);
                                t137 = (f64)rdf32(t135);
                                f28 = rdf64(r1 + 0x2b0u);
                                t138 = r1 + 0x2a8u;
                                t139 = (f64)rdf32(t138);
                                t140 = (f64)rdf32(t138);
                                f27 = rdf64(r1 + 0x2a0u);
                                t141 = r1 + 0x298u;
                                t142 = (f64)rdf32(t141);
                                t143 = (f64)rdf32(t141);
                                f26 = rdf64(r1 + 0x290u);
                                t144 = r1 + 0x288u;
                                t145 = (f64)rdf32(t144);
                                t146 = (f64)rdf32(t144);
                                f25 = rdf64(r1 + 0x280u);
                                t147 = r1 + 0x278u;
                                t148 = (f64)rdf32(t147);
                                t149 = (f64)rdf32(t147);
                                f24 = rdf64(r1 + 0x270u);
                                t150 = r1 + 0x268u;
                                t151 = (f64)rdf32(t150);
                                t152 = (f64)rdf32(t150);
                                f23 = rdf64(r1 + 0x260u);
                                t153 = r1 + 0x258u;
                                t154 = (f64)rdf32(t153);
                                t155 = (f64)rdf32(t153);
                                f22 = rdf64(r1 + 0x250u);
                                t156 = r1 + 0x248u;
                                t157 = (f64)rdf32(t156);
                                t158 = (f64)rdf32(t156);
                                f21 = rdf64(r1 + 0x240u);
                                t159 = r1 + 0x238u;
                                t160 = (f64)rdf32(t159);
                                t161 = (f64)rdf32(t159);
                                r11 = r1 + 0x230u;
                                f20 = rdf64(r1 + 0x230u);
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
                                r0 = rd32(r1 + 0x2f4u);
                                return;
                            }
                            if (rd32(r3 + 0xcu) == 1u) {
                                f2 = (f64)rdf32(r3 + 0x30u);
                                f1 = (f64)rdf32(r3 + 0x38u);
                                r4 = rd32(r3 + 0xc8u);
                                f3 = (f64)(f32)px_pmul(f2, f1);
                                f25 = (f64)(f32)px_pmul(f3, (f64)rdf32(r4 + 0x58u));
                                if (!(f25 < f28)) {
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
                                    f24 = (f64)(f32)px_pmul(f3, (f64)rdf32(r4 + 0x5cu));
                                    if (!(f24 < f28)) {
                                        a.r[0] = r23;
                                        a.r[1] = r26;
                                        a.r[2] = r30;
                                        a.r[3] = r24;
                                        a.r[4] = r27;
                                        f1 = tc_callf(0x80326730u, &a);
                                        r3 = tc_lastr();
                                        r6 = tc_junkr(6u);
                                        r7 = tc_junkr(7u);
                                        r8 = tc_junkr(8u);
                                        r9 = tc_junkr(9u);
                                        r10 = tc_junkr(0xau);
                                        r5 = r26;
                                        r3 = r1 + 0x94u;
                                        r4 = r1 + 0x120u;
                                        r27 = 0u;
                                        lr = 0x803294d4u;
                                        if (r29 == 0x803290a8u) break;
                                        a.r[0] = r3;
                                        a.r[1] = r4;
                                        a.r[2] = r26;
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
                                        r3 = tc_call(r29, &a);
                                        f1 = tc_lastf();
                                        r3 = r1 + 0x94u;
                                        a.r[0] = r3;
                                        a.r[1] = r1 + 0xc0u;
                                        a.r[2] = r3;
                                        r3 = tc_call(0x802f031cu, &a);
                                        f1 = tc_lastf();
                                        f1 = (f64)rdf32(r1 + 0x94u);
                                        f0 = (f64)rdf32(r1 + 0x98u);
                                        f1 = (f64)(f32)px_pmul(f1, f1);
                                        f0 = (f64)(f32)px_pmul(f0, f0);
                                        f21 = (f64)(f32)px_padd(f1, f0);
                                        if (!((f21 < f29) || (f21 == f29))) {
                                            a.f[0] = f21;
                                            f1 = tc_callf(0x802eff54u, &a);
                                            r3 = tc_lastr();
                                            f2 = (f64)(f32)px_pmul(f21, f1);
                                        } else {
                                            f2 = f29;
                                        }
                                        if (f29 != f2) {
                                            f3 = (f64)(f32)ppc_fres(f2);
                                            f4 = px_pack((f64)(f32)px_padd(px_hi(f3), px_hi(f3)), (f64)(f32)px_padd(px_lo(f3), px_lo(f3)));
                                            f3 = px_pack((f64)(f32)px_pmul(px_hi(f3), px_hi(f3)), (f64)(f32)px_pmul(px_lo(f3), px_lo(f3)));
                                            f3 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f2), px_hi(f3), px_hi(f4))), px_pfnm((f64)(f32)px_pfms(px_lo(f2), px_lo(f3), px_lo(f4))));
                                            f22 = (f64)(f32)px_pmul(-(f64)rdf32(r1 + 0x94u), f3);
                                            f23 = (f64)(f32)px_pmul((f64)rdf32(r1 + 0x98u), f3);
                                        } else {
                                            f22 = f29;
                                            f23 = (f64)rdf32(0x80577c18u);
                                        }
                                        r0 = (u32)rd8(r30 + 0xb0u);
                                        f21 = (f64)rdf32(0x80577c18u);
                                        if (r0 != 0u) {
                                            t23 = r26 + 0xacu;
                                            t24 = (f64)rdf32(t23);
                                            f2 = px_pack(t24, (f64)rdf32(t23));
                                            t26 = r26 + 0xb8u;
                                            t27 = (f64)rdf32(t26);
                                            f1 = px_pack(t27, (f64)rdf32(t26));
                                            f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
                                            f2 = px_pack((f64)rdf32(r26 + 0xb4u), 1.0);
                                            f1 = px_pack((f64)rdf32(r26 + 0xc0u), 1.0);
                                            wrf32d(r1 + 0x70u, px_lo(f0));
                                            f0 = px_pack((f64)(f32)px_psub(px_hi(f2), px_hi(f1)), (f64)(f32)px_psub(px_lo(f2), px_lo(f1)));
                                            f1 = (f64)rdf32(r1 + 0x74u);
                                            wrf32d(r1 + 0x78u, px_hi(f0));
                                            f2 = (f64)rdf32(r1 + 0x70u);
                                            f0 = (f64)rdf32(r1 + 0x78u);
                                            wrf32d(r1 + 0x8cu, f1);
                                            wrf32d(r1 + 0x90u, f0);
                                            t41 = r1 + 0x8cu;
                                            t42 = (f64)rdf32(t41);
                                            f1 = px_pack(t42, (f64)rdf32(t41));
                                            wrf32d(r1 + 0x88u, f2);
                                            f1 = px_pack((f64)(f32)px_pmul(px_hi(f1), px_hi(f1)), (f64)(f32)px_pmul(px_lo(f1), px_lo(f1)));
                                            f0 = px_pack((f64)rdf32(r1 + 0x88u), 1.0);
                                            f0 = px_pack((f64)(f32)px_pfma(px_hi(f0), px_hi(f0), px_hi(f1)), (f64)(f32)px_pfma(px_lo(f0), px_lo(f0), px_lo(f1)));
                                            f20 = px_pack((f64)(f32)px_padd(px_hi(f0), px_lo(f1)), px_lo(f1));
                                            if (!((f20 < f29) || (f20 == f29))) {
                                                a.f[0] = f20;
                                                f1 = tc_callf(0x802eff54u, &a);
                                                r3 = tc_lastr();
                                                f0 = (f64)(f32)px_pmul(f20, f1);
                                            } else {
                                                f0 = f29;
                                            }
                                            f0 = (f64)(f32)px_pmul(f30, f0);
                                            f0 = (f64)(f32)px_pdiv(f0, f24);
                                            f21 = (f64)(f32)px_padd(f21, f0);
                                        }
                                        a.r[0] = r1 + 0xc0u;
                                        a.r[1] = r26 + 0xacu;
                                        a.r[2] = r1 + 0x10u;
                                        f1 = tc_callf(0x8023411cu, &a);
                                        r3 = tc_lastr();
                                        f8 = (f64)rdf32(r1 + 0xcu);
                                        f0 = (f64)(f32)px_pmul(f26, f22);
                                        f4 = (f64)rdf32(r1 + 8u);
                                        f7 = (f64)(f32)px_pmul(f27, f23);
                                        wrf32d(r1 + 0x24u, (f64)rdf32(r1 + 0x18u));
                                        f9 = (f64)(f32)px_pmul(f27, f22);
                                        f5 = (f64)(f32)px_psub(f4, (f64)(f32)px_pmul(f25, f4));
                                        f6 = (f64)rdf32(r1 + 0x14u);
                                        f10 = (f64)(f32)px_pmul(f26, f23);
                                        f4 = (f64)rdf32(r1 + 0x10u);
                                        f3 = (f64)(f32)px_pmul(f7, f24);
                                        wrf32d(r1 + 0x30u, f29);
                                        f2 = (f64)(f32)px_psub((f64)(f32)px_pmul(f24, (f64)(f32)px_psub((f64)(f32)px_padd(f21, f8), f31)), f8);
                                        f8 = (f64)(f32)px_pmul(f0, f5);
                                        f5 = (f64)(f32)px_pmul(f10, f5);
                                        f7 = (f64)(f32)px_pmul(f7, f2);
                                        wrf32d(r1 + 0x3cu, f29);
                                        f2 = (f64)(f32)px_pmul(f9, f2);
                                        f9 = (f64)(f32)px_pmul(f21, (f64)(f32)px_pmul(f9, f24));
                                        f10 = (f64)(f32)px_pmul(f10, f25);
                                        f7 = (f64)(f32)px_psub(f8, f7);
                                        f1 = (f64)(f32)px_padd(f5, f2);
                                        f5 = (f64)(f32)px_padd(f6, f7);
                                        f6 = (f64)(f32)px_pmul(f0, f25);
                                        f4 = (f64)(f32)px_padd(f4, f1);
                                        wrf32d(r1 + 0x28u, (f64)(f32)px_psub(f10, f9));
                                        f0 = (f64)(f32)px_pmul(f21, f3);
                                        wrf32d(r1 + 0x20u, f5);
                                        f2 = (f64)(f32)px_padd(f6, f0);
                                        wrf32d(r1 + 0x1cu, f4);
                                        f0 = (f64)(f32)px_psub(f6, f0);
                                        wrf32d(r1 + 0x34u, (f64)(f32)px_padd(f10, f9));
                                        wrf32d(r1 + 0x2cu, f2);
                                        wrf32d(r1 + 0x38u, f0);
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
                                        t53 = r1 + 0x1cu;
                                        t54 = (f64)rdf32(t53);
                                        f0 = px_pack(t54, (f64)rdf32(t53));
                                        t56 = r1 + 0x28u;
                                        t57 = (f64)rdf32(t56);
                                        f1 = px_pack(t57, (f64)rdf32(t56));
                                        f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                        f0 = px_pack((f64)rdf32(r1 + 0x24u), 1.0);
                                        f1 = px_pack((f64)rdf32(r1 + 0x30u), 1.0);
                                        wrf32d(r1 + 0x64u, px_lo(f2));
                                        f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                        f0 = (f64)rdf32(r1 + 0x64u);
                                        wrf32d(r1 + 0x6cu, px_hi(f2));
                                        f1 = (f64)rdf32(r1 + 0x68u);
                                        wrf32d(0xcc008000u, f0);
                                        f0 = (f64)rdf32(r1 + 0x6cu);
                                        wrf32d(0xcc008000u, f1);
                                        wrf32d(0xcc008000u, f0);
                                        if (r31 != 0u) {
                                            wr8(0xcc008000u, 0u);
                                        }
                                        t71 = r1 + 0x1cu;
                                        t72 = (f64)rdf32(t71);
                                        f0 = px_pack(t72, (f64)rdf32(t71));
                                        t74 = r1 + 0x34u;
                                        t75 = (f64)rdf32(t74);
                                        f1 = px_pack(t75, (f64)rdf32(t74));
                                        f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                        f0 = px_pack((f64)rdf32(r1 + 0x24u), 1.0);
                                        f1 = px_pack((f64)rdf32(r1 + 0x3cu), 1.0);
                                        wrf32d(r1 + 0x58u, px_lo(f2));
                                        f2 = px_pack((f64)(f32)px_psub(px_hi(f0), px_hi(f1)), (f64)(f32)px_psub(px_lo(f0), px_lo(f1)));
                                        f0 = (f64)rdf32(r1 + 0x58u);
                                        wrf32d(r1 + 0x60u, px_hi(f2));
                                        f1 = (f64)rdf32(r1 + 0x5cu);
                                        wrf32d(0xcc008000u, f0);
                                        f0 = (f64)rdf32(r1 + 0x60u);
                                        wrf32d(0xcc008000u, f1);
                                        wrf32d(0xcc008000u, f0);
                                        if (r31 != 0u) {
                                            wr8(0xcc008000u, 1u);
                                        }
                                        t89 = r1 + 0x1cu;
                                        t90 = (f64)rdf32(t89);
                                        f0 = px_pack(t90, (f64)rdf32(t89));
                                        t92 = r1 + 0x28u;
                                        t93 = (f64)rdf32(t92);
                                        f1 = px_pack(t93, (f64)rdf32(t92));
                                        f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                        f0 = px_pack((f64)rdf32(r1 + 0x24u), 1.0);
                                        f1 = px_pack((f64)rdf32(r1 + 0x30u), 1.0);
                                        wrf32d(r1 + 0x4cu, px_lo(f2));
                                        f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                        f0 = (f64)rdf32(r1 + 0x4cu);
                                        wrf32d(r1 + 0x54u, px_hi(f2));
                                        f1 = (f64)rdf32(r1 + 0x50u);
                                        wrf32d(0xcc008000u, f0);
                                        f0 = (f64)rdf32(r1 + 0x54u);
                                        wrf32d(0xcc008000u, f1);
                                        wrf32d(0xcc008000u, f0);
                                        if (r31 != 0u) {
                                            wr8(0xcc008000u, 2u);
                                        }
                                        t107 = r1 + 0x1cu;
                                        t108 = (f64)rdf32(t107);
                                        f0 = px_pack(t108, (f64)rdf32(t107));
                                        t110 = r1 + 0x34u;
                                        t111 = (f64)rdf32(t110);
                                        f1 = px_pack(t111, (f64)rdf32(t110));
                                        f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                        f0 = px_pack((f64)rdf32(r1 + 0x24u), 1.0);
                                        f1 = px_pack((f64)rdf32(r1 + 0x3cu), 1.0);
                                        wrf32d(r1 + 0x40u, px_lo(f2));
                                        f2 = px_pack((f64)(f32)px_padd(px_hi(f0), px_hi(f1)), (f64)(f32)px_padd(px_lo(f0), px_lo(f1)));
                                        f0 = (f64)rdf32(r1 + 0x40u);
                                        wrf32d(r1 + 0x48u, px_hi(f2));
                                        f1 = (f64)rdf32(r1 + 0x44u);
                                        wrf32d(0xcc008000u, f0);
                                        f0 = (f64)rdf32(r1 + 0x48u);
                                        wrf32d(0xcc008000u, f1);
                                        wrf32d(0xcc008000u, f0);
                                        if (r31 != 0u) {
                                            wr8(0xcc008000u, 3u);
                                        }
                                    }
                                }
                            }
                            r3 = r25;
                            r4 = r26;
                            lr = 0x803297c4u;
                            if (r28 == 0x803290a8u) break;
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
}
