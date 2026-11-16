#include "tc_rt.h"

void fn_802641b0(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = ((param_1 << 6u) & 0xffffffc0u) - 0x7faff5d0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    if ((rd32(r30 + 0xcu) & 0x10u) != 0u) {
        if ((u32)param_3 != 0u) {
            r3 = r30;
            r4 = rd32(r30 + 0x24u);
            ctr = r4;
            if ((s32)r4 > 0) {
                do {
                    if (param_2 == rd32(r3 + 0x28u)) {
                        a.r[0] = r29;
                        (void)tc_call(0x8022c2d8u, &a);
                        return;
                    }
                    r3 = r3 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
            wr32(r30 + ((r4 << 3u) & 0xfffffff8u) + 0x2cu, (u32)param_3);
            wr32(r30 + ((rd32(r30 + 0x24u) << 3u) & 0xfffffff8u) + 0x28u, param_2);
            wr32(r30 + 0x24u, rd32(r30 + 0x24u) + 1u);
        }
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr32(r30 + 0xcu, rd32(r30 + 0xcu) | 0x10u);
        wr32(r30 + 0x18u, param_2);
        a.r[0] = param_1;
        a.r[1] = r30;
        (void)tc_call(0x80262ec4u, &a);
        a.r[0] = r29;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
