#include "tc_rt.h"

u32 fn_801ec1f4(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(param_1, param_2);
    wr32(param_1 + 0x64u, 0x803760fcu);
    wr32(param_1 + 0x60u, param_3);
    a.r[0] = param_1;
    (void)tc_call(0x801ec2d4u, &a);
    return param_1;
}
