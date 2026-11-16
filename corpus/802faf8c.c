#include "tc_rt.h"

void fn_802faf8c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 - 0xdcu;
    (void)tc_call(0x802faf40u, &a);
    return;
}
