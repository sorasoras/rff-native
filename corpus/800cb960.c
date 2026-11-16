#include "tc_rt.h"

void fn_800cb960(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, param_2);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800cb950u, &a);
    return;
}
