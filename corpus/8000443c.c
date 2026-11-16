#include "tc_rt.h"

u32 fn_8000443c(u32 param_1, u32 param_r4, u32 param_r5)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    (void)tc_call(0x80004388u, &a);
    return param_1;
}
