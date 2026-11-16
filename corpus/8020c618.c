#include "tc_rt.h"

u32 fn_8020c618(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x8020b9ecu, &a);
    wr32(param_1, 0xffffffffu);
    wr32(param_1 + 4u, 0xffffffffu);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    return param_1;
}
