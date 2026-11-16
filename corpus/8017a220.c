#include "tc_rt.h"

u32 fn_8017a220(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x8017a250u, &a);
    return param_1;
}
