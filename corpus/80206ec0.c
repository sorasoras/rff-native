#include "tc_rt.h"

u32 fn_80206ec0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80165c20u, &a);
    wr32(param_1, 0x80377480u);
    return param_1;
}
