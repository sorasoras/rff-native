#include "tc_rt.h"

void fn_801911f4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = rd32(param_1 + 8u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = rd32(param_1 + 4u);
    a.r[1] = rd32(param_1 + 0xcu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = param_1 + 0x60u;
    (void)tc_call(0x801e63a4u, &a);
    a.r[0] = param_1 + 0xd4u;
    (void)tc_call(0x801e63a4u, &a);
    return;
}
