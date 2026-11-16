#include "tc_rt.h"

u32 fn_8020e97c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x803782c0u);
    a.r[0] = param_1 + 0xcu;
    (void)tc_call(0x8020c9f4u, &a);
    wr32(param_1 + 0x170u, 0u);
    return param_1;
}
