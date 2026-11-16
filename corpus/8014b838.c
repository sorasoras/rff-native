#include "tc_rt.h"

void fn_8014b838(s32 param_1, u32 param_r4)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x170u) == 2u) {
        r4 = 6u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        r3 = tc_call(0x8014b6f4u, &a);
        r4 = r3;
    }
    if (rd32((u32)param_1 + 0x168u) != r4) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x8014b494u, &a);
    }
    return;
}
