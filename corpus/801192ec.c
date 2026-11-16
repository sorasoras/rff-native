#include "tc_rt.h"

u32 fn_801192ec(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800a5f50u, &a);
    return param_1;
}
