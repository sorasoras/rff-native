#include "tc_rt.h"

void fn_8017d248(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_2 + 0x74u) * 0x1cu);
    a.r[1] = rd32((u32)param_2 + 0x7cu);
    (void)tc_call(0x8007aff0u, &a);
    wr32((u32)param_2 + 0x7cu, 0u);
    return;
}
