#include "tc_rt.h"

void fn_803060d0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = (u32)param_2 + 0xf0u;
    (void)tc_call(0x802debd0u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2 + 0xe8u;
    (void)tc_call(0x802debd0u, &a);
    a.r[0] = (u32)param_2;
    (void)tc_call(0x802f70b8u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
