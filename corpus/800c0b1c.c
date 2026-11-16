#include "tc_rt.h"

u32 fn_800c0b1c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x19u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r30 = rd32(0x80571140u);
    if (r30 != 0u) {
        f0 = (f64)rdf32(0x80572eacu);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd8u;
        r3 = tc_call(0x800c6880u, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x24u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572ea8u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        } else {
            a.r[0] = 0x817fdfd8u;
            f1 = tc_callf(0x80234440u, &a);
            a.f[0] = f1;
            a.r[0] = r30;
            a.r[1] = 0x817fdfd8u;
            (void)tc_call(0x800b00c0u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x25u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572ea8u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        }
        r0 = rd32(0x803541bcu);
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354174u);
                }
            } else {
                r4 = rd32(0x80354140u);
            }
        } else {
            r4 = 0u;
        }
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r3 = 0u;
                } else {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r3 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r3 = 0u;
        }
        if (r3 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354190u);
                    }
                } else {
                    r4 = rd32(0x8035415cu);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r3 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354178u);
                        }
                    } else {
                        r4 = rd32(0x80354144u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r0 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r3 = 0u;
                        } else {
                            r3 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r3 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r3 = 0u;
                }
                if (r3 == 0u) {
                    if (r0 != 0u) {
                        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r3 != 1u) {
                            if (r3 != 2u) {
                                r4 = 0u;
                            } else {
                                r4 = rd32(0x80354194u);
                            }
                        } else {
                            r4 = rd32(0x80354160u);
                        }
                    } else {
                        r4 = 0u;
                    }
                    if (r0 != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r4 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r0 = r4 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        return r31;
                    }
                    r3 = tc_call(0x800c47f4u, &a);
                    if (r3 == 0u) {
                        return r31;
                    }
                    a.r[0] = param_1;
                    r3 = tc_call(0x800c4e4cu, &a);
                    if (r3 == 0u) {
                        return r31;
                    }
                    r31 = 0x1au;
                    return r31;
                }
                a.r[0] = r30;
                a.r[1] = 1u;
                (void)tc_call(0x800b026cu, &a);
                return r31;
            }
        }
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x800b026cu, &a);
    } else {
        a.r[0] = param_1;
        (void)tc_call(0x80065210u, &a);
        wr32(param_1 + 0x88cu, 1u);
        r31 = 0u;
        a.r[0] = param_1;
        (void)tc_call(0x800c4b50u, &a);
    }
    return r31;
}
