#include "tc_rt.h"

void fn_8022f8a0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = (u32)rd16((u32)param_1 + 0x2c8u);
    r31 = r3;
    c0lt = (s32)r0 < 3;
    do {
        if (r0 != 3u) {
            if (!c0lt) {
                if ((s32)r0 >= 5) break;
                r4 = rd32((u32)param_1 + 0x2e0u);
                r5 = rd32((u32)param_1 + 0x2e4u);
                if (r4 != 0u) {
                    wr32(r4 + 0x2e4u, r5);
                } else {
                    wr32(rd32((u32)param_1 + 0x2dcu) + 4u, r5);
                }
                if (r5 != 0u) {
                    wr32(r5 + 0x2e0u, r4);
                } else {
                    wr32(rd32((u32)param_1 + 0x2dcu), r4);
                }
                r0 = rd32((u32)param_1 + 0x2ccu);
                wr32((u32)param_1 + 0x2dcu, 0u);
                if ((s32)r0 <= 0) {
                    r3 = rd32((u32)param_1 + 0x2f0u);
                    if (r3 != 0u) {
                        r3 = rd32(r3 + 8u);
                        while ((s32)rd32(r3 + 0x2ccu) <= 0) {
                            r4 = rd32(r3 + 0x2d4u);
                            r5 = rd32(r3 + 0x2f4u);
                            while (r5 != 0u) {
                                r6 = rd32(r5);
                                if (r6 != 0u) {
                                    r0 = rd32(r6 + 0x2d0u);
                                    if ((s32)r0 < (s32)r4) {
                                        r4 = r0;
                                    }
                                }
                                r5 = rd32(r5 + 0x10u);
                            }
                            if (rd32(r3 + 0x2d0u) == r4) break;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            r3 = tc_call(0x8022f10cu, &a);
                            if (r3 == 0u) break;
                        }
                    }
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    if ((s32)rd32((u32)param_1 + 0x2ccu) <= 0) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x8022f068u, &a);
                    }
                } else {
                    if (c0lt) break;
                    wr32(0x8057150cu, 1u);
                }
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80228148u, &a);
            if (((u32)rd16((u32)param_1 + 0x2cau) & 1u) == 0u) {
                wr16((u32)param_1 + 0x2c8u, 8u);
            } else {
                r4 = rd32((u32)param_1 + 0x2fcu);
                r5 = rd32((u32)param_1 + 0x300u);
                if (r4 != 0u) {
                    wr32(r4 + 0x300u, r5);
                } else {
                    wr32(0x800000e0u, r5);
                }
                if (r5 != 0u) {
                    wr32(r5 + 0x2fcu, r4);
                } else {
                    wr32(0x800000dcu, r4);
                }
                wr16((u32)param_1 + 0x2c8u, 0u);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8022d710u, &a);
            a.r[0] = (u32)param_1 + 0x2e8u;
            (void)tc_call(0x802300d0u, &a);
            if (rd32(0x8057150cu) != 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x8022f310u, &a);
            }
            a.r[0] = r31;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
    } while (0);
    r3 = r3;
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
