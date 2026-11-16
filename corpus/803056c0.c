#include "tc_rt.h"

void fn_803056c0(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 0xcu;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    (void)tc_call(0x80304184u, &a);
    return;
}
