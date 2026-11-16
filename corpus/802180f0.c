#include "tc_rt.h"

void fn_802180f0(u32 param_1, s32 param_2)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    if ((s32)rd32(param_1 + 8u) > 0) {
        r6 = ((u32)param_2 << 2u) & 0xfffffffcu;
        for (;;) {
            r5 = rd32(param_1 + 8u) - 1u;
            if ((s32)r4 >= (s32)r5) break;
            r4 = r4 + 1u;
            r5 = rd32(param_1 + 4u) + r6;
            r6 = r6 + 4u;
            wr32(r5, rd32(r5 + 4u));
        }
        r4 = rd32(param_1 + 0xcu);
        wr32(param_1 + 8u, r5);
        if ((s32)r5 > (s32)r4) {
            r4 = rd32(param_1 + 0x10u);
            r29 = r4 * (u32)ppc_divw((s32)(r5 + r4 - 1u), (s32)r4);
            r3 = tc_call(0x80097e5cu, &a);
            f1 = tc_lastf();
            r5 = 0u;
            r4 = (r29 << 2u) & 0xfffffffcu;
            r6 = r3;
            if (r4 == 0u) {
                r31 = 0u;
            } else {
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r6 = r3 + 0x18u;
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = r4;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r6 = r3 + 0x18u;
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                    }
                }
                r31 = r3;
            }
            if (r31 != 0u) {
                r30 = rd32(param_1 + 8u);
                r3 = 0u;
                c1lt = (s32)r30 < 0;
                if ((s32)r30 > 0) {
                    r6 = r30 - 8u;
                    if ((s32)r30 > 8) {
                        r5 = 0u;
                        if (!c1lt && (s32)r30 <= 2147483646) {
                            r5 = 1u;
                        }
                        if (r5 != 0u) {
                            r5 = r31;
                            r4 = 0u;
                            ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                            if ((s32)r6 > 0) {
                                do {
                                    r3 = r3 + 8u;
                                    wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                    wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                    wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                    wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                    wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                    wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                    wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                    r6 = rd32(param_1 + 4u) + r4;
                                    r4 = r4 + 0x20u;
                                    wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                    r5 = r5 + 0x20u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    }
                    r5 = (r3 << 2u) & 0xfffffffcu;
                    r4 = r31 + r5;
                    ctr = r30 - r3;
                    if ((s32)r3 < (s32)r30) {
                        do {
                            r0 = rd32(rd32(param_1 + 4u) + r5);
                            r5 = r5 + 4u;
                            wr32(r4, r0);
                            r4 = r4 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
                wr32(param_1 + 8u, r30);
            }
            wr32(param_1 + 4u, r31);
            wr32(param_1 + 0xcu, r29);
        } else {
            r6 = rd32(param_1 + 0x10u);
            r3 = r6 - 1u;
            if ((s32)r5 < (s32)((u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1) + r3) || r5 == 0u) {
                r30 = 0u;
                r29 = r6 * (u32)ppc_divw((s32)(r5 + r3), (s32)r6);
                if (r29 != 0u) {
                    r3 = tc_call(0x80097e5cu, &a);
                    f1 = tc_lastf();
                    r5 = 0u;
                    r4 = (r29 << 2u) & 0xfffffffcu;
                    r6 = r3;
                    if (r4 == 0u) {
                        r3 = 0u;
                    } else {
                        if (rd32(r3 + 0x10u) != 0u) {
                            r5 = rd32(r3 + 0xcu);
                            r6 = r3 + 0x18u;
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            r3 = tc_call(0x80040db8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r5 = 0u;
                            r6 = 0u;
                        } else {
                            if (rd32(r3 + 0x20u) != 0u) {
                                r3 = r3 + 0x24u;
                                a.r[0] = r3;
                                a.r[1] = 0x20u;
                                a.r[2] = r4;
                                r3 = tc_call(0x80094e80u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                r5 = 0u;
                                r6 = 0u;
                            } else {
                                r5 = rd32(r3 + 0xcu);
                                r6 = r3 + 0x18u;
                                r3 = rd32(r3);
                                a.r[0] = r3;
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                r3 = tc_call(0x80040cd8u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                r5 = 0u;
                                r6 = 0u;
                            }
                        }
                    }
                    r30 = r3;
                }
                if (rd32(param_1 + 4u) != 0u) {
                    r31 = rd32(param_1 + 8u);
                    r3 = 0u;
                    c1lt = (s32)r31 < 0;
                    if ((s32)r31 > 0) {
                        r6 = r31 - 8u;
                        if ((s32)r31 > 8) {
                            r5 = 0u;
                            if (!c1lt && (s32)r31 <= 2147483646) {
                                r5 = 1u;
                            }
                            if (r5 != 0u) {
                                r5 = r30;
                                r4 = 0u;
                                ctr = ((r6 + 7u) >> 3u) & 0x1fffffffu;
                                if ((s32)r6 > 0) {
                                    do {
                                        r3 = r3 + 8u;
                                        wr32(r5, rd32(rd32(param_1 + 4u) + r4));
                                        wr32(r5 + 4u, rd32(rd32(param_1 + 4u) + r4 + 4u));
                                        wr32(r5 + 8u, rd32(rd32(param_1 + 4u) + r4 + 8u));
                                        wr32(r5 + 0xcu, rd32(rd32(param_1 + 4u) + r4 + 0xcu));
                                        wr32(r5 + 0x10u, rd32(rd32(param_1 + 4u) + r4 + 0x10u));
                                        wr32(r5 + 0x14u, rd32(rd32(param_1 + 4u) + r4 + 0x14u));
                                        wr32(r5 + 0x18u, rd32(rd32(param_1 + 4u) + r4 + 0x18u));
                                        r6 = rd32(param_1 + 4u) + r4;
                                        r4 = r4 + 0x20u;
                                        wr32(r5 + 0x1cu, rd32(r6 + 0x1cu));
                                        r5 = r5 + 0x20u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                        }
                        r5 = (r3 << 2u) & 0xfffffffcu;
                        r4 = r30 + r5;
                        ctr = r31 - r3;
                        if ((s32)r3 < (s32)r31) {
                            do {
                                r0 = rd32(rd32(param_1 + 4u) + r5);
                                r5 = r5 + 4u;
                                wr32(r4, r0);
                                r4 = r4 + 4u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
                    wr32(param_1 + 8u, r31);
                }
                wr32(param_1 + 4u, r30);
                wr32(param_1 + 0xcu, r29);
            }
        }
    }
    return;
}
