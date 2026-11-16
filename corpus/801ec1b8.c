#include "tc_rt.h"

void fn_801ec1b8(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x80045be0u, &a);
    wr32(param_1, r3);
    a.r[0] = param_1;
    (void)tc_call(0x801ec2d4u, &a);
    return;
}
