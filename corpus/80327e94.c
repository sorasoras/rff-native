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

static f64 px_pneg(f64 b)
{
    return px_b2f(px_f2b(b) ^ 0x8000000080000000ull);
}

static f64 px_pmg00(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) >> 32));
}

static f64 px_pmg01(f64 a, f64 b)
{
    return px_b2f((px_f2b(a) & 0xffffffff00000000ull) | (px_f2b(b) & 0xffffffffull));
}

static f64 px_pmg10(f64 a, f64 b)
{
    return px_b2f(((px_f2b(a) & 0xffffffffull) << 32) | (px_f2b(b) >> 32));
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_80327e94(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = tc_argr(8u), r12 = tc_argr(9u), r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, t27 = 0, t30 = 0, t45 = 0, t48 = 0, t63 = 0, t66 = 0, t81 = 0, t84 = 0;
    u32 t99 = 0, t105 = 0, t115 = 0, t120 = 0, t125 = 0, t130 = 0, t133 = 0, t179 = 0, t182 = 0, t185 = 0, t188 = 0, t191 = 0;
    u32 t194 = 0, t197 = 0, t200 = 0, t203 = 0, t206 = 0, t209 = 0, t212 = 0, t215 = 0, t218 = 0, t221 = 0, t224 = 0, t227 = 0;
    u32 t230 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f13 = 0.0, f14 = 0.0, f15 = 0.0, f16 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0;
    f64 f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0, t28 = 0.0, t31 = 0.0, t46 = 0.0, t49 = 0.0, t64 = 0.0;
    f64 t67 = 0.0, t82 = 0.0, t85 = 0.0, t100 = 0.0, t103 = 0.0, t106 = 0.0, t116 = 0.0, t121 = 0.0, t126 = 0.0, t131 = 0.0, t134 = 0.0, t180 = 0.0;
    f64 t181 = 0.0, t183 = 0.0, t184 = 0.0, t186 = 0.0, t187 = 0.0, t189 = 0.0, t190 = 0.0, t192 = 0.0, t193 = 0.0, t195 = 0.0, t196 = 0.0, t198 = 0.0;
    f64 t199 = 0.0, t201 = 0.0, t202 = 0.0, t204 = 0.0, t205 = 0.0, t207 = 0.0, t208 = 0.0, t210 = 0.0, t211 = 0.0, t213 = 0.0, t214 = 0.0, t216 = 0.0;
    f64 t217 = 0.0, t219 = 0.0, t220 = 0.0, t222 = 0.0, t223 = 0.0, t225 = 0.0, t226 = 0.0, t228 = 0.0, t229 = 0.0, t231 = 0.0, t232 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    for (;;) {
        wr32(r1 - 0x2d0u, r1);
        r1 = r1 - 0x2d0u;
        wr32(r1 + 0x2d4u, lr);
        wrf64(r1 + 0x2c0u, f31);
        wrf32d(r1 + 0x2c8u, px_lo(f31));
        wrf64(r1 + 0x2b0u, f30);
        wrf32d(r1 + 0x2b8u, px_lo(f30));
        wrf64(r1 + 0x2a0u, f29);
        wrf32d(r1 + 0x2a8u, px_lo(f29));
        wrf64(r1 + 0x290u, f28);
        wrf32d(r1 + 0x298u, px_lo(f28));
        wrf64(r1 + 0x280u, f27);
        wrf32d(r1 + 0x288u, px_lo(f27));
        wrf64(r1 + 0x270u, f26);
        wrf32d(r1 + 0x278u, px_lo(f26));
        wrf64(r1 + 0x260u, f25);
        wrf32d(r1 + 0x268u, px_lo(f25));
        wrf64(r1 + 0x250u, f24);
        wrf32d(r1 + 0x258u, px_lo(f24));
        wrf64(r1 + 0x240u, f23);
        wrf32d(r1 + 0x248u, px_lo(f23));
        wrf64(r1 + 0x230u, f22);
        wrf32d(r1 + 0x238u, px_lo(f22));
        wrf64(r1 + 0x220u, f21);
        wrf32d(r1 + 0x228u, px_lo(f21));
        wrf64(r1 + 0x210u, f20);
        wrf32d(r1 + 0x218u, px_lo(f20));
        wrf64(r1 + 0x200u, f19);
        wrf32d(r1 + 0x208u, px_lo(f19));
        wrf64(r1 + 0x1f0u, f18);
        wrf32d(r1 + 0x1f8u, px_lo(f18));
        wrf64(r1 + 0x1e0u, f17);
        wrf32d(r1 + 0x1e8u, px_lo(f17));
        wrf64(r1 + 0x1d0u, f16);
        wrf32d(r1 + 0x1d8u, px_lo(f16));
        wrf64(r1 + 0x1c0u, f15);
        wrf32d(r1 + 0x1c8u, px_lo(f15));
        wrf64(r1 + 0x1b0u, f14);
        wrf32d(r1 + 0x1b8u, px_lo(f14));
        r11 = r1 + 0x1b0u;
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
        f13 = (f64)rdf32(0x80577c10u);
        r21 = 0x43300000u;
        f7 = (f64)rdf32(r4 + 0x88u);
        r24 = r3;
        r20 = rd32(r4);
        r26 = r5;
        r19 = rd32(r4 + 4u);
        r12 = rd32(r4 + 8u);
        r25 = r4;
        r11 = rd32(r4 + 0xcu);
        r10 = rd32(r4 + 0x10u);
        r9 = rd32(r4 + 0x14u);
        r8 = rd32(r4 + 0x18u);
        r7 = rd32(r4 + 0x1cu);
        r6 = rd32(r4 + 0x20u);
        r5 = rd32(r4 + 0x24u);
        r3 = rd32(r4 + 0x28u);
        r0 = rd32(r4 + 0x2cu);
        wr32(r1 + 0x140u, 0x43300000u);
        wr32(r1 + 0x148u, 0x43300000u);
        wr32(r1 + 0x110u, r20);
        wr32(r1 + 0x114u, r19);
        wr32(r1 + 0x118u, r12);
        wr32(r1 + 0x11cu, r11);
        wr32(r1 + 0x120u, r10);
        wr32(r1 + 0x124u, r9);
        wr32(r1 + 0x128u, r8);
        wr32(r1 + 0x12cu, r7);
        wr32(r1 + 0x130u, r6);
        wr32(r1 + 0x134u, r5);
        wr32(r1 + 0x138u, r3);
        wr32(r1 + 0x13cu, r0);
        if (f13 != f7) {
            a.r[0] = r1 + 0x90u;
            f1 = tc_callf(0x80254460u, &a);
            r3 = tc_lastr();
            f7 = (f64)rdf32(r1 + 0x90u);
            f7 = px_ctiw(f7, ppc_fctiwz(f7));
            wrf64(r1 + 0x150u, f7);
            r0 = rd32(r1 + 0x154u);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                f13 = (f64)rdf32(r1 + 0x13cu);
                wrf32d(r1 + 0x13cu, (f64)(f32)px_padd(f13, (f64)rdf32(r4 + 0x88u)));
            } else if (c0lt && (s32)r0 >= 0) {
                r4 = r4 + 0x8cu;
                a.r[0] = r25;
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
                    f13 = (f64)rdf32(r1 + 0x13cu);
                    wrf32d(r1 + 0x13cu, (f64)(f32)px_padd(f13, (f64)rdf32(r25 + 0x88u)));
                } else {
                    f13 = (f64)rdf32(r1 + 0x8cu);
                    f7 = (f64)rdf32(0x80577c10u);
                    if (!((f13 > f7) || (f13 == f7))) {
                        f15 = (f64)rdf32(r25 + 0x88u);
                        f16 = (f64)rdf32(r1 + 0x84u);
                        f14 = (f64)rdf32(r1 + 0x88u);
                        f13 = (f64)(f32)px_pmul(f13, f15);
                        f17 = (f64)(f32)px_pmul(f16, f15);
                        f7 = (f64)rdf32(r1 + 0x13cu);
                        f15 = (f64)(f32)px_pmul(f14, f15);
                        f16 = (f64)(f32)px_psub((f64)rdf32(r1 + 0x11cu), f17);
                        f14 = (f64)(f32)px_psub((f64)rdf32(r1 + 0x12cu), f15);
                        f7 = (f64)(f32)px_psub(f7, f13);
                        wrf32d(r1 + 0x11cu, f16);
                        wrf32d(r1 + 0x12cu, f14);
                        wrf32d(r1 + 0x13cu, f7);
                    } else {
                        f15 = (f64)rdf32(r25 + 0x88u);
                        f16 = (f64)rdf32(r1 + 0x84u);
                        f14 = (f64)rdf32(r1 + 0x88u);
                        f13 = (f64)(f32)px_pmul(f13, f15);
                        f17 = (f64)(f32)px_pmul(f16, f15);
                        f7 = (f64)rdf32(r1 + 0x13cu);
                        f15 = (f64)(f32)px_pmul(f14, f15);
                        f16 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x11cu), f17);
                        f14 = (f64)(f32)px_padd((f64)rdf32(r1 + 0x12cu), f15);
                        f7 = (f64)(f32)px_padd(f7, f13);
                        wrf32d(r1 + 0x11cu, f16);
                        wrf32d(r1 + 0x12cu, f14);
                        wrf32d(r1 + 0x13cu, f7);
                    }
                }
            }
        }
        r31 = rd32(r26 + 0x24u) + 0x9cu;
        a.r[0] = r24;
        a.r[1] = r25;
        a.r[2] = r26;
        r3 = tc_call(0x80329848u, &a);
        f1 = tc_lastf();
        r5 = (u32)rd8(r31 + 0xa9u);
        r0 = (u32)rd8(r31 + 0xaau);
        r5 = (u32)(s8)r5;
        r7 = (u32)rd8(r24 + 0xc0u);
        r0 = (u32)(s8)r0;
        f15 = rdf64(0x80577c28u);
        r5 = r5 ^ 0x80000000u;
        f14 = (f64)rdf32(0x80577c14u);
        r0 = r0 ^ 0x80000000u;
        wr32(r1 + 0x144u, r5);
        wr32(r1 + 0x14cu, r0);
        r30 = (((0u - r7) | r7) >> 0x1fu) & 1u;
        f13 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(r1 + 0x140u), f15), f14);
        f7 = (f64)(f32)px_pdiv((f64)(f32)px_psub(rdf64(r1 + 0x148u), f15), f14);
        wrf32d(r1 + 0x10u, f13);
        wrf32d(r1 + 0x14u, f7);
        a.r[0] = r26;
        a.r[1] = r1 + 0xe0u;
        r3 = tc_call(0x8031efa8u, &a);
        f1 = tc_lastf();
        r4 = r1 + 0xe0u;
        a.r[0] = r1 + 0x110u;
        a.r[1] = r4;
        a.r[2] = r4;
        f1 = tc_callf(0x802337a0u, &a);
        r3 = tc_lastr();
        a.r[0] = r1 + 0xe0u;
        a.r[1] = 0u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        f21 = f1;
        a.r[0] = r1 + 0xe0u;
        a.r[1] = 1u;
        f1 = tc_callf(0x80320f2cu, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        f13 = (f64)rdf32(r1 + 0x114u);
        f20 = f1;
        f7 = (f64)rdf32(r1 + 0x124u);
        f13 = (f64)(f32)px_pmul(f13, f13);
        f14 = (f64)rdf32(0x80577c10u);
        f7 = (f64)(f32)px_pmul(f7, f7);
        f15 = (f64)(f32)px_padd(f13, f7);
        if (!((f15 < f14) || (f15 == f14))) {
            a.f[0] = f15;
            f1 = tc_callf(0x802eff54u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f7 = 0.0;
            f14 = (f64)(f32)px_pmul(f15, f1);
        }
        if ((u32)rd8(r31 + 0xadu) == 3u) {
            f23 = (f64)rdf32(0x80577c10u);
            f22 = (f64)rdf32(0x80577c18u);
        } else {
            f7 = (f64)rdf32(0x80577c10u);
            if (f7 != f14) {
                f15 = (f64)(f32)ppc_fres(f14);
                f13 = (f64)rdf32(r1 + 0x114u);
                f7 = (f64)rdf32(r1 + 0x124u);
                f16 = px_pack((f64)(f32)px_padd(px_hi(f15), px_hi(f15)), (f64)(f32)px_padd(px_lo(f15), px_lo(f15)));
                f15 = px_pack((f64)(f32)px_pmul(px_hi(f15), px_hi(f15)), (f64)(f32)px_pmul(px_lo(f15), px_lo(f15)));
                f13 = -f13;
                f15 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f14), px_hi(f15), px_hi(f16))), px_pfnm((f64)(f32)px_pfms(px_lo(f14), px_lo(f15), px_lo(f16))));
                f23 = (f64)(f32)px_pmul(f13, f15);
                f22 = (f64)(f32)px_pmul(f7, f15);
            } else {
                f23 = (f64)rdf32(0x80577c10u);
                f22 = (f64)rdf32(0x80577c18u);
            }
        }
        r12 = rd32(r24);
        r3 = r24;
        r0 = (u32)rd16(r31);
        r12 = rd32(r12 + 0x10u);
        r4 = r0 & 0x800u;
        lr = 0x80328210u;
        if (r12 != 0x80327e94u) {
            a.r[0] = r24;
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
            a.f[6] = f7;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r12 = rd32(r24);
            r18 = r3;
            r0 = (u32)rd16(r31);
            r3 = r24;
            r12 = rd32(r12 + 0x14u);
            r4 = r0 & 0x800u;
            lr = 0x80328230u;
            if (r12 != 0x80327e94u) {
                a.r[0] = r24;
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
                r29 = r3;
                r3 = r26;
                r28 = 1u;
                lr = 0x80328248u;
                if (r18 != 0x80327e94u) {
                    a.r[0] = r26;
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
                    f7 = (f64)rdf32(0x80577c1cu);
                    r27 = r3;
                    f17 = (f64)rdf32(0x80577c10u);
                    r18 = r1 + 0xe0u;
                    f19 = rdf64(0x80577c30u);
                    r19 = 0u;
                    f18 = (f64)rdf32(0x80577c20u);
                    r20 = 0xcc010000u;
                    wrf64(r1 + 0x158u, f7);
                    r21 = 1u;
                    r22 = 2u;
                    r23 = 3u;
                    for (;;) {
                        if (r3 == 0u) {
                            t179 = r1 + 0x2c8u;
                            t180 = (f64)rdf32(t179);
                            t181 = (f64)rdf32(t179);
                            f31 = rdf64(r1 + 0x2c0u);
                            t182 = r1 + 0x2b8u;
                            t183 = (f64)rdf32(t182);
                            t184 = (f64)rdf32(t182);
                            f30 = rdf64(r1 + 0x2b0u);
                            t185 = r1 + 0x2a8u;
                            t186 = (f64)rdf32(t185);
                            t187 = (f64)rdf32(t185);
                            f29 = rdf64(r1 + 0x2a0u);
                            t188 = r1 + 0x298u;
                            t189 = (f64)rdf32(t188);
                            t190 = (f64)rdf32(t188);
                            f28 = rdf64(r1 + 0x290u);
                            t191 = r1 + 0x288u;
                            t192 = (f64)rdf32(t191);
                            t193 = (f64)rdf32(t191);
                            f27 = rdf64(r1 + 0x280u);
                            t194 = r1 + 0x278u;
                            t195 = (f64)rdf32(t194);
                            t196 = (f64)rdf32(t194);
                            f26 = rdf64(r1 + 0x270u);
                            t197 = r1 + 0x268u;
                            t198 = (f64)rdf32(t197);
                            t199 = (f64)rdf32(t197);
                            f25 = rdf64(r1 + 0x260u);
                            t200 = r1 + 0x258u;
                            t201 = (f64)rdf32(t200);
                            t202 = (f64)rdf32(t200);
                            f24 = rdf64(r1 + 0x250u);
                            t203 = r1 + 0x248u;
                            t204 = (f64)rdf32(t203);
                            t205 = (f64)rdf32(t203);
                            f23 = rdf64(r1 + 0x240u);
                            t206 = r1 + 0x238u;
                            t207 = (f64)rdf32(t206);
                            t208 = (f64)rdf32(t206);
                            f22 = rdf64(r1 + 0x230u);
                            t209 = r1 + 0x228u;
                            t210 = (f64)rdf32(t209);
                            t211 = (f64)rdf32(t209);
                            f21 = rdf64(r1 + 0x220u);
                            t212 = r1 + 0x218u;
                            t213 = (f64)rdf32(t212);
                            t214 = (f64)rdf32(t212);
                            f20 = rdf64(r1 + 0x210u);
                            t215 = r1 + 0x208u;
                            t216 = (f64)rdf32(t215);
                            t217 = (f64)rdf32(t215);
                            f19 = rdf64(r1 + 0x200u);
                            t218 = r1 + 0x1f8u;
                            t219 = (f64)rdf32(t218);
                            t220 = (f64)rdf32(t218);
                            f18 = rdf64(r1 + 0x1f0u);
                            t221 = r1 + 0x1e8u;
                            t222 = (f64)rdf32(t221);
                            t223 = (f64)rdf32(t221);
                            f17 = rdf64(r1 + 0x1e0u);
                            t224 = r1 + 0x1d8u;
                            t225 = (f64)rdf32(t224);
                            t226 = (f64)rdf32(t224);
                            f16 = rdf64(r1 + 0x1d0u);
                            t227 = r1 + 0x1c8u;
                            t228 = (f64)rdf32(t227);
                            t229 = (f64)rdf32(t227);
                            f15 = rdf64(r1 + 0x1c0u);
                            t230 = r1 + 0x1b8u;
                            t231 = (f64)rdf32(t230);
                            t232 = (f64)rdf32(t230);
                            r11 = r1 + 0x1b0u;
                            f14 = rdf64(r1 + 0x1b0u);
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
                            r0 = rd32(r1 + 0x2d4u);
                            return;
                        }
                        f14 = (f64)rdf32(r3 + 0x30u);
                        f13 = (f64)rdf32(r3 + 0x38u);
                        r4 = rd32(r3 + 0xc8u);
                        f15 = (f64)(f32)px_pmul(f14, f13);
                        f27 = (f64)(f32)px_pmul(f15, (f64)rdf32(r4 + 0x58u));
                        f7 = rdf64(r1 + 0x158u);
                        if (!(f27 < f7)) {
                            r3 = rd32(r4 + 0x24u);
                            r0 = (u32)rd16(r3 + 0x9cu) & 0x6000u;
                            c0lt = (s32)r0 < 16384;
                            if (r0 == 0x4000u) {
                                f15 = (f64)(f32)px_pmul((f64)rdf32(r27 + 0x34u), f13);
                            } else if (!c0lt) {
                                if (r0 != 0x6000u) {
                                    f13 = (f64)rdf32(r27 + 0x34u);
                                    f15 = (f64)(f32)px_pmul(f13, (f64)rdf32(r27 + 0x3cu));
                                }
                            } else if (r0 == 0x2000u) {
                                f15 = (f64)(f32)px_pmul(f14, (f64)rdf32(r27 + 0x3cu));
                            } else {
                                f13 = (f64)rdf32(r27 + 0x34u);
                                f15 = (f64)(f32)px_pmul(f13, (f64)rdf32(r27 + 0x3cu));
                            }
                            f26 = (f64)(f32)px_pmul(f15, (f64)rdf32(r4 + 0x5cu));
                            f7 = rdf64(r1 + 0x158u);
                            if (!(f26 < f7)) {
                                a.r[0] = r24;
                                a.r[1] = r27;
                                a.r[2] = r31;
                                a.r[3] = r25;
                                a.r[4] = r28;
                                r3 = tc_call(0x80326730u, &a);
                                f1 = tc_lastf();
                                r0 = (u32)rd8(r27 + 0x9au);
                                r28 = 0u;
                                f14 = (f64)rdf32(r27 + 0x40u);
                                f13 = (f64)rdf32(r27 + 0x44u);
                                f7 = (f64)rdf32(r27 + 0x48u);
                                wrf32d(r1 + 0x18u, f14);
                                wrf32d(r1 + 0x1cu, f13);
                                wrf32d(r1 + 0x20u, f7);
                                if (r0 != 0u) {
                                    wr32(r1 + 0x144u, r0);
                                    wrf32d(r1 + 0x18u, (f64)(f32)px_padd(f14, (f64)(f32)px_pmul(f18, (f64)(f32)px_psub(rdf64(r1 + 0x140u), f19))));
                                }
                                r0 = (u32)rd8(r27 + 0x9bu);
                                if (r0 != 0u) {
                                    wr32(r1 + 0x14cu, r0);
                                    f7 = (f64)rdf32(r1 + 0x1cu);
                                    f7 = (f64)(f32)px_padd(f7, (f64)(f32)px_pmul(f18, (f64)(f32)px_psub(rdf64(r1 + 0x148u), f19)));
                                    wrf32d(r1 + 0x1cu, f7);
                                }
                                r0 = (u32)rd8(r27 + 0x9cu);
                                if (r0 != 0u) {
                                    wr32(r1 + 0x144u, r0);
                                    f7 = (f64)rdf32(r1 + 0x20u);
                                    f7 = (f64)(f32)px_padd(f7, (f64)(f32)px_pmul(f18, (f64)(f32)px_psub(rdf64(r1 + 0x140u), f19)));
                                    wrf32d(r1 + 0x20u, f7);
                                }
                                r3 = rd32(r27 + 0xc8u);
                                f13 = (f64)rdf32(r1 + 0x20u);
                                f7 = (f64)rdf32(r3 + 0x68u);
                                f16 = (f64)rdf32(r1 + 0x18u);
                                f7 = (f64)(f32)px_padd(f13, f7);
                                f15 = (f64)rdf32(r3 + 0x60u);
                                f14 = (f64)rdf32(r1 + 0x1cu);
                                f15 = (f64)(f32)px_padd(f16, f15);
                                f13 = (f64)(f32)px_padd(f14, (f64)rdf32(r3 + 0x64u));
                                wrf32d(r1 + 0x20u, f7);
                                wrf32d(r1 + 0x18u, f15);
                                wrf32d(r1 + 0x1cu, f13);
                                if (f17 == f7) {
                                    f13 = px_pmg00(f23, f22);
                                    t99 = r27 + 0xacu;
                                    t100 = (f64)rdf32(t99);
                                    f0 = px_pack(t100, (f64)rdf32(t99));
                                    t103 = (f64)rdf32(r18);
                                    f2 = px_pack(t103, (f64)rdf32(r18));
                                    f7 = px_pmg00(f27, f26);
                                    t105 = r18 + 0x10u;
                                    t106 = (f64)rdf32(t105);
                                    f8 = px_pack(t106, (f64)rdf32(t105));
                                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
                                    f1 = px_pack((f64)rdf32(r27 + 0xb4u), 1.0);
                                    f24 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f20)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f20)));
                                    t115 = r18 + 8u;
                                    t116 = (f64)rdf32(t115);
                                    f3 = px_pack(t116, (f64)rdf32(t115));
                                    f25 = px_pack((f64)(f32)px_pmul(px_hi(f13), px_hi(f21)), (f64)(f32)px_pmul(px_lo(f13), px_hi(f21)));
                                    t120 = r18 + 0x18u;
                                    t121 = (f64)rdf32(t120);
                                    f9 = px_pack(t121, (f64)rdf32(t120));
                                    f5 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f4)));
                                    t125 = r1 + 0x10u;
                                    t126 = (f64)rdf32(t125);
                                    f13 = px_pack(t126, (f64)rdf32(t125));
                                    f10 = px_pack((f64)(f32)px_pmul(px_hi(f8), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f8), px_lo(f0)));
                                    t130 = r18 + 0x20u;
                                    t131 = (f64)rdf32(t130);
                                    f2 = px_pack(t131, (f64)rdf32(t130));
                                    t133 = r18 + 0x28u;
                                    t134 = (f64)rdf32(t133);
                                    f3 = px_pack(t134, (f64)rdf32(t133));
                                    f11 = px_pack((f64)(f32)px_pfma(px_hi(f9), px_hi(f1), px_hi(f10)), (f64)(f32)px_pfma(px_lo(f9), px_lo(f1), px_lo(f10)));
                                    f25 = px_pmg10(f25, f25);
                                    f14 = px_pack(px_pfnm((f64)(f32)px_pfms(px_hi(f7), px_hi(f13), px_hi(f13))), px_pfnm((f64)(f32)px_pfms(px_lo(f7), px_lo(f13), px_lo(f13))));
                                    f24 = px_pmg01(f24, px_pneg(f24));
                                    f13 = px_pack((f64)(f32)px_pmul(px_hi(f25), px_hi(f7)), (f64)(f32)px_pmul(px_lo(f25), px_hi(f7)));
                                    f6 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(0.0)), px_lo(f5));
                                    f7 = px_pack((f64)(f32)px_pmul(px_hi(f24), px_lo(f7)), (f64)(f32)px_pmul(px_lo(f24), px_lo(f7)));
                                    f4 = px_pack((f64)(f32)px_pmul(px_hi(f2), px_hi(f0)), (f64)(f32)px_pmul(px_lo(f2), px_lo(f0)));
                                    f15 = px_pmg00(f6, px_pack((f64)(f32)px_padd(px_hi(f11), px_lo(0.0)), px_lo(f11)));
                                    f5 = px_pack((f64)(f32)px_pfma(px_hi(f3), px_hi(f1), px_hi(f4)), (f64)(f32)px_pfma(px_lo(f3), px_lo(f1), px_lo(f4)));
                                    f26 = px_pack((f64)(f32)px_pfma(px_hi(f25), px_hi(f14), px_hi(f15)), (f64)(f32)px_pfma(px_lo(f25), px_hi(f14), px_lo(f15)));
                                    f15 = px_pack((f64)(f32)px_padd(px_hi(f13), px_hi(f7)), (f64)(f32)px_padd(px_lo(f13), px_lo(f7)));
                                    f7 = px_pneg(f7);
                                    f14 = px_pack((f64)(f32)px_pfma(px_hi(f24), px_lo(f14), px_hi(f26)), (f64)(f32)px_pfma(px_lo(f24), px_lo(f14), px_lo(f26)));
                                    f13 = px_pack((f64)(f32)px_padd(px_hi(f13), px_hi(f7)), (f64)(f32)px_padd(px_lo(f13), px_lo(f7)));
                                    f7 = px_pack((f64)(f32)px_padd(px_hi(f5), px_lo(f6)), px_lo(f5));
                                    wrf32d(r1 + 0xb8u, px_hi(f7));
                                    wrf32d(r1 + 0xb0u, px_lo(px_pack((f64)(f32)px_psub(px_hi(f14), px_hi(f13)), (f64)(f32)px_psub(px_lo(f14), px_lo(f13)))));
                                    wrf32d(r1 + 0xc4u, px_hi(f7));
                                    wrf32d(r1 + 0xbcu, px_lo(px_pack((f64)(f32)px_psub(px_hi(f14), px_hi(f15)), (f64)(f32)px_psub(px_lo(f14), px_lo(f15)))));
                                    wrf32d(r1 + 0xd0u, px_hi(f7));
                                    wrf32d(r1 + 0xc8u, px_lo(px_pack((f64)(f32)px_padd(px_hi(f14), px_hi(f13)), (f64)(f32)px_padd(px_lo(f14), px_lo(f13)))));
                                    f26 = px_pack((f64)(f32)px_padd(px_hi(f14), px_hi(f15)), (f64)(f32)px_padd(px_lo(f14), px_lo(f15)));
                                    wrf32d(r1 + 0xdcu, px_hi(f7));
                                    wrf32d(r1 + 0xd4u, px_lo(f26));
                                    a.r[0] = 0x80u;
                                    a.r[1] = 0u;
                                    a.r[2] = 4u;
                                    f1 = tc_callf(0x80250b74u, &a);
                                    r3 = tc_lastr();
                                    r5 = tc_junkr(5u);
                                    r6 = tc_junkr(6u);
                                    r7 = tc_junkr(7u);
                                    r8 = tc_junkr(8u);
                                    r9 = tc_junkr(9u);
                                    r10 = tc_junkr(0xau);
                                    f7 = (f64)rdf32(r1 + 0xb0u);
                                    f13 = (f64)rdf32(r1 + 0xb4u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0xb8u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 0u);
                                    }
                                    f7 = (f64)rdf32(r1 + 0xbcu);
                                    f13 = (f64)rdf32(r1 + 0xc0u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0xc4u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 1u);
                                    }
                                    f7 = (f64)rdf32(r1 + 0xc8u);
                                    f13 = (f64)rdf32(r1 + 0xccu);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0xd0u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 2u);
                                    }
                                    f7 = (f64)rdf32(r1 + 0xd4u);
                                    f13 = (f64)rdf32(r1 + 0xd8u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0xdcu);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 3u);
                                    }
                                } else {
                                    a.r[0] = r18;
                                    a.r[1] = r27 + 0xacu;
                                    a.r[2] = r1 + 0x24u;
                                    f1 = tc_callf(0x8023411cu, &a);
                                    r3 = tc_lastr();
                                    f7 = (f64)rdf32(r1 + 0x20u);
                                    f30 = (f64)(f32)px_pmul(f21, f22);
                                    f31 = (f64)(f32)px_pmul(f21, f23);
                                    f28 = (f64)rdf32(r1 + 0x10u);
                                    f25 = (f64)(f32)px_pmul(f20, f22);
                                    f29 = (f64)rdf32(r1 + 0x14u);
                                    f24 = (f64)(f32)px_pmul(f20, f23);
                                    a.f[0] = -f7;
                                    a.r[0] = r1 + 0xcu;
                                    a.r[1] = r1 + 8u;
                                    r3 = tc_call(0x80320a58u, &a);
                                    f1 = tc_lastf();
                                    f13 = (f64)rdf32(r1 + 8u);
                                    f15 = (f64)rdf32(r1 + 0x24u);
                                    f16 = (f64)(f32)px_pmul(f13, f27);
                                    f7 = (f64)rdf32(r1 + 0xcu);
                                    f14 = (f64)rdf32(r1 + 0x2cu);
                                    f13 = (f64)(f32)px_pmul(f13, f26);
                                    f27 = (f64)(f32)px_pmul(f7, f27);
                                    wrf64(r1 + 0x160u, f15);
                                    f15 = (f64)rdf32(r1 + 0x28u);
                                    f7 = (f64)(f32)px_pmul(f7, f26);
                                    wrf32d(r1 + 0x38u, f14);
                                    wrf64(r1 + 0x168u, f15);
                                    f26 = (f64)(f32)px_padd(f29, (f64)(f32)px_pmul(f27, f28));
                                    wrf32d(r1 + 0x44u, f17);
                                    f28 = (f64)(f32)px_psub(f28, (f64)(f32)px_pmul(f16, f28));
                                    f15 = (f64)(f32)px_pmul(f7, f29);
                                    wrf32d(r1 + 0x50u, f17);
                                    f29 = (f64)(f32)px_psub(f26, (f64)(f32)px_pmul(f13, f29));
                                    f26 = (f64)(f32)px_pmul(f30, f7);
                                    f15 = (f64)(f32)px_psub(f28, f15);
                                    f28 = (f64)(f32)px_pmul(f30, f16);
                                    f16 = (f64)(f32)px_pmul(f31, f16);
                                    f14 = (f64)(f32)px_pmul(f30, f15);
                                    f15 = (f64)(f32)px_pmul(f31, f15);
                                    f7 = (f64)(f32)px_pmul(f31, f7);
                                    f30 = (f64)(f32)px_padd(f14, (f64)(f32)px_pmul(f24, f29));
                                    f14 = (f64)(f32)px_psub(f28, f26);
                                    f31 = (f64)(f32)px_pmul(f24, f27);
                                    f29 = (f64)(f32)px_pmul(f25, f29);
                                    f26 = (f64)(f32)px_padd(f28, f26);
                                    f27 = (f64)(f32)px_pmul(f25, f27);
                                    f28 = (f64)(f32)px_psub(f15, f29);
                                    f25 = (f64)(f32)px_pmul(f25, f13);
                                    f29 = (f64)(f32)px_padd(rdf64(r1 + 0x160u), f30);
                                    f15 = (f64)(f32)px_psub(f16, f7);
                                    f16 = (f64)(f32)px_padd(f16, f7);
                                    f7 = rdf64(r1 + 0x168u);
                                    wrf32d(r1 + 0x30u, f29);
                                    f28 = (f64)(f32)px_padd(f7, f28);
                                    f7 = (f64)(f32)px_pmul(f24, f13);
                                    f24 = (f64)(f32)px_psub(f14, f31);
                                    wrf32d(r1 + 0x34u, f28);
                                    f15 = (f64)(f32)px_padd(f27, f15);
                                    f13 = (f64)(f32)px_padd(f27, f16);
                                    f16 = (f64)(f32)px_psub(f24, f7);
                                    f15 = (f64)(f32)px_padd(f25, f15);
                                    wrf32d(r1 + 0x3cu, f16);
                                    wrf32d(r1 + 0x40u, f15);
                                    wrf32d(r1 + 0x48u, (f64)(f32)px_padd(f7, (f64)(f32)px_psub(f26, f31)));
                                    wrf32d(r1 + 0x4cu, (f64)(f32)px_psub(f13, f25));
                                    a.r[0] = 0x80u;
                                    a.r[1] = 0u;
                                    a.r[2] = 4u;
                                    f1 = tc_callf(0x80250b74u, &a);
                                    r3 = tc_lastr();
                                    r5 = tc_junkr(5u);
                                    r6 = tc_junkr(6u);
                                    r7 = tc_junkr(7u);
                                    r8 = tc_junkr(8u);
                                    r9 = tc_junkr(9u);
                                    r10 = tc_junkr(0xau);
                                    t27 = r1 + 0x30u;
                                    t28 = (f64)rdf32(t27);
                                    f7 = px_pack(t28, (f64)rdf32(t27));
                                    t30 = r1 + 0x3cu;
                                    t31 = (f64)rdf32(t30);
                                    f13 = px_pack(t31, (f64)rdf32(t30));
                                    f14 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f13)), (f64)(f32)px_psub(px_lo(f7), px_lo(f13)));
                                    f7 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f13 = px_pack((f64)rdf32(r1 + 0x44u), 1.0);
                                    wrf32d(r1 + 0x78u, px_lo(f14));
                                    f14 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f13)), (f64)(f32)px_psub(px_lo(f7), px_lo(f13)));
                                    f7 = (f64)rdf32(r1 + 0x78u);
                                    wrf32d(r1 + 0x80u, px_hi(f14));
                                    f13 = (f64)rdf32(r1 + 0x7cu);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0x80u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 0u);
                                    }
                                    t45 = r1 + 0x30u;
                                    t46 = (f64)rdf32(t45);
                                    f7 = px_pack(t46, (f64)rdf32(t45));
                                    t48 = r1 + 0x48u;
                                    t49 = (f64)rdf32(t48);
                                    f13 = px_pack(t49, (f64)rdf32(t48));
                                    f14 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f13)), (f64)(f32)px_psub(px_lo(f7), px_lo(f13)));
                                    f7 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f13 = px_pack((f64)rdf32(r1 + 0x50u), 1.0);
                                    wrf32d(r1 + 0x6cu, px_lo(f14));
                                    f14 = px_pack((f64)(f32)px_psub(px_hi(f7), px_hi(f13)), (f64)(f32)px_psub(px_lo(f7), px_lo(f13)));
                                    f7 = (f64)rdf32(r1 + 0x6cu);
                                    wrf32d(r1 + 0x74u, px_hi(f14));
                                    f13 = (f64)rdf32(r1 + 0x70u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0x74u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 1u);
                                    }
                                    t63 = r1 + 0x30u;
                                    t64 = (f64)rdf32(t63);
                                    f7 = px_pack(t64, (f64)rdf32(t63));
                                    t66 = r1 + 0x3cu;
                                    t67 = (f64)rdf32(t66);
                                    f13 = px_pack(t67, (f64)rdf32(t66));
                                    f14 = px_pack((f64)(f32)px_padd(px_hi(f7), px_hi(f13)), (f64)(f32)px_padd(px_lo(f7), px_lo(f13)));
                                    f7 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f13 = px_pack((f64)rdf32(r1 + 0x44u), 1.0);
                                    wrf32d(r1 + 0x60u, px_lo(f14));
                                    f14 = px_pack((f64)(f32)px_padd(px_hi(f7), px_hi(f13)), (f64)(f32)px_padd(px_lo(f7), px_lo(f13)));
                                    f7 = (f64)rdf32(r1 + 0x60u);
                                    wrf32d(r1 + 0x68u, px_hi(f14));
                                    f13 = (f64)rdf32(r1 + 0x64u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0x68u);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 2u);
                                    }
                                    t81 = r1 + 0x30u;
                                    t82 = (f64)rdf32(t81);
                                    f7 = px_pack(t82, (f64)rdf32(t81));
                                    t84 = r1 + 0x48u;
                                    t85 = (f64)rdf32(t84);
                                    f13 = px_pack(t85, (f64)rdf32(t84));
                                    f14 = px_pack((f64)(f32)px_padd(px_hi(f7), px_hi(f13)), (f64)(f32)px_padd(px_lo(f7), px_lo(f13)));
                                    f7 = px_pack((f64)rdf32(r1 + 0x38u), 1.0);
                                    f13 = px_pack((f64)rdf32(r1 + 0x50u), 1.0);
                                    wrf32d(r1 + 0x54u, px_lo(f14));
                                    f14 = px_pack((f64)(f32)px_padd(px_hi(f7), px_hi(f13)), (f64)(f32)px_padd(px_lo(f7), px_lo(f13)));
                                    f7 = (f64)rdf32(r1 + 0x54u);
                                    wrf32d(r1 + 0x5cu, px_hi(f14));
                                    f13 = (f64)rdf32(r1 + 0x58u);
                                    wrf32d(0xcc008000u, f7);
                                    f7 = (f64)rdf32(r1 + 0x5cu);
                                    wrf32d(0xcc008000u, f13);
                                    wrf32d(0xcc008000u, f7);
                                    if (r30 != 0u) {
                                        wr8(0xcc008000u, 3u);
                                    }
                                }
                            }
                        }
                        r3 = r26;
                        r4 = r27;
                        lr = 0x803287a8u;
                        if (r29 == 0x80327e94u) break;
                        a.r[0] = r26;
                        a.r[1] = r27;
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
                        a.f[6] = f7;
                        a.f[7] = 0.0;
                        r3 = tc_call(r29, &a);
                        f1 = tc_lastf();
                        r5 = tc_junkr(5u);
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        r27 = r3;
                    }
                }
            }
        }
    }
}
