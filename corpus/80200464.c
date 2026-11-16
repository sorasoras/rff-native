#include "tc_rt.h"

void fn_80200464(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x6cu) != 0u) {
        a.r[0] = rd32(rd32((u32)param_1 + 0x28u) + 0x30u);
        a.r[1] = 0u;
        (void)tc_call(0x80203188u, &a);
        a.r[0] = rd32(rd32((u32)param_1 + 0x28u) + 0x2cu);
        a.r[1] = 0u;
        (void)tc_call(0x8020257cu, &a);
        r3 = rd32((u32)param_1 + 0x28u);
        wr32((u32)param_1 + 0x6cu, 0u);
        a.r[0] = r3;
        a.r[1] = 2u;
        (void)tc_call(0x80201690u, &a);
        a.r[0] = rd32((u32)param_1 + 0x28u);
        a.r[1] = 6u;
        (void)tc_call(0x8020160cu, &a);
    }
    return;
}
