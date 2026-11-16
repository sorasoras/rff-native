#include "tc_rt.h"

void fn_80273210(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r4 = rd32(0x80571aacu);
    r0 = r4 + 1u;
    wr32(0x80571aacu, r0);
    if (r0 == 2u) {
        if (param_1 >= 0) {
            wr32(0x80570c78u, (u32)param_1);
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0x80273210u;
            a.r[4] = 0u;
            r3 = tc_call(0x8026e950u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                return;
            }
            r12 = rd32(0x80571aa8u);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
            return;
        }
        r12 = rd32(0x80571aa8u);
        if (r12 == 0u) {
            return;
        }
        a.r[0] = 0u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(r12, &a);
    } else {
        if (r0 == 3u) {
            if ((u32)param_1 == 0u) {
                a.r[0] = rd32(0x80570c78u);
                a.r[1] = 0x80503580u;
                a.r[2] = 0x100u;
                a.r[3] = 0x80273210u;
                a.r[4] = 0u;
                r3 = tc_call(0x8026e9fcu, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                if (r3 == 0u) {
                    return;
                }
                r12 = rd32(0x80571aa8u);
                if (r12 == 0u) {
                    return;
                }
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                return;
            }
            r12 = rd32(0x80571aa8u);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = 0u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
        } else {
            if (r0 == 4u) {
                if ((u32)param_1 == 0x100u) {
                    a.r[0] = rd32(0x80570c78u);
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0x80273210u;
                    a.r[4] = 0u;
                    r3 = tc_call(0x8026e950u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u) {
                        return;
                    }
                    r12 = rd32(0x80571aa8u);
                    if (r12 == 0u) {
                        return;
                    }
                    a.r[0] = 0u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                    return;
                }
                r12 = rd32(0x80571aa8u);
                if (r12 == 0u) {
                    return;
                }
                a.r[0] = 0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = 0.0;
                (void)tc_call(r12, &a);
            } else {
                if (r0 == 5u) {
                    if ((u32)param_1 == 0u) {
                        wr8(0x8050367fu, 0u);
                        a.r[0] = 0x80503580u;
                        r3 = tc_call(0x8025c46cu, &a);
                        r31 = r3;
                        a.r[0] = 0x80503680u;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xfeu;
                        (void)tc_call(0x8000443cu, &a);
                        r3 = tc_call(0x8023029cu, &a);
                        a.r[0] = r3;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0x817fdfc8u;
                        (void)tc_call(0x802304e8u, &a);
                        r3 = tc_call(0x80272d60u, &a);
                        a.r[0] = 0x817fdf88u;
                        a.r[1] = r3 + 7u;
                        a.r[2] = 0x11u;
                        f1 = tc_callf(0x8025bdf4u, &a);
                        wr8(0x817fdf99u, 0u);
                        wr8(0x817fdf90u, 0x2du);
                        wr32(0x817fdf78u, rd32(0x817fdfccu));
                        wr32(0x817fdf7cu, rd32(0x817fdfc8u));
                        r0 = (u32)((s32)(ppc_mulhw(-2113396605, (s32)r31) + r31) >> 5);
                        wr32(0x817fdf80u, 0x817fdf88u);
                        r0 = r0 + ((r0 >> 0x1fu) & 1u);
                        wr32(0x817fdf84u, 0x80503480u);
                        r0 = r0 * 0x3fu;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x80503680u;
                        a.r[1] = 0x100u;
                        a.r[2] = 0x8038f73cu;
                        a.r[3] = r31 - r0 + 1u;
                        a.r[4] = rd32(0x817fdfdcu);
                        a.r[5] = rd32(0x817fdfd8u) + 1u;
                        a.r[6] = rd32(0x817fdfd4u);
                        a.r[7] = rd32(0x817fdfd0u);
                        r3 = tc_call(0x8025b8bcu, &a);
                        if ((s32)r3 < 256) {
                            wr8(r3 - 0x7fafc980u, 0x20u);
                        }
                        wr8(0x8050377eu, 0xdu);
                        r3 = rd32(0x80570c78u);
                        wr8(0x8050377fu, 0xau);
                        a.r[0] = r3;
                        a.r[1] = 0x80503680u;
                        a.r[2] = 0x100u;
                        a.r[3] = 0x80273210u;
                        a.r[4] = 0u;
                        r3 = tc_call(0x8026eac0u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            return;
                        }
                        r12 = rd32(0x80571aa8u);
                        if (r12 == 0u) {
                            return;
                        }
                        a.r[0] = 0u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                        return;
                    }
                    r12 = rd32(0x80571aa8u);
                    if (r12 == 0u) {
                        return;
                    }
                    a.r[0] = 0u;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = 0.0;
                    (void)tc_call(r12, &a);
                } else {
                    if (r0 == 6u) {
                        if ((u32)param_1 == 0x100u) {
                            a.r[0] = 0x80503580u;
                            r3 = tc_call(0x8025c46cu, &a);
                            a.r[0] = rd32(0x80570c78u);
                            a.r[1] = (r3 << 8u) & 0xffffff00u;
                            a.r[2] = 0u;
                            a.r[3] = 0x80273210u;
                            a.r[4] = 0u;
                            r3 = tc_call(0x8026e950u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if (r3 == 0u) {
                                return;
                            }
                            r12 = rd32(0x80571aa8u);
                            if (r12 == 0u) {
                                return;
                            }
                            a.r[0] = 0u;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                            return;
                        }
                        r12 = rd32(0x80571aa8u);
                        if (r12 == 0u) {
                            return;
                        }
                        a.r[0] = 0u;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = 0.0;
                        (void)tc_call(r12, &a);
                    } else {
                        if (r0 == 7u) {
                            a.r[0] = 0x80503580u;
                            r3 = tc_call(0x8025c46cu, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if ((u32)param_1 == ((r3 << 8u) & 0xffffff00u)) {
                                a.r[0] = rd32(0x80570c78u);
                                a.r[1] = 0x80503680u;
                                a.r[2] = 0x100u;
                                a.r[3] = 0x80273210u;
                                a.r[4] = 0u;
                                r3 = tc_call(0x8026eac0u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 == 0u) {
                                    return;
                                }
                                r12 = rd32(0x80571aa8u);
                                if (r12 == 0u) {
                                    return;
                                }
                                a.r[0] = 0u;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = f1;
                                (void)tc_call(r12, &a);
                                return;
                            }
                            r12 = rd32(0x80571aa8u);
                            if (r12 == 0u) {
                                return;
                            }
                            a.r[0] = 0u;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        } else {
                            if (r0 == 8u) {
                                if ((u32)param_1 == 0x100u) {
                                    a.r[0] = rd32(0x80570c78u);
                                    a.r[1] = 0x80273210u;
                                    a.r[2] = 0u;
                                    r3 = tc_call(0x8026eb68u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                    if (r3 == 0u) {
                                        return;
                                    }
                                    r12 = rd32(0x80571aa8u);
                                    if (r12 == 0u) {
                                        return;
                                    }
                                    a.r[0] = 0u;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    a.f[0] = f1;
                                    (void)tc_call(r12, &a);
                                    return;
                                }
                                r12 = rd32(0x80571aa8u);
                                if (r12 == 0u) {
                                    return;
                                }
                                a.r[0] = 0u;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = 0.0;
                                (void)tc_call(r12, &a);
                            } else {
                                if (r0 == 9u) {
                                    if ((u32)param_1 == 0u) {
                                        r12 = rd32(0x80571aa8u);
                                        wr32(0x80570c78u, 0xffffff01u);
                                        if (r12 == 0u) {
                                            return;
                                        }
                                        a.r[0] = 1u;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.r[7] = 0u;
                                        a.f[0] = 0.0;
                                        (void)tc_call(r12, &a);
                                    } else {
                                        r12 = rd32(0x80571aa8u);
                                        if (r12 != 0u) {
                                            a.r[0] = 0u;
                                            a.r[1] = r4;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.r[7] = 0u;
                                            a.f[0] = 0.0;
                                            (void)tc_call(r12, &a);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
