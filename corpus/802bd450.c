#include "tc_rt.h"

void fn_802bd450(s32 param_1, u32 param_2)
{
    u32 fl_ = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0, t0 = 0, t1 = 0, t2 = 0, t3 = 0;
    t0 = param_2 & 0xffffffe0u;
    wr32(t0, 0u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    wr32(t0 + 0x1cu, 0u);
    r12 = rd32((u32)param_1 + 0x6a4u);
    r8 = rd32(0x80571ce0u);
    r11 = rd32((u32)param_1 + 0x6a0u);
    r5 = r12 + 4u;
    r10 = r8 + 0x20u;
    r9 = ppc_rlwinm(r11, (s32)(r5 & 0x1fu), 27, 31);
    do {
        if ((s32)r12 > 28) {
            r9 = rd32((u32)param_1 + 0x69cu);
            if (r12 == 0x21u) {
                r9 = r9 + 4u;
                r11 = rd32(r9);
                wr32((u32)param_1 + 0x69cu, r9);
                r5 = (r11 >> 0x1bu) & 0x1fu;
                r12 = (u32)rd8(r8 + r5);
                r10 = (u32)rd8(r10 + r5);
                wr32((u32)param_1 + 0x6a0u, r11);
                r10 = r10 + 1u;
                if (r12 != 0xffu) {
                    wr32((u32)param_1 + 0x6a4u, r10);
                    r5 = r12;
                    break;
                }
                r12 = 5u;
                r6 = 0x14u;
                do {
                    r9 = 0x1fu - r12;
                    r6 = r6 + 4u;
                    r12 = r12 + 1u;
                    r5 = ((r9 & 0x20u) != 0u) ? 0u : (r11 >> (r9 & 0x1fu));
                } while ((s32)r5 > (s32)rd32(r8 + r6 + 0x44u));
                wr32((u32)param_1 + 0x6a4u, r12 + 1u);
            } else {
                r5 = ppc_rlwinm(r11, (s32)(r5 & 0x1fu), 27, 31);
                if (r12 != 0x20u) {
                    r9 = (u32)rd8(r8 + r5);
                    r10 = (u32)rd8(r10 + r5);
                    r5 = r12 + r10;
                    if (r9 != 0xffu) {
                        wr32((u32)param_1 + 0x6a4u, r5);
                        if ((s32)r5 <= 33) {
                            r5 = r9;
                            break;
                        }
                    }
                    r0 = 0x21u - r12;
                    r5 = r11 & ~(((r0 & 0x20u) != 0u) ? 0u : (0xffffffffu << (r0 & 0x1fu)));
                    r6 = 0x21u - r12;
                    r9 = rd32((u32)param_1 + 0x69cu) + 4u;
                    r11 = rd32(r9);
                    r12 = r6 + 1u;
                    r6 = (r6 << 2u) & 0xfffffffcu;
                    r5 = (r5 << 1u) & 0xfffffffeu;
                    wr32((u32)param_1 + 0x69cu, r9);
                    r5 = (r5 & 0xfffffffeu) | ((r11 >> 0x1fu) & 1u);
                    r9 = 2u;
                    wr32((u32)param_1 + 0x6a0u, r11);
                    r7 = r8 + 0x44u + r6 + 4u;
                    r6 = rd32(r7);
                    for (;;) {
                        r10 = ppc_rlwinm(r11, (s32)(r9 & 0x1fu), 31, 31);
                        if ((s32)r5 <= (s32)r6) break;
                        r5 = (r5 << 1u) & 0xfffffffeu;
                        r7 = r7 + 4u;
                        r6 = rd32(r7);
                        r5 = r5 + r10;
                        r9 = r9 + 1u;
                        r12 = r12 + 1u;
                    }
                    wr32((u32)param_1 + 0x6a4u, r9);
                    r5 = (u32)rd8(rd32(r8 + ((r12 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r5));
                    break;
                }
                r9 = r9 + 4u;
                r11 = rd32(r9);
                wr32((u32)param_1 + 0x69cu, r9);
                r5 = (r5 & 0xfffffff0u) | ((r11 >> 0x1cu) & 0xfu);
                r9 = (u32)rd8(r8 + r5);
                r10 = (u32)rd8(r10 + r5);
                wr32((u32)param_1 + 0x6a0u, r11);
                wr32((u32)param_1 + 0x6a4u, r10);
                if (r9 != 0xffu) {
                    r5 = r9;
                    break;
                }
                r6 = r8 + 0x58u;
                r9 = ((r5 << 0x1bu) & 0x80000000u) | ((r11 >> 1u) & 0x7fffffffu);
                r12 = 5u;
                do {
                    r11 = 0x1fu - r12;
                    r6 = r6 + 4u;
                    r5 = ((r11 & 0x20u) != 0u) ? 0u : (r9 >> (r11 & 0x1fu));
                    r12 = r12 + 1u;
                } while ((s32)r5 > (s32)rd32(r6));
                wr32((u32)param_1 + 0x6a4u, r12);
            }
            r5 = (u32)rd8(rd32(r8 + ((r12 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r5));
        } else {
            r5 = (u32)rd8(r8 + r9);
            r10 = (u32)rd8(r10 + r9);
            if (r5 == 0xffu) {
                r6 = r8 + 0x58u;
                r5 = 5u;
                r12 = r12 + 5u;
                for (;;) {
                    r9 = (r9 << 1u) & 0xfffffffeu;
                    if (r12 == 0x21u) {
                        r12 = 1u;
                        r10 = rd32((u32)param_1 + 0x69cu) + 4u;
                        r11 = rd32(r10);
                        r6 = r6 + 4u;
                        r0 = rd32(r6);
                        r9 = (r9 & 0xfffffffeu) | ((r11 >> 0x1fu) & 1u);
                        wr32((u32)param_1 + 0x69cu, r10);
                        wr32((u32)param_1 + 0x6a0u, r11);
                        for (;;) {
                            r12 = r12 + 1u;
                            r5 = r5 + 1u;
                            if ((s32)r9 <= (s32)r0) {
                                fl_ = 1u;
                                break;
                            }
                            r9 = (r9 << 1u) & 0xfffffffeu;
                            r6 = r6 + 4u;
                            r0 = rd32(r6);
                            r9 = r9 | ppc_rlwinm(r11, (s32)(r12 & 0x1fu), 31, 31);
                        }
                        if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                    } else {
                        r6 = r6 + 4u;
                        r9 = r9 | ppc_rlwinm(r11, (s32)(r12 & 0x1fu), 31, 31);
                        r12 = r12 + 1u;
                        r5 = r5 + 1u;
                        if ((s32)r9 <= (s32)rd32(r6)) break;
                    }
                }
                wr32((u32)param_1 + 0x6a4u, r12);
                r5 = r8 + ((r5 << 2u) & 0xfffffffcu);
                r5 = rd32(r5 + 0x8cu);
                r5 = (u32)rd8(r5 + (rd32(r8 + 0x40u) + r9));
            } else {
                r12 = r12 + r10;
                wr32((u32)param_1 + 0x6a4u, r12);
            }
        }
    } while (0);
    t1 = (param_2 + 0x20u) & 0xffffffe0u;
    wr32(t1, 0u);
    wr32(t1 + 4u, 0u);
    wr32(t1 + 8u, 0u);
    wr32(t1 + 0xcu, 0u);
    wr32(t1 + 0x10u, 0u);
    wr32(t1 + 0x14u, 0u);
    wr32(t1 + 0x18u, 0u);
    wr32(t1 + 0x1cu, 0u);
    r7 = 0u;
    t2 = (param_2 + 0x40u) & 0xffffffe0u;
    wr32(t2, 0u);
    wr32(t2 + 4u, 0u);
    wr32(t2 + 8u, 0u);
    wr32(t2 + 0xcu, 0u);
    wr32(t2 + 0x10u, 0u);
    wr32(t2 + 0x14u, 0u);
    wr32(t2 + 0x18u, 0u);
    wr32(t2 + 0x1cu, 0u);
    if (r5 != 0u) {
        r7 = rd32((u32)param_1 + 0x6a4u);
        r8 = 0x21u - r7;
        r6 = rd32((u32)param_1 + 0x6a0u);
        r9 = r5 - r8;
        r10 = r7 - 1u;
        if ((s32)r9 > 0) {
            r0 = ((r10 & 0x20u) != 0u) ? 0u : (r6 << (r10 & 0x1fu));
            r7 = rd32((u32)param_1 + 0x69cu) + 4u;
            r6 = rd32(r7);
            r9 = r9 + 1u;
            wr32((u32)param_1 + 0x6a0u, r6);
            r6 = ((r8 & 0x20u) != 0u) ? 0u : (r6 >> (r8 & 0x1fu));
            r0 = r6 + r0;
            wr32((u32)param_1 + 0x69cu, r7);
            wr32((u32)param_1 + 0x6a4u, r9);
            r9 = 0x20u - r5;
            r7 = ((r9 & 0x20u) != 0u) ? 0u : (r0 >> (r9 & 0x1fu));
        } else {
            wr32((u32)param_1 + 0x6a4u, r7 + r5);
            r0 = 0x20u - r5;
            r7 = ((r0 & 0x20u) != 0u) ? 0u : ((((r10 & 0x20u) != 0u) ? 0u : (r6 << (r10 & 0x1fu))) >> (r0 & 0x1fu));
        }
        if ((s32)ppc_cntlzw((u32)(s16)r7) > (s32)(0x20u - r5)) {
            r5 = r7 + (((r5 & 0x20u) != 0u) ? 0u : (0xffffffffu << (r5 & 0x1fu)));
            r7 = (u32)(s16)(r5 + 1u);
        }
    }
    t3 = (param_2 + 0x60u) & 0xffffffe0u;
    wr32(t3, 0u);
    wr32(t3 + 4u, 0u);
    wr32(t3 + 8u, 0u);
    wr32(t3 + 0xcu, 0u);
    wr32(t3 + 0x10u, 0u);
    wr32(t3 + 0x14u, 0u);
    wr32(t3 + 0x18u, 0u);
    wr32(t3 + 0x1cu, 0u);
    r5 = 1u;
    r0 = (u32)(s16)rd16((u32)param_1 + 0x684u) + r7;
    wr16((u32)param_1 + 0x684u, (u16)r0);
    wr16(param_2, (u16)r0);
    r8 = rd32(0x80571c80u);
    r6 = rd32((u32)param_1 + 0x6a4u);
    r0 = rd32((u32)param_1 + 0x6a0u);
    r7 = r8 + 0x20u;
    while ((s32)r5 < 64) {
        r30 = r6 + 4u;
        r29 = ppc_rlwinm(r0, (s32)(r30 & 0x1fu), 27, 31);
        if ((s32)r6 > 28) {
            r29 = rd32((u32)param_1 + 0x69cu);
            if (r6 == 0x21u) {
                r29 = r29 + 4u;
                r0 = rd32(r29);
                wr32((u32)param_1 + 0x69cu, r29);
                r30 = (r0 >> 0x1bu) & 0x1fu;
                r31 = (u32)rd8(r8 + r30);
                r6 = (u32)rd8(r7 + r30) + 1u;
                if (r31 == 0xffu) {
                    r31 = 5u;
                    r6 = 0x14u;
                    do {
                        r29 = 0x1fu - r31;
                        r6 = r6 + 4u;
                        r12 = r8 + r6;
                        r31 = r31 + 1u;
                        r30 = ((r29 & 0x20u) != 0u) ? 0u : (r0 >> (r29 & 0x1fu));
                    } while ((s32)r30 > (s32)rd32(r12 + 0x44u));
                    r6 = r31 + 1u;
                    r12 = rd32(r12 + 0x8cu);
                    r31 = (u32)rd8(r12 + (rd32(r8 + 0x40u) + r30));
                }
            } else {
                r30 = ppc_rlwinm(r0, (s32)(r30 & 0x1fu), 27, 31);
                if (r6 == 0x20u) {
                    r29 = r29 + 4u;
                    r0 = rd32(r29);
                    wr32((u32)param_1 + 0x69cu, r29);
                    r30 = (r30 & 0xfffffff0u) | ((r0 >> 0x1cu) & 0xfu);
                    r31 = (u32)rd8(r8 + r30);
                    r6 = (u32)rd8(r7 + r30);
                    if (r31 == 0xffu) {
                        r9 = r8 + 0x58u;
                        r29 = ((r30 << 0x1bu) & 0x80000000u) | ((r0 >> 1u) & 0x7fffffffu);
                        r6 = 5u;
                        do {
                            r31 = 0x1fu - r6;
                            r9 = r9 + 4u;
                            r30 = ((r31 & 0x20u) != 0u) ? 0u : (r29 >> (r31 & 0x1fu));
                            r6 = r6 + 1u;
                        } while ((s32)r30 > (s32)rd32(r9));
                        r31 = (u32)rd8(rd32(r8 + ((r6 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r30));
                    }
                } else {
                    r31 = (u32)rd8(r8 + r30);
                    r30 = r6 + (u32)rd8(r7 + r30);
                    if (r31 == 0xffu || (s32)r30 > 33) {
                        r9 = 0x21u - r6;
                        r9 = ((r9 & 0x20u) != 0u) ? 0u : (0xffffffffu << (r9 & 0x1fu));
                        r30 = r0 & ~r9;
                        r12 = 0x21u - r6;
                        r29 = rd32((u32)param_1 + 0x69cu) + 4u;
                        r0 = rd32(r29);
                        r31 = r12 + 1u;
                        r12 = (r12 << 2u) & 0xfffffffcu;
                        r30 = (r30 << 1u) & 0xfffffffeu;
                        wr32((u32)param_1 + 0x69cu, r29);
                        r30 = (r30 & 0xfffffffeu) | ((r0 >> 0x1fu) & 1u);
                        r6 = 2u;
                        r9 = r8 + 0x44u + r12 + 4u;
                        r12 = rd32(r9);
                        for (;;) {
                            r28 = ppc_rlwinm(r0, (s32)(r6 & 0x1fu), 31, 31);
                            if ((s32)r30 <= (s32)r12) break;
                            r30 = (r30 << 1u) & 0xfffffffeu;
                            r9 = r9 + 4u;
                            r12 = rd32(r9);
                            r30 = r30 + r28;
                            r6 = r6 + 1u;
                            r31 = r31 + 1u;
                        }
                        r31 = (u32)rd8(rd32(r8 + ((r31 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r30));
                    } else {
                        r6 = r30;
                    }
                }
            }
        } else {
            r31 = (u32)rd8(r8 + r29);
            r30 = (u32)rd8(r7 + r29);
            if (r31 == 0xffu) {
                r9 = r8 + 0x58u;
                r30 = 5u;
                r6 = r6 + 5u;
                for (;;) {
                    r29 = (r29 << 1u) & 0xfffffffeu;
                    if (r6 == 0x21u) {
                        r6 = 1u;
                        r31 = rd32((u32)param_1 + 0x69cu) + 4u;
                        r0 = rd32(r31);
                        r9 = r9 + 4u;
                        r12 = rd32(r9);
                        r29 = (r29 & 0xfffffffeu) | ((r0 >> 0x1fu) & 1u);
                        wr32((u32)param_1 + 0x69cu, r31);
                        for (;;) {
                            r6 = r6 + 1u;
                            r30 = r30 + 1u;
                            if ((s32)r29 <= (s32)r12) break;
                            r29 = (r29 << 1u) & 0xfffffffeu;
                            r9 = r9 + 4u;
                            r12 = rd32(r9);
                            r29 = r29 | ppc_rlwinm(r0, (s32)(r6 & 0x1fu), 31, 31);
                        }
                        r31 = (u32)rd8(rd32(r8 + ((r30 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r29));
                        break;
                    }
                    r9 = r9 + 4u;
                    r29 = r29 | ppc_rlwinm(r0, (s32)(r6 & 0x1fu), 31, 31);
                    r6 = r6 + 1u;
                    r30 = r30 + 1u;
                    if ((s32)r29 <= (s32)rd32(r9)) {
                        r31 = (u32)rd8(rd32(r8 + ((r30 << 2u) & 0xfffffffcu) + 0x8cu) + (rd32(r8 + 0x40u) + r29));
                        break;
                    }
                }
            } else {
                r6 = r6 + r30;
            }
        }
        r28 = r31 & 0xfu;
        r31 = (u32)((s32)r31 >> 4);
        if (r28 == 0u) {
            if (r31 != 0xfu) break;
            r5 = r5 + 0xfu;
        } else {
            r5 = r5 + r31;
            r30 = 0x21u - r6;
            r29 = r28 - r30;
            r9 = r6 - 1u;
            if ((s32)r29 > 0) {
                r9 = ((r9 & 0x20u) != 0u) ? 0u : (r0 << (r9 & 0x1fu));
                r12 = rd32((u32)param_1 + 0x69cu) + 4u;
                r0 = rd32(r12);
                r6 = r29 + 1u;
                wr32((u32)param_1 + 0x69cu, r12);
                r9 = (((r30 & 0x20u) != 0u) ? 0u : (r0 >> (r30 & 0x1fu))) + r9;
                r29 = 0x20u - r28;
                r31 = ((r29 & 0x20u) != 0u) ? 0u : (r9 >> (r29 & 0x1fu));
            } else {
                r6 = r6 + r28;
                r12 = ((r9 & 0x20u) != 0u) ? 0u : (r0 << (r9 & 0x1fu));
                r9 = 0x20u - r28;
                r31 = ((r9 & 0x20u) != 0u) ? 0u : (r12 >> (r9 & 0x1fu));
            }
            if ((s32)ppc_cntlzw(r31) > (s32)(0x20u - r28)) {
                r31 = (((r28 & 0x20u) != 0u) ? 0u : (0xffffffffu << (r28 & 0x1fu))) + r31 + 1u;
            }
            wr16(param_2 + (((u32)rd8(r5 - 0x7fcb7a70u) << 1u) & 0xfffffffeu), (u16)r31);
        }
        r5 = r5 + 1u;
    }
    wr32((u32)param_1 + 0x6a4u, r6);
    wr32((u32)param_1 + 0x6a0u, r0);
    return;
}
