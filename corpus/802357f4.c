#include "tc_rt.h"

void fn_802357f4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) != 0u) {
        wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a16cu, param_1);
    } else {
        wr32(0x804e5ef8u, param_1);
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (param_1 != 0x10u) {
        if (param_1 != 0x20u) {
            if ((param_1 & 2u) == 0u) {
                r3 = tc_call(0x8023cda4u, &a);
                r29 = r3;
                r28 = r3 & 0xff000000u;
                a.r[0] = r3;
                r3 = tc_call(0x8023563cu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r30 = r3;
                if (r3 != 1u) {
                    if ((r3 - 2u) > 1u) {
                        if ((r28 - 0x1000000u) != 0u) {
                            if ((r28 - 0x2000000u) != 0u) {
                                if ((r28 - 0x3000000u) != 0u) {
                                    if (r28 != 0u) {
                                        r5 = 5u;
                                    } else if ((r29 - 0x50000u) != 0x3000u) {
                                        r5 = 5u;
                                    } else {
                                        r5 = 1u;
                                    }
                                } else {
                                    r5 = 3u;
                                }
                            } else {
                                r5 = 6u;
                            }
                        } else {
                            r5 = 4u;
                        }
                    } else {
                        r5 = 0u;
                    }
                    if (rd32(0x805715d0u) == 0u) {
                        r0 = 0u;
                    } else {
                        r31 = rd32(0x80571650u);
                        wr32(0x805715d4u, r5);
                        wr32(0x805715d0u, 0u);
                        wr32(0x80571650u, 0x804e5b60u);
                        wr32(r31 + 0xcu, 0xau);
                        r12 = rd32(r31 + 0x28u);
                        if (r12 != 0u) {
                            a.r[0] = 0xfffffffdu;
                            a.r[1] = r31;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            f1 = tc_callf(r12, &a);
                            r5 = 0u;
                        }
                        r12 = rd32(0x80571640u);
                        if (r12 != 0u) {
                            a.r[0] = 0u;
                            a.r[1] = r31;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        }
                        f1 = tc_callf(0x80237c80u, &a);
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        if (r30 != 2u) {
                            if (r30 != 3u) {
                                if ((r28 - 0x1000000u) != 0u) {
                                    if ((r28 - 0x2000000u) != 0u) {
                                        if ((r28 - 0x3000000u) != 0u) {
                                            if (r28 != 0u) {
                                                a.r[0] = 0x1234567u;
                                                a.r[1] = 0x802355ecu;
                                                (void)tc_call(0x8023a598u, &a);
                                            } else if ((r29 - 0x50000u) != 0x3000u) {
                                                a.r[0] = 0x1234567u;
                                                a.r[1] = 0x802355ecu;
                                                (void)tc_call(0x8023a598u, &a);
                                            } else {
                                                r3 = tc_call(0x8022c2b0u, &a);
                                                r31 = r3;
                                                if (rd32(0x805715c0u) >= 5u) {
                                                    wr32(0x805715c0u, 0u);
                                                }
                                                r0 = rd32(0x805715c0u);
                                                r3 = rd32(0x805715c0u) * 0x14u;
                                                wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 0x10u);
                                                r3 = r3 - 0x7fb1a180u;
                                                r0 = r0 * 0x14u;
                                                wr32(r3 + 0x20u, 0u);
                                                wr32(r0 - 0x7fb1a15cu, 0u);
                                                r3 = tc_call(0x802302b4u, &a);
                                                r5 = rd32(0x805715c0u) * 0x14u;
                                                wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                                                wr32(r5 - 0x7fb1a154u, r3);
                                                a.r[0] = r31;
                                                f1 = tc_callf(0x8022c2d8u, &a);
                                                a.f[0] = f1;
                                                a.f[1] = 0.0;
                                                a.f[2] = 0.0;
                                                a.f[3] = 0.0;
                                                a.f[4] = 0.0;
                                                a.f[5] = 0.0;
                                                a.f[6] = 0.0;
                                                a.f[7] = 0.0;
                                                a.r[0] = 0u;
                                                a.r[1] = 0u;
                                                a.r[2] = 0x80236e28u;
                                                (void)tc_call(0x8023bcf8u, &a);
                                            }
                                        } else {
                                            wr32(rd32(0x80571650u) + 0xcu, 4u);
                                            r0 = rd32(0x805715e4u);
                                            wr32(0x80571630u, 1u);
                                            if (r0 == 0u && rd32(0x805715e8u) == 0u) {
                                                wr32(0x805715e4u, 1u);
                                                a.r[0] = 0x804e5bc0u;
                                                (void)tc_call(0x8022671cu, &a);
                                                r3 = tc_call(0x802302b4u, &a);
                                                a.r[0] = 0x804e5bc0u;
                                                a.r[1] = 0x10624dd3u;
                                                a.r[2] = 0u;
                                                a.r[3] = r3;
                                                a.r[4] = 0u;
                                                a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                                                a.r[6] = 0x80237c5cu;
                                                (void)tc_call(0x802269ecu, &a);
                                            }
                                        }
                                    } else {
                                        wr32(rd32(0x80571650u) + 0xcu, 3u);
                                        a.f[0] = f1;
                                        a.f[1] = 0.0;
                                        a.f[2] = 0.0;
                                        a.f[3] = 0.0;
                                        a.f[4] = 0.0;
                                        a.f[5] = 0.0;
                                        a.f[6] = 0.0;
                                        a.f[7] = 0.0;
                                        a.r[7] = 0u;
                                        (void)tc_call(0x80237184u, &a);
                                    }
                                } else {
                                    wr32(rd32(0x80571650u) + 0xcu, 5u);
                                    r0 = rd32(0x805715e4u);
                                    wr32(0x80571630u, 1u);
                                    if (r0 == 0u && rd32(0x805715e8u) == 0u) {
                                        wr32(0x805715e4u, 1u);
                                        a.r[0] = 0x804e5bc0u;
                                        (void)tc_call(0x8022671cu, &a);
                                        r3 = tc_call(0x802302b4u, &a);
                                        a.r[0] = 0x804e5bc0u;
                                        a.r[1] = 0x10624dd3u;
                                        a.r[2] = 0u;
                                        a.r[3] = r3;
                                        a.r[4] = 0u;
                                        a.r[5] = ((ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu) * 0x64u;
                                        a.r[6] = 0x80237c5cu;
                                        (void)tc_call(0x802269ecu, &a);
                                    }
                                }
                            } else if (((r29 & 0xffffffu) - 0x30000u) != 0x1100u) {
                                a.r[0] = rd32(0x80571650u);
                                a.r[1] = r4;
                                a.r[2] = r5;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(rd32(0x80571654u), &a);
                            } else {
                                r29 = rd32(rd32(0x80571650u) + 0x10u);
                                r3 = tc_call(0x8022c2b0u, &a);
                                r31 = r3;
                                if (rd32(0x805715c0u) >= 5u) {
                                    wr32(0x805715c0u, 0u);
                                }
                                r0 = rd32(0x805715c0u);
                                r3 = rd32(0x805715c0u) * 0x14u;
                                wr32((rd32(0x805715c0u) * 0x14u) - 0x7fb1a164u, 2u);
                                r3 = r3 - 0x7fb1a180u;
                                r0 = r0 * 0x14u;
                                wr32(r3 + 0x20u, r29);
                                wr32(r0 - 0x7fb1a15cu, 0u);
                                r3 = tc_call(0x802302b4u, &a);
                                r5 = rd32(0x805715c0u) * 0x14u;
                                wr32(0x805715c0u, rd32(0x805715c0u) + 1u);
                                wr32(r5 - 0x7fb1a154u, r3);
                                a.r[0] = r31;
                                f1 = tc_callf(0x8022c2d8u, &a);
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = rd32(rd32(0x80571650u) + 0x10u);
                                a.r[1] = 0x80235cf8u;
                                (void)tc_call(0x8023c93cu, &a);
                            }
                        } else {
                            a.r[0] = r29;
                            a.r[1] = 0x80235730u;
                            (void)tc_call(0x8023a598u, &a);
                        }
                    }
                } else {
                    a.r[0] = r29;
                    a.r[1] = 0x802355ecu;
                    (void)tc_call(0x8023a598u, &a);
                }
            } else {
                a.r[0] = 0x1234567u;
                a.r[1] = 0x802355ecu;
                (void)tc_call(0x8023a598u, &a);
            }
        } else {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        }
    } else {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    }
    return;
}
