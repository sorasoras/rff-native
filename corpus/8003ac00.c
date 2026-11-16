#include "tc_rt.h"

void fn_8003ac00(s32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, s32 param_6)
{
    u32 r5 = 0;
    wr32(param_2, 0x46524545u);
    wr32(param_2 + 4u, 0u);
    wr32(param_2 + 8u, param_3);
    wr32(param_2 + 0x1cu, 0u);
    wr32(param_2 + 0xcu, (u32)param_5);
    wr32(param_2 + 0x10u, (u32)param_6);
    wr32(param_2 + 0x14u, 0u);
    wr32(param_2 + 0x18u, 0u);
    if ((u32)param_5 != 0u) {
        wr32((u32)param_5 + 0x10u, param_2);
    } else {
        wr32((u32)param_4 + 8u, param_2);
    }
    if ((u32)param_6 != 0u) {
        wr32((u32)param_6 + 0xcu, param_2);
    } else {
        wr32((u32)param_4 + 0xcu, param_2);
    }
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        wr32(param_2 + 0x14u, 0u);
        wr32(param_2 + 0x18u, rd32((u32)param_1 + 0x10u));
        wr32(rd32((u32)param_1 + 0x10u) + 0x14u, param_2);
    }
    r5 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0x10u, param_2);
    wr32((u32)param_1 + 0x14u, r5 + 1u);
    return;
}
