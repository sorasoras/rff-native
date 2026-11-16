#include "tc_rt.h"

void fn_80311e40(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0xbcu);
    a.r[1] = (u32)param_1;
    (void)tc_call(0x803109bcu, &a);
    return;
}
