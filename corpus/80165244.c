#include "tc_rt.h"

u32 fn_80165244(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1, 0x80369880u);
    wr32(param_1 + 0x778u, 0xffffffffu);
    wr32(param_1 + 0x77cu, 0x106du);
    wr32(param_1 + 0x780u, 0xffffffffu);
    wr32(param_1 + 0x78cu, 0x3bu);
    wr32(param_1 + 0x790u, 0x18u);
    wr32(param_1 + 0x794u, 0x3fu);
    wr32(param_1 + 0x7c0u, 1u);
    return param_1;
}
