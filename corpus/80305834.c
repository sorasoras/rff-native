#include "tc_rt.h"

u32 fn_80305834(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 4u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = param_2;
    a.r[2] = 0x803059d0u;
    a.r[3] = 0u;
    r3 = tc_call(0x802f99b0u, &a);
    r30 = r3;
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return r30;
}
