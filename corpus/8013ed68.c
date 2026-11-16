#include "tc_rt.h"

void fn_8013ed68(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_1 + 0xcu) + 0x14u), &a);
    a.r[0] = 8u;
    a.r[1] = (u32)(s8)r3;
    a.r[2] = 0u;
    (void)tc_call(0x801412f8u, &a);
    return;
}
