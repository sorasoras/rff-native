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

void fn_801c8eb8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r11 = 0, r12 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u32 t2 = 0;
    f64 f0 = 0.0, f1 = tc_argf(0u), f2 = tc_argf(1u), f31 = 0.0, t3 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r4 = param_2;
    r5 = (u32)param_3;
    do {
        wr32(r1 - 0xe0u, r1);
        r1 = r1 - 0xe0u;
        wr32(r1 + 0xe4u, lr);
        wrf64(r1 + 0xd0u, 0.0);
        wrf32d(r1 + 0xd8u, px_lo(0.0));
        r11 = r1 + 0xd0u;
        wr32(r11 - 0x28u, 0u);
        wr32(r11 - 0x24u, r23);
        wr32(r11 - 0x20u, 0u);
        wr32(r11 - 0x1cu, 0u);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, 0u);
        wr32(r11 - 8u, 0u);
        wr32(r11 - 4u, r31);
        f0 = (f64)rdf32(0x80575de0u);
        wr32(r1 + 0x58u, 0u);
        r26 = param_1;
        r28 = r4;
        wrf32d(r1 + 0x48u, f0);
        r27 = r5;
        r23 = 0x8033bca8u;
        wrf32d(r1 + 0x4cu, f0);
        wrf32d(r1 + 0x50u, f0);
        wrf32d(r1 + 0x54u, f0);
        wr8(r1 + 0x5cu, 0u);
        wr8(r1 + 0x5du, 0u);
        r3 = tc_call(0x80097da4u, &a);
        f1 = tc_lastf();
        r31 = rd32(r3 + 0x60u);
        wr32(r1 + 0x60u, 0u);
        wr32(r1 + 0x64u, 1u);
        wr32(r1 + 0x68u, 2u);
        wr32(r1 + 0x6cu, 3u);
        wr32(r1 + 0x70u, 4u);
        wr32(r1 + 0x74u, 5u);
        wr32(r1 + 0x78u, 6u);
        wr32(r1 + 0x7cu, 7u);
        wr32(r1 + 0x80u, 8u);
        wr32(r1 + 0x84u, 9u);
        wr32(r1 + 0x88u, 0xau);
        wr32(r1 + 0x8cu, 0xbu);
        wr32(r1 + 0x90u, 0xcu);
        wr32(r1 + 0x94u, 0xdu);
        wr32(r1 + 0x98u, 0xeu);
        wr32(r1 + 0x9cu, 0xfu);
        a.r[0] = r1 + 0x60u;
        a.r[1] = 0x10u;
        f1 = tc_callf(0x801c8d70u, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0x19cu);
        lr = 0x801c8fb4u;
    } while (r12 == 0x801c8eb8u);
    a.r[0] = param_1;
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
    r7 = tc_junkr(7u);
    c0lt = (s32)r3 < 113;
    if (r3 == 0x71u) {
        r6 = rd32(0x8033bcb8u);
        r5 = rd32(0x8033bcbcu);
        r7 = r1 + 0x28u;
        r3 = rd32(0x8033bcc0u);
        r0 = rd32(0x8033bcc4u);
        wr32(r1 + 0x28u, r6);
        wr32(r1 + 0x2cu, r5);
        wr32(r1 + 0x30u, r3);
        wr32(r1 + 0x34u, r0);
    } else if (!c0lt) {
        if (r3 == 0x76u) {
            r6 = rd32(0x8033bcc8u);
            r5 = rd32(0x8033bcccu);
            r7 = r1 + 0x18u;
            r3 = rd32(0x8033bcd0u);
            r0 = rd32(0x8033bcd4u);
            wr32(r1 + 0x18u, r6);
            wr32(r1 + 0x1cu, r5);
            wr32(r1 + 0x20u, r3);
            wr32(r1 + 0x24u, r0);
        }
    } else if (r3 == 0x45u) {
        r6 = rd32(0x8033bca8u);
        r5 = rd32(0x8033bcacu);
        r7 = r1 + 0x38u;
        r3 = rd32(0x8033bcb0u);
        r0 = rd32(0x8033bcb4u);
        wr32(r1 + 0x38u, r6);
        wr32(r1 + 0x3cu, r5);
        wr32(r1 + 0x40u, r3);
        wr32(r1 + 0x44u, r0);
    }
    r29 = rd32(r7 + ((r28 << 2u) & 0xfffffffcu));
    r30 = r1 + 0x60u;
    f31 = (f64)rdf32(0x80575e08u);
    r28 = 0u;
    while ((s32)r28 < (s32)r27 && (s32)r28 < 16) {
        r0 = rd32(r30) * 0x14u;
        r7 = rd32(r31 + 0x4b0u) + r0;
        f2 = (f64)rdf32(r7 + 0xcu);
        f0 = (f64)rdf32(r7 + 8u);
        f1 = (f64)rdf32(r7 + 4u);
        wrf32d(r1 + 0xcu, f0);
        wrf32d(r1 + 0x48u, f1);
        wrf32d(r1 + 0x4cu, f0);
        wrf32d(r1 + 0x50u, f2);
        f0 = (f64)rdf32(r7 + 0x10u);
        wrf32d(r1 + 8u, f1);
        f0 = (f64)(f32)px_pmul(f31, f0);
        wrf32d(r1 + 0x10u, f2);
        wrf32d(r1 + 0x54u, f0);
        a.r[0] = r29;
        a.r[1] = 0u;
        a.r[2] = r1 + 0x48u;
        a.r[3] = 0u;
        r3 = tc_call(0x800eb4f0u, &a);
        f1 = tc_lastf();
        r22 = r3;
        if (r3 != 0u) {
            a.r[0] = 0x8046ad74u;
            a.r[1] = r3;
            r3 = tc_call(0x8007b03cu, &a);
            f1 = tc_lastf();
            wr32(r22 + 0x15cu, rd32(0x8046ad78u));
            wr32(r22 + 0x148u, rd32(r22 + 0x148u) | 0x400000u);
            wr32(param_1 + ((rd32(param_1 + 0x1690u) << 2u) & 0xfffffffcu) + 0x1694u, r22);
            wr32(param_1 + 0x1690u, rd32(param_1 + 0x1690u) + 1u);
            wr32(r22 + 0xed4u, 0u);
            a.r[0] = r22;
            a.r[1] = 0x1du;
            r3 = tc_call(0x800b31dcu, &a);
            f1 = tc_lastf();
        }
        r30 = r30 + 4u;
        r28 = r28 + 1u;
    }
    t2 = r1 + 0xd8u;
    t3 = (f64)rdf32(t2);
    t4 = (f64)rdf32(t2);
    r11 = r1 + 0xd0u;
    f31 = rdf64(r1 + 0xd0u);
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
