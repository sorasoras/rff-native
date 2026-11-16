#include "tc_rt.h"

void fn_802dfcf0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802df830u, &a);
    wr8((u32)param_1 + 0x6fu, 0u);
    return;
}
