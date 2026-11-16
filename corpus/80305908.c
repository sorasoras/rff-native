#include "tc_rt.h"

u32 fn_80305908(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 4u;
    a.r[0] = r31;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1 + 0x1cu;
    r3 = tc_call(0x802f9a58u, &a);
    r30 = r3;
    a.r[0] = r31;
    (void)tc_call(0x8022d648u, &a);
    return r30;
}
