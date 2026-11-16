#include "tc_rt.h"

u32 fn_802fc2d8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        wr32(param_1, 0x8039d420u);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        r31 = rd32(param_1 + 0xcu);
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = rd32(param_1 + 0x14u) - r31;
        (void)tc_call(0x802f86b8u, &a);
        r31 = rd32(param_1 + 0xcu);
        r3 = tc_call(0x802f85a0u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = rd32(param_1 + 0x14u) - r31;
        (void)tc_call(0x802f87f4u, &a);
        wr32(param_1 + 0x14u, rd32(param_1 + 0xcu));
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
        wr32(param_1 + 0x14u, 0u);
        if (param_2 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return param_1;
}
