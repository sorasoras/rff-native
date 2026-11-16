#include "tc_rt.h"

void fn_8016dd80(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8016dbf4u, &a);
    wr16(param_3, (u16)r3);
    wr8(param_3 + 2u, 1u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8016dd0cu, &a);
    wr8(param_3 + 3u, (u8)r3);
    return;
}
