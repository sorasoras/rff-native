#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_802ba63c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, c1eq = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r10 = 0, r11 = 0, r12 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0;
    u32 r23 = 0, r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdf90u, 0x43300000u);
    wr32(0x817fdf98u, 0x43300000u);
    r28 = param_2;
    r31 = (param_1 * 0x538u) - 0x7faba3a8u;
    r3 = tc_call(0x80278eb8u, &a);
    if (r3 == 3u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r17 = r3;
        if ((u32)rd8(r31 + 0x51cu) == 0u) {
            wr8(r31 + 0x51cu, 1u);
            a.r[0] = param_1;
            a.r[1] = 0u;
            r3 = tc_call(0x8027a174u, &a);
            f1 = tc_lastf();
            r15 = r3;
            if (r3 == 0xffffffffu) {
                c1eq = rd32(r31 + 0x4d8u) == 0u;
                if (!c1eq && (u32)rd8(r31 + 0x522u) != 0u) {
                    c0eq = (u32)rd8(r31 + 0x523u) == 0u;
                    if (c0eq) {
                        if (!c1eq && c0eq) {
                            wr8(r31 + 0x523u, 1u);
                            a.r[0] = param_1;
                            a.r[1] = 1u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(r31 + 0x4d8u), &a);
                            wr8(r31 + 0x522u, 0u);
                        }
                        wr8(r31 + 0x51fu, 0u);
                    }
                }
            }
            a.r[0] = r17;
            (void)tc_call(0x8022c2d8u, &a);
            if ((u32)rd8(r31 + 0x51du) != 0u) {
                wr8(r31 + 0x5du, (u8)r15);
                a.r[0] = r31;
                (void)tc_call(0x802b83c0u, &a);
            }
            a.r[0] = param_1;
            a.r[1] = 0x802bb134u;
            (void)tc_call(0x8027a200u, &a);
            if ((u32)rd8(r31 + 0x10fu) != 0u && param_2 != 0u && param_3 != 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r29 = (u32)rd8(r31 + 0x10fu);
                r30 = r29;
                if (r29 > param_3) {
                    r30 = param_3;
                }
                r0 = r30;
                wr8(r31 + 0x10fu, 0u);
                r5 = param_2 + (r30 * 0x84u);
                r6 = (u32)rd8(r31 + 0x10eu) - r30;
                if ((s32)r6 < 0) {
                    r6 = r6 + 0x10u;
                }
                r5 = r5 - 0x84u;
                for (;;) {
                    r0 = r0 - 1u;
                    if (r0 == 0u) break;
                    r4 = r6 * 0x38u;
                    r6 = r6 + 1u;
                    r4 = r31 + r4;
                    r7 = (u32)rd16(r4 + 0x112u);
                    wr16(r5 - 0x84u, rd16(r4 + 0x110u));
                    wr16(r5 - 0x82u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x116u);
                    wr16(r5 - 0x80u, rd16(r4 + 0x114u));
                    wr16(r5 - 0x7eu, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x11au);
                    wr16(r5 - 0x7cu, rd16(r4 + 0x118u));
                    wr16(r5 - 0x7au, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x11eu);
                    wr16(r5 - 0x78u, rd16(r4 + 0x11cu));
                    wr16(r5 - 0x76u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x122u);
                    wr16(r5 - 0x74u, rd16(r4 + 0x120u));
                    wr16(r5 - 0x72u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x126u);
                    wr16(r5 - 0x70u, rd16(r4 + 0x124u));
                    wr16(r5 - 0x6eu, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x12au);
                    wr16(r5 - 0x6cu, rd16(r4 + 0x128u));
                    wr16(r5 - 0x6au, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x12eu);
                    wr16(r5 - 0x68u, rd16(r4 + 0x12cu));
                    wr16(r5 - 0x66u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x132u);
                    wr16(r5 - 0x64u, rd16(r4 + 0x130u));
                    wr16(r5 - 0x62u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x136u);
                    wr16(r5 - 0x60u, rd16(r4 + 0x134u));
                    wr16(r5 - 0x5eu, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x13au);
                    wr16(r5 - 0x5cu, rd16(r4 + 0x138u));
                    wr16(r5 - 0x5au, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x13eu);
                    wr16(r5 - 0x58u, rd16(r4 + 0x13cu));
                    wr16(r5 - 0x56u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x142u);
                    wr16(r5 - 0x54u, rd16(r4 + 0x140u));
                    wr16(r5 - 0x52u, (u16)r7);
                    r7 = (u32)rd16(r4 + 0x144u);
                    r4 = (u32)rd16(r4 + 0x146u);
                    wr16(r5 - 0x50u, (u16)r7);
                    wr16(r5 - 0x4eu, (u16)r4);
                    r5 = r5 - 0x84u;
                    if ((s32)r6 >= 16) {
                        r6 = 0u;
                    }
                }
                r16 = r31 + (r6 * 0x38u);
                r0 = (u32)rd16(r16 + 0x136u);
                wr32(0x817fdfb4u, (u32)rd16(r16 + 0x13au));
                r15 = (u32)rd16(r16 + 0x13cu);
                wr16(0x817fdf7eu, (u16)r0);
                r0 = rd32(0x817fdfb4u);
                wr32(0x817fdfa0u, r15);
                r15 = (u32)rd16(r16 + 0x13eu);
                wr16(0x817fdf82u, (u16)r0);
                r0 = rd32(0x817fdfa0u);
                wr32(0x817fdfa4u, r15);
                r15 = (u32)rd16(r16 + 0x140u);
                wr16(0x817fdf84u, (u16)r0);
                r0 = rd32(0x817fdfa4u);
                wr32(0x817fdfa8u, r15);
                r15 = (u32)rd16(r16 + 0x142u);
                wr16(0x817fdf86u, (u16)r0);
                r0 = rd32(0x817fdfa8u);
                wr32(0x817fdfacu, r15);
                r15 = (u32)rd16(r16 + 0x144u);
                wr16(0x817fdf88u, (u16)r0);
                r0 = rd32(0x817fdfacu);
                wr32(0x817fdfb0u, r15);
                r17 = (u32)rd16(r16 + 0x110u);
                r18 = (u32)rd16(r16 + 0x112u);
                r19 = (u32)rd16(r16 + 0x114u);
                r20 = (u32)rd16(r16 + 0x116u);
                r21 = (u32)rd16(r16 + 0x118u);
                r22 = (u32)rd16(r16 + 0x11au);
                r23 = (u32)rd16(r16 + 0x11cu);
                r24 = (u32)rd16(r16 + 0x11eu);
                r25 = (u32)rd16(r16 + 0x120u);
                r26 = (u32)rd16(r16 + 0x122u);
                r12 = (u32)rd16(r16 + 0x124u);
                r11 = (u32)rd16(r16 + 0x126u);
                r10 = (u32)rd16(r16 + 0x128u);
                r9 = (u32)rd16(r16 + 0x12au);
                r8 = (u32)rd16(r16 + 0x12cu);
                r7 = (u32)rd16(r16 + 0x12eu);
                r6 = (u32)rd16(r16 + 0x130u);
                r5 = (u32)rd16(r16 + 0x132u);
                r4 = (u32)rd16(r16 + 0x134u);
                r14 = (u32)rd16(r16 + 0x138u);
                r15 = (u32)rd16(r16 + 0x146u);
                wr16(0x817fdf8au, (u16)r0);
                r0 = rd32(0x817fdfb0u);
                wr16(0x817fdf58u, (u16)r17);
                wr16(0x817fdf5au, (u16)r18);
                wr16(0x817fdf5cu, (u16)r19);
                wr16(0x817fdf5eu, (u16)r20);
                wr16(0x817fdf60u, (u16)r21);
                wr16(0x817fdf62u, (u16)r22);
                wr16(0x817fdf64u, (u16)r23);
                wr16(0x817fdf66u, (u16)r24);
                wr16(0x817fdf68u, (u16)r25);
                wr16(0x817fdf6au, (u16)r26);
                wr16(0x817fdf6cu, (u16)r12);
                wr16(0x817fdf6eu, (u16)r11);
                wr16(0x817fdf70u, (u16)r10);
                wr16(0x817fdf72u, (u16)r9);
                wr16(0x817fdf74u, (u16)r8);
                wr16(0x817fdf76u, (u16)r7);
                wr16(0x817fdf78u, (u16)r6);
                wr16(0x817fdf7au, (u16)r5);
                wr16(0x817fdf7cu, (u16)r4);
                wr16(0x817fdf80u, (u16)r14);
                wr16(0x817fdf8cu, (u16)r0);
                wr16(0x817fdf8eu, (u16)r15);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                r9 = (u32)rd16(0x805773ceu);
                r8 = (u32)rd16(0x805773d0u);
                r7 = (u32)rd16(0x805773d4u);
                r6 = (u32)rd16(0x805773d6u);
                r0 = (u32)rd16(0x805773d8u);
                wr16(0x817fdf50u, rd16(0x805773ccu));
                wr16(0x817fdf52u, (u16)r9);
                wr16(0x817fdf54u, (u16)r8);
                wr16(0x817fdf48u, (u16)r7);
                wr16(0x817fdf4au, (u16)r6);
                wr16(0x817fdf4cu, (u16)r0);
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 0x817fdf50u;
                (void)tc_call(0x80279fb4u, &a);
                r5 = (u32)(s16)rd16(0x817fdf50u);
                r4 = (u32)(s16)rd16(0x817fdf54u);
                r3 = (u32)(s16)rd16(0x817fdf52u);
                if ((r4 * r5 * r3) == 0u) {
                    f0 = (f64)rdf32(0x805773dcu);
                    wrf32d(r31 + 0x4dcu, f0);
                    wrf32d(r31 + 0x4e0u, f0);
                    wrf32d(r31 + 0x4e4u, f0);
                } else {
                    r3 = r3 ^ 0x80000000u;
                    wr32(0x817fdf94u, r5 ^ 0x80000000u);
                    f4 = rdf64(0x805773b8u);
                    f0 = rdf64(0x817fdf90u);
                    wr32(0x817fdf9cu, r3);
                    f2 = (f64)(f32)(f0 - f4);
                    f3 = (f64)rdf32(0x805773a4u);
                    wr32(0x817fdf94u, r4 ^ 0x80000000u);
                    f0 = rdf64(0x817fdf90u);
                    f2 = (f64)(f32)px_fdiv(f3, f2);
                    f1 = (f64)(f32)(rdf64(0x817fdf98u) - f4);
                    wrf32d(r31 + 0x4dcu, f2);
                    f0 = (f64)(f32)(f0 - f4);
                    f1 = (f64)(f32)px_fdiv(f3, f1);
                    f0 = (f64)(f32)px_fdiv(f3, f0);
                    wrf32d(r31 + 0x4e0u, f1);
                    wrf32d(r31 + 0x4e4u, f0);
                }
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0x817fdf48u;
                (void)tc_call(0x80279fb4u, &a);
                r5 = (u32)(s16)rd16(0x817fdf48u);
                r4 = (u32)(s16)rd16(0x817fdf4cu);
                r3 = (u32)(s16)rd16(0x817fdf4au);
                if ((r4 * r5 * r3) == 0u) {
                    f0 = (f64)rdf32(0x805773e0u);
                    wrf32d(r31 + 0x4e8u, f0);
                    wrf32d(r31 + 0x4ecu, f0);
                    wrf32d(r31 + 0x4f0u, f0);
                } else {
                    r3 = r3 ^ 0x80000000u;
                    wr32(0x817fdf9cu, r5 ^ 0x80000000u);
                    f4 = rdf64(0x805773b8u);
                    f0 = rdf64(0x817fdf98u);
                    wr32(0x817fdf94u, r3);
                    f2 = (f64)(f32)(f0 - f4);
                    f3 = (f64)rdf32(0x805773a4u);
                    wr32(0x817fdf9cu, r4 ^ 0x80000000u);
                    f0 = rdf64(0x817fdf98u);
                    f2 = (f64)(f32)px_fdiv(f3, f2);
                    f1 = (f64)(f32)(rdf64(0x817fdf90u) - f4);
                    wrf32d(r31 + 0x4e8u, f2);
                    f0 = (f64)(f32)(f0 - f4);
                    f1 = (f64)(f32)px_fdiv(f3, f1);
                    f0 = (f64)(f32)px_fdiv(f3, f0);
                    wrf32d(r31 + 0x4ecu, f1);
                    wrf32d(r31 + 0x4f0u, f0);
                }
                r6 = r30;
                r9 = 0xffffu;
                r14 = param_2 + (r30 * 0x84u);
                r4 = 0xfdu;
                r8 = 0xffffu;
                r7 = 0xffffu;
                r5 = r14 - 0x84u;
                for (;;) {
                    r5 = r5 - 0x84u;
                    if (r6 <= 1u) {
                        r3 = 0x817fdf58u;
                    } else {
                        r3 = r5;
                    }
                    r0 = (u32)(s8)rd8(r3 + 0x29u);
                    c0lt = (s32)r0 < -2;
                    if (r0 != 0xfffffffeu) {
                        if (!c0lt) {
                            if (r0 != 0u) {
                                r6 = r6 - 1u;
                                if (r6 != 0u) continue;
                                break;
                            }
                            r4 = (u32)rd8(r3 + 0x28u);
                            if (r4 != 1u) {
                                if (r4 != 2u) {
                                    r9 = 0u;
                                    r8 = 0u;
                                } else {
                                    r9 = (u32)rd16(r3 + 0x2au);
                                    r8 = 0u;
                                }
                            } else {
                                r8 = (u32)rd16(r3);
                                r9 = 0u;
                            }
                        } else if (r0 != 0xfffffff9u) {
                            r6 = r6 - 1u;
                            if (r6 != 0u) continue;
                            break;
                        }
                    }
                    r7 = (u32)rd16(r3);
                    r6 = r6 - 1u;
                    if (r6 == 0u) break;
                }
                if (r7 != 0xffffu) {
                    if (r8 == 0xffffu) {
                        r8 = rd32(r31);
                    }
                    if (r9 == 0xffffu) {
                        r9 = rd32(r31 + 0x60u);
                    }
                    r0 = (r7 & 0x9fffu) | (r8 & 0x6000u);
                    r5 = rd32(r31) & 0xffffu;
                    r3 = r0 ^ r5;
                    wr32(r31, r0);
                    r0 = r3 & r0;
                    wr32(r31 + 4u, r0);
                    wr32(r31 + 8u, r3 & r5);
                    if (r4 == 2u) {
                        r0 = r9 & 0xffffu;
                        r5 = rd32(r31 + 0x60u) & 0xffffu;
                        wr32(r31 + 0x60u, r0);
                        r3 = r0 ^ r5;
                        r0 = r3 & r0;
                        wr32(r31 + 0x64u, r0);
                        wr32(r31 + 0x68u, r3 & r5);
                    }
                    a.r[0] = r31;
                    a.r[1] = r4;
                    a.r[2] = r29;
                    (void)tc_call(0x802b85b4u, &a);
                    r15 = r30;
                    r14 = r14 - 0x84u;
                    do {
                        r14 = r14 - 0x84u;
                        if (r15 <= 1u) {
                            r19 = 0x817fdf58u;
                        } else {
                            r19 = r14;
                        }
                        wr8(r31 + 0x5du, rd8(r19 + 0x29u));
                        r4 = (u32)rd8(r19 + 0x28u);
                        if ((u32)rd8(r31 + 0x5cu) != r4 && (((u32)rd8(r19 + 0x29u) + 2u) & 0xffu) <= 2u) {
                            wr8(r31 + 0x5cu, (u8)r4);
                            wr8(r31 + 0x51eu, 1u);
                        }
                        wr8(r31 + 0x5fu, rd8(r19 + 0x36u));
                        r0 = (u32)(s8)rd8(r19 + 0x29u);
                        c0lt = (s32)r0 < 0;
                        do {
                            if (r0 == 0u) {
                                a.r[0] = r31;
                                a.r[1] = r19;
                                (void)tc_call(0x802ba3c4u, &a);
                            } else {
                                if (!c0lt) {
                                    wr8(r31 + 0x5eu, 0u);
                                    break;
                                }
                                if (r0 != 0xfffffff9u) {
                                    wr8(r31 + 0x5eu, 0u);
                                    break;
                                }
                            }
                            a.r[0] = r31;
                            a.r[1] = r19;
                            (void)tc_call(0x802b8ab4u, &a);
                            a.r[0] = r31;
                            a.r[1] = r19;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            (void)tc_call(0x802b9c20u, &a);
                        } while (0);
                        r5 = r14 + 0x80u;
                        r4 = r31 - 4u;
                        ctr = 0x10u;
                        do {
                            r3 = rd32(r4 + 4u);
                            r4 = r4 + 8u;
                            r0 = rd32(r4);
                            wr32(r5 + 4u, r3);
                            wr32(r5 + 8u, r0);
                            r5 = r5 + 8u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        r15 = r15 - 1u;
                        wr32(r5 + 4u, rd32(r4 + 4u));
                    } while (r15 != 0u);
                } else {
                    do {
                        a.r[0] = r28;
                        a.r[1] = r31;
                        a.r[2] = 0x84u;
                        (void)tc_call(0x80004338u, &a);
                        r30 = r30 - 1u;
                        r28 = r28 + 0x84u;
                    } while (r30 != 0u);
                }
            }
            wr8(r31 + 0x51cu, 0u);
        } else {
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
    }
    return;
}
