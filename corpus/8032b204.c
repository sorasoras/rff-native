#include "tc_rt.h"

u32 fn_8032b204(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_1;
    (void)tc_call(0x802337a0u, &a);
    return param_1;
}
