#include "tc_rt.h"

void fn_800ae1c0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x800ae3e0u, &a);
    return;
}
