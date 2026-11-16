#include "tc_rt.h"

void fn_8014b3bc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014b3c0u, &a);
    return;
}
