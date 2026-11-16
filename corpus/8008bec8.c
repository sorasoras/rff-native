#include "tc_rt.h"

void fn_8008bec8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80089874u, &a);
    a.r[0] = (u32)param_1 + 0x4154u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008c9d0u, &a);
    return;
}
