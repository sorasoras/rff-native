#include "tc_rt.h"

void fn_80266cb8(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    if ((u32)param_2 == 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0u;
        a.r[2] = 0x880u;
        (void)tc_call(0x8000446cu, &a);
    }
    return;
}
