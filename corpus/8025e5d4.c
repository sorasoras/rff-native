#include "tc_rt.h"

void fn_8025e5d4(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r6 = rd32(param_1 + 8u);
    r7 = rd32(param_1 + 4u);
    r31 = r7 - r6;
    if ((r6 + (u32)param_3) <= r7) {
        r31 = (u32)param_3;
    }
    a.r[0] = rd32(param_1) + ((r6 << 1u) & 0xfffffffeu);
    a.r[1] = param_2;
    a.r[2] = r31;
    (void)tc_call(0x8025c530u, &a);
    wr32(param_1 + 8u, rd32(param_1 + 8u) + r31);
    return;
}
