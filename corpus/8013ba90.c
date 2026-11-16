#include "tc_rt.h"

void fn_8013ba90(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2 - 1u;
    (void)tc_call(0x801894d8u, &a);
    return;
}
