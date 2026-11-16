#include "tc_rt.h"

void fn_80257590(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r5 = rd32(param_2);
    r6 = r5 & 0xfffffff8u;
    wr32(param_2, r5 & 0xfffffffdu);
    wr32(param_2 + r6, rd32(param_2 + r6) & 0xfffffffbu);
    wr32(param_2 + r6 - 4u, r6);
    r31 = (u32)param_1 + (rd32((u32)param_1 + 0xcu) & 0xfffffff8u) - 4u;
    r3 = rd32(r31);
    if (r3 == 0u) {
        wr32(r31, param_2);
        wr32(param_2 + 8u, param_2);
        wr32(param_2 + 0xcu, param_2);
    } else {
        r5 = rd32(r3 + 8u);
        r3 = param_2;
        wr32(param_2 + 8u, r5);
        wr32(r5 + 0xcu, param_2);
        wr32(param_2 + 0xcu, rd32(r31));
        wr32(rd32(r31) + 8u, param_2);
        wr32(r31, param_2);
        if ((rd32(param_2) & 4u) == 0u) {
            r6 = rd32(param_2 - 4u);
            if ((r6 & 2u) == 0u) {
                r3 = param_2 - r6;
                r5 = rd32(r3) & 7u;
                wr32(r3, r5);
                r5 = (r5 & 7u) | ((r6 + (rd32(param_2) & 0xfffffff8u)) & 0xfffffff8u);
                wr32(r3, r5);
                if ((r5 & 2u) == 0u) {
                    r0 = r6 + (rd32(param_2) & 0xfffffff8u);
                    wr32(r3 + r0 - 4u, r0);
                }
                r5 = rd32(r31);
                if (r5 == param_2) {
                    wr32(r31, rd32(r5 + 0xcu));
                }
                wr32(rd32(param_2 + 0xcu) + 8u, rd32(param_2 + 8u));
                r5 = rd32(param_2 + 0xcu);
                wr32(rd32(r5 + 8u) + 0xcu, r5);
            }
        }
        wr32(r31, r3);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x802576e0u, &a);
    }
    r3 = rd32(rd32(r31)) & 0xfffffff8u;
    if (rd32((u32)param_1 + 8u) < r3) {
        wr32((u32)param_1 + 8u, r3);
    }
    return;
}
