#include "tc_rt.h"

void fn_8025c530(u32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = ((u32)param_3 << 1u) & 0xfffffffeu;
    (void)tc_call(0x80004338u, &a);
    return;
}
