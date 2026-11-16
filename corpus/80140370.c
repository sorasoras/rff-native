#include "tc_rt.h"

void fn_80140370(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_2 - rd32((u32)param_1 + 8u) + 0xcafu;
    (void)tc_call(0x8014d9a4u, &a);
    return;
}
