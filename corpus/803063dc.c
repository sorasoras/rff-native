#include "tc_rt.h"

void fn_803063dc(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r31 = rd32((u32)param_2 + 4u);
    if (r31 == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        a.r[0] = r31;
        (void)tc_call(0x802fc49cu, &a);
        a.r[0] = (u32)param_2;
        (void)tc_call(0x802f70a4u, &a);
        wr32(0x817fdfe8u, (u32)param_1 + 0x1cu);
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = 0x817fdfe8u;
        a.r[2] = r31 + 0x18u;
        (void)tc_call(0x802deba4u, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
