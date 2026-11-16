#include "tc_rt.h"

void fn_8008eb68(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r26 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r7 = rd32(param_1);
    if ((u32)rd8(r7 + 1u) != 0u) {
        r26 = (u32)rd8(r7 + 6u);
        r31 = 0u;
        r7 = rd32(param_1 + 0xcu);
        f0 = (f64)rdf32(0x805729a0u);
        wr32(0x817fdfdcu, rd32(param_1 + 0x10u));
        f1 = (f64)rdf32(0x817fdfdcu);
        wr32(0x817fdfd8u, r7);
        f0 = (f64)(f32)(f1 + f0);
        wr32(0x817fdfe0u, rd32(param_1 + 0x14u));
        wrf32d(0x817fdfdcu, f0);
        r7 = rd32(param_1);
        r0 = (u32)rd8(r7 + 1u);
        if (r0 == 2u || r0 == 1u) {
            if ((u32)rd8(rd32(param_1) + 3u) != 0u) {
                r0 = 0u;
                if ((s32)param_2 >= 625 && (s32)param_2 <= 629) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    a.r[0] = param_2;
                    a.r[1] = param_3;
                    a.r[2] = param_4;
                    r3 = tc_call(0x8008d23cu, &a);
                    r31 = r3;
                    a.f[0] = (f64)rdf32(0x80572968u);
                    a.r[0] = 0x42u;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x2716u;
                    a.r[2] = 0x817fdfd8u;
                    (void)tc_call(0x8008fca8u, &a);
                }
            }
        } else {
            r0 = (u32)rd8(r7 + 2u);
            if (r0 != 0u) {
                if (r0 != 2u) {
                    if (r0 != 1u) {
                        if (r0 != 3u) {
                            if (r0 == 4u) {
                                r0 = 0u;
                                if ((s32)param_2 >= 592 && (s32)param_2 <= 613) {
                                    r0 = 1u;
                                }
                                if (r0 != 0u) {
                                    if (param_4 < 1u) {
                                        a.r[0] = param_1;
                                        a.r[1] = 0x2715u;
                                        a.r[2] = 0x817fdfd8u;
                                        (void)tc_call(0x8008fca8u, &a);
                                    } else {
                                        a.r[0] = param_2;
                                        a.r[1] = param_3;
                                        a.r[2] = param_4;
                                        r3 = tc_call(0x8008d23cu, &a);
                                        r31 = r3;
                                        if ((s32)r3 > 0) {
                                            if ((s32)r3 < (s32)r26) {
                                                a.r[0] = param_1;
                                                a.r[1] = 0x2713u;
                                                a.r[2] = 0x817fdfd8u;
                                                (void)tc_call(0x8008fca8u, &a);
                                            } else {
                                                a.r[0] = param_1;
                                                a.r[1] = 0x2714u;
                                                a.r[2] = 0x817fdfd8u;
                                                (void)tc_call(0x8008fca8u, &a);
                                                a.f[0] = (f64)rdf32(0x80572984u);
                                                a.r[0] = 0x6cu;
                                                a.r[1] = 0x817fdfd8u;
                                                a.r[2] = 0x804890c8u;
                                                a.r[3] = 0x804b15c0u;
                                                (void)tc_call(0x800d782cu, &a);
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            r0 = 0u;
                            if ((s32)param_2 >= 592 && (s32)param_2 <= 613) {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                a.r[0] = param_2;
                                a.r[1] = param_3;
                                a.r[2] = param_4;
                                r3 = tc_call(0x8008d23cu, &a);
                                r31 = r3;
                                if ((s32)r3 < (s32)r26) {
                                    a.r[0] = param_1;
                                    a.r[1] = 0x2713u;
                                    a.r[2] = 0x817fdfd8u;
                                    (void)tc_call(0x8008fca8u, &a);
                                } else {
                                    a.r[0] = param_1;
                                    a.r[1] = 0x2714u;
                                    a.r[2] = 0x817fdfd8u;
                                    (void)tc_call(0x8008fca8u, &a);
                                    a.f[0] = (f64)rdf32(0x80572988u);
                                    a.r[0] = 0x6cu;
                                    a.r[1] = 0x817fdfd8u;
                                    a.r[2] = 0x804890c8u;
                                    a.r[3] = 0x804b15c0u;
                                    (void)tc_call(0x800d782cu, &a);
                                }
                            }
                        }
                    } else {
                        r0 = 0u;
                        if ((s32)param_2 >= 570 && (s32)param_2 <= 591) {
                            r0 = 1u;
                        }
                        if (r0 != 0u) {
                            if (param_4 < 1u) {
                                a.f[0] = (f64)rdf32(0x80572968u);
                                a.r[0] = 0x3fu;
                                a.r[1] = 0x817fdfd8u;
                                a.r[2] = 0x804b15c0u;
                                a.r[3] = 0x804890c8u;
                                (void)tc_call(0x800d783cu, &a);
                                a.r[0] = param_1;
                                a.r[1] = 0x2712u;
                                a.r[2] = 0x817fdfd8u;
                                (void)tc_call(0x8008fca8u, &a);
                            } else {
                                a.r[0] = param_2;
                                a.r[1] = param_3;
                                a.r[2] = param_4;
                                r3 = tc_call(0x8008d23cu, &a);
                                r31 = r3;
                                if ((s32)r3 > 0) {
                                    a.f[0] = (f64)rdf32(0x80572968u);
                                    a.r[0] = 0x3bu;
                                    a.r[1] = 0x817fdfd8u;
                                    a.r[2] = 0x804b15c0u;
                                    a.r[3] = 0x804890c8u;
                                    (void)tc_call(0x800d783cu, &a);
                                    if ((s32)r31 < (s32)r26) {
                                        a.r[0] = param_1;
                                        a.r[1] = 0x2710u;
                                        a.r[2] = 0x817fdfd8u;
                                        (void)tc_call(0x8008fca8u, &a);
                                    } else {
                                        a.r[0] = param_1;
                                        a.r[1] = 0x2711u;
                                        a.r[2] = 0x817fdfd8u;
                                        (void)tc_call(0x8008fca8u, &a);
                                        a.f[0] = (f64)rdf32(0x80572968u);
                                        a.r[0] = 0x6cu;
                                        a.r[1] = 0x817fdfd8u;
                                        a.r[2] = 0x804890c8u;
                                        a.r[3] = 0x804b15c0u;
                                        (void)tc_call(0x800d782cu, &a);
                                    }
                                }
                            }
                        }
                    }
                } else {
                    r0 = 0u;
                    if ((s32)param_2 >= 570 && (s32)param_2 <= 591) {
                        r0 = 1u;
                    }
                    if (r0 != 0u) {
                        if (param_4 < 2u) {
                            a.f[0] = (f64)rdf32(0x80572968u);
                            a.r[0] = 0x3fu;
                            a.r[1] = 0x817fdfd8u;
                            a.r[2] = 0x804b15c0u;
                            a.r[3] = 0x804890c8u;
                            (void)tc_call(0x800d783cu, &a);
                            a.r[0] = param_1;
                            a.r[1] = 0x2712u;
                            a.r[2] = 0x817fdfd8u;
                            (void)tc_call(0x8008fca8u, &a);
                        } else {
                            a.r[0] = param_2;
                            a.r[1] = param_3;
                            a.r[2] = param_4;
                            r3 = tc_call(0x8008d23cu, &a);
                            r31 = r3;
                            a.f[0] = (f64)rdf32(0x80572968u);
                            a.r[0] = 0x3bu;
                            a.r[1] = 0x817fdfd8u;
                            a.r[2] = 0x804b15c0u;
                            a.r[3] = 0x804890c8u;
                            (void)tc_call(0x800d783cu, &a);
                            if ((s32)r31 < (s32)r26) {
                                a.r[0] = param_1;
                                a.r[1] = 0x2710u;
                                a.r[2] = 0x817fdfd8u;
                                (void)tc_call(0x8008fca8u, &a);
                            } else {
                                a.r[0] = param_1;
                                a.r[1] = 0x2711u;
                                a.r[2] = 0x817fdfd8u;
                                (void)tc_call(0x8008fca8u, &a);
                                a.f[0] = (f64)rdf32(0x80572984u);
                                a.r[0] = 0x6cu;
                                a.r[1] = 0x817fdfd8u;
                                a.r[2] = 0x804890c8u;
                                a.r[3] = 0x804b15c0u;
                                (void)tc_call(0x800d782cu, &a);
                            }
                        }
                    }
                }
            } else {
                r0 = 0u;
                if ((s32)param_2 >= 570 && (s32)param_2 <= 591) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    a.r[0] = param_2;
                    a.r[1] = param_3;
                    a.r[2] = param_4;
                    r3 = tc_call(0x8008d23cu, &a);
                    r31 = r3;
                    a.f[0] = (f64)rdf32(0x80572968u);
                    a.r[0] = 0x3bu;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    if ((s32)r31 < (s32)r26) {
                        a.r[0] = param_1;
                        a.r[1] = 0x2710u;
                        a.r[2] = 0x817fdfd8u;
                        (void)tc_call(0x8008fca8u, &a);
                    } else {
                        a.r[0] = param_1;
                        a.r[1] = 0x2711u;
                        a.r[2] = 0x817fdfd8u;
                        (void)tc_call(0x8008fca8u, &a);
                        a.f[0] = (f64)rdf32(0x80572988u);
                        a.r[0] = 0x6cu;
                        a.r[1] = 0x817fdfd8u;
                        a.r[2] = 0x804890c8u;
                        a.r[3] = 0x804b15c0u;
                        (void)tc_call(0x800d782cu, &a);
                    }
                }
            }
            r0 = (u32)rd8(rd32(param_1) + 2u);
            if (r0 >= 5u && r0 <= 0xfu) {
                r0 = 0u;
                if ((s32)param_2 >= 625 && (s32)param_2 <= 629) {
                    r0 = 1u;
                }
                if (r0 != 0u) {
                    r31 = 0x14u;
                    a.f[0] = (f64)rdf32(0x80572968u);
                    a.r[0] = 0x42u;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    a.r[0] = param_1;
                    a.r[1] = 0x2716u;
                    a.r[2] = 0x817fdfd8u;
                    (void)tc_call(0x8008fca8u, &a);
                }
            }
        }
        r0 = r26 - r31;
        if ((s32)r0 > 0) {
            wr8(rd32(param_1) + 6u, (u8)r0);
        } else {
            a.r[0] = param_1;
            (void)tc_call(0x8008f9dcu, &a);
            r3 = rd32(param_1);
            r4 = 0u;
            if ((u32)rd8(r3 + 1u) != 1u || (u32)rd8(r3 + 2u) != 0xfu || (u32)rd8(r3 + 3u) != 4u) {
                r3 = rd32(param_1);
                if ((u32)rd8(r3 + 1u) == 3u) {
                    r0 = (u32)rd8(r3 + 2u);
                    r3 = (u32)rd16(0x8049908eu);
                    if (r0 != 3u) {
                        if (r0 == 4u) {
                            r0 = r3 + 0xau;
                            if ((s32)r0 >= 9999) {
                                r0 = 0x270fu;
                            }
                            r0 = r0 & 0xffffu;
                            if (r0 >= 0x270fu) {
                                r0 = 0x270fu;
                            } else {
                                r0 = r3 + 0xau;
                                if ((s32)r0 >= 9999) {
                                    r0 = 0x270fu;
                                }
                                r0 = r0 & 0xffffu;
                            }
                            wr16(0x8049908eu, (u16)r0);
                        }
                    } else {
                        r0 = r3 + 1u;
                        if ((s32)r0 >= 9999) {
                            r0 = 0x270fu;
                        }
                        r0 = r0 & 0xffffu;
                        if (r0 >= 0x270fu) {
                            r0 = 0x270fu;
                        } else {
                            r0 = r3 + 1u;
                            if ((s32)r0 >= 9999) {
                                r0 = 0x270fu;
                            }
                            r0 = r0 & 0xffffu;
                        }
                        wr16(0x8049908eu, (u16)r0);
                    }
                }
            } else {
                r0 = (u32)rd16(0x80492836u) + 1u;
                if ((s32)r0 >= 9999) {
                    r0 = 0x270fu;
                }
                r4 = 1u;
                wr16(0x80492836u, (u16)r0);
            }
            if (r4 == 0u) {
                r3 = rd32(param_1 + 0x8cu);
                if (((ppc_cntlzw((u32)((s32)r3 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                    r4 = (u32)rd8(rd32(param_1) + 1u);
                    r3 = (r3 & 0x7fffffffu) | ((ppc_cntlzw((((0u - r4) | r4) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                    wr32(param_1 + 0x8cu, r3);
                }
                wr8(rd32(param_1) + 1u, 0u);
            } else {
                r4 = rd32(param_1 + 0x8cu);
                if (((ppc_cntlzw((u32)((s32)r4 >> 31)) >> 5u) & 0x7ffffffu) == 0u) {
                    r5 = (u32)rd8(rd32(param_1) + 3u);
                    r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw((((3u - r5) | (r5 - 3u)) >> 0x1fu) & 1u) << 0x1au) & 0x80000000u);
                    wr32(param_1 + 0x8cu, r4);
                }
                wr8(rd32(param_1) + 3u, 3u);
            }
            wr8(rd32(param_1) + 6u, 0u);
        }
    } else {
        r0 = 0u;
        if ((s32)param_2 >= 570 && (s32)param_2 <= 591) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x8008f96cu, &a);
        }
    }
    return;
}
