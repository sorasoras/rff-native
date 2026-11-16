#include "tc_rt.h"

u32 fn_80150340(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x803668f8u);
    return param_1;
}
