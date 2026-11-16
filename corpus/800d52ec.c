#include "tc_rt.h"

u32 fn_800d52ec(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d53b4u, &a);
    return param_1;
}
