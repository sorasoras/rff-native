#include "tc_rt.h"

void fn_80238558(u32 param_1)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x805715c0u) == 0u) {
        wr32(0x804e5ef8u, param_1);
    } else {
        wr32(((rd32(0x805715c0u) - 1u) * 0x14u) - 0x7fb1a158u, param_1);
    }
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (param_1 == 0x10u) {
        a.r[0] = 0x1234568u;
        a.r[1] = 0x80235600u;
        (void)tc_call(0x8023a598u, &a);
    } else {
        if (param_1 == 0x20u) {
            a.r[0] = 0x1234569u;
            a.r[1] = 0x80235600u;
            (void)tc_call(0x8023a598u, &a);
        } else {
            if (rd32(0x80571644u) == 3u || rd32(0x80571644u) == 0xfu) {
                if ((param_1 & 2u) != 0u) {
                    a.r[0] = 0x1234567u;
                    a.r[1] = 0x802355ecu;
                    (void)tc_call(0x8023a598u, &a);
                    return;
                }
                wr32(0x805715d8u, 0u);
                if (rd32(0x80571644u) == 0xfu) {
                    wr32(0x80571634u, 1u);
                }
                if (rd32(0x805715d0u) != 0u) {
                    r29 = rd32(0x80571650u);
                    wr32(0x805715d4u, 7u);
                    wr32(0x805715d0u, 0u);
                    wr32(0x80571650u, 0x804e5b60u);
                    wr32(r29 + 0xcu, 0xau);
                    r12 = rd32(r29 + 0x28u);
                    if (r12 != 0u) {
                        a.r[0] = 0xfffffffdu;
                        a.r[1] = r29;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                    r12 = rd32(0x80571640u);
                    if (r12 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = r29;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    (void)tc_call(0x80237c80u, &a);
                    r0 = 1u;
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u || rd32(0x80571630u) == 2u) {
                    return;
                }
                wr32(rd32(0x80571650u) + 0xcu, 7u);
                r0 = rd32(0x805715e4u);
                wr32(0x80571630u, 1u);
                if (r0 != 0u || rd32(0x805715e8u) != 0u) {
                    return;
                }
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
            } else {
                r4 = rd32(0x80571644u);
                if (((r4 == 1u || r4 == 4u) || (r4 == 5u || r4 == 0x21u)) || r4 == 0xeu) {
                    r0 = 1u;
                } else {
                    if (r4 == rd32(0x80570ae4u)) {
                        r0 = 1u;
                    } else {
                        r0 = 0u;
                    }
                }
                if (r0 != 0u) {
                    if ((param_1 & 9u) != 0u) {
                        r4 = rd32(rd32(0x80571650u) + 0x1cu);
                    } else {
                        r4 = 0u;
                    }
                    r3 = rd32(0x80571650u);
                    wr32(r3 + 0x20u, rd32(r3 + 0x20u) + r4);
                }
                if (rd32(0x805715e0u) != 0u) {
                    r31 = rd32(0x80571650u);
                    wr32(0x805715e0u, 0u);
                    wr32(0x805715d0u, 0u);
                    wr32(0x80571650u, 0x804e5b60u);
                    wr32(r31 + 0xcu, 0xau);
                    r12 = rd32(r31 + 0x28u);
                    if (r12 != 0u) {
                        a.r[0] = 0xfffffffdu;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        f1 = tc_callf(r12, &a);
                    }
                    r12 = rd32(0x80571640u);
                    if (r12 != 0u) {
                        a.r[0] = 0u;
                        a.r[1] = r31;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    (void)tc_call(0x80237c80u, &a);
                } else {
                    if ((param_1 & 1u) != 0u) {
                        wr32(0x805715d8u, 0u);
                        if (rd32(0x80571644u) == 0x10u) {
                            if (rd32(rd32(0x80571650u) + 0x10u) != 0u) {
                                wr32(0x80571630u, 2u);
                            } else {
                                wr32(0x80571630u, 1u);
                            }
                            r31 = rd32(0x80571650u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0u);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = 0u;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        if (rd32(0x80571644u) == 0x20u) {
                            r3 = tc_call(0x802302bcu, &a);
                            f1 = tc_lastf();
                            r31 = rd32(0x80571650u);
                            wr32(0x8057162cu, tc_lastr4());
                            wr32(0x80571628u, r3);
                            wr32(0x80571634u, 0u);
                            wr32(0x805715d4u, 0u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0u);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = 0u;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        if (rd32(0x805715d0u) != 0u) {
                            r31 = rd32(0x80571650u);
                            wr32(0x805715d4u, 0u);
                            wr32(0x805715d0u, 0u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0xau);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = 0xfffffffdu;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                f1 = tc_callf(r12, &a);
                            }
                            r12 = rd32(0x80571640u);
                            if (r12 != 0u) {
                                a.r[0] = 0u;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            f1 = tc_callf(0x80237c80u, &a);
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                        if (r0 != 0u) {
                            return;
                        }
                        if (rd32(0x80571644u) == 0x26u) {
                            r3 = tc_call(0x8023cab8u, &a);
                            r31 = r3;
                            r3 = tc_call(0x802302bcu, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r8 = rd32(0x80571628u);
                            r9 = rd32(0x8057162cu);
                            r6 = ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu);
                            ca = r9 <= r4;
                            r4 = r4 - r9;
                            r0 = (u32)((u64)~r8 + (u64)r3 + (u64)ca) ^ 0x80000000u;
                            r5 = 0u - (u32)((u64)~r0 + (u64)r0 + (u64)(u32)(((u64)r0 + 0x7fffffffull + (u64)((((r6 >> 6u) & 0x3ffffffu) * 0x64u) <= r4)) >> 0x20ull));
                            if (r5 != 0u) {
                                r3 = 0u;
                            } else {
                                if ((r31 & 1u) != 0u) {
                                    r3 = 1u;
                                } else {
                                    r3 = 2u;
                                }
                            }
                            r31 = rd32(0x80571650u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0u);
                            wr32(r31 + 0x10u, r3);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = r31;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                a.r[4] = 0x10624dd3u;
                                a.r[5] = r8;
                                a.r[6] = r9;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        if (rd32(0x80571644u) == 0x24u) {
                            r3 = tc_call(0x8023cab8u, &a);
                            f1 = tc_lastf();
                            if (((r3 >> 2u) & 1u) != 0u || (r3 & 1u) != 0u) {
                                r3 = 0u;
                            } else {
                                if (rd32(0x805715d4u) != 0u) {
                                    r3 = 0u;
                                } else {
                                    r3 = 1u;
                                }
                            }
                            r31 = rd32(0x80571650u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0u);
                            wr32(r31 + 0x10u, r3);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        if (rd32(0x80571644u) == 0x28u) {
                            a.r[0] = 0x804e5c00u;
                            a.r[1] = rd32(rd32(0x80571650u) + 0x24u);
                            r3 = tc_call(0x8023a600u, &a);
                            if (r3 != 0u) {
                                a.r[0] = rd32(0x8057164cu);
                                a.r[1] = 0x804e5c00u;
                                a.r[2] = 0x20u;
                                f1 = tc_callf(0x80004338u, &a);
                                r31 = rd32(0x80571650u);
                                wr32(0x80571650u, 0x804e5b60u);
                                wr32(r31 + 0xcu, 0u);
                                wr32(r31 + 0x10u, 1u);
                                r12 = rd32(r31 + 0x28u);
                                if (r12 != 0u) {
                                    a.r[0] = 1u;
                                    a.r[1] = r31;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(r12, &a);
                                }
                                wr32(0x805715d8u, 0u);
                                (void)tc_call(0x80237c80u, &a);
                                return;
                            }
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
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
                            a.r[0] = r30;
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
                            return;
                        }
                        if (rd32(0x80571644u) == 0x29u) {
                            r3 = rd32(0x80571650u);
                            if (rd32(rd32(r3 + 0x18u) + 0x5de0u) == 0u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = r3;
                                a.r[7] = 0u;
                                (void)tc_call(0x80237fa8u, &a);
                                return;
                            }
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r3 + 0xcu, 0u);
                            r12 = rd32(r3 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = 0u;
                                a.r[1] = r3;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        r4 = rd32(0x80571644u);
                        if (((r4 == 1u || r4 == 4u) || (r4 == 5u || r4 == 0x21u)) || r4 == 0xeu) {
                            r0 = 1u;
                        } else {
                            if (r4 == rd32(0x80570ae4u)) {
                                r0 = 1u;
                            } else {
                                r0 = 0u;
                            }
                        }
                        if (r0 != 0u) {
                            r3 = rd32(0x80571650u);
                            if (rd32(r3 + 0x20u) != rd32(r3 + 0x14u)) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = r3;
                                a.r[7] = 0u;
                                (void)tc_call(0x80237fa8u, &a);
                                return;
                            }
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r3 + 0xcu, 0u);
                            r12 = rd32(r3 + 0x28u);
                            if (r12 != 0u) {
                                r4 = r3;
                                r3 = rd32(r3 + 0x20u);
                                a.r[0] = r3;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        r4 = rd32(0x80571644u);
                        if ((r4 == 9u || r4 == 0xau) || (r4 == 0xbu || r4 == 0xcu)) {
                            r0 = 1u;
                        } else {
                            if (r4 == rd32(0x80387258u)) {
                                r0 = 1u;
                            } else {
                                if (r4 == rd32(0x8038725cu)) {
                                    r0 = 1u;
                                } else {
                                    if (r4 == rd32(0x80387260u)) {
                                        r0 = 1u;
                                    } else {
                                        r0 = 0u;
                                    }
                                }
                            }
                        }
                        if (r0 != 0u) {
                            if (rd32(0x80571644u) == 0xbu || rd32(0x80571644u) == 0xau) {
                                r3 = tc_call(0x8023cda4u, &a);
                                f1 = tc_lastf();
                                r3 = (r3 << 2u) & 0xfffffffcu;
                            } else {
                                r3 = tc_call(0x8023cda4u, &a);
                                f1 = tc_lastf();
                            }
                            r31 = rd32(0x80571650u);
                            wr32(0x80571650u, 0x804e5b60u);
                            wr32(r31 + 0xcu, 0u);
                            r12 = rd32(r31 + 0x28u);
                            if (r12 != 0u) {
                                a.r[0] = r3;
                                a.r[1] = r31;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                            }
                            (void)tc_call(0x80237c80u, &a);
                            return;
                        }
                        r31 = rd32(0x80571650u);
                        wr32(0x80571650u, 0x804e5b60u);
                        wr32(r31 + 0xcu, 0u);
                        r12 = rd32(r31 + 0x28u);
                        if (r12 != 0u) {
                            a.r[0] = 0u;
                            a.r[1] = r31;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        }
                        (void)tc_call(0x80237c80u, &a);
                    } else {
                        if (rd32(0x80571644u) == 0xeu) {
                            a.r[0] = 0x1234567u;
                            a.r[1] = 0x802355ecu;
                            (void)tc_call(0x8023a598u, &a);
                        } else {
                            if (((rd32(0x80571644u) == 1u || rd32(0x80571644u) == 4u) || (rd32(0x80571644u) == 5u || rd32(0x80571644u) == 0x21u)) || rd32(0x80571644u) == 0xeu) {
                                r29 = rd32(0x80571650u);
                                if (rd32(r29 + 0x20u) == rd32(r29 + 0x14u)) {
                                    if (rd32(0x805715d0u) != 0u) {
                                        wr32(0x805715d4u, 0u);
                                        wr32(0x805715d0u, 0u);
                                        wr32(0x80571650u, 0x804e5b60u);
                                        wr32(r29 + 0xcu, 0xau);
                                        r12 = rd32(r29 + 0x28u);
                                        if (r12 != 0u) {
                                            a.r[0] = 0xfffffffdu;
                                            a.r[1] = r29;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.f[0] = f1;
                                            f1 = tc_callf(r12, &a);
                                        }
                                        r12 = rd32(0x80571640u);
                                        if (r12 != 0u) {
                                            a.r[0] = 0u;
                                            a.r[1] = r29;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.f[0] = f1;
                                            (void)tc_call(r12, &a);
                                        }
                                        f1 = tc_callf(0x80237c80u, &a);
                                        r0 = 1u;
                                    } else {
                                        r0 = 0u;
                                    }
                                    if (r0 != 0u) {
                                        return;
                                    }
                                    r31 = rd32(0x80571650u);
                                    wr32(0x80571650u, 0x804e5b60u);
                                    wr32(r31 + 0xcu, 0u);
                                    r12 = rd32(r31 + 0x28u);
                                    if (r12 != 0u) {
                                        a.r[0] = rd32(r31 + 0x20u);
                                        a.r[1] = r31;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.f[0] = f1;
                                        (void)tc_call(r12, &a);
                                    }
                                    (void)tc_call(0x80237c80u, &a);
                                    return;
                                }
                            }
                            a.r[0] = 0x27u;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            f1 = tc_callf(0x80234fd0u, &a);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x802357f4u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8023bff4u, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
