#include "tc_rt.h"

u32 fn_8022f10c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r0 = (u32)rd16((u32)param_1 + 0x2c8u);
    c0lt = (s32)r0 < 3;
    if (r0 != 3u) {
        if (!c0lt) {
            if ((s32)r0 < 5) {
                r6 = rd32((u32)param_1 + 0x2e0u);
                r7 = rd32((u32)param_1 + 0x2e4u);
                if (r6 != 0u) {
                    wr32(r6 + 0x2e4u, r7);
                } else {
                    wr32(rd32((u32)param_1 + 0x2dcu) + 4u, r7);
                }
                if (r7 != 0u) {
                    wr32(r7 + 0x2e0u, r6);
                } else {
                    wr32(rd32((u32)param_1 + 0x2dcu), r6);
                }
                wr32((u32)param_1 + 0x2d0u, (u32)param_2);
                r5 = rd32((u32)param_1 + 0x2dcu);
                r6 = rd32(r5);
                while (r6 != 0u && (s32)rd32(r6 + 0x2d0u) <= (s32)rd32((u32)param_1 + 0x2d0u)) {
                    r6 = rd32(r6 + 0x2e0u);
                }
                if (r6 != 0u) {
                    wr32((u32)param_1 + 0x2e0u, r6);
                    r4 = rd32(r6 + 0x2e4u);
                    wr32(r6 + 0x2e4u, (u32)param_1);
                    wr32((u32)param_1 + 0x2e4u, r4);
                    if (r4 != 0u) {
                        wr32(r4 + 0x2e0u, (u32)param_1);
                    } else {
                        wr32(rd32((u32)param_1 + 0x2dcu), (u32)param_1);
                    }
                } else {
                    r4 = rd32(r5 + 4u);
                    if (r4 != 0u) {
                        wr32(r4 + 0x2e0u, (u32)param_1);
                    } else {
                        wr32(r5, (u32)param_1);
                    }
                    wr32((u32)param_1 + 0x2e4u, r4);
                    r4 = rd32((u32)param_1 + 0x2dcu);
                    wr32((u32)param_1 + 0x2e0u, 0u);
                    wr32(r4 + 4u, (u32)param_1);
                }
                r3 = rd32((u32)param_1 + 0x2f0u);
                if (r3 != 0u) {
                    r3 = rd32(r3 + 8u);
                    return r3;
                }
            }
        } else {
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8022f068u, &a);
                wr32((u32)param_1 + 0x2d0u, (u32)param_2);
                r3 = (((u32)param_2 << 3u) & 0xfffffff8u) - 0x7fb1fa90u;
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
            } else if (!c0lt) {
                wr32(0x8057150cu, 1u);
                wr32((u32)param_1 + 0x2d0u, (u32)param_2);
            }
        }
    }
    r3 = 0u;
    return r3;
}
