#include "tc_rt.h"

u32 fn_8030576c(u32 param_1)
{
    TcArgs a = {0};
    wr32(param_1, 0x8039d5c0u);
    a.r[0] = param_1 + 0x1cu;
    (void)tc_call(0x802f94c0u, &a);
    a.r[0] = param_1 + 4u;
    (void)tc_call(0x8022d534u, &a);
    return param_1;
}
