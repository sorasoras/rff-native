#include "tc_rt.h"

void fn_801a9a48(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = rd32(param_1 + 0x290u);
    if (r0 != 0xcu) {
        if (r0 != 0xau) {
            if (r0 == 0xfu) {
                r31 = rd32(rd32(param_1 + 0xa48u) + 0x74u);
                do {
                    if (r31 != 0x2e8u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x1fu;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r31;
                            r3 = tc_call(0x8015f2b0u, &a);
                            r0 = r3 & 0xffu;
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                            r0 = r0 & 0x180000u;
                            r3 = 0u;
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0x8049f1b0u;
                                a.r[1] = r31;
                                r3 = tc_call(0x8015f2b0u, &a);
                                r0 = r3 & 0xffu;
                                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                r0 = r0 & 0x400000u;
                                r3 = 0u;
                                if (r0 != 0u) {
                                    r3 = 1u;
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 0x8049f1b0u;
                                    a.r[1] = r31;
                                    r3 = tc_call(0x8015f2b0u, &a);
                                    r0 = r3 & 0xffu;
                                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                    r0 = r0 & 0x200000u;
                                    r3 = 0u;
                                    if (r0 != 0u) {
                                        r3 = 1u;
                                    }
                                    if (r3 == 0u) {
                                        r0 = 0u;
                                        break;
                                    }
                                }
                            }
                        }
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r31;
                        r3 = tc_call(0x8015f2d0u, &a);
                        if ((r3 & 0xffu) != 0u) {
                            r0 = 0u;
                        } else {
                            r0 = 1u;
                        }
                    } else {
                        r0 = 1u;
                    }
                } while (0);
                if (r0 == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    if (rd32(r3 + 4u) != 0u) {
                        r0 = rd32(rd32(param_1 + 0xa48u) + 0x74u);
                        if ((s32)r0 >= 448 && (s32)r0 <= 451) {
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 4u;
                            (void)tc_call(0x8010a75cu, &a);
                            return;
                        }
                    }
                    a.r[0] = rd32(param_1 + 0xa48u);
                    (void)tc_call(0x800d6150u, &a);
                    r0 = rd32(param_1 + 0x7cu);
                    f1 = (f64)rdf32(0x80575a2cu);
                    wr32(0x817fdfd8u, rd32(param_1 + 0x78u));
                    wr32(0x817fdfdcu, r0);
                    wr32(0x817fdfe0u, rd32(param_1 + 0x80u));
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = 0x817fdfd8u;
                    f1 = tc_callf(0x802343c8u, &a);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdfe4u, rd32(r3));
                    wr32(0x817fdfe8u, r0);
                    wr32(0x817fdfecu, rd32(r3 + 8u));
                    a.r[0] = 0x817fdfe4u;
                    a.r[1] = 0x817fdfd8u;
                    a.r[2] = 0x817fdfe4u;
                    f1 = tc_callf(0x80234380u, &a);
                    r3 = rd32(param_1 + 0xa48u);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfe4u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(r3) + 0x50u), &a);
                    wr32(param_1 + 0xa48u, 0u);
                }
            }
        } else {
            r31 = 0u;
            r29 = 0x80471ed0u;
            for (;;) {
                r3 = rd32(r29 + 0xbf8u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_1 + 0x99cu;
                    r3 = tc_call(0x80090324u, &a);
                    if (r3 != 0u) {
                        r31 = r3;
                        break;
                    }
                }
                r31 = r31 + 1u;
                r29 = r29 + 4u;
                if ((s32)r31 >= 20) {
                    r31 = 0u;
                    break;
                }
            }
            a.r[0] = r31;
            r3 = tc_call(0x8008f8e8u, &a);
            if (r3 != 0u) {
                r4 = rd32(r31);
                r0 = (u32)rd8(r4 + 1u);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        if (r0 == 3u) {
                            r3 = (u32)rd8(r4 + 2u);
                            if (r3 > 0xfu || r3 < 5u) {
                                if (r3 != 0x11u) {
                                    if (r3 == 0x10u) {
                                        r28 = 0x7fu;
                                    }
                                } else {
                                    r28 = 0x80u;
                                }
                            } else {
                                r28 = r3 + 0x42u;
                            }
                        }
                    } else {
                        r3 = (u32)rd8(r4 + 2u);
                        if (r3 > 0xfu) {
                            r28 = r3 + 0x42u;
                        } else {
                            r28 = r3 + 0x37u;
                        }
                    }
                } else {
                    r28 = (u32)rd8(r4 + 2u) + 0x25u;
                }
                a.r[0] = param_1;
                a.r[1] = r28;
                a.r[2] = (u32)rd8(r4 + 5u) & 0x7fu;
                a.r[3] = 1u;
                (void)tc_call(0x8006ba28u, &a);
                a.r[0] = 0x80471ed0u;
                a.r[1] = r31;
                (void)tc_call(0x80091a28u, &a);
            } else {
                a.r[0] = param_1;
                (void)tc_call(0x800c4b50u, &a);
            }
            wr32(param_1 + 0xa5cu, 1u);
        }
    } else {
        a.r[0] = rd32(param_1 + 0xa48u);
        a.r[1] = param_1;
        a.r[2] = 0x15u;
        (void)tc_call(0x800d612cu, &a);
        (void)tc_call(0x800975e0u, &a);
    }
    return;
}
