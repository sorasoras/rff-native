#include "tc_rt.h"

void fn_8026d554(u32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    r5 = (u32)rd16(param_1 + 0xau);
    r6 = (u32)param_2 + r5;
    r4 = rd32((u32)param_2 + r5);
    if (r4 == 0u) {
        wr32(param_1, rd32(r6 + 4u));
    } else {
        r4 = r4 + r5;
        wr32(r4 + 4u, rd32(r6 + 4u));
    }
    r5 = rd32(r6 + 4u);
    if (r5 == 0u) {
        wr32(param_1 + 4u, rd32(r6));
    } else {
        wr32(r5 + (u32)rd16(param_1 + 0xau), rd32(r6));
    }
    wr32(r6, 0u);
    wr32(r6 + 4u, 0u);
    wr16(param_1 + 8u, (u16)((u32)rd16(param_1 + 8u) - 1u));
    return;
}
