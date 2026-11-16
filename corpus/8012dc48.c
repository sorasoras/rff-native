#include "tc_rt.h"

void fn_8012dc48(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x30u);
    a.r[1] = rd32((u32)param_1 + 0x2cu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32((u32)param_1 + 0x100u);
    a.r[1] = rd32((u32)param_1 + 0x104u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    return;
}
