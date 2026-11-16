#include "tc_rt.h"

void fn_801a1304(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xf68u) != 0u) {
        a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
        (void)tc_call(0x80056f08u, &a);
        wr32((u32)param_1 + 0xf68u, 0u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801e722cu, &a);
    wr32(0x80571338u, rd32(0x80571338u) - 1u);
    return;
}
