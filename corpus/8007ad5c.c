#include "tc_rt.h"

void fn_8007ad5c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_2;
    (void)param_3;
    a.r[0] = param_4;
    a.r[1] = param_5;
    r3 = tc_call(0x8007ab44u, &a);
    wr32(r3, rd32(param_1));
    wr32(param_1, r3);
    return;
}
