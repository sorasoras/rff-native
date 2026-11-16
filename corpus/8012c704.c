#include "tc_rt.h"

void fn_8012c704(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x34u);
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32((u32)param_1 + 0x98u);
    a.r[1] = rd32((u32)param_1 + 0x44u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
