#include "tc_rt.h"

void fn_80301404(s32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 4u;
    a.r[1] = param_r4;
    (void)tc_call(0x80301334u, &a);
    return;
}
