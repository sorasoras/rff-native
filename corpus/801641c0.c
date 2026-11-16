#include "tc_rt.h"

void fn_801641c0(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1 + 4u, (u32)param_2);
    a.r[0] = 0x20u;
    r3 = tc_call(0x80164438u, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801644a8u, &a);
    }
    wr32(param_1, r31);
    a.r[0] = r31;
    a.r[1] = rd32((u32)param_2 + 0x10u);
    (void)tc_call(0x80164674u, &a);
    a.r[0] = param_1;
    a.r[1] = rd32(param_1);
    a.r[2] = param_3;
    (void)tc_call(0x80164250u, &a);
    wr32((u32)param_2 + 0xd4u, 0u);
    return;
}
