#include "tc_rt.h"

void fn_8014b494(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    r3 = tc_call(0x800f84d0u, &a);
    if (r3 == 1u && rd32((u32)param_1 + 0x168u) != (u32)param_2) {
        wr32((u32)param_1 + 0x16cu, (u32)param_2);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x8014b48cu, &a);
    }
    return;
}
