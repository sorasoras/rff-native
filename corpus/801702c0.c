#include "tc_rt.h"

void fn_801702c0(u32 param_r3)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r24 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x15u;
    (void)tc_call(0x80141274u, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wr8(param_r3 + 0x16e4u, 8u);
    r25 = param_r3;
    r24 = 0u;
    wr8(param_r3 + 0x16f0u, 8u);
    wr32(param_r3 + 0x16f4u, 0u);
    wrf32d(param_r3 + 0x16e8u, f0);
    wr32(param_r3 + 0xd50u, 0u);
    do {
        wr32(r25 + 0x28u, 0u);
        r3 = rd32(r25 + 0x74u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r25 + 0x74u, 0xffffffffu);
        }
        r24 = r24 + 1u;
        r25 = r25 + 0x174u;
    } while ((s32)r24 < 8);
    r25 = param_r3;
    wr32(param_r3 + 0xbc8u, 0u);
    r24 = 0u;
    wr32(param_r3 + 0xc58u, 0u);
    wr32(param_r3 + 0xce8u, 0u);
    do {
        wr32(r25 + 0x104cu, 0u);
        wr32(r25 + 0x10dcu, 0u);
        wr32(r25 + 0x116cu, 0u);
        r3 = rd32(r25 + 0x1098u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r25 + 0x1098u, 0xffffffffu);
        }
        r3 = rd32(r25 + 0x1128u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r25 + 0x1128u, 0xffffffffu);
        }
        r3 = rd32(r25 + 0x11b8u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r25 + 0x11b8u, 0xffffffffu);
        }
        r24 = r24 + 1u;
        r25 = r25 + 0x1b0u;
    } while ((s32)r24 < 4);
    r3 = rd32(param_r3 + 0x1814u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32(param_r3 + 0x1814u, 0xffffffffu);
    }
    r29 = param_r3;
    r28 = 0u;
    do {
        if (rd32(r29 + 0x1798u) != 0u) {
            r27 = 0u;
            r25 = 0u;
            while (r27 < rd32(r29 + 0x1804u)) {
                r4 = rd32(rd32(r29 + 0x1798u) + r25);
                if (r4 != 0u) {
                    a.r[0] = 0x80472f48u;
                    a.r[1] = r4;
                    (void)tc_call(0x800beee0u, &a);
                    wr32(rd32(r29 + 0x1798u) + r25, 0u);
                }
                r24 = rd32(rd32(r29 + 0x1798u) + r25 + 4u);
                c0eq = r24 == 0u;
                if (!c0eq) {
                    if (!c0eq) {
                        r3 = tc_call(0x800545e4u, &a);
                        r6 = r3;
                        if (rd32(r3 + 0x10u) != 0u) {
                            r5 = rd32(r3 + 0xcu);
                            r3 = rd32(r3);
                            r6 = r6 + 0x18u;
                            a.r[0] = r3;
                            a.r[1] = r24;
                            a.r[2] = r5;
                            a.r[3] = r6;
                            (void)tc_call(0x80040e98u, &a);
                        } else {
                            if (rd32(r3 + 0x20u) != 0u) {
                                r3 = r3 + 0x24u;
                                a.r[0] = r3;
                                a.r[1] = r24;
                                (void)tc_call(0x80094ec0u, &a);
                            } else {
                                r5 = rd32(r3 + 0xcu);
                                r3 = rd32(r3);
                                r6 = r6 + 0x18u;
                                a.r[0] = r3;
                                a.r[1] = r24;
                                a.r[2] = r5;
                                a.r[3] = r6;
                                (void)tc_call(0x80040e98u, &a);
                            }
                        }
                    }
                    wr32(rd32(r29 + 0x1798u) + r25 + 4u, 0u);
                }
                r25 = r25 + 0xcu;
                r27 = r27 + 1u;
            }
            r27 = rd32(r29 + 0x1798u);
            if (r27 != 0u) {
                r3 = tc_call(0x800545e4u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r27;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r27;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r27;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
            wr32(r29 + 0x1798u, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r28 < 3);
    r29 = param_r3;
    r25 = 0u;
    do {
        r4 = rd32(r29 + 0x17a4u);
        if (r4 != 0u) {
            a.r[0] = 0x80472f48u;
            a.r[1] = r4;
            (void)tc_call(0x800beee0u, &a);
            wr32(r29 + 0x17a4u, 0u);
        }
        r24 = rd32(r29 + 0x17a8u);
        c0eq = r24 == 0u;
        if (!c0eq) {
            if (!c0eq) {
                r3 = tc_call(0x800545e4u, &a);
                r6 = r3;
                if (rd32(r3 + 0x10u) != 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r24;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    if (rd32(r3 + 0x20u) != 0u) {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = r24;
                        (void)tc_call(0x80094ec0u, &a);
                    } else {
                        r5 = rd32(r3 + 0xcu);
                        r3 = rd32(r3);
                        r6 = r6 + 0x18u;
                        a.r[0] = r3;
                        a.r[1] = r24;
                        a.r[2] = r5;
                        a.r[3] = r6;
                        (void)tc_call(0x80040e98u, &a);
                    }
                }
            }
            wr32(r29 + 0x17a8u, 0u);
        }
        r25 = r25 + 1u;
        r29 = r29 + 0xcu;
    } while ((s32)r25 < 8);
    r28 = param_r3;
    r24 = 0u;
    do {
        r3 = rd32(r28 + 0xdc8u);
        if ((r3 + 0x10000u) != 0xffffu) {
            a.r[0] = r3;
            (void)tc_call(0x8004bc54u, &a);
            wr32(r28 + 0xdc8u, 0xffffffffu);
        }
        r24 = r24 + 1u;
        r28 = r28 + 0x90u;
    } while ((s32)r24 < 5);
    r3 = rd32(param_r3 + 0x1778u);
    if ((r3 + 0x10000u) != 0xffffu) {
        a.r[0] = r3;
        (void)tc_call(0x8004bc54u, &a);
        wr32(param_r3 + 0x1778u, 0xffffffffu);
    }
    a.r[0] = param_r3;
    (void)tc_call(0x80173018u, &a);
    return;
}
