#include "tc_rt.h"

u32 fn_80151070(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80150e74u, &a);
    wr32(param_1, 0x80367fd0u);
    return param_1;
}
