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

static void px_rec(u32 sp_, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9, f64 *f1_out)
{
    u32 c0eq = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t2 = 0;
    f64 f0 = 0.0, f1 = *f1_out, f2 = tc_argf(1u), f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f31 = 0.0, t3 = 0.0, t4 = 0.0;
    TcArgs a = {0};
    r1 = sp_;
    lr = 0x817ff000u;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r3 = param_r3;
    r4 = param_r4;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    for (;;) {
        wr32(r1 - 0x90u, r1);
        r1 = r1 - 0x90u;
        wr32(r1 + 0x94u, lr);
        wrf64(r1 + 0x80u, f31);
        wrf32d(r1 + 0x88u, px_lo(f31));
        r11 = r1 + 0x80u;
        wr32(r11 - 0x48u, r14);
        wr32(r11 - 0x44u, r15);
        wr32(r11 - 0x40u, r16);
        wr32(r11 - 0x3cu, r17);
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
        f0 = (f64)rdf32(0x80574960u);
        r6 = 0u;
        c0eq = r4 == 0u;
        r15 = r4;
        wrf32d(r1 + 0x10u, f0);
        r0 = 1u;
        wrf32d(r1 + 0x14u, f0);
        r5 = rd32(r1 + 0x10u);
        r4 = rd32(r1 + 0x14u);
        wr32(r1 + 0x20u, 0u);
        wr32(r1 + 0x24u, 0u);
        wr32(r1 + 0x28u, 0u);
        wr32(r1 + 0x18u, r5);
        wr32(r1 + 0x1cu, r4);
        if (!c0eq) {
            r0 = 0xffffffffu;
        }
        r4 = r0 ^ 0x80000000u;
        wr32(r1 + 0x34u, r4);
        r29 = r3 + 0x14u;
        f0 = (f64)rdf32(0x8057498cu);
        r23 = 0x80370000u;
        wr32(r1 + 0x30u, 0x43300000u);
        r24 = 0x80370000u;
        f2 = rdf64(0x80574980u);
        r19 = 0x80360000u;
        wrf32d(r1 + 0xcu, f0);
        r20 = 0x80360000u;
        f1 = rdf64(r1 + 0x30u);
        r21 = 0x80360000u;
        r0 = rd32(r1 + 0xcu);
        r14 = 0x80360000u;
        r30 = rd32(r3 + 0x14u);
        wr32(r1 + 0x28u, r0);
        wrf32d(r1 + 8u, (f64)(f32)px_psub(f1, f2));
        wr32(r1 + 0x24u, rd32(r1 + 8u));
        for (;;) {
            if (r30 != r29) {
                if (r30 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x803604e4u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x803604c0u;
                    a.r[3] = 0u;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x802e41c0u, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
                r18 = r30 - 4u;
                if (r18 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80360514u;
                    a.r[1] = 0x193u;
                    a.r[2] = 0x803604f0u;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x802e41c0u, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
                r12 = rd32(r18);
                r3 = r18;
                r12 = rd32(r12 + 0x68u);
                lr = 0x8015ae34u;
                if (r12 == 0x8015ad30u) break;
            } else {
                t2 = r1 + 0x88u;
                t3 = (f64)rdf32(t2);
                t4 = (f64)rdf32(t2);
                r11 = r1 + 0x80u;
                f31 = rdf64(r1 + 0x80u);
                r14 = rd32(r11 - 0x48u);
                r15 = rd32(r11 - 0x44u);
                r16 = rd32(r11 - 0x40u);
                r17 = rd32(r11 - 0x3cu);
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
                r0 = rd32(r1 + 0x94u);
                *f1_out = f1; return;
            }
            a.r[0] = r18;
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
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r17 = r3;
            if (r3 != 0u) {
                r0 = rd32(r3 + 0x38u);
                r16 = 0u;
                r25 = rd32(r1 + 0x18u);
                r31 = 0u;
                r26 = rd32(r1 + 0x1cu);
                r22 = (r0 >> 0x18u) & 0xfu;
                f31 = (f64)rdf32(r1 + 0x20u);
                r27 = rd32(r1 + 0x24u);
                r28 = rd32(r1 + 0x28u);
                while ((s32)r16 < (s32)r22) {
                    if (r16 >= ((rd32(r17 + 0x3cu) >> 0x18u) & 0xfu)) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80368fc8u;
                        a.r[1] = 0xa2u;
                        a.r[2] = 0x80368f94u;
                        a.r[3] = r6;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        r3 = tc_call(0x802e41c0u, &a);
                        f1 = tc_lastf();
                    }
                    a.r[0] = r17;
                    r3 = tc_call(0x802ebf74u, &a);
                    f1 = tc_lastf();
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    wr32(r3 + r31, r25);
                    r3 = r3 + r31;
                    r16 = r16 + 1u;
                    r31 = r31 + 0x14u;
                    wr32(r3 + 4u, r26);
                    wrf32d(r3 + 8u, f31);
                    wr32(r3 + 0xcu, r27);
                    wr32(r3 + 0x10u, r28);
                }
            }
            px_rec(r1, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, r10, r18, r15, r7, r8, r9, &f1);
            r4 = 0u;
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r30 = rd32(r30);
        }
    }
}

void fn_8015ad30(f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9)
{
    f64 f1 = 0.0;
    px_rec(0x817fe000u, param_f3, param_f4, param_f5, param_f6, param_f7, param_f8, param_r10, param_r3, param_r4, param_r7, param_r8, param_r9, &f1);
}
