#include "tc_rt.h"

u32 fn_8010f154(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80361ce0u);
    wr32(param_1 + 0xcu, 0x2e8u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    return param_1;
}
