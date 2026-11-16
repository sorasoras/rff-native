#include "tc_rt.h"

u32 fn_8007021c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070854u, &a);
    wr32(param_1 + 0x7cu, 0u);
    wr32(param_1, 0x803501e8u);
    wr32(param_1 + 0x84u, 0u);
    wr32(param_1 + 0x98u, 0u);
    wr32(param_1 + 0xa0u, 0u);
    wr32(param_1 + 0x9cu, 0u);
    wr32(param_1 + 0xa8u, 0u);
    wr32(param_1 + 0xa4u, 0u);
    return param_1;
}
