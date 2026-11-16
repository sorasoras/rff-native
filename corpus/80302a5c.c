#include "tc_rt.h"

void fn_80302a5c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = rd32(param_1 + 0x18u);
    a.r[1] = param_2;
    a.r[2] = param_1 + 0x1cu;
    a.r[3] = 0x200u;
    r3 = tc_call(0x8030176cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    c0eq = r3 == 0u;
    r29 = r3;
    if (!c0eq) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x50u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r29) + 0x2cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r29) + 0x40u), &a);
                f1 = tc_lastf();
                a.r[0] = param_3;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r27 = r3;
                if (r3 != 0u) {
                    wr32(param_1 + 0x21cu, r29);
                    if (param_5 != 0u) {
                        r28 = r3;
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r29) + 0x40u), &a);
                        f1 = tc_lastf();
                        r30 = r3;
                        while (r30 != 0u) {
                            r5 = param_5;
                            if (param_5 > r30) {
                                r5 = r30;
                            }
                            a.r[0] = r29;
                            a.r[1] = r28;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r29) + 0x14u), &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if ((s32)r3 < 0) {
                                wr32(param_1 + 0x21cu, 0u);
                                if (r29 != 0u) {
                                    a.r[0] = r29;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                }
                                a.r[0] = param_1;
                                (void)tc_call(0x8022d648u, &a);
                                return;
                            }
                            if (r30 <= r3) {
                                r30 = 0u;
                            } else {
                                r30 = r30 - r3;
                                r28 = r28 + r3;
                            }
                        }
                    } else {
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r29) + 0x40u), &a);
                        f1 = tc_lastf();
                        a.r[0] = r29;
                        a.r[1] = r27;
                        a.r[2] = r3;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r29) + 0x14u), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if ((s32)r3 < 0) {
                            wr32(param_1 + 0x21cu, 0u);
                            if (r29 != 0u) {
                                a.r[0] = r29;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                            }
                            a.r[0] = param_1;
                            (void)tc_call(0x8022d648u, &a);
                            return;
                        }
                    }
                    r3 = rd32(param_1 + 0x18u);
                    wr32(param_1 + 0x21cu, 0u);
                    a.r[0] = r3;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdfb8u;
                    r3 = tc_call(0x80301524u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 != 0u) {
                        do {
                            if (rd32(0x817fdfccu) != 0u) {
                                a.r[0] = rd32(param_1 + 0x18u);
                                a.r[1] = param_2;
                                a.r[2] = param_1 + 0x1cu;
                                a.r[3] = 0x200u;
                                r3 = tc_call(0x80301884u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                c0eq = r3 == 0u;
                                r28 = r3;
                                if (!c0eq) {
                                    a.r[0] = r3;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    r3 = tc_call(rd32(rd32(r3) + 0x50u), &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    if (r3 != 0u) {
                                        a.r[0] = r28;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.f[0] = f1;
                                        r3 = tc_call(rd32(rd32(r28) + 0x2cu), &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                        if (r3 != 0u) {
                                            a.r[0] = r28;
                                            a.r[1] = r4;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.f[0] = f1;
                                            r3 = tc_call(rd32(rd32(r28) + 0x40u), &a);
                                            f1 = tc_lastf();
                                            a.r[0] = param_3;
                                            a.r[1] = r3;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.f[0] = f1;
                                            r3 = tc_call(rd32(rd32(param_3) + 0xcu), &a);
                                            f1 = tc_lastf();
                                            r4 = tc_lastr4();
                                            r26 = r3;
                                            if (r3 != 0u) {
                                                wr32(param_1 + 0x21cu, r28);
                                                if (param_5 != 0u) {
                                                    r30 = r3;
                                                    a.r[0] = r28;
                                                    a.r[1] = r4;
                                                    a.r[2] = 0u;
                                                    a.r[3] = 0u;
                                                    a.r[4] = 0u;
                                                    a.f[0] = f1;
                                                    r3 = tc_call(rd32(rd32(r28) + 0x40u), &a);
                                                    f1 = tc_lastf();
                                                    r4 = tc_lastr4();
                                                    r25 = r3;
                                                    while (r25 != 0u) {
                                                        r5 = param_5;
                                                        if (param_5 > r25) {
                                                            r5 = r25;
                                                        }
                                                        a.r[0] = r28;
                                                        a.r[1] = r30;
                                                        a.r[2] = r5;
                                                        a.r[3] = 0u;
                                                        a.r[4] = 0u;
                                                        a.f[0] = f1;
                                                        r3 = tc_call(rd32(rd32(r28) + 0x14u), &a);
                                                        f1 = tc_lastf();
                                                        r4 = tc_lastr4();
                                                        if ((s32)r3 < 0) {
                                                            wr32(param_1 + 0x21cu, 0u);
                                                            if (r28 != 0u) {
                                                                a.r[0] = r28;
                                                                a.r[1] = r4;
                                                                a.r[2] = 0u;
                                                                a.r[3] = 0u;
                                                                a.r[4] = 0u;
                                                                a.f[0] = f1;
                                                                f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                                                                r4 = tc_lastr4();
                                                            }
                                                            if (r29 != 0u) {
                                                                a.r[0] = r29;
                                                                a.r[1] = r4;
                                                                a.r[2] = 0u;
                                                                a.r[3] = 0u;
                                                                a.r[4] = 0u;
                                                                a.f[0] = f1;
                                                                (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                                            }
                                                            a.r[0] = param_1;
                                                            (void)tc_call(0x8022d648u, &a);
                                                            return;
                                                        }
                                                        if (r25 <= r3) {
                                                            r25 = 0u;
                                                        } else {
                                                            r25 = r25 - r3;
                                                            r30 = r30 + r3;
                                                        }
                                                    }
                                                } else {
                                                    a.r[0] = r28;
                                                    a.r[1] = r4;
                                                    a.r[2] = 0u;
                                                    a.r[3] = 0u;
                                                    a.r[4] = 0u;
                                                    a.f[0] = f1;
                                                    r3 = tc_call(rd32(rd32(r28) + 0x40u), &a);
                                                    f1 = tc_lastf();
                                                    a.r[0] = r28;
                                                    a.r[1] = r26;
                                                    a.r[2] = r3;
                                                    a.r[3] = 0u;
                                                    a.r[4] = 0u;
                                                    a.f[0] = f1;
                                                    r3 = tc_call(rd32(rd32(r28) + 0x14u), &a);
                                                    f1 = tc_lastf();
                                                    r4 = tc_lastr4();
                                                    if ((s32)r3 < 0) {
                                                        wr32(param_1 + 0x21cu, 0u);
                                                        if (r28 != 0u) {
                                                            a.r[0] = r28;
                                                            a.r[1] = r4;
                                                            a.r[2] = 0u;
                                                            a.r[3] = 0u;
                                                            a.r[4] = 0u;
                                                            a.f[0] = f1;
                                                            f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                                                            r4 = tc_lastr4();
                                                        }
                                                        if (r29 != 0u) {
                                                            a.r[0] = r29;
                                                            a.r[1] = r4;
                                                            a.r[2] = 0u;
                                                            a.r[3] = 0u;
                                                            a.r[4] = 0u;
                                                            a.f[0] = f1;
                                                            (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                                        }
                                                        a.r[0] = param_1;
                                                        (void)tc_call(0x8022d648u, &a);
                                                        return;
                                                    }
                                                }
                                                wr32(param_1 + 0x21cu, 0u);
                                                if (param_4 != 0u) {
                                                    wr32(param_4, r26);
                                                }
                                                if (r28 == 0u) break;
                                                a.r[0] = r28;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.f[0] = f1;
                                                f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                                                r4 = tc_lastr4();
                                                break;
                                            }
                                            if (r28 != 0u) {
                                                a.r[0] = r28;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.f[0] = f1;
                                                f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                                                r4 = tc_lastr4();
                                            }
                                            if (r29 != 0u) {
                                                a.r[0] = r29;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.f[0] = f1;
                                                (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                            }
                                            a.r[0] = param_1;
                                            (void)tc_call(0x8022d648u, &a);
                                            return;
                                        }
                                    }
                                    if (r28 != 0u) {
                                        a.r[0] = r28;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.f[0] = f1;
                                        f1 = tc_callf(rd32(rd32(r28) + 0x10u), &a);
                                        r4 = tc_lastr4();
                                    }
                                    if (r29 != 0u) {
                                        a.r[0] = r29;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.f[0] = f1;
                                        (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                    }
                                    a.r[0] = param_1;
                                    (void)tc_call(0x8022d648u, &a);
                                    return;
                                }
                                if (!c0eq) {
                                    a.r[0] = r3;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
                                    r4 = tc_lastr4();
                                }
                                if (r29 != 0u) {
                                    a.r[0] = r29;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                                }
                                a.r[0] = param_1;
                                (void)tc_call(0x8022d648u, &a);
                                return;
                            }
                            if (param_4 != 0u) {
                                wr32(param_4, 0u);
                            }
                        } while (0);
                        if (r29 != 0u) {
                            a.r[0] = r29;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                        }
                        a.r[0] = param_1;
                        (void)tc_call(0x8022d648u, &a);
                        return;
                    }
                    if (r29 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                    }
                    a.r[0] = param_1;
                    (void)tc_call(0x8022d648u, &a);
                    return;
                }
                if (r29 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
                }
                a.r[0] = param_1;
                (void)tc_call(0x8022d648u, &a);
                return;
            }
        }
        if (r29 != 0u) {
            a.r[0] = r29;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r29) + 0x10u), &a);
        }
        a.r[0] = param_1;
        (void)tc_call(0x8022d648u, &a);
    } else {
        if (!c0eq) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
        }
        a.r[0] = param_1;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
