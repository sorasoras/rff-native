#include "tc_rt.h"

void fn_802fd854(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r31 = rd32((u32)param_1 + 0x11cu);
    if ((u32)param_2 != 0u) {
        a.r[0] = r31;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        (void)tc_call(0x802ff10cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x802ff11cu, &a);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
