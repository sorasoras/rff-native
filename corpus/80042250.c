#include "tc_rt.h"

void fn_80042250(u32 param_1, u32 param_r4)
{
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = param_r4;
    (void)tc_call(0x80233d84u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = param_1;
    (void)tc_call(0x802337a0u, &a);
    return;
}
