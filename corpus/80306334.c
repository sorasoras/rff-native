#include "tc_rt.h"

s32 fn_80306334(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if (rd32((u32)param_1 + 0x18u) == 0u) {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = 0u;
    } else {
        r5 = rd32((u32)param_1 + 0x1cu);
        wr32(0x817fdfe8u, r5);
        r31 = r5 - 0x18u;
        a.r[0] = (u32)param_1 + 0x18u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802deab0u, &a);
        a.r[0] = r31;
        a.r[1] = param_2;
        (void)tc_call(0x802fc494u, &a);
        a.r[0] = param_2;
        a.r[1] = r31;
        (void)tc_call(0x802f709cu, &a);
        a.r[0] = r31;
        (void)tc_call(0x802fc3fcu, &a);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        r3 = r31;
    }
    return (s32)r3;
}
