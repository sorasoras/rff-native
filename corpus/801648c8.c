#include "tc_rt.h"

u32 fn_801648c8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x80369518u);
    wr32(param_1 + 0x120u, 5u);
    wr32(param_1 + 0x128u, 0u);
    wr32(param_1 + 0x124u, 5u);
    wr32(param_1 + 0x12cu, 0x1081u);
    wr32(param_1 + 0x130u, 0xffffffffu);
    wr32(param_1 + 0x134u, 0x3fu);
    wr32(param_1 + 0x138u, 0u);
    wr32(param_1 + 0x13cu, 0xfu);
    return param_1;
}
