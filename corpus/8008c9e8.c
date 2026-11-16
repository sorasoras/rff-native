#include "tc_rt.h"

void fn_8008c9e8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x4190u;
    (void)tc_call(0x8018a3e4u, &a);
    return;
}
