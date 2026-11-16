#include "tc_rt.h"

s32 fn_80116ef4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x80157d94u, &a);
    return param_1;
}
