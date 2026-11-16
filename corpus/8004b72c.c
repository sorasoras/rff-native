#include "tc_rt.h"

void fn_8004b72c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr8(param_1 + 4u, (u8)param_2);
    wr16(param_1 + 8u, (u16)param_3);
    wr16(param_1 + 0xau, (u16)param_4);
    wr32(param_1, param_6);
    wr8(param_1 + 5u, (u8)param_5);
    wr16(param_1 + 6u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = param_4;
    a.r[3] = param_5;
    r3 = tc_call(0x8004b7f4u, &a);
    wr32(param_1 + 0xcu, r3);
    return;
}
