#include "tc_rt.h"

void fn_80278218(void)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    TcArgs a = {0};
    wr32(0x817fdea0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r3 = tc_call(0x80286d1cu, &a);
    if (r3 == 3u) {
        r19 = rd32(0x80570db4u);
        if ((s32)r19 < 0) {
            r22 = 0u;
            r24 = 0x8050b950u;
            r25 = 0x80571ad8u;
            r23 = 0x80571adcu;
            do {
                r21 = 0u;
                if ((u32)rd8(r25) == 5u) {
                    r26 = rd32(r24);
                    if (rd32(r26 + 0x8d8u) == 0u) {
                        r21 = 0u;
                    } else {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r19 = (u32)(s8)((u32)rd8(r26 + 0x5edu) - (u32)rd8(r26 + 0x5ecu));
                        if ((s32)r19 < 0) {
                            r19 = (u32)(s8)(r19 + rd32(r26 + 0x5f4u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if (r19 != 0u) {
                            a.r[0] = 0x817fdf68u;
                            a.r[1] = rd32(r26 + 0x5f0u) + ((u32)(s8)rd8(r26 + 0x5ecu) * 0x30u);
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r27;
                            (void)tc_call(0x8022c2d8u, &a);
                            r0 = 1u;
                        } else {
                            a.r[0] = r27;
                            (void)tc_call(0x8022c2d8u, &a);
                            r0 = 0u;
                        }
                        if (r0 == 0u || (rd32(0x817fdf68u) != 0x12u && rd32(r26 + 0x840u) == 0u)) {
                            r21 = 0u;
                        } else {
                            r20 = rd32(0x817fdf6cu);
                            r19 = rd32(0x817fdf70u);
                            r12 = rd32(0x817fdf74u);
                            r11 = rd32(0x817fdf78u);
                            r10 = rd32(0x817fdf7cu);
                            r9 = rd32(0x817fdf80u);
                            r8 = rd32(0x817fdf84u);
                            r7 = rd32(0x817fdf88u);
                            r6 = rd32(0x817fdf8cu);
                            r5 = rd32(0x817fdf90u);
                            r0 = rd32(0x817fdf94u);
                            wr32(0x817fdf98u, rd32(0x817fdf68u));
                            wr32(0x817fdf9cu, r20);
                            wr32(0x817fdfa0u, r19);
                            wr32(0x817fdfa4u, r12);
                            wr32(0x817fdfa8u, r11);
                            wr32(0x817fdfacu, r10);
                            wr32(0x817fdfb0u, r9);
                            wr32(0x817fdfb4u, r8);
                            wr32(0x817fdfb8u, r7);
                            wr32(0x817fdfbcu, r6);
                            wr32(0x817fdfc0u, r5);
                            wr32(0x817fdfc4u, r0);
                            a.r[0] = r22;
                            a.r[1] = 0x817fdf98u;
                            r3 = tc_call(0x802770fcu, &a);
                            if (r3 != 0u) {
                                r21 = 0u;
                            } else {
                                r3 = tc_call(0x8022c2b0u, &a);
                                r27 = r3;
                                r3 = tc_call(0x8022c2b0u, &a);
                                r19 = (u32)(s8)((u32)rd8(r26 + 0x5edu) - (u32)rd8(r26 + 0x5ecu));
                                if ((s32)r19 < 0) {
                                    r19 = (u32)(s8)(r19 + rd32(r26 + 0x5f4u));
                                }
                                a.r[0] = r3;
                                (void)tc_call(0x8022c2d8u, &a);
                                if (r19 != 0u) {
                                    a.r[0] = rd32(r26 + 0x5f0u) + ((u32)(s8)rd8(r26 + 0x5ecu) * 0x30u);
                                    a.r[1] = 0u;
                                    a.r[2] = 0x30u;
                                    (void)tc_call(0x8000443cu, &a);
                                    r6 = (u32)(s8)rd8(r26 + 0x5ecu);
                                    r4 = rd32(r26 + 0x5f4u) - 1u;
                                    r5 = r6 - r4;
                                    r4 = r4 - r6;
                                    r4 = ~(r5 | r4);
                                    r4 = (u32)((s32)r4 >> 31);
                                    wr8(r26 + 0x5ecu, (u8)((r6 + 1u) & ~r4));
                                    a.r[0] = r27;
                                    (void)tc_call(0x8022c2d8u, &a);
                                } else {
                                    a.r[0] = r27;
                                    (void)tc_call(0x8022c2d8u, &a);
                                }
                                r21 = 1u;
                            }
                        }
                    }
                    if (r21 != 0u) {
                        wr8(r25, 0u);
                    }
                }
                if (r21 == 0u) {
                    r27 = rd32(r24);
                    do {
                        if (rd32(r27 + 0x8d8u) != 0u) {
                            r3 = tc_call(0x8022c2b0u, &a);
                            r26 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r19 = (u32)(s8)((u32)rd8(r27 + 0x161u) - (u32)rd8(r27 + 0x160u));
                            if ((s32)r19 < 0) {
                                r19 = (u32)(s8)(r19 + rd32(r27 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if (r19 != 0u) {
                                a.r[0] = 0x817fdf08u;
                                a.r[1] = rd32(r27 + 0x164u) + ((u32)(s8)rd8(r27 + 0x160u) * 0x30u);
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                a.r[0] = r26;
                                (void)tc_call(0x8022c2d8u, &a);
                                r0 = 1u;
                            } else {
                                a.r[0] = r26;
                                (void)tc_call(0x8022c2d8u, &a);
                                r0 = 0u;
                            }
                            if (r0 != 0u) {
                                r20 = rd32(0x817fdf0cu);
                                r26 = rd32(0x817fdf10u);
                                r12 = rd32(0x817fdf14u);
                                r11 = rd32(0x817fdf18u);
                                r10 = rd32(0x817fdf1cu);
                                r9 = rd32(0x817fdf20u);
                                r8 = rd32(0x817fdf24u);
                                r7 = rd32(0x817fdf28u);
                                r6 = rd32(0x817fdf2cu);
                                r5 = rd32(0x817fdf30u);
                                r0 = rd32(0x817fdf34u);
                                wr32(0x817fdf38u, rd32(0x817fdf08u));
                                wr32(0x817fdf3cu, r20);
                                wr32(0x817fdf40u, r26);
                                wr32(0x817fdf44u, r12);
                                wr32(0x817fdf48u, r11);
                                wr32(0x817fdf4cu, r10);
                                wr32(0x817fdf50u, r9);
                                wr32(0x817fdf54u, r8);
                                wr32(0x817fdf58u, r7);
                                wr32(0x817fdf5cu, r6);
                                wr32(0x817fdf60u, r5);
                                wr32(0x817fdf64u, r0);
                                a.r[0] = r22;
                                a.r[1] = 0x817fdf38u;
                                r3 = tc_call(0x802770fcu, &a);
                                if (r3 == 0u) {
                                    r3 = tc_call(0x8022c2b0u, &a);
                                    r26 = r3;
                                    r3 = tc_call(0x8022c2b0u, &a);
                                    r19 = (u32)(s8)((u32)rd8(r27 + 0x161u) - (u32)rd8(r27 + 0x160u));
                                    if ((s32)r19 < 0) {
                                        r19 = (u32)(s8)(r19 + rd32(r27 + 0x168u));
                                    }
                                    a.r[0] = r3;
                                    (void)tc_call(0x8022c2d8u, &a);
                                    if (r19 != 0u) {
                                        a.r[0] = rd32(r27 + 0x164u) + ((u32)(s8)rd8(r27 + 0x160u) * 0x30u);
                                        a.r[1] = 0u;
                                        a.r[2] = 0x30u;
                                        (void)tc_call(0x8000443cu, &a);
                                        r6 = (u32)(s8)rd8(r27 + 0x160u);
                                        r4 = rd32(r27 + 0x168u) - 1u;
                                        r5 = r6 - r4;
                                        r4 = r4 - r6;
                                        r4 = ~(r5 | r4);
                                        r4 = (u32)((s32)r4 >> 31);
                                        wr8(r27 + 0x160u, (u8)((r6 + 1u) & ~r4));
                                        a.r[0] = r26;
                                        (void)tc_call(0x8022c2d8u, &a);
                                    } else {
                                        a.r[0] = r26;
                                        (void)tc_call(0x8022c2d8u, &a);
                                    }
                                    r0 = 1u;
                                    break;
                                }
                            }
                        }
                        r0 = 0u;
                    } while (0);
                    r21 = r21 | r0;
                }
                r20 = rd32(r24);
                if (rd32(r20 + 0x8bcu) != 0xffffffffu) {
                    if (r21 == 1u) {
                        wr32(rd32(r24) + 0x8d0u, 0u);
                    } else {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r19 = (u32)(s8)((u32)rd8(r20 + 0x161u) - (u32)rd8(r20 + 0x160u));
                        if ((s32)r19 < 0) {
                            r19 = (u32)(s8)(r19 + rd32(r20 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((s32)r19 <= 0) {
                            if ((u32)rd8(r23) == 5u) {
                                wr16(0x817fdec2u, 1u);
                                r5 = rd32(r24);
                                wr8(0x817fdeacu, 0u);
                                r12 = rd32(0x817fdeb0u);
                                wr32(r5 + 0x8d0u, 0u);
                                r21 = rd32(0x817fdeacu);
                                r11 = rd32(0x817fdeb4u);
                                r10 = rd32(0x817fdeb8u);
                                r9 = rd32(0x817fdebcu);
                                r8 = rd32(0x817fdec0u);
                                r7 = rd32(0x817fdec4u);
                                r6 = rd32(0x817fdec8u);
                                r5 = rd32(0x817fdeccu);
                                r0 = rd32(0x817fded0u);
                                wr32(0x817fdea8u, 0x10u);
                                wr32(0x817fded4u, 0u);
                                wr32(0x817fded8u, 0x10u);
                                wr32(0x817fdedcu, r21);
                                wr32(0x817fdee0u, r12);
                                wr32(0x817fdee4u, r11);
                                wr32(0x817fdee8u, r10);
                                wr32(0x817fdeecu, r9);
                                wr32(0x817fdef0u, r8);
                                wr32(0x817fdef4u, r7);
                                wr32(0x817fdef8u, r6);
                                wr32(0x817fdefcu, r5);
                                wr32(0x817fdf00u, r0);
                                wr32(0x817fdf04u, 0u);
                                a.r[0] = r22;
                                a.r[1] = 0x817fded8u;
                                (void)tc_call(0x8027dc10u, &a);
                            }
                        } else {
                            wr32(rd32(r24) + 0x8d0u, 0u);
                        }
                    }
                    if (rd32(rd32(r24) + 0x8d0u) == 0u) {
                        r0 = 0u;
                    } else {
                        r0 = (u32)rd8(r23) + 1u;
                    }
                    wr8(r23, (u8)r0);
                }
                if ((u32)rd8(0x80571ad4u) == 5u) {
                    a.r[0] = r22;
                    (void)tc_call(0x80278094u, &a);
                }
                if ((u32)rd16(0x80571ad2u) == 0xau) {
                    a.r[0] = r22;
                    (void)tc_call(0x802772d8u, &a);
                }
                r3 = (u32)rd8(r25);
                r0 = r3 + 1u;
                if (r3 == 5u) {
                    r0 = r3;
                }
                r22 = r22 + 1u;
                wr8(r25, (u8)r0);
                r25 = r25 + 1u;
                r24 = r24 + 4u;
                r23 = r23 + 1u;
            } while ((s32)r22 < 4);
            if ((u32)rd16(0x80571ad6u) == 0xea60u) {
                a.r[0] = 0x800031a2u;
                a.r[1] = 1u;
                (void)tc_call(0x8022770cu, &a);
                (void)tc_call(0x80284b24u, &a);
                if ((u32)(s8)rd8(0x80571aecu) != (u32)rd8(0x800031a2u)) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    wr8(0x80571aecu, rd8(0x800031a2u));
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    (void)tc_call(0x80284b24u, &a);
                    a.r[0] = (u32)(s8)rd8(0x80571aecu);
                    (void)tc_call(0x8028712cu, &a);
                }
            }
            r6 = (u32)rd16(0x80571ad2u);
            r9 = (u32)rd8(0x80571ad4u);
            r10 = (u32)rd16(0x80571ad6u);
            c0eq = (u32)rd8(0x80571af9u) == 0u;
            wr16(0x80571ad2u, (u16)((r6 + 1u) & ~(u32)((s32)~((r6 - 0xau) | (0xau - r6)) >> 31)));
            wr8(0x80571ad4u, (u8)((r9 + 1u) & ~(u32)((s32)~((r9 - 5u) | (5u - r9)) >> 31)));
            wr16(0x80571ad6u, (u16)((r10 + 1u) & ~(u32)((s32)~((r10 - 0xea60u) | (0xea60u - r10)) >> 31)));
            if (!c0eq) {
                r3 = tc_call(0x80273734u, &a);
                if (r3 == 0u) {
                    a.r[0] = 0x8050f850u;
                    r3 = tc_call(0x80275290u, &a);
                    if (r3 == 1u) {
                        a.r[0] = 0u;
                        (void)tc_call(0x80274aa4u, &a);
                        wr8(0x80571af9u, 0u);
                    }
                }
            }
            if ((u32)rd8(0x80571aeeu) != 0u) {
                r3 = tc_call(0x80273734u, &a);
                if (r3 == 0u) {
                    r3 = tc_call(0x802752b4u, &a);
                    r0 = r3 & 0xffu;
                    if (r0 < 1u) {
                        r0 = 1u;
                    }
                    if (r0 > 5u) {
                        r0 = 5u;
                    }
                    wr8(0x80571b01u, (u8)r0);
                    r3 = tc_call(0x80275378u, &a);
                    r3 = r3 & 0xffu;
                    wr8(0x80571b00u, (u8)((ppc_cntlzw(r3 - 1u) >> 5u) & 0xffu));
                    r3 = tc_call(0x8027531cu, &a);
                    r3 = r3 & 0xffu;
                    wr32(0x80571afcu, (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu);
                    r3 = tc_call(0x802753ccu, &a);
                    r4 = r3;
                    if ((r3 & 0xffu) == 0u) {
                        r4 = 0u;
                    }
                    if ((r3 & 0xffu) >= 0x7fu) {
                        r4 = 0x7fu;
                    }
                    wr8(0x80571afau, (u8)r4);
                    wr8(0x80571aeeu, 0u);
                }
            }
            (void)tc_call(0x8029281cu, &a);
        } else {
            r0 = rd32(0x80571ae4u) - 1u;
            wr32(0x80571ae4u, r0);
            if ((s32)r0 <= 0) {
                (void)tc_call(0x80284b24u, &a);
                (void)tc_call(0x802901a4u, &a);
                a.r[0] = 0x8050b920u;
                (void)tc_call(0x80226a70u, &a);
                a.r[0] = 0u;
                (void)tc_call(0x80287218u, &a);
                a.r[0] = r19;
                (void)tc_call(0x80286afcu, &a);
            }
        }
    } else if (r3 == 2u && rd32(0x80571ae8u) == 0u) {
        wr32(0x80571ae8u, 1u);
        a.r[0] = 0x80279ad4u;
        (void)tc_call(0x80287274u, &a);
        a.r[0] = 0x80279f48u;
        (void)tc_call(0x80287218u, &a);
        wr32(0x80571ae4u, 0x32u);
    }
    return;
}
