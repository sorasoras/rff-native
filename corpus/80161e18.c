#include "tc_rt.h"

void fn_80161e18(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x54u);
    a.r[1] = rd32(param_1);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8016182cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x80161964u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801618ecu, &a);
    return;
}
