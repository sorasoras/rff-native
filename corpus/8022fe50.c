#include "tc_rt.h"

s32 fn_8022fe50(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32((u32)param_1 + 0x2ccu);
    r31 = r3;
    wr32((u32)param_1 + 0x2ccu, r30 + 1u);
    if (r30 == 0u) {
        r0 = (u32)rd16((u32)param_1 + 0x2c8u);
        c0lt = (s32)r0 < 3;
        if (r0 != 3u) {
            if (!c0lt) {
                if ((s32)r0 < 5) {
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
                    r3 = rd32((u32)param_1 + 0x2dcu);
                    wr32((u32)param_1 + 0x2d0u, 0x20u);
                    r4 = rd32(r3 + 4u);
                    if (r4 != 0u) {
                        wr32(r4 + 0x2e0u, (u32)param_1);
                    } else {
                        wr32(r3, (u32)param_1);
                    }
                    wr32((u32)param_1 + 0x2e4u, r4);
                    r3 = rd32((u32)param_1 + 0x2dcu);
                    wr32((u32)param_1 + 0x2e0u, 0u);
                    wr32(r3 + 4u, (u32)param_1);
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
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x8022f068u, &a);
                } else if (!c0lt) {
                    wr32(0x8057150cu, 1u);
                    wr16((u32)param_1 + 0x2c8u, 1u);
                }
            }
        }
        if (rd32(0x8057150cu) != 0u) {
            a.r[0] = 0u;
            (void)tc_call(0x8022f310u, &a);
        }
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r30;
}
