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

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
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

void fn_802bb990(void)
{
    u32 ctr = 0, r0 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r8 = tc_argr(5u), r10 = tc_argr(7u), r11 = 0, r12 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    wr32(0x817fdea0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r8 = rd32(0x80571bc4u);
    r6 = rd32(r8 + 0x69cu);
    wr32(0x817fdfa8u, 0x43300000u);
    r0 = (u32)rd8(r6);
    r5 = r6 + 2u;
    r6 = (u32)rd8(r6 + 1u);
    r6 = (r6 & 0xffff00ffu) | ((r0 << 8u) & 0xff00u);
    wr32(0x817fdfb0u, 0x43300000u);
    f3 = rdf64(0x805773f8u);
    wr32(r8 + 0x69cu, r5);
    r11 = (r6 - 2u) & 0xffffu;
    f1 = rdf64(0x803485e0u);
    f0 = rdf64(0x803485e8u);
    f30 = rdf64(0x803485f0u);
    f13 = rdf64(0x803485f8u);
    f11 = rdf64(0x80348600u);
    f9 = rdf64(0x80348608u);
    f6 = rdf64(0x80348610u);
    f4 = rdf64(0x80348618u);
    do {
        r5 = rd32(0x80571bc4u);
        r31 = 0u;
        r4 = rd32(r5 + 0x69cu);
        wr32(r5 + 0x69cu, r4 + 1u);
        r12 = (u32)rd8(r4);
        ctr = 8u;
        do {
            r6 = rd32(0x80571bc4u);
            r0 = r31 & 0xffffu;
            r10 = r0 - 0x7fcb7a70u;
            r0 = (u32)rd8(r0 - 0x7fcb7a70u);
            r23 = rd32(r6 + 0x69cu);
            r31 = r31 + 8u;
            r8 = (r0 << 2u) & 0xfffffffcu;
            r27 = (u32)rd8(r10 + 6u);
            r4 = (u32)rd8(r10 + 1u);
            wr32(r6 + 0x69cu, r23 + 1u);
            r27 = (r27 << 2u) & 0xfffffffcu;
            r6 = (r4 << 2u) & 0xfffffffcu;
            r0 = (u32)rd8(r10 + 2u);
            r24 = rd32(0x80571bc4u);
            r4 = (u32)rd8(r23);
            r5 = (r0 << 2u) & 0xfffffffcu;
            r23 = rd32(r24 + 0x69cu);
            wr32(0x817fdfacu, r4);
            r0 = (u32)rd8(r10 + 3u);
            wr32(r24 + 0x69cu, r23 + 1u);
            r4 = (r0 << 2u) & 0xfffffffcu;
            f2 = rdf64(0x817fdfa8u);
            r25 = rd32(0x80571bc4u);
            r0 = (u32)rd8(r23);
            f8 = (f64)(f32)px_psub(f2, f3);
            r24 = rd32(r25 + 0x69cu);
            wr32(0x817fdfb4u, r0);
            r0 = (u32)rd8(r10 + 4u);
            wr32(r25 + 0x69cu, r24 + 1u);
            f2 = rdf64(0x817fdfb0u);
            r0 = (r0 << 2u) & 0xfffffffcu;
            r26 = rd32(0x80571bc4u);
            r23 = (u32)rd8(r24);
            f10 = (f64)(f32)px_psub(f2, f3);
            r24 = rd32(r26 + 0x69cu);
            wr32(0x817fdfacu, r23);
            r25 = (u32)rd8(r10 + 5u);
            wr32(r26 + 0x69cu, r24 + 1u);
            f2 = rdf64(0x817fdfa8u);
            r25 = (r25 << 2u) & 0xfffffffcu;
            r26 = rd32(0x80571bc4u);
            r23 = (u32)rd8(r24);
            f7 = (f64)(f32)px_psub(f2, f3);
            r24 = rd32(r26 + 0x69cu);
            wr32(0x817fdfb4u, r23);
            wr32(r26 + 0x69cu, r24 + 1u);
            f2 = rdf64(0x817fdfb0u);
            r28 = rd32(0x80571bc4u);
            wrf32d(r8 - 0x7e802158u, f8);
            f5 = (f64)(f32)px_psub(f2, f3);
            r26 = rd32(r28 + 0x69cu);
            r23 = (u32)rd8(r24);
            r8 = (u32)rd8(r10 + 7u);
            wr32(r28 + 0x69cu, r26 + 1u);
            r8 = (r8 << 2u) & 0xfffffffcu;
            r28 = rd32(0x80571bc4u);
            r24 = (u32)rd8(r26);
            r26 = rd32(r28 + 0x69cu);
            wr32(0x817fdfacu, r23);
            wr32(r28 + 0x69cu, r26 + 1u);
            f2 = rdf64(0x817fdfa8u);
            r28 = rd32(0x80571bc4u);
            r26 = (u32)rd8(r26);
            f8 = (f64)(f32)px_psub(f2, f3);
            r10 = rd32(r28 + 0x69cu);
            wrf32d(r6 - 0x7e802158u, f10);
            wr32(0x817fdfb4u, r24);
            wrf32d(r5 - 0x7e802158u, f7);
            f2 = rdf64(0x817fdfb0u);
            wr32(r28 + 0x69cu, r10 + 1u);
            f7 = (f64)(f32)px_psub(f2, f3);
            r5 = (u32)rd8(r10);
            wr32(0x817fdfacu, r26);
            wrf32d(r4 - 0x7e802158u, f5);
            f2 = rdf64(0x817fdfa8u);
            wrf32d(r0 - 0x7e802158u, f8);
            f5 = (f64)(f32)px_psub(f2, f3);
            wr32(0x817fdfb4u, r5);
            f2 = rdf64(0x817fdfb0u);
            wrf32d(r25 - 0x7e802158u, f7);
            f2 = (f64)(f32)px_psub(f2, f3);
            wrf32d(r27 - 0x7e802158u, f5);
            wrf32d(r8 - 0x7e802158u, f2);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r23 = (r12 << 8u) & 0xffff00u;
        r4 = 0u;
        r5 = 0u;
        ctr = 8u;
        do {
            r8 = (r4 << 2u) & 0x3fffcu;
            f2 = rdf64(((r5 << 3u) & 0x7fff8u) - 0x7fcb7a20u);
            r4 = r4 + 1u;
            f7 = (f64)rdf32(r8 - 0x7e802158u);
            r10 = (r4 << 2u) & 0x3fffcu;
            f5 = (f64)rdf32(r10 - 0x7e802158u);
            r4 = r4 + 1u;
            f10 = px_pmul(f7, f2);
            r12 = (r4 << 2u) & 0x3fffcu;
            f7 = (f64)rdf32(r12 - 0x7e802158u);
            r4 = r4 + 1u;
            r24 = (r4 << 2u) & 0x3fffcu;
            f12 = px_pmul(f1, f10);
            r4 = r4 + 1u;
            r25 = (r4 << 2u) & 0x3fffcu;
            r6 = rd32(0x80571bc4u);
            f10 = px_pmul(f0, px_pmul(f5, f2));
            f5 = (f64)rdf32(r24 - 0x7e802158u);
            f7 = px_pmul(f7, f2);
            r0 = r8 + r23;
            r4 = r4 + 1u;
            f8 = (f64)rdf32(r25 - 0x7e802158u);
            f12 = (f64)(f32)f12;
            r8 = (r4 << 2u) & 0x3fffcu;
            wrf32d(r6 + r0, f12);
            f31 = px_pmul(f30, f7);
            r4 = r4 + 1u;
            f7 = px_pmul(f5, f2);
            f5 = (f64)rdf32(r8 - 0x7e802158u);
            r6 = rd32(0x80571bc4u);
            f10 = (f64)(f32)f10;
            r26 = (r4 << 2u) & 0x3fffcu;
            f12 = px_pmul(f13, f7);
            f7 = (f64)rdf32(r26 - 0x7e802158u);
            r4 = r4 + 1u;
            wrf32d(r6 + (r10 + r23), f10);
            f10 = px_pmul(f8, f2);
            f8 = px_pmul(f5, f2);
            r27 = (r4 << 2u) & 0x3fffcu;
            r31 = rd32(0x80571bc4u);
            f31 = (f64)(f32)f31;
            f5 = (f64)rdf32(r27 - 0x7e802158u);
            f10 = px_pmul(f11, f10);
            wrf32d(r31 + (r12 + r23), f31);
            r8 = r8 + r23;
            f7 = px_pmul(f7, f2);
            f2 = px_pmul(f5, f2);
            r5 = r5 + 1u;
            f12 = (f64)(f32)f12;
            r4 = r4 + 1u;
            wrf32d(rd32(0x80571bc4u) + (r24 + r23), f12);
            f8 = px_pmul(f9, f8);
            f10 = (f64)(f32)f10;
            f2 = px_pmul(f4, f2);
            wrf32d(rd32(0x80571bc4u) + (r25 + r23), f10);
            f2 = (f64)(f32)f2;
            wrf32d(rd32(0x80571bc4u) + r8, (f64)(f32)f8);
            wrf32d(rd32(0x80571bc4u) + (r26 + r23), (f64)(f32)px_pmul(f6, f7));
            wrf32d(rd32(0x80571bc4u) + (r27 + r23), f2);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r11 = (r11 - 0x41u) & 0xffffu;
    } while (r11 != 0u);
    return;
}
