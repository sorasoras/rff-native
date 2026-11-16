#include "tc_rt.h"

void fn_801c92b8(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = param_r4;
    r0 = rd32(param_r3 + 0x10u);
    r31 = param_r4;
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        r28 = param_r4;
        r27 = 0u;
        r26 = 0u;
        do {
            r25 = rd32(r28 + 0x1694u);
            do {
                if (r25 != 0u) {
                    r3 = rd32(r25 + 0xda4u);
                    if (r3 == 0u) {
                        r0 = 0xffffffffu;
                    } else {
                        r0 = rd32(r3 + 4u);
                    }
                    if (r0 == 0x1du) {
                        a.r[0] = r25;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r25) + 0x19cu), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 != 0x5eu) {
                            a.r[0] = r25;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r25) + 0x19cu), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 != 0x75u) {
                                a.r[0] = r25;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r25) + 0x19cu), &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 != 0x7au) break;
                            }
                        }
                        r3 = param_r4;
                        ctr = 0x1eu;
                        do {
                            r24 = rd32(r3 + 0x1694u);
                            if (r24 != 0u) {
                                r4 = rd32(r24 + 0xda4u);
                                if (r4 == 0u) {
                                    r0 = 0xffffffffu;
                                } else {
                                    r0 = rd32(r4 + 4u);
                                }
                                if (r0 == 0x1eu && (((u32)rd8(r24 + 0x358u) >> 4u) & 1u) == 0u) {
                                    a.r[0] = r25;
                                    a.r[1] = r24 + 0xcf4u;
                                    f1 = tc_callf(0x80207538u, &a);
                                    r4 = tc_lastr4();
                                    r27 = r27 + 1u;
                                    if (r27 != 8u) break;
                                    r27 = 0u;
                                    wr8(r24 + 0x358u, (u8)((u32)rd8(r24 + 0x358u) | 0x10u));
                                    break;
                                }
                            }
                            r3 = r3 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            } while (0);
            r26 = r26 + 1u;
            r28 = r28 + 4u;
        } while ((s32)r26 < 30);
        r5 = 0u;
        ctr = 0xau;
        do {
            r6 = rd32(r31 + 0x1694u);
            if (r6 != 0u) {
                r4 = rd32(r6 + 0xda4u);
                if (r4 == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r4 + 4u);
                }
                if (r0 == 0x1eu) {
                    r4 = rd32(r6 + 0xe88u);
                    wr32(r6 + 0xe88u, r4 | (r4 ^ 0x80000000u));
                    wr32(r31 + 0x1694u, 0u);
                }
            }
            r6 = rd32(r31 + 0x1698u);
            if (r6 != 0u) {
                r4 = rd32(r6 + 0xda4u);
                if (r4 == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r4 + 4u);
                }
                if (r0 == 0x1eu) {
                    r4 = rd32(r6 + 0xe88u);
                    wr32(r6 + 0xe88u, r4 | (r4 ^ 0x80000000u));
                    wr32(r31 + 0x1698u, 0u);
                }
            }
            r6 = rd32(r31 + 0x169cu);
            if (r6 != 0u) {
                r4 = rd32(r6 + 0xda4u);
                if (r4 == 0u) {
                    r0 = 0xffffffffu;
                } else {
                    r0 = rd32(r4 + 4u);
                }
                if (r0 == 0x1eu) {
                    r4 = rd32(r6 + 0xe88u);
                    wr32(r6 + 0xe88u, r4 | (r4 ^ 0x80000000u));
                    wr32(r31 + 0x169cu, 0u);
                }
            }
            r31 = r31 + 0xcu;
            r5 = r5 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else if (c0lt) {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            wr32(param_r3 + 0x14u, 0xb4u);
        } else if (!c0lt) {
            r5 = param_r4;
            r8 = 0u;
            do {
                r3 = rd32(r4 + 0x1694u);
                if (r3 != 0u) {
                    r3 = rd32(r3 + 0xda4u);
                    if (r3 == 0u) {
                        r3 = 0xffffffffu;
                    } else {
                        r3 = rd32(r3 + 4u);
                    }
                    if (r3 == 0x1du) {
                        r6 = param_r4;
                        r7 = r5;
                        r9 = 0u;
                        r10 = 0u;
                        ctr = 0xfu;
                        do {
                            r11 = rd32(r6 + 0x1694u);
                            if (r11 != 0u) {
                                r3 = rd32(r11 + 0xda4u);
                                if (r3 == 0u) {
                                    r3 = 0xffffffffu;
                                } else {
                                    r3 = rd32(r3 + 4u);
                                }
                                if (r3 == 0x1eu && (((u32)rd8(r11 + 0x358u) >> 4u) & 1u) == 0u) {
                                    wr32(r7 + 0x170cu, r10);
                                    r9 = r9 + 1u;
                                    wrf32d(r7 + 0x1710u, (f64)rdf32(r11 + 0xcf4u));
                                    wrf32d(r7 + 0x1714u, (f64)rdf32(r11 + 0xcf8u));
                                    wrf32d(r7 + 0x1718u, (f64)rdf32(r11 + 0xcfcu));
                                    r7 = r7 + 0x10u;
                                    wr8(r11 + 0x358u, (u8)((u32)rd8(r11 + 0x358u) | 0x10u));
                                    if (r9 == 2u) break;
                                }
                            }
                            r11 = rd32(r6 + 0x1698u);
                            r10 = r10 + 1u;
                            if (r11 != 0u) {
                                r3 = rd32(r11 + 0xda4u);
                                if (r3 == 0u) {
                                    r3 = 0xffffffffu;
                                } else {
                                    r3 = rd32(r3 + 4u);
                                }
                                if (r3 == 0x1eu && (((u32)rd8(r11 + 0x358u) >> 4u) & 1u) == 0u) {
                                    wr32(r7 + 0x170cu, r10);
                                    r9 = r9 + 1u;
                                    wrf32d(r7 + 0x1710u, (f64)rdf32(r11 + 0xcf4u));
                                    wrf32d(r7 + 0x1714u, (f64)rdf32(r11 + 0xcf8u));
                                    wrf32d(r7 + 0x1718u, (f64)rdf32(r11 + 0xcfcu));
                                    r7 = r7 + 0x10u;
                                    wr8(r11 + 0x358u, (u8)((u32)rd8(r11 + 0x358u) | 0x10u));
                                    if (r9 == 2u) break;
                                }
                            }
                            r6 = r6 + 8u;
                            r10 = r10 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r8 = r8 + 1u;
                r5 = r5 + 0x20u;
                r4 = r4 + 4u;
            } while ((s32)r8 < 30);
        }
    }
    f0 = (f64)rdf32(0x80575de0u);
    wr32(param_r3 + 0xcu, 0u);
    wrf32d(param_r3 + 8u, f0);
    return;
}
