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

void fn_802d3ef4(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0, t2 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u), f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f31 = 0.0, t3 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)param_3;
    r6 = param_4;
    r7 = param_5;
    for (;;) {
        wr32(r1 - 0xe0u, r1);
        r1 = r1 - 0xe0u;
        wr32(r1 + 0xe4u, lr);
        wrf64(r1 + 0xd0u, 0.0);
        wrf32d(r1 + 0xd8u, px_lo(0.0));
        r11 = r1 + 0xd0u;
        wr32(r11 - 0x38u, r18);
        wr32(r11 - 0x34u, r19);
        wr32(r11 - 0x30u, r20);
        wr32(r11 - 0x2cu, r21);
        wr32(r11 - 0x28u, r22);
        wr32(r11 - 0x24u, 0u);
        wr32(r11 - 0x20u, 0u);
        wr32(r11 - 0x1cu, 0u);
        wr32(r11 - 0x18u, 0u);
        wr32(r11 - 0x14u, 0u);
        wr32(r11 - 0x10u, 0u);
        wr32(r11 - 0xcu, 0u);
        wr32(r11 - 8u, 0u);
        wr32(r11 - 4u, 0u);
        r19 = r3;
        r22 = r7;
        wr32(r1 + 0x88u, 0x43300000u);
        r20 = r4;
        r18 = r5;
        wr32(r1 + 0x90u, 0x43300000u);
        r21 = r6;
        a.r[0] = 0u;
        a.r[1] = r7;
        r3 = tc_call(0x802cba28u, &a);
        f1 = tc_lastf();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r4 = r3;
        r3 = rd32(r5 + 4u);
        r5 = r22;
        r12 = rd32(r3);
        r12 = rd32(r12 + 0xcu);
        lr = 0x802d3f58u;
        if (r12 != 0x802d3ef4u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r22;
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
            r23 = r3;
            a.r[0] = r3;
            a.r[1] = 1u;
            r3 = tc_call(0x802cbae4u, &a);
            f1 = tc_lastf();
            a.r[0] = r1 + 0x50u;
            a.r[1] = rd32(r18 + 4u);
            a.r[2] = 0u;
            r3 = tc_call(0x802d08c8u, &a);
            f1 = tc_lastf();
            r7 = (u32)rd8(0x80399f61u);
            r8 = (u32)rd8(0x80399f60u);
            r10 = (u32)rd8(r7 - 0x7fc660a8u);
            f12 = (f64)rdf32(0x80348a98u);
            wr32(r1 + 0x94u, r10);
            r5 = (u32)rd8(r8 - 0x7fc660a8u);
            r9 = (r8 << 2u) & 0xfffffffcu;
            r6 = (u32)rd8(r8 - 0x7fc660a6u);
            r11 = r1 + 0x38u;
            f2 = rdf64(r1 + 0x90u);
            r12 = (r7 << 2u) & 0xfffffffcu;
            r6 = r6 - r5;
            r4 = (u32)rd8(r7 - 0x7fc660a4u);
            r6 = r6 ^ 0x80000000u;
            f3 = rdf64(0x80348aa0u);
            wr32(r1 + 0x94u, r6);
            r4 = r4 - r10;
            r4 = r4 ^ 0x80000000u;
            f11 = (f64)rdf32(r20);
            f0 = rdf64(r1 + 0x90u);
            r27 = r1 + 0x68u;
            f1 = rdf64(0x80348aa8u);
            wr32(r1 + 0x94u, r4);
            f4 = (f64)(f32)px_psub(f0, f1);
            f10 = (f64)rdf32(r20 + 4u);
            f0 = rdf64(r1 + 0x90u);
            r31 = r1 + 0x58u;
            wr32(r1 + 0x8cu, r5);
            f6 = (f64)(f32)px_psub(f2, f3);
            f1 = (f64)(f32)px_psub(f0, f1);
            f0 = rdf64(r1 + 0x88u);
            f13 = (f64)rdf32(r1 + 0x54u);
            r26 = r1 + 0x78u;
            wr32(r1 + 0x8cu, r5);
            f7 = (f64)(f32)px_psub(f0, f3);
            f0 = rdf64(r1 + 0x88u);
            r28 = r1 + 0x70u;
            f31 = (f64)rdf32(r1 + 0x50u);
            r30 = r1 + 0x80u;
            wr32(r1 + 0x8cu, r10);
            f5 = (f64)(f32)px_psub(f0, f3);
            f9 = (f64)rdf32(r21 + 4u);
            f0 = rdf64(r1 + 0x88u);
            wr32(r1 + 0x58u, 0xffffffffu);
            f2 = (f64)(f32)px_psub(f0, f3);
            f8 = (f64)rdf32(r21 + 8u);
            wr32(r1 + 0x5cu, 0xffffffffu);
            wr32(r1 + 0x60u, 0xffffffffu);
            wr32(r1 + 0x64u, 0xffffffffu);
            wrf32d(r1 + 0x40u, f12);
            wrf32d(r1 + 0x44u, f12);
            wrf32d(r1 + 0x48u, f11);
            wrf32d(r1 + 0x4cu, f10);
            f0 = (f64)rdf32(r19 + 0x4cu);
            wrf32d(r1 + 0x38u, f31);
            f9 = (f64)(f32)px_psub(f0, f9);
            wrf32d(r1 + 0x3cu, f13);
            f3 = (f64)rdf32(r11 + r9);
            f0 = (f64)rdf32(r11 + r12);
            wrf32d(r26 + r9, f7);
            f3 = (f64)(f32)px_pmul(f4, f3);
            f0 = (f64)(f32)px_pmul(f1, f0);
            wrf32d(r27 + r9, f7);
            wrf32d(r28 + r12, f6);
            wrf32d(r27 + r12, f6);
            wrf32d(r1 + 0x40u, f9);
            wrf32d(r1 + 0x44u, f8);
            f0 = (f64)(f32)px_pdiv(f8, f0);
            f1 = (f64)(f32)px_padd(f5, (f64)(f32)px_pdiv(f9, f3));
            f0 = (f64)(f32)px_padd(f2, f0);
            wrf32d(r28 + r9, f1);
            wrf32d(r30 + r9, f1);
            wrf32d(r26 + r12, f0);
            wrf32d(r30 + r12, f0);
            a.r[0] = r1 + 0x48u;
            a.r[1] = r1 + 0x40u;
            a.r[2] = 1u;
            a.r[3] = r27;
            a.r[4] = r31 & (u32)((s32)((0u - r23) | r23) >> 31);
            a.r[5] = r22;
            r3 = tc_call(0x802cc128u, &a);
            f1 = tc_lastf();
            r6 = (u32)rd8(0x80399f6bu);
            r7 = (u32)rd8(0x80399f6au);
            r4 = r6 - 0x7fc6609eu;
            f4 = (f64)rdf32(r1 + 0x54u);
            r0 = (u32)rd8(r4 + 2u);
            f5 = (f64)rdf32(r1 + 0x50u);
            r10 = (u32)rd8(r7 - 0x7fc6609cu);
            r3 = (u32)rd8(r7 - 0x7fc6609eu);
            r11 = (r7 << 2u) & 0xfffffffcu;
            wr32(r1 + 0x94u, r0);
            r12 = (r6 << 2u) & 0xfffffffcu;
            r3 = r3 - r10;
            f2 = (f64)rdf32(r20);
            f0 = (f64)rdf32(r19 + 0x4cu);
            r3 = r3 ^ 0x80000000u;
            f1 = rdf64(r1 + 0x90u);
            f8 = (f64)rdf32(r21 + 4u);
            f0 = (f64)(f32)px_padd(f2, f0);
            wr32(r1 + 0x94u, r3);
            r9 = r1 + 0x28u;
            r3 = (u32)rd8(r4 + 6u);
            f10 = (f64)(f32)px_psub(f0, f8);
            f9 = (f64)rdf32(r20 + 4u);
            r3 = r3 - r0;
            f0 = rdf64(r1 + 0x90u);
            f3 = rdf64(0x80348aa8u);
            wrf32d(r1 + 0x28u, f5);
            f6 = rdf64(0x80348aa0u);
            f2 = (f64)(f32)px_psub(f0, f3);
            wrf32d(r1 + 0x2cu, f4);
            f4 = (f64)(f32)px_psub(f1, f6);
            f7 = (f64)rdf32(r21 + 0xcu);
            wr32(r1 + 0x94u, r3 ^ 0x80000000u);
            f1 = (f64)rdf32(r9 + r11);
            f0 = rdf64(r1 + 0x90u);
            f2 = (f64)(f32)px_pmul(f2, f1);
            wr32(r1 + 0x8cu, r10);
            f1 = (f64)(f32)px_psub(f0, f3);
            f0 = (f64)rdf32(r9 + r12);
            f5 = rdf64(r1 + 0x88u);
            wrf32d(r1 + 0x48u, f10);
            f2 = (f64)(f32)px_pdiv(f8, f2);
            wr32(r1 + 0x8cu, r10);
            f3 = rdf64(r1 + 0x88u);
            wrf32d(r1 + 0x4cu, f9);
            wrf32d(r1 + 0x40u, f8);
            f7 = (f64)(f32)px_psub((f64)rdf32(r19 + 0x50u), f7);
            wr32(r1 + 0x8cu, r0);
            f0 = (f64)(f32)px_pmul(f1, f0);
            f5 = (f64)(f32)px_psub(f5, f6);
            f1 = rdf64(r1 + 0x88u);
            f3 = (f64)(f32)px_psub(f3, f6);
            f0 = (f64)(f32)px_pdiv(f7, f0);
            wrf32d(r1 + 0x30u, f10);
            wrf32d(r30 + r11, f5);
            wrf32d(r28 + r11, f5);
            wrf32d(r27 + r12, f4);
            wrf32d(r28 + r12, f4);
            f2 = (f64)(f32)px_padd(f3, f2);
            wrf32d(r1 + 0x34u, f9);
            f1 = (f64)(f32)px_psub(f1, f6);
            wrf32d(r1 + 0x44u, f7);
            wrf32d(r27 + r11, f2);
            f0 = (f64)(f32)px_padd(f1, f0);
            wrf32d(r26 + r11, f2);
            wrf32d(r30 + r12, f0);
            wrf32d(r26 + r12, f0);
            a.r[0] = r1 + 0x48u;
            a.r[1] = r1 + 0x40u;
            a.r[2] = 1u;
            a.r[3] = r27;
            a.r[4] = r31 & (u32)((s32)((0u - r23) | r23) >> 31);
            a.r[5] = r22;
            r3 = tc_call(0x802cc128u, &a);
            f1 = tc_lastf();
            r6 = (u32)rd8(0x80399f89u);
            f1 = (f64)rdf32(r20 + 4u);
            f0 = (f64)rdf32(r19 + 0x50u);
            r7 = r6 - 0x7fc66080u;
            r8 = (u32)rd8(0x80399f88u);
            r0 = (u32)rd8(r7 + 6u);
            f0 = (f64)(f32)px_padd(f1, f0);
            r4 = r8 - 0x7fc66080u;
            f8 = (f64)rdf32(r21 + 0xcu);
            wr32(r1 + 0x94u, r0);
            f9 = (f64)(f32)px_psub(f0, f8);
            r10 = (u32)rd8(r4 + 6u);
            r11 = (r8 << 2u) & 0xfffffffcu;
            r3 = (u32)rd8(r4 + 4u);
            r12 = (r6 << 2u) & 0xfffffffcu;
            f0 = (f64)rdf32(r20);
            r4 = r3 - r10;
            r3 = (u32)rd8(r7 + 2u);
            f5 = (f64)rdf32(r21);
            r4 = r4 ^ 0x80000000u;
            f2 = rdf64(r1 + 0x90u);
            r3 = r3 - r0;
            f10 = (f64)(f32)px_padd(f0, f5);
            f11 = (f64)rdf32(r1 + 0x54u);
            wr32(r1 + 0x94u, r4);
            f12 = (f64)rdf32(r1 + 0x50u);
            r9 = r1 + 0x18u;
            f0 = rdf64(r1 + 0x90u);
            f1 = rdf64(0x80348aa8u);
            f6 = rdf64(0x80348aa0u);
            wrf32d(r1 + 0x48u, f10);
            f3 = (f64)(f32)px_psub(f0, f1);
            f4 = (f64)(f32)px_psub(f2, f6);
            wrf32d(r1 + 0x4cu, f9);
            f0 = (f64)rdf32(r19 + 0x4cu);
            wr32(r1 + 0x94u, r3 ^ 0x80000000u);
            f7 = (f64)(f32)px_psub(f0, f5);
            f0 = rdf64(r1 + 0x90u);
            wrf32d(r1 + 0x18u, f12);
            f1 = (f64)(f32)px_psub(f0, f1);
            wrf32d(r1 + 0x1cu, f11);
            wr32(r1 + 0x8cu, r10);
            f2 = (f64)rdf32(r9 + r11);
            f0 = rdf64(r1 + 0x88u);
            f2 = (f64)(f32)px_pmul(f3, f2);
            wrf32d(r1 + 0x20u, f10);
            f5 = (f64)(f32)px_psub(f0, f6);
            f0 = (f64)rdf32(r9 + r12);
            wr32(r1 + 0x8cu, r10);
            f0 = (f64)(f32)px_pmul(f1, f0);
            f3 = rdf64(r1 + 0x88u);
            f2 = (f64)(f32)px_pdiv(f7, f2);
            wrf32d(r28 + r11, f5);
            wrf32d(r30 + r11, f5);
            wr32(r1 + 0x8cu, r0);
            wrf32d(r26 + r12, f4);
            f1 = rdf64(r1 + 0x88u);
            f3 = (f64)(f32)px_psub(f3, f6);
            wrf32d(r30 + r12, f4);
            f0 = (f64)(f32)px_pdiv(f8, f0);
            wrf32d(r1 + 0x24u, f9);
            wrf32d(r1 + 0x40u, f7);
            wrf32d(r1 + 0x44u, f8);
            f2 = (f64)(f32)px_padd(f3, f2);
            f1 = (f64)(f32)px_psub(f1, f6);
            wrf32d(r26 + r11, f2);
            f0 = (f64)(f32)px_padd(f1, f0);
            wrf32d(r27 + r11, f2);
            wrf32d(r28 + r12, f0);
            wrf32d(r27 + r12, f0);
            a.r[0] = r1 + 0x48u;
            a.r[1] = r1 + 0x40u;
            a.r[2] = 1u;
            a.r[3] = r27;
            a.r[4] = r31 & (u32)((s32)((0u - r23) | r23) >> 31);
            a.r[5] = r22;
            r3 = tc_call(0x802cc128u, &a);
            f1 = tc_lastf();
            r6 = (u32)rd8(0x80399f75u);
            f9 = (f64)rdf32(r20);
            r7 = (u32)rd8(0x80399f74u);
            r0 = (u32)rd8(r6 - 0x7fc66090u);
            r4 = r7 - 0x7fc66094u;
            f4 = (f64)rdf32(r1 + 0x54u);
            r9 = (u32)rd8(r4 + 4u);
            wr32(r1 + 0x94u, r0);
            r10 = (r7 << 2u) & 0xfffffffcu;
            r3 = (u32)rd8(r4 + 6u);
            f2 = rdf64(r1 + 0x90u);
            r12 = r1 + 8u;
            r4 = r3 - r9;
            f1 = (f64)rdf32(r20 + 4u);
            r3 = (u32)rd8(r6 - 0x7fc66094u);
            r4 = r4 ^ 0x80000000u;
            wr32(r1 + 0x94u, r4);
            r11 = (r6 << 2u) & 0xfffffffcu;
            f7 = (f64)rdf32(r21 + 8u);
            r3 = r3 - r0;
            f6 = (f64)rdf32(r1 + 0x50u);
            r3 = r3 ^ 0x80000000u;
            f8 = (f64)(f32)px_padd(f1, f7);
            f0 = rdf64(r1 + 0x90u);
            f1 = rdf64(0x80348aa8u);
            wrf32d(r1 + 8u, f6);
            wr32(r1 + 0x94u, r3);
            f3 = (f64)(f32)px_psub(f0, f1);
            f5 = (f64)rdf32(r21);
            f0 = rdf64(r1 + 0x90u);
            f6 = rdf64(0x80348aa0u);
            wrf32d(r1 + 0xcu, f4);
            f1 = (f64)(f32)px_psub(f0, f1);
            f4 = (f64)(f32)px_psub(f2, f6);
            f2 = (f64)rdf32(r12 + r10);
            f0 = (f64)rdf32(r12 + r11);
            f2 = (f64)(f32)px_pmul(f3, f2);
            wr32(r1 + 0x8cu, r9);
            f0 = (f64)(f32)px_pmul(f1, f0);
            f3 = rdf64(r1 + 0x88u);
            wrf32d(r1 + 0x48u, f9);
            f2 = (f64)(f32)px_pdiv(f5, f2);
            wr32(r1 + 0x8cu, r9);
            f1 = rdf64(r1 + 0x88u);
            wrf32d(r1 + 0x4cu, f8);
            wrf32d(r1 + 0x40u, f5);
            f7 = (f64)(f32)px_psub((f64)rdf32(r19 + 0x50u), f7);
            wr32(r1 + 0x8cu, r0);
            f5 = (f64)(f32)px_psub(f3, f6);
            f3 = (f64)(f32)px_psub(f1, f6);
            f1 = rdf64(r1 + 0x88u);
            f0 = (f64)(f32)px_pdiv(f7, f0);
            wrf32d(r27 + r10, f5);
            wrf32d(r26 + r10, f5);
            wrf32d(r30 + r11, f4);
            wrf32d(r26 + r11, f4);
            wrf32d(r1 + 0x10u, f9);
            f2 = (f64)(f32)px_padd(f3, f2);
            wrf32d(r1 + 0x14u, f8);
            f1 = (f64)(f32)px_psub(f1, f6);
            wrf32d(r1 + 0x44u, f7);
            wrf32d(r30 + r10, f2);
            f0 = (f64)(f32)px_padd(f1, f0);
            wrf32d(r28 + r10, f2);
            wrf32d(r27 + r11, f0);
            wrf32d(r28 + r11, f0);
            a.r[0] = r1 + 0x48u;
            a.r[1] = r1 + 0x40u;
            a.r[2] = 1u;
            a.r[3] = r27;
            a.r[4] = r31 & (u32)((s32)((0u - r23) | r23) >> 31);
            a.r[5] = r22;
            r3 = tc_call(0x802cc128u, &a);
            f1 = tc_lastf();
            t2 = r1 + 0xd8u;
            t3 = (f64)rdf32(t2);
            t4 = (f64)rdf32(t2);
            r11 = r1 + 0xd0u;
            f31 = rdf64(r1 + 0xd0u);
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
            r0 = rd32(r1 + 0xe4u);
            return;
        }
    }
}
