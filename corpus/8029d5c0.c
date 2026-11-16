#include "tc_rt.h"

void fn_8029d5c0(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r5 = (u32)rd16((u32)param_1 + 4u);
    r7 = (u32)param_1 + r5;
    r3 = (u32)rd8(r7 + 8u);
    r4 = (u32)rd8(r7 + 9u);
    if ((u32)rd8(0x8053dfa6u) != 0u || r3 == 0xeu || r3 == 0xfu) {
        c0lt = (s32)r3 < 20;
        if (r3 == 0x14u) {
            r30 = (u32)rd8(r7 + 0xdu);
            r31 = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xffffu;
            r28 = (u32)rd8(r7 + 0xau);
            r29 = ((u32)rd8(r7 + 0xeu) + (((u32)rd8(r7 + 0xfu) << 8u) & 0xffffff00u)) & 0xffffu;
            a.r[0] = r28;
            a.r[1] = r31;
            a.r[2] = r30;
            (void)tc_call(0x802999e4u, &a);
            a.r[0] = r28;
            a.r[1] = r31;
            a.r[2] = r30;
            a.r[3] = r29;
            (void)tc_call(0x8029959cu, &a);
            a.r[0] = r28;
            a.r[1] = r30;
            a.r[2] = r29;
            (void)tc_call(0x802a2610u, &a);
        } else if (!c0lt) {
            c0lt = (s32)r3 < 33;
            if (r3 != 0x21u) {
                if (!c0lt) {
                    c0lt = (s32)r3 < 239;
                    if (r3 != 0xefu) {
                        if (c0lt) {
                            c0lt = (s32)r3 < 44;
                            if (r3 == 0x2cu) {
                                a.r[0] = r7 + 0xau;
                                (void)tc_call(0x8029df6cu, &a);
                                return;
                            }
                            if (!c0lt) {
                                if ((s32)r3 >= 46) {
                                    return;
                                }
                                r9 = (u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u);
                                r3 = (u32)rd8(r7 + 0xau);
                                r0 = (u32)rd8(r7 + 0x11u) + (((u32)rd8(r7 + 0x12u) << 8u) & 0xffffff00u);
                                r5 = (u32)rd8(r7 + 0xdu);
                                r6 = (u32)rd8(r7 + 0xeu);
                                r7 = ((u32)rd8(r7 + 0xfu) + (((u32)rd8(r7 + 0x10u) << 8u) & 0xffffff00u)) & 0xffffu;
                                a.f[0] = param_f1;
                                a.f[1] = param_f2;
                                a.f[2] = param_f3;
                                a.f[3] = param_f4;
                                a.f[4] = param_f5;
                                a.f[5] = param_f6;
                                a.f[6] = param_f7;
                                a.f[7] = param_f8;
                                a.r[0] = r3;
                                a.r[1] = r9 & 0xffffu;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                a.r[4] = r7;
                                a.r[5] = r0 & 0xffffu;
                                a.r[7] = param_r10;
                                (void)tc_call(0x8029a3a0u, &a);
                                return;
                            }
                            if ((s32)r3 >= 35) {
                                return;
                            }
                            a.r[0] = r7 + 0xau;
                            a.r[1] = 1u;
                            (void)tc_call(0x80298470u, &a);
                            return;
                        }
                        if (r3 != 0xffu) {
                            return;
                        }
                    }
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = r7 + 0xau;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_r6;
                    a.r[4] = r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8029686cu, &a);
                } else {
                    c0lt = (s32)r3 < 28;
                    if (r3 == 0x1cu) {
                        if ((u32)rd8(r7 + 0xau) == 0u) {
                            r29 = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xfffu;
                            r28 = ((u32)rd8(r7 + 0xdu) + (((u32)rd8(r7 + 0xeu) << 8u) & 0xffffff00u)) & 0xffffu;
                            a.r[0] = r29;
                            a.r[1] = r28;
                            (void)tc_call(0x80294184u, &a);
                            a.r[0] = r29;
                            a.r[1] = r28;
                            (void)tc_call(0x8029cf60u, &a);
                        }
                    } else if (!c0lt) {
                        if (r3 == 0x1eu) {
                            a.r[0] = ((u32)rd8(r7 + 0xau) + (((u32)rd8(r7 + 0xbu) << 8u) & 0xffffff00u)) & 0xfffu;
                            (void)tc_call(0x802a7b18u, &a);
                        }
                    } else {
                        c0lt = (s32)r3 < 23;
                        if (r3 == 0x17u) {
                            wr8(0x817fdfcdu, rd8(r7 + 0xau));
                            wr8(0x817fdfccu, rd8(r7 + 0xbu));
                            wr8(0x817fdfcbu, rd8(r7 + 0xcu));
                            wr8(0x817fdfcau, rd8(r7 + 0xdu));
                            wr8(0x817fdfc9u, rd8(r7 + 0xeu));
                            wr8(0x817fdfc8u, rd8(r7 + 0xfu));
                            a.r[0] = 0x817fdfc8u;
                            (void)tc_call(0x8029ca60u, &a);
                        } else if (!c0lt) {
                            if ((s32)r3 < 25) {
                                a.r[0] = r7 + 0xau;
                                (void)tc_call(0x8029e73cu, &a);
                            }
                        } else if ((s32)r3 >= 22) {
                            wr8(0x817fdfd5u, rd8(r7 + 0xau));
                            wr8(0x817fdfd4u, rd8(r7 + 0xbu));
                            wr8(0x817fdfd3u, rd8(r7 + 0xcu));
                            wr8(0x817fdfd2u, rd8(r7 + 0xdu));
                            wr8(0x817fdfd1u, rd8(r7 + 0xeu));
                            wr8(0x817fdfd0u, rd8(r7 + 0xfu));
                            a.r[0] = 0x817fdfd0u;
                            f1 = tc_callf(0x802a8764u, &a);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x817fdfd0u;
                            (void)tc_call(0x8029cc04u, &a);
                        } else if ((u32)rd8(r7 + 0xau) != 0u) {
                            wr8(r7 + 9u, 1u);
                            a.r[0] = r7 + 9u;
                            (void)tc_call(0x80296d5cu, &a);
                        }
                    }
                }
            }
        } else {
            c0lt = (s32)r3 < 10;
            if (r3 == 0xau) {
                a.r[0] = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xffffu;
                a.r[1] = (u32)rd8(r7 + 0xau);
                a.r[2] = (u32)rd8(r7 + 0xdu);
                (void)tc_call(0x8029bfc4u, &a);
            } else if (!c0lt) {
                c0lt = (s32)r3 < 15;
                if (r3 == 0xfu) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = r7 + 0xau;
                    a.r[4] = r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x8029e4bcu, &a);
                } else if (!c0lt) {
                    c0lt = (s32)r3 < 18;
                    if (r3 == 0x12u) {
                        r29 = (u32)rd8(r7 + 0xau);
                        wr8(0x817fdfddu, rd8(r7 + 0xbu));
                        wr8(0x817fdfdcu, rd8(r7 + 0xcu));
                        wr8(0x817fdfdbu, rd8(r7 + 0xdu));
                        wr8(0x817fdfdau, rd8(r7 + 0xeu));
                        wr8(0x817fdfd9u, rd8(r7 + 0xfu));
                        wr8(0x817fdfd8u, rd8(r7 + 0x10u));
                        r31 = (u32)rd8(r7 + 0x11u);
                        if (r29 == 0u) {
                            a.r[0] = 0x817fdfd8u;
                            a.r[1] = r31;
                            f1 = tc_callf(0x802a859cu, &a);
                            r7 = 0u;
                            r8 = 0u;
                            r9 = 0u;
                            r10 = 0u;
                            f2 = 0.0;
                            f3 = 0.0;
                            f4 = 0.0;
                            f5 = 0.0;
                            f6 = 0.0;
                            f7 = 0.0;
                            f8 = 0.0;
                        }
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        a.f[3] = f4;
                        a.f[4] = f5;
                        a.f[5] = f6;
                        a.f[6] = f7;
                        a.f[7] = f8;
                        a.r[0] = r29;
                        a.r[1] = 0x817fdfd8u;
                        a.r[2] = r31;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.r[6] = r9;
                        a.r[7] = r10;
                        (void)tc_call(0x80294220u, &a);
                    } else if (!c0lt) {
                        a.r[0] = r7 + 0xau;
                        (void)tc_call(0x802a8268u, &a);
                    } else if ((s32)r3 < 17) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = 0x70000u;
                        a.r[1] = 0x80394c10u;
                        a.r[2] = r5;
                        a.r[3] = param_r6;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8028cc54u, &a);
                        r3 = tc_call(0x80295814u, &a);
                        if ((r3 & 0xffu) != 0u) {
                            a.r[0] = 0u;
                            (void)tc_call(0x802956d0u, &a);
                        }
                    }
                } else {
                    c0lt = (s32)r3 < 13;
                    if (r3 == 0xdu) {
                        a.r[0] = r7 + 0xau;
                        (void)tc_call(0x8029de6cu, &a);
                    } else if (!c0lt) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = r7 + 0xau;
                        a.r[1] = r4;
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x8029e1a4u, &a);
                    } else if ((s32)r3 >= 12) {
                        a.r[0] = r7 + 0xau;
                        (void)tc_call(0x80293cdcu, &a);
                    } else {
                        a.r[0] = r7 + 0xau;
                        (void)tc_call(0x80293d68u, &a);
                    }
                }
            } else {
                c0lt = (s32)r3 < 5;
                if (r3 == 5u) {
                    r31 = (u32)rd8(r7 + 0xdu);
                    r28 = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xfffu;
                    a.r[0] = r28;
                    a.r[1] = r31;
                    r3 = tc_call(0x802a7a5cu, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = r28;
                        a.r[1] = r31;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8029a02cu, &a);
                    }
                    a.r[0] = r28;
                    a.r[1] = r31;
                    (void)tc_call(0x8029c778u, &a);
                } else if (!c0lt) {
                    c0lt = (s32)r3 < 8;
                    if (r3 == 8u) {
                        r29 = (u32)rd8(r7 + 0xau);
                        r31 = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xffffu;
                        a.r[0] = r31;
                        a.r[1] = r29;
                        a.r[2] = (u32)rd8(r7 + 0xdu);
                        (void)tc_call(0x80293868u, &a);
                        a.r[0] = r31;
                        a.r[1] = r29;
                        (void)tc_call(0x8029c0c0u, &a);
                    } else if (c0lt) {
                        if ((s32)r3 >= 7) {
                            r30 = (u32)rd8(r7 + 0xau);
                            r31 = r7 + 0x11u;
                            wr8(0x817fdfe5u, rd8(r7 + 0xbu));
                            wr8(0x817fdfe4u, rd8(r7 + 0xcu));
                            wr8(0x817fdfe3u, rd8(r7 + 0xdu));
                            wr8(0x817fdfe2u, rd8(r7 + 0xeu));
                            wr8(0x817fdfe1u, rd8(r7 + 0xfu));
                            wr8(0x817fdfe0u, rd8(r7 + 0x10u));
                            a.r[0] = 0x817fdfe0u;
                            a.r[1] = r31;
                            a.r[2] = (r4 - 7u) & 0xffffu;
                            a.r[3] = r30;
                            f1 = tc_callf(0x8029893cu, &a);
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x817fdfe0u;
                            a.r[1] = r31;
                            a.r[2] = r30;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8029b998u, &a);
                        } else {
                            a.r[0] = ((u32)rd8(r7 + 0xbu) + (((u32)rd8(r7 + 0xcu) << 8u) & 0xffffff00u)) & 0xffffu;
                            a.r[1] = (u32)rd8(r7 + 0xau);
                            (void)tc_call(0x8029bc80u, &a);
                        }
                    }
                } else {
                    c0lt = (s32)r3 < 2;
                    if (r3 == 2u) {
                        a.r[0] = r7 + 0xau;
                        a.r[1] = 0u;
                        (void)tc_call(0x80298470u, &a);
                    } else if (!c0lt) {
                        if ((s32)r3 >= 4) {
                            a.f[0] = param_f1;
                            a.f[1] = param_f2;
                            a.f[2] = param_f3;
                            a.f[3] = param_f4;
                            a.f[4] = param_f5;
                            a.f[5] = param_f6;
                            a.f[6] = param_f7;
                            a.f[7] = param_f8;
                            a.r[0] = r7 + 0xau;
                            a.r[4] = r7;
                            a.r[5] = param_r8;
                            a.r[6] = param_r9;
                            a.r[7] = param_r10;
                            (void)tc_call(0x8029dde0u, &a);
                        } else {
                            a.r[0] = r7 + 0xau;
                            (void)tc_call(0x8029dd04u, &a);
                        }
                    } else if ((s32)r3 >= 1) {
                        a.f[0] = param_f1;
                        a.f[1] = param_f2;
                        a.f[2] = param_f3;
                        a.f[3] = param_f4;
                        a.f[4] = param_f5;
                        a.f[5] = param_f6;
                        a.f[6] = param_f7;
                        a.f[7] = param_f8;
                        a.r[0] = (u32)rd8(r7 + 0xau);
                        a.r[4] = r7;
                        a.r[5] = param_r8;
                        a.r[6] = param_r9;
                        a.r[7] = param_r10;
                        (void)tc_call(0x802986e8u, &a);
                    }
                }
            }
        }
    }
    return;
}
