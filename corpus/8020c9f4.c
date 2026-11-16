#include "tc_rt.h"

u32 fn_8020c9f4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 4u;
    (void)tc_call(0x8020bea4u, &a);
    a.r[0] = param_1 + 0x148u;
    (void)tc_call(0x8020c618u, &a);
    wr32(param_1, 0u);
    wr32(param_1 + 0x160u, 0u);
    return param_1;
}
