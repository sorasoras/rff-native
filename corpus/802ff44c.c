#include "tc_rt.h"

void fn_802ff44c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802ff570u, &a);
    r31 = rd32((u32)param_1 + 0xf0u);
    while (r31 != 0u) {
        if ((u32)rd8(r31 + 0x36u) != 0u) {
            if ((s32)param_2 >= 0) {
                a.r[0] = r31;
                a.r[1] = param_2 & 0xffu;
                (void)tc_call(0x802f9174u, &a);
            }
            a.r[0] = r31;
            (void)tc_call(0x802f8000u, &a);
        }
        r31 = rd32(r31 + 0xf0u);
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
