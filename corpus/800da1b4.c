#include "tc_rt.h"

void fn_800da1b4(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x78u);
    if (r4 != 0u) {
        a.r[0] = 0x8046ae40u;
        a.r[1] = r4;
        (void)tc_call(0x8013ebf8u, &a);
        wr32((u32)param_1 + 0x78u, 0u);
    }
    return;
}
