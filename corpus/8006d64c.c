#include "tc_rt.h"

void fn_8006d64c(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006d6bcu, &a);
    wr32((u32)param_1 + 0x1610u, param_2);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = (u32)param_1 + 0x1614u;
    a.r[3] = (u32)param_1 + 0x1616u;
    a.r[4] = param_4;
    r3 = tc_call(0x80082068u, &a);
    wr16((u32)param_1 + 0x1618u, (u16)r3);
    return;
}
