#include "tc_rt.h"

void fn_80058cd4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8007dad4u, &a);
    a.r[0] = param_1;
    a.r[1] = rd32(r3 + 0xcu);
    a.r[2] = param_3;
    (void)tc_call(0x80058d20u, &a);
    return;
}
