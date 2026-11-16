#include "tc_rt.h"

void fn_800cec60(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0;
    TcArgs a = {0};
    r4 = 0x8046d8c8u;
    r31 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        r3 = rd32(r30 + 0x90u);
        if ((r3 & 7u) != 0u && (r3 & 0x400u) == 0u) {
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x7cu;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x7cu;
                    r3 = tc_call(0x80094e80u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x7cu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                }
            }
            r27 = r3;
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x800d1938u, &a);
                r4 = tc_lastr4();
            }
            f30 = (f64)rdf32(0x80573058u);
            if (param_r3 == 0x1eu || (param_r3 - 0x3bu) <= 3u) {
                f30 = (f64)rdf32(0x8057305cu);
            }
            a.r[0] = r30;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
            a.f[0] = f1;
            a.f[1] = f30;
            a.r[0] = r27;
            a.r[1] = r30;
            a.r[2] = r3;
            a.r[3] = 0u;
            (void)tc_call(0x800d1af8u, &a);
            a.r[0] = r27;
            f1 = tc_callf(0x800cf688u, &a);
            r4 = tc_lastr4();
        } else {
            if ((r3 & 0x70u) != 0u) {
                if ((r3 & 0x40u) != 0u) {
                    r3 = tc_call(0x800545e4u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x54u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x54u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        } else {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x54u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        }
                    }
                    r27 = r3;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        f1 = tc_callf(0x80173d50u, &a);
                        r4 = tc_lastr4();
                    }
                    r29 = r27;
                } else {
                    if ((r3 & 0x20u) != 0u) {
                        r3 = tc_call(0x800545e4u, &a);
                        r4 = r3;
                        if (rd32(r3 + 0x10u) != 0u) {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x54u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040db8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        } else {
                            if (rd32(r3 + 0x20u) != 0u) {
                                r3 = r3 + 0x24u;
                                a.r[0] = r3;
                                a.r[1] = 0x20u;
                                a.r[2] = 0x54u;
                                r3 = tc_call(0x80094e80u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                            } else {
                                r3 = rd32(r3);
                                a.r[0] = r3;
                                a.r[1] = 0x54u;
                                a.r[2] = rd32(r4 + 0xcu);
                                a.r[3] = r4 + 0x18u;
                                r3 = tc_call(0x80040cd8u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                            }
                        }
                        r27 = r3;
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            f1 = tc_callf(0x801740d8u, &a);
                            r4 = tc_lastr4();
                        }
                        r29 = r27;
                    } else {
                        if ((r3 & 0x10u) != 0u) {
                            r3 = tc_call(0x800545e4u, &a);
                            r4 = r3;
                            if (rd32(r3 + 0x10u) != 0u) {
                                r3 = rd32(r3);
                                a.r[0] = r3;
                                a.r[1] = 0x54u;
                                a.r[2] = rd32(r4 + 0xcu);
                                a.r[3] = r4 + 0x18u;
                                r3 = tc_call(0x80040db8u, &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                            } else {
                                if (rd32(r3 + 0x20u) != 0u) {
                                    r3 = r3 + 0x24u;
                                    a.r[0] = r3;
                                    a.r[1] = 0x20u;
                                    a.r[2] = 0x54u;
                                    r3 = tc_call(0x80094e80u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                } else {
                                    r3 = rd32(r3);
                                    a.r[0] = r3;
                                    a.r[1] = 0x54u;
                                    a.r[2] = rd32(r4 + 0xcu);
                                    a.r[3] = r4 + 0x18u;
                                    r3 = tc_call(0x80040cd8u, &a);
                                    f1 = tc_lastf();
                                    r4 = tc_lastr4();
                                }
                            }
                            r27 = r3;
                            if (r3 != 0u) {
                                a.r[0] = r3;
                                f1 = tc_callf(0x80176718u, &a);
                                r4 = tc_lastr4();
                            }
                            r29 = r27;
                        }
                    }
                }
                a.r[0] = r30;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                a.r[0] = r29;
                a.r[1] = r30;
                a.r[2] = r3;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(r29) + 0x40u), &a);
                a.r[0] = r29;
                f1 = tc_callf(0x800cf688u, &a);
                r4 = tc_lastr4();
            } else {
                if ((r3 & 0x2000000u) != 0u) {
                    r3 = tc_call(0x800545e4u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x58u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x58u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        } else {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x58u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        }
                    }
                    r27 = r3;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        f1 = tc_callf(0x801ca318u, &a);
                        r4 = tc_lastr4();
                    }
                    a.r[0] = r30;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
                    a.r[0] = r30;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                    a.r[0] = r27;
                    a.r[1] = r30;
                    a.r[2] = r3;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r27) + 0x40u), &a);
                    a.r[0] = r27;
                    (void)tc_call(0x800cf688u, &a);
                    r3 = tc_call(0x800545e4u, &a);
                    r4 = r3;
                    if (rd32(r3 + 0x10u) != 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x58u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                    } else {
                        if (rd32(r3 + 0x20u) != 0u) {
                            r3 = r3 + 0x24u;
                            a.r[0] = r3;
                            a.r[1] = 0x20u;
                            a.r[2] = 0x58u;
                            r3 = tc_call(0x80094e80u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        } else {
                            r3 = rd32(r3);
                            a.r[0] = r3;
                            a.r[1] = 0x58u;
                            a.r[2] = rd32(r4 + 0xcu);
                            a.r[3] = r4 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                        }
                    }
                    r26 = r3;
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        f1 = tc_callf(0x801b3658u, &a);
                        r4 = tc_lastr4();
                    }
                    a.r[0] = r30;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(r30) + 0x2cu), &a);
                    a.r[0] = r30;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                    a.r[0] = r26;
                    a.r[1] = r30;
                    a.r[2] = r3;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(r26) + 0x40u), &a);
                    a.r[0] = r26;
                    (void)tc_call(0x800cf688u, &a);
                    a.r[0] = r30;
                    a.r[1] = r27;
                    (void)tc_call(0x80180000u, &a);
                    a.r[0] = r30;
                    a.r[1] = r26;
                    f1 = tc_callf(0x80180000u, &a);
                    r4 = tc_lastr4();
                }
            }
        }
    }
    r26 = rd32(0x8046adecu);
    while (r26 != 0u) {
        r3 = r26;
        r26 = rd32(r26);
        r27 = rd32(r3 + 8u);
        if (param_r3 == rd32(r27 + 0x7cu)) {
            a.r[0] = r27;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(r27) + 0x4cu), &a);
            a.r[0] = r27;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r27) + 0x50u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = r3;
                f1 = tc_callf(0x800cf688u, &a);
                r4 = tc_lastr4();
            }
        }
    }
    return;
}
