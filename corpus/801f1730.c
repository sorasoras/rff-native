#include "tc_rt.h"

u32 fn_801f1730(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80083d34u, &a);
    wr32(param_1, 0x803765f8u);
    return param_1;
}
