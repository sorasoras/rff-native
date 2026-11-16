#include "tc_rt.h"

void fn_801a9908(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    TcArgs a = {0};
    (void)param_2;
    (void)param_3;
    r6 = param_4;
    if (rd32((u32)param_1 + 0x290u) == 3u) {
        r7 = rd32((u32)param_1 + 0x5c0u);
        if ((s32)r7 < 0 || (s32)r7 > 36) {
            r0 = 0u;
        } else {
            if ((s32)r7 <= 17) {
                r6 = 1u;
            } else {
                r6 = 2u;
                r7 = r7 - 0x12u;
            }
            r0 = 1u;
        }
        if (r0 != 0u) {
            r5 = rd32((u32)param_1 + 0x5c0u);
            if (((((0x2e8u - r5) | (r5 - 0x2e8u)) >> 0x1fu) & 1u) == 0u) {
                r30 = 0u;
            } else {
                r30 = (u32)rd8((u32)param_1 + 0x5c4u);
            }
            wr32((u32)param_1 + 0x9f0u, 4u);
            wr32((u32)param_1 + 0x9fcu, r6);
            wr32((u32)param_1 + 0xa00u, r7);
            wr32((u32)param_1 + 0xa04u, r30);
            wr32((u32)param_1 + 0x9f8u, 0u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a9e70u, &a);
            r4 = rd32((u32)param_1 + 0x5c0u);
            if (((((0x2e8u - r4) | (r4 - 0x2e8u)) >> 0x1fu) & 1u) == 0u) {
                r4 = 0u;
            } else {
                r4 = (u32)rd8((u32)param_1 + 0x5c5u);
            }
            if (r4 == 1u) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                a.r[2] = 1u;
                (void)tc_call(0x800693a8u, &a);
            } else {
                r5 = rd32((u32)param_1 + 0x5c0u);
                if (((((0x2e8u - r5) | (r5 - 0x2e8u)) >> 0x1fu) & 1u) != 0u) {
                    wr8((u32)param_1 + 0x5c5u, (u8)(r4 - 1u));
                }
                wr16(0x8049915eu, (u16)rd32((u32)param_1 + 0x5c0u));
                wr8(0x80499161u, (u8)r30);
                wr8(0x80499160u, (u8)(r4 - 1u));
            }
        }
    }
    return;
}
