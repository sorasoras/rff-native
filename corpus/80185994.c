#include "tc_rt.h"

void fn_80185994(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = ((u32)param_2 << 2u) & 0xfffffffcu;
    a.r[0] = rd32(rd32((u32)param_1 + 0x2cu) + r31);
    a.r[1] = (u32)param_3;
    (void)tc_call(0x80161d30u, &a);
    if ((u32)param_3 != 0u) {
        wr32(rd32(rd32((u32)param_1 + 0x2cu) + r31) + 0xa8u, (u32)param_1 + 0x1a4u);
    } else {
        wr32(rd32(rd32((u32)param_1 + 0x2cu) + r31) + 0xa8u, (u32)param_1 + 0x3cu);
    }
    return;
}
