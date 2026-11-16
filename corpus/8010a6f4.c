#include "tc_rt.h"

void fn_8010a6f4(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[1] = param_2;
    r3 = tc_call(0x8010b43cu, &a);
    a.r[0] = (u32)param_1 + 0xe0u;
    a.r[1] = r3;
    a.r[2] = param_3;
    a.r[3] = param_4;
    (void)tc_call(0x801200b8u, &a);
    return;
}
