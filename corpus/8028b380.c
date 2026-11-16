#include "tc_rt.h"

void fn_8028b380(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r5 = rd32(param_2 + 0xcu);
    if ((s32)r5 >= 0) {
        if ((s32)r5 >= (s32)rd32(param_1 + 8u)) {
            if (rd32(param_1) == 0u) {
                wr32(param_1, param_2);
            } else {
                r5 = rd32(param_1 + 4u);
                if (r5 != 0u) {
                    wr32(r5, param_2);
                }
                wr32(param_2 + 4u, rd32(param_1 + 4u));
            }
            wr32(param_2, 0u);
            wr32(param_1 + 4u, param_2);
            r5 = rd32(param_2 + 0xcu);
            wr32(param_2 + 0xcu, r5 - rd32(param_1 + 8u));
            wr32(param_1 + 8u, r5);
        } else {
            r6 = rd32(param_1);
            for (;;) {
                r5 = rd32(r6 + 0xcu);
                if ((s32)rd32(param_2 + 0xcu) <= (s32)r5) break;
                if ((s32)r5 > 0) {
                    wr32(param_2 + 0xcu, rd32(param_2 + 0xcu) - r5);
                }
                r6 = rd32(r6);
            }
            r0 = rd32(param_1);
            if (r6 == r0) {
                wr32(param_2, r0);
                wr32(rd32(param_1) + 4u, param_2);
                wr32(param_1, param_2);
            } else {
                wr32(rd32(r6 + 4u), param_2);
                wr32(param_2 + 4u, rd32(r6 + 4u));
                wr32(r6 + 4u, param_2);
                wr32(param_2, r6);
            }
            wr32(r6 + 0xcu, rd32(r6 + 0xcu) - rd32(param_2 + 0xcu));
        }
        wr8(param_2 + 0x16u, 1u);
        return;
    }
    return;
}
