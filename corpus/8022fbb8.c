#include "tc_rt.h"

s32 fn_8022fbb8(s32 param_1)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32((u32)param_1 + 0x2ccu);
    r31 = r3;
    r0 = r30 - 1u;
    c0eq = r0 == 0u;
    wr32((u32)param_1 + 0x2ccu, r0);
    if ((s32)r0 >= 0) {
        if (c0eq) {
            r0 = (u32)rd16((u32)param_1 + 0x2c8u);
            c0lt = (s32)r0 < 4;
            if (r0 == 4u) {
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
                r0 = rd32((u32)param_1 + 0x2d4u);
                r4 = rd32((u32)param_1 + 0x2f4u);
                while (r4 != 0u) {
                    r3 = rd32(r4);
                    if (r3 != 0u) {
                        r3 = rd32(r3 + 0x2d0u);
                        if ((s32)r3 < (s32)r0) {
                            r0 = r3;
                        }
                    }
                    r4 = rd32(r4 + 0x10u);
                }
                wr32((u32)param_1 + 0x2d0u, r0);
                r4 = rd32((u32)param_1 + 0x2dcu);
                r5 = rd32(r4);
                while (r5 != 0u && (s32)rd32(r5 + 0x2d0u) <= (s32)rd32((u32)param_1 + 0x2d0u)) {
                    r5 = rd32(r5 + 0x2e0u);
                }
                if (r5 != 0u) {
                    wr32((u32)param_1 + 0x2e0u, r5);
                    r3 = rd32(r5 + 0x2e4u);
                    wr32(r5 + 0x2e4u, (u32)param_1);
                    wr32((u32)param_1 + 0x2e4u, r3);
                    if (r3 != 0u) {
                        wr32(r3 + 0x2e0u, (u32)param_1);
                    } else {
                        wr32(rd32((u32)param_1 + 0x2dcu), (u32)param_1);
                    }
                } else {
                    r3 = rd32(r4 + 4u);
                    if (r3 != 0u) {
                        wr32(r3 + 0x2e0u, (u32)param_1);
                    } else {
                        wr32(r4, (u32)param_1);
                    }
                    wr32((u32)param_1 + 0x2e4u, r3);
                    r3 = rd32((u32)param_1 + 0x2dcu);
                    wr32((u32)param_1 + 0x2e0u, 0u);
                    wr32(r3 + 4u, (u32)param_1);
                }
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
            } else if (c0lt && r0 == 1u) {
                r5 = rd32((u32)param_1 + 0x2d4u);
                r4 = rd32((u32)param_1 + 0x2f4u);
                while (r4 != 0u) {
                    r3 = rd32(r4);
                    if (r3 != 0u) {
                        r0 = rd32(r3 + 0x2d0u);
                        if ((s32)r0 < (s32)r5) {
                            r5 = r0;
                        }
                    }
                    r4 = rd32(r4 + 0x10u);
                }
                wr32((u32)param_1 + 0x2d0u, r5);
                r3 = ((r5 << 3u) & 0xfffffff8u) - 0x7fb1fa90u;
                wr32((u32)param_1 + 0x2dcu, r3);
                r4 = rd32(r3 + 4u);
                if (r4 != 0u) {
                    wr32(r4 + 0x2e0u, (u32)param_1);
                } else {
                    wr32(r3, (u32)param_1);
                }
                wr32((u32)param_1 + 0x2e4u, r4);
                r4 = rd32((u32)param_1 + 0x2dcu);
                wr32((u32)param_1 + 0x2e0u, 0u);
                wr32(r4 + 4u, (u32)param_1);
                r0 = 0x1fu - rd32((u32)param_1 + 0x2d0u);
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = rd32(0x80571510u) | r0;
                wr32(0x80571510u, r0);
                wr32(0x8057150cu, 1u);
            }
            if (rd32(0x8057150cu) != 0u) {
                a.r[0] = 0u;
                (void)tc_call(0x8022f310u, &a);
            }
        }
    } else {
        wr32((u32)param_1 + 0x2ccu, 0u);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)r30;
}
