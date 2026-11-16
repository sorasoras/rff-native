#include "tc_rt.h"

void fn_8028b46c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    if (param_2 == 0u) {
        return;
    }
    if ((u32)rd8(param_2 + 0x16u) == 0u) {
        return;
    }
    if (rd32(param_1) != 0u) {
        r6 = rd32(param_2);
        if (r6 == 0u) {
            wr32(param_1 + 8u, rd32(param_1 + 8u) - rd32(param_2 + 0xcu));
        } else {
            wr32(r6 + 0xcu, rd32(r6 + 0xcu) + rd32(param_2 + 0xcu));
        }
        if (rd32(param_1) != param_2) {
            if (rd32(param_1 + 4u) != param_2) {
                r3 = rd32(param_2);
                if (r3 == 0u) {
                    return;
                }
                if (rd32(r3 + 4u) != param_2) {
                    return;
                }
                wr32(r3 + 4u, rd32(param_2 + 4u));
                r3 = rd32(param_2 + 4u);
                if (r3 == 0u) {
                    return;
                }
                if (rd32(r3) != param_2) {
                    return;
                }
                wr32(r3, rd32(param_2));
            } else {
                r5 = rd32(param_2 + 4u);
                wr32(param_1 + 4u, r5);
                if (r5 != 0u) {
                    wr32(r5, 0u);
                }
            }
        } else {
            r5 = rd32(param_2);
            wr32(param_1, r5);
            if (r5 != 0u) {
                wr32(r5 + 4u, 0u);
            }
            if (rd32(param_1 + 4u) == param_2) {
                wr32(param_1 + 4u, 0u);
            }
        }
        wr32(param_2 + 4u, 0u);
        wr32(param_2, 0u);
        wr32(param_2 + 0xcu, 0x80000000u);
        wr8(param_2 + 0x16u, 0u);
        return;
    }
    return;
}
