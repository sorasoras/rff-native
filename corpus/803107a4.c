#include "tc_rt.h"

void fn_803107a4(u32 param_1, s32 param_2, u32 param_3)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2 + 0x90u;
    a.r[1] = param_3;
    (void)tc_call(0x802de984u, &a);
    return;
}
