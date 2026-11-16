#include "tc_rt.h"

u32 fn_8015d918(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1 + 0x120u, 0xau);
    wr32(param_1, 0x80369020u);
    wr32(param_1 + 0x128u, 0xau);
    wr32(param_1 + 0x12cu, 0xau);
    wr32(param_1 + 0x148u, 0u);
    wr32(param_1 + 0x124u, 0u);
    wr32(param_1 + 0x138u, 0u);
    wr32(param_1 + 0x140u, 0xffffffffu);
    wr32(param_1 + 0x130u, 0u);
    wr32(param_1 + 0x134u, 0u);
    wr32(param_1 + 0x144u, 0xffffffffu);
    wr32(param_1 + 0x14cu, 0u);
    return param_1;
}
