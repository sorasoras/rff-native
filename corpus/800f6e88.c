#include "tc_rt.h"

void fn_800f6e88(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x164u, param_2);
    wr32((u32)param_1 + 0x168u, 0xffffffffu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800f6a0cu, &a);
    return;
}
