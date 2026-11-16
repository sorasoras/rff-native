#include "tc_rt.h"

void fn_802576e0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r5 = rd32(param_1);
    r7 = r5 & 0xfffffff8u;
    r6 = rd32(param_1 + r7);
    r8 = param_1 + r7;
    if ((r6 & 2u) == 0u) {
        r5 = r5 & 7u;
        r6 = r7 + (r6 & 0xfffffff8u);
        r5 = (r5 & 7u) | (r6 & 0xfffffff8u);
        wr32(param_1, r5);
        if ((r5 & 2u) == 0u) {
            wr32(param_1 + r6 - 4u, r6);
        }
        if ((rd32(param_1) & 2u) == 0u) {
            wr32(param_1 + r6, rd32(param_1 + r6) & 0xfffffffbu);
        } else {
            wr32(param_1 + r6, rd32(param_1 + r6) | 4u);
        }
        r3 = rd32(param_2);
        if (r3 == r8) {
            wr32(param_2, rd32(r3 + 0xcu));
        }
        if (rd32(param_2) == r8) {
            wr32(param_2, 0u);
        }
        wr32(rd32(r8 + 0xcu) + 8u, rd32(r8 + 8u));
        wr32(rd32(r8 + 8u) + 0xcu, rd32(r8 + 0xcu));
        return;
    }
    return;
}
