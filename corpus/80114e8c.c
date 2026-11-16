#include "tc_rt.h"

void fn_80114e8c(u32 param_r3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = param_r3;
    r3 = tc_call(0x800a7854u, &a);
    if (r3 != 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        a.r[0] = r3;
        r3 = tc_call(0x800ac4acu, &a);
        if (r3 == 0u) {
            r31 = rd32(param_r3);
            r28 = 0u;
            f0 = (f64)rdf32(0x80574124u);
            wrf32d(0x817fdfe0u, f0);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfd8u, f0);
            do {
                if (r28 != 2u) {
                    c0lt = (s32)r28 < 1;
                    do {
                        if (r28 == 1u) {
                            r29 = 3u;
                        } else if (!c0lt) {
                            if ((s32)r28 >= 3) {
                                r0 = 0u;
                                break;
                            }
                            r29 = 2u;
                        } else {
                            if ((s32)r28 < 0) {
                                r0 = 0u;
                                break;
                            }
                            r29 = 1u;
                        }
                        a.r[0] = r31;
                        a.r[1] = r29;
                        r3 = tc_call(0x801137e4u, &a);
                        r30 = r3;
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0x817fdfd8u;
                            (void)tc_call(0x80114108u, &a);
                            a.r[0] = r30;
                            (void)tc_call(0x80114358u, &a);
                            r27 = 1u;
                            a.r[0] = r30;
                            r3 = tc_call(0x80114784u, &a);
                            if ((r3 & 4u) != 0u) {
                                r27 = 0u;
                            }
                            r3 = tc_call(0x800a7854u, &a);
                            r30 = r3;
                            do {
                                if (r3 != 0u) {
                                    if (r29 != 1u) {
                                        if (r29 == 3u) {
                                            a.r[0] = r3;
                                            r3 = tc_call(0x800c37fcu, &a);
                                            if (r3 == 0u) {
                                                r0 = 0u;
                                                break;
                                            }
                                        }
                                    } else {
                                        a.r[0] = r3;
                                        r3 = tc_call(0x800c3668u, &a);
                                        if (r3 == 0u) {
                                            r0 = 0u;
                                            break;
                                        }
                                    }
                                    a.r[0] = r30;
                                    r3 = tc_call(0x800c3728u, &a);
                                    if (r3 == 0u) {
                                        a.r[0] = r30;
                                        r3 = tc_call(0x800c37fcu, &a);
                                        if (r3 == 0u) {
                                            r0 = (ppc_cntlzw(rd32(0x805711ecu)) >> 5u) & 0x7ffffffu;
                                            break;
                                        }
                                    }
                                    r3 = tc_call(0x800cf66cu, &a);
                                    if (r3 != 0u) {
                                        r3 = tc_call(0x800cf66cu, &a);
                                        if (r3 != 4u) {
                                            r0 = (ppc_cntlzw(rd32(0x805711ecu)) >> 5u) & 0x7ffffffu;
                                            break;
                                        }
                                    }
                                    r0 = 0u;
                                } else {
                                    r0 = 0u;
                                }
                            } while (0);
                            if (r0 == 0u) {
                                r27 = 0u;
                            }
                            r0 = 1u;
                        } else {
                            r0 = 0u;
                        }
                    } while (0);
                    if (r0 != 0u && r27 != 0u) {
                        a.r[0] = 0x817fdfd8u;
                        (void)tc_call(0x80077890u, &a);
                    }
                }
                r28 = r28 + 1u;
            } while ((s32)r28 < 3);
        }
    }
    return;
}
