#include "tc_rt.h"

u32 fn_800d1ac8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d2a88u, &a);
    return param_1;
}
