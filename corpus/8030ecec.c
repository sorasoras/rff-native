#include "tc_rt.h"

u32 fn_8030ecec(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x802f5da8u, &a);
    wr32(param_1, 0x8039d710u);
    a.r[0] = param_1 + 0x100u;
    (void)tc_call(0x8030f534u, &a);
    wr32(param_1 + 0x238u, param_2);
    wr32(param_1 + 0x234u, 0u);
    wr8(param_1 + 0x23cu, 0u);
    return param_1;
}
