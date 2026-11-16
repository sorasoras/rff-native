#include "tc_rt.h"

void fn_802773dc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r4 = param_2;
    r5 = param_3;
    r6 = rd32(param_1 + 0x8b8u);
    r8 = (u32)rd8(param_1 + 0x8c2u);
    if (r6 > 2u) {
        if ((r6 - 3u) > 2u) {
            if ((r6 - 6u) > 2u) {
                r8 = (u32)rd16(param_2);
                r7 = (u32)rd16(param_3);
                r0 = (((r7 - r8) | (r8 - r7)) >> 0x1fu) & 1u;
                if ((u32)(s8)rd8(param_2 + 0x29u) == 0u && (u32)(s8)rd8(param_3 + 0x29u) == 0u) {
                    r7 = (u32)(s16)rd16(param_3 + 4u);
                    r6 = (u32)(s16)rd16(param_2 + 4u);
                    r10 = r6 - r7;
                    if ((s32)r10 < 0) {
                        r10 = r7 - r6;
                    }
                    r9 = (u32)(s16)rd16(param_3 + 2u);
                    r6 = r10 ^ 0xcu;
                    r8 = (u32)(s16)rd16(param_2 + 2u);
                    r7 = (u32)((s32)r6 >> 1);
                    r6 = r6 & r10;
                    r6 = r7 - r6;
                    r11 = r8 - r9;
                    r10 = (r6 >> 0x1fu) & 1u;
                    if ((s32)r11 < 0) {
                        r11 = r9 - r8;
                    }
                    r9 = (u32)(s16)rd16(param_3 + 6u);
                    r6 = r11 ^ 0xcu;
                    r8 = (u32)(s16)rd16(param_2 + 6u);
                    r7 = (u32)((s32)r6 >> 1);
                    r6 = r6 & r11;
                    r6 = r7 - r6;
                    r11 = r8 - r9;
                    r6 = (r6 >> 0x1fu) & 1u;
                    if ((s32)r11 < 0) {
                        r11 = r9 - r8;
                    }
                    r7 = r11 ^ 0xcu;
                    r6 = r6 | r10;
                    r8 = (u32)((s32)r7 >> 1);
                    r7 = r7 & r11;
                    r7 = r8 - r7;
                    r7 = (r7 >> 0x1fu) & 1u;
                    r6 = r7 | r6;
                    if (r6 == 0u) {
                        r7 = (u32)rd16(0x80570dbcu);
                        r8 = (u32)rd16(param_1 + 0x8feu) + 1u;
                        r6 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                        wr16(param_1 + 0x8feu, (u16)r6);
                        if ((r6 & 0xffffu) == ((u32)rd16(0x80570dbcu) - 1u)) {
                            r6 = (u32)rd16(param_1 + 0x8fcu);
                            if (r6 != 0u) {
                                r6 = r6 - 1u;
                                wr16(param_1 + 0x8fcu, (u16)r6);
                            }
                        }
                    } else {
                        r6 = (u32)rd16(param_1 + 0x8fcu) + 1u;
                        wr16(param_1 + 0x8fcu, (u16)r6);
                        if ((r6 & 0xffffu) > (u32)rd16(0x80570db8u)) {
                            r0 = r0 | 1u;
                            wr16(param_1 + 0x8fcu, 0u);
                            r0 = r0 & 0xffu;
                            wr16(param_1 + 0x8feu, 0u);
                        }
                    }
                    ctr = 4u;
                    do {
                        r7 = (u32)(s16)rd16(r5 + 0xau);
                        r6 = (u32)(s16)rd16(r4 + 0xau);
                        r11 = r6 - r7;
                        if ((s32)r11 < 0) {
                            r11 = r7 - r6;
                        }
                        r10 = (u32)(s16)rd16(r5 + 8u);
                        r6 = r11 ^ 2u;
                        r8 = (u32)(s16)rd16(r4 + 8u);
                        r7 = (u32)((s32)r6 >> 1);
                        r6 = r6 & r11;
                        r6 = r7 - r6;
                        r12 = r8 - r10;
                        r11 = (r6 >> 0x1fu) & 1u;
                        if ((s32)r12 < 0) {
                            r12 = r10 - r8;
                        }
                        r6 = r12 ^ 2u;
                        r7 = (u32)((s32)r6 >> 1);
                        r6 = r6 & r12;
                        r6 = r7 - r6;
                        r6 = (r6 >> 0x1fu) & 1u;
                        r6 = r6 | r11;
                        if (r6 == 0u) {
                            r7 = (u32)rd16(0x80570dbeu);
                            r8 = (u32)rd16(param_1 + 0x8fau) + 1u;
                            r6 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                            wr16(param_1 + 0x8fau, (u16)r6);
                            if ((r6 & 0xffffu) == ((u32)rd16(0x80570dbeu) - 1u)) {
                                r6 = (u32)rd16(param_1 + 0x8f8u);
                                if (r6 != 0u) {
                                    r6 = r6 - 1u;
                                    wr16(param_1 + 0x8f8u, (u16)r6);
                                }
                            }
                        } else {
                            r6 = (u32)rd16(param_1 + 0x8f8u) + 1u;
                            wr16(param_1 + 0x8f8u, (u16)r6);
                            if ((r6 & 0xffffu) > (u32)rd16(0x80570dbau)) {
                                r0 = r0 | 1u;
                                wr16(param_1 + 0x8f8u, 0u);
                                r0 = r0 & 0xffu;
                            }
                        }
                        r5 = r5 + 8u;
                        r4 = r4 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            } else {
                c0lt = (s32)r8 < 2;
                r6 = param_2;
                r7 = param_3;
                do {
                    if (r8 != 2u) {
                        if (!c0lt) {
                            if ((s32)r8 < 4) {
                                r8 = 4u;
                                r9 = 4u;
                                r10 = 1u;
                                break;
                            }
                        } else if ((s32)r8 >= 1) {
                            r8 = 0x10u;
                            r9 = 0x20u;
                            r10 = 8u;
                            break;
                        }
                    }
                    r8 = 1u;
                    r9 = 1u;
                    r10 = 1u;
                } while (0);
                r30 = (u32)rd16(param_2);
                r12 = (u32)rd16(param_3);
                r0 = (((r12 - r30) | (r30 - r12)) >> 0x1fu) & 1u;
                if ((u32)(s8)rd8(param_2 + 0x29u) == 0u && (u32)(s8)rd8(param_3 + 0x29u) == 0u) {
                    r12 = (u32)(s16)rd16(param_3 + 4u);
                    r11 = (u32)(s16)rd16(param_2 + 4u);
                    r28 = r11 - r12;
                    if ((s32)r28 < 0) {
                        r28 = r12 - r11;
                    }
                    r31 = (u32)(s16)rd16(param_3 + 2u);
                    r11 = r28 ^ 0xcu;
                    r30 = (u32)(s16)rd16(param_2 + 2u);
                    r12 = (u32)((s32)r11 >> 1);
                    r11 = r11 & r28;
                    r11 = r12 - r11;
                    r28 = r30 - r31;
                    r29 = (r11 >> 0x1fu) & 1u;
                    if ((s32)r28 < 0) {
                        r28 = r31 - r30;
                    }
                    r31 = (u32)(s16)rd16(param_3 + 6u);
                    r11 = r28 ^ 0xcu;
                    r30 = (u32)(s16)rd16(param_2 + 6u);
                    r12 = (u32)((s32)r11 >> 1);
                    r11 = r11 & r28;
                    r11 = r12 - r11;
                    r28 = r30 - r31;
                    r11 = (r11 >> 0x1fu) & 1u;
                    if ((s32)r28 < 0) {
                        r28 = r31 - r30;
                    }
                    r12 = r28 ^ 0xcu;
                    r11 = r11 | r29;
                    r30 = (u32)((s32)r12 >> 1);
                    r12 = r12 & r28;
                    r12 = r30 - r12;
                    r12 = (r12 >> 0x1fu) & 1u;
                    r11 = r12 | r11;
                    if (r11 == 0u) {
                        r12 = (u32)rd16(0x80570dbcu);
                        r30 = (u32)rd16(param_1 + 0x8feu) + 1u;
                        r11 = r30 - ((u32)ppc_divw((s32)r30, (s32)r12) * r12);
                        wr16(param_1 + 0x8feu, (u16)r11);
                        if ((r11 & 0xffffu) == ((u32)rd16(0x80570dbcu) - 1u)) {
                            r11 = (u32)rd16(param_1 + 0x8fcu);
                            if (r11 != 0u) {
                                r11 = r11 - 1u;
                                wr16(param_1 + 0x8fcu, (u16)r11);
                            }
                        }
                    } else {
                        r11 = (u32)rd16(param_1 + 0x8fcu) + 1u;
                        wr16(param_1 + 0x8fcu, (u16)r11);
                        if ((r11 & 0xffffu) > (u32)rd16(0x80570db8u)) {
                            r0 = r0 | 1u;
                            wr16(param_1 + 0x8fcu, 0u);
                            r0 = r0 & 0xffu;
                            wr16(param_1 + 0x8feu, 0u);
                        }
                    }
                    ctr = 4u;
                    do {
                        r12 = (u32)(s16)rd16(r7 + 0xau);
                        r11 = (u32)(s16)rd16(r6 + 0xau);
                        r28 = r11 - r12;
                        if ((s32)r28 < 0) {
                            r28 = r12 - r11;
                        }
                        r29 = (u32)(s16)rd16(r7 + 8u);
                        r11 = r28 ^ 2u;
                        r31 = (u32)(s16)rd16(r6 + 8u);
                        r12 = (u32)((s32)r11 >> 1);
                        r11 = r11 & r28;
                        r11 = r12 - r11;
                        r27 = r31 - r29;
                        r28 = (r11 >> 0x1fu) & 1u;
                        if ((s32)r27 < 0) {
                            r27 = r29 - r31;
                        }
                        r11 = r27 ^ 2u;
                        r12 = (u32)((s32)r11 >> 1);
                        r11 = r11 & r27;
                        r11 = r12 - r11;
                        r11 = (r11 >> 0x1fu) & 1u;
                        r11 = r11 | r28;
                        if (r11 == 0u) {
                            r12 = (u32)rd16(0x80570dbeu);
                            r31 = (u32)rd16(param_1 + 0x8fau) + 1u;
                            r11 = r31 - ((u32)ppc_divw((s32)r31, (s32)r12) * r12);
                            wr16(param_1 + 0x8fau, (u16)r11);
                            if ((r11 & 0xffffu) == ((u32)rd16(0x80570dbeu) - 1u)) {
                                r11 = (u32)rd16(param_1 + 0x8f8u);
                                if (r11 != 0u) {
                                    r11 = r11 - 1u;
                                    wr16(param_1 + 0x8f8u, (u16)r11);
                                }
                            }
                        } else {
                            r11 = (u32)rd16(param_1 + 0x8f8u) + 1u;
                            wr16(param_1 + 0x8f8u, (u16)r11);
                            if ((r11 & 0xffffu) > (u32)rd16(0x80570dbau)) {
                                r0 = r0 | 1u;
                                wr16(param_1 + 0x8f8u, 0u);
                                r0 = r0 & 0xffu;
                            }
                        }
                        r7 = r7 + 8u;
                        r6 = r6 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    (void)((s32)((u32)ppc_divw((s32)(s16)rd16(param_2 + 0x2cu), (s32)r8) - (u32)ppc_divw((s32)(s16)rd16(param_3 + 0x2cu), (s32)r8)) >= 0);
                    (void)((s32)((u32)ppc_divw((s32)(s16)rd16(param_2 + 0x2eu), (s32)r8) - (u32)ppc_divw((s32)(s16)rd16(param_3 + 0x2eu), (s32)r8)) >= 0);
                    (void)((s32)((u32)ppc_divw((s32)(s16)rd16(param_2 + 0x30u), (s32)r9) - (u32)ppc_divw((s32)(s16)rd16(param_3 + 0x30u), (s32)r9)) >= 0);
                    (void)((s32)((u32)ppc_divw((s32)(s16)rd16(param_2 + 0x32u), (s32)r9) - (u32)ppc_divw((s32)(s16)rd16(param_3 + 0x32u), (s32)r9)) >= 0);
                    (void)((s32)((u32)ppc_divw((s32)rd8(param_2 + 0x34u), (s32)r10) - (u32)ppc_divw((s32)rd8(param_3 + 0x34u), (s32)r10)) >= 0);
                    (void)((s32)((u32)ppc_divw((s32)rd8(param_2 + 0x35u), (s32)r10) - (u32)ppc_divw((s32)rd8(param_3 + 0x35u), (s32)r10)) >= 0);
                }
            }
        } else {
            r6 = param_2;
            r10 = (u32)rd16(param_2);
            r7 = param_3;
            r9 = (u32)rd16(param_3);
            r0 = (((r9 - r10) | (r10 - r9)) >> 0x1fu) & 1u;
            if ((u32)(s8)rd8(param_2 + 0x29u) == 0u && (u32)(s8)rd8(param_3 + 0x29u) == 0u) {
                r9 = (u32)(s16)rd16(param_3 + 4u);
                r8 = (u32)(s16)rd16(param_2 + 4u);
                r12 = r8 - r9;
                if ((s32)r12 < 0) {
                    r12 = r9 - r8;
                }
                r11 = (u32)(s16)rd16(param_3 + 2u);
                r8 = r12 ^ 0xcu;
                r10 = (u32)(s16)rd16(param_2 + 2u);
                r9 = (u32)((s32)r8 >> 1);
                r8 = r8 & r12;
                r8 = r9 - r8;
                r28 = r10 - r11;
                r12 = (r8 >> 0x1fu) & 1u;
                if ((s32)r28 < 0) {
                    r28 = r11 - r10;
                }
                r11 = (u32)(s16)rd16(param_3 + 6u);
                r8 = r28 ^ 0xcu;
                r10 = (u32)(s16)rd16(param_2 + 6u);
                r9 = (u32)((s32)r8 >> 1);
                r8 = r8 & r28;
                r8 = r9 - r8;
                r28 = r10 - r11;
                r8 = (r8 >> 0x1fu) & 1u;
                if ((s32)r28 < 0) {
                    r28 = r11 - r10;
                }
                r9 = r28 ^ 0xcu;
                r8 = r8 | r12;
                r10 = (u32)((s32)r9 >> 1);
                r9 = r9 & r28;
                r9 = r10 - r9;
                r9 = (r9 >> 0x1fu) & 1u;
                r8 = r9 | r8;
                if (r8 == 0u) {
                    r9 = (u32)rd16(0x80570dbcu);
                    r10 = (u32)rd16(param_1 + 0x8feu) + 1u;
                    r8 = r10 - ((u32)ppc_divw((s32)r10, (s32)r9) * r9);
                    wr16(param_1 + 0x8feu, (u16)r8);
                    if ((r8 & 0xffffu) == ((u32)rd16(0x80570dbcu) - 1u)) {
                        r8 = (u32)rd16(param_1 + 0x8fcu);
                        if (r8 != 0u) {
                            r8 = r8 - 1u;
                            wr16(param_1 + 0x8fcu, (u16)r8);
                        }
                    }
                } else {
                    r8 = (u32)rd16(param_1 + 0x8fcu) + 1u;
                    wr16(param_1 + 0x8fcu, (u16)r8);
                    if ((r8 & 0xffffu) > (u32)rd16(0x80570db8u)) {
                        r0 = r0 | 1u;
                        wr16(param_1 + 0x8fcu, 0u);
                        r0 = r0 & 0xffu;
                        wr16(param_1 + 0x8feu, 0u);
                    }
                }
                ctr = 4u;
                do {
                    r9 = (u32)(s16)rd16(r7 + 0xau);
                    r8 = (u32)(s16)rd16(r6 + 0xau);
                    r28 = r8 - r9;
                    if ((s32)r28 < 0) {
                        r28 = r9 - r8;
                    }
                    r12 = (u32)(s16)rd16(r7 + 8u);
                    r8 = r28 ^ 2u;
                    r10 = (u32)(s16)rd16(r6 + 8u);
                    r9 = (u32)((s32)r8 >> 1);
                    r8 = r8 & r28;
                    r8 = r9 - r8;
                    r28 = r10 - r12;
                    r29 = (r8 >> 0x1fu) & 1u;
                    if ((s32)r28 < 0) {
                        r28 = r12 - r10;
                    }
                    r8 = r28 ^ 2u;
                    r9 = (u32)((s32)r8 >> 1);
                    r8 = r8 & r28;
                    r8 = r9 - r8;
                    r8 = (r8 >> 0x1fu) & 1u;
                    r8 = r8 | r29;
                    if (r8 == 0u) {
                        r9 = (u32)rd16(0x80570dbeu);
                        r10 = (u32)rd16(param_1 + 0x8fau) + 1u;
                        r8 = r10 - ((u32)ppc_divw((s32)r10, (s32)r9) * r9);
                        wr16(param_1 + 0x8fau, (u16)r8);
                        if ((r8 & 0xffffu) == ((u32)rd16(0x80570dbeu) - 1u)) {
                            r8 = (u32)rd16(param_1 + 0x8f8u);
                            if (r8 != 0u) {
                                r8 = r8 - 1u;
                                wr16(param_1 + 0x8f8u, (u16)r8);
                            }
                        }
                    } else {
                        r8 = (u32)rd16(param_1 + 0x8f8u) + 1u;
                        wr16(param_1 + 0x8f8u, (u16)r8);
                        if ((r8 & 0xffffu) > (u32)rd16(0x80570dbau)) {
                            r0 = r0 | 1u;
                            wr16(param_1 + 0x8f8u, 0u);
                            r0 = r0 & 0xffu;
                        }
                    }
                    r7 = r7 + 8u;
                    r6 = r6 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r7 = (u32)(s16)rd16(param_3 + 0x2cu);
                r6 = (u32)(s16)rd16(param_2 + 0x2cu);
                r10 = r6 - r7;
                if ((s32)r10 < 0) {
                    r10 = r7 - r6;
                }
                r9 = (u32)(s16)rd16(param_3 + 0x2au);
                r6 = r10 ^ 0xcu;
                r8 = (u32)(s16)rd16(param_2 + 0x2au);
                r7 = (u32)((s32)r6 >> 1);
                r6 = r6 & r10;
                r6 = r7 - r6;
                r11 = r8 - r9;
                r10 = (r6 >> 0x1fu) & 1u;
                if ((s32)r11 < 0) {
                    r11 = r9 - r8;
                }
                r9 = (u32)(s16)rd16(param_3 + 0x2eu);
                r6 = r11 ^ 0xcu;
                r8 = (u32)(s16)rd16(param_2 + 0x2eu);
                r7 = (u32)((s32)r6 >> 1);
                r6 = r6 & r11;
                r6 = r7 - r6;
                r11 = r8 - r9;
                r6 = (r6 >> 0x1fu) & 1u;
                if ((s32)r11 < 0) {
                    r11 = r9 - r8;
                }
                r7 = r11 ^ 0xcu;
                r6 = r6 | r10;
                r8 = (u32)((s32)r7 >> 1);
                r7 = r7 & r11;
                r7 = r8 - r7;
                r7 = (r7 >> 0x1fu) & 1u;
                r6 = r7 | r6;
                if (r6 == 0u) {
                    r7 = (u32)rd16(0x80570dbcu);
                    r8 = (u32)rd16(param_1 + 0x902u) + 1u;
                    r6 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                    wr16(param_1 + 0x902u, (u16)r6);
                    if ((r6 & 0xffffu) == ((u32)rd16(0x80570dbcu) - 1u)) {
                        r6 = (u32)rd16(param_1 + 0x900u);
                        if (r6 != 0u) {
                            r6 = r6 - 1u;
                            wr16(param_1 + 0x900u, (u16)r6);
                        }
                    }
                } else {
                    r6 = (u32)rd16(param_1 + 0x900u) + 1u;
                    wr16(param_1 + 0x900u, (u16)r6);
                    if ((r6 & 0xffffu) > (u32)rd16(0x80570db8u)) {
                        wr16(param_1 + 0x900u, 0u);
                        wr16(param_1 + 0x902u, 0u);
                    }
                }
                (void)((s32)((u32)(s8)rd8(param_2 + 0x30u) - (u32)(s8)rd8(param_3 + 0x30u)) >= 0);
                (void)((s32)((u32)(s8)rd8(param_2 + 0x31u) - (u32)(s8)rd8(param_3 + 0x31u)) >= 0);
            }
        }
    } else {
        r8 = (u32)rd16(param_2);
        r7 = (u32)rd16(param_3);
        r0 = (((r7 - r8) | (r8 - r7)) >> 0x1fu) & 1u;
        if ((u32)(s8)rd8(param_2 + 0x29u) == 0u && (u32)(s8)rd8(param_3 + 0x29u) == 0u) {
            r7 = (u32)(s16)rd16(param_3 + 4u);
            r6 = (u32)(s16)rd16(param_2 + 4u);
            r10 = r6 - r7;
            if ((s32)r10 < 0) {
                r10 = r7 - r6;
            }
            r9 = (u32)(s16)rd16(param_3 + 2u);
            r6 = r10 ^ 0xcu;
            r8 = (u32)(s16)rd16(param_2 + 2u);
            r7 = (u32)((s32)r6 >> 1);
            r6 = r6 & r10;
            r6 = r7 - r6;
            r11 = r8 - r9;
            r10 = (r6 >> 0x1fu) & 1u;
            if ((s32)r11 < 0) {
                r11 = r9 - r8;
            }
            r9 = (u32)(s16)rd16(param_3 + 6u);
            r6 = r11 ^ 0xcu;
            r8 = (u32)(s16)rd16(param_2 + 6u);
            r7 = (u32)((s32)r6 >> 1);
            r6 = r6 & r11;
            r6 = r7 - r6;
            r11 = r8 - r9;
            r6 = (r6 >> 0x1fu) & 1u;
            if ((s32)r11 < 0) {
                r11 = r9 - r8;
            }
            r7 = r11 ^ 0xcu;
            r6 = r6 | r10;
            r8 = (u32)((s32)r7 >> 1);
            r7 = r7 & r11;
            r7 = r8 - r7;
            r7 = (r7 >> 0x1fu) & 1u;
            r6 = r7 | r6;
            if (r6 == 0u) {
                r7 = (u32)rd16(0x80570dbcu);
                r8 = (u32)rd16(param_1 + 0x8feu) + 1u;
                r6 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                wr16(param_1 + 0x8feu, (u16)r6);
                if ((r6 & 0xffffu) == ((u32)rd16(0x80570dbcu) - 1u)) {
                    r6 = (u32)rd16(param_1 + 0x8fcu);
                    if (r6 != 0u) {
                        r6 = r6 - 1u;
                        wr16(param_1 + 0x8fcu, (u16)r6);
                    }
                }
            } else {
                r6 = (u32)rd16(param_1 + 0x8fcu) + 1u;
                wr16(param_1 + 0x8fcu, (u16)r6);
                if ((r6 & 0xffffu) > (u32)rd16(0x80570db8u)) {
                    r0 = r0 | 1u;
                    wr16(param_1 + 0x8fcu, 0u);
                    r0 = r0 & 0xffu;
                    wr16(param_1 + 0x8feu, 0u);
                }
            }
            ctr = 4u;
            do {
                r7 = (u32)(s16)rd16(r5 + 0xau);
                r6 = (u32)(s16)rd16(r4 + 0xau);
                r11 = r6 - r7;
                if ((s32)r11 < 0) {
                    r11 = r7 - r6;
                }
                r10 = (u32)(s16)rd16(r5 + 8u);
                r6 = r11 ^ 2u;
                r8 = (u32)(s16)rd16(r4 + 8u);
                r7 = (u32)((s32)r6 >> 1);
                r6 = r6 & r11;
                r6 = r7 - r6;
                r12 = r8 - r10;
                r11 = (r6 >> 0x1fu) & 1u;
                if ((s32)r12 < 0) {
                    r12 = r10 - r8;
                }
                r6 = r12 ^ 2u;
                r7 = (u32)((s32)r6 >> 1);
                r6 = r6 & r12;
                r6 = r7 - r6;
                r6 = (r6 >> 0x1fu) & 1u;
                r6 = r6 | r11;
                if (r6 == 0u) {
                    r7 = (u32)rd16(0x80570dbeu);
                    r8 = (u32)rd16(param_1 + 0x8fau) + 1u;
                    r6 = r8 - ((u32)ppc_divw((s32)r8, (s32)r7) * r7);
                    wr16(param_1 + 0x8fau, (u16)r6);
                    if ((r6 & 0xffffu) == ((u32)rd16(0x80570dbeu) - 1u)) {
                        r6 = (u32)rd16(param_1 + 0x8f8u);
                        if (r6 != 0u) {
                            r6 = r6 - 1u;
                            wr16(param_1 + 0x8f8u, (u16)r6);
                        }
                    }
                } else {
                    r6 = (u32)rd16(param_1 + 0x8f8u) + 1u;
                    wr16(param_1 + 0x8f8u, (u16)r6);
                    if ((r6 & 0xffffu) > (u32)rd16(0x80570dbau)) {
                        r0 = r0 | 1u;
                        wr16(param_1 + 0x8f8u, 0u);
                        r0 = r0 & 0xffu;
                    }
                }
                r5 = r5 + 8u;
                r4 = r4 + 8u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
