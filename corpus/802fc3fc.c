#include "tc_rt.h"

void fn_802fc3fc(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r31 = rd32((u32)param_1 + 0xcu);
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_1 + 0x14u) - r31;
    (void)tc_call(0x802f86b8u, &a);
    r31 = rd32((u32)param_1 + 0xcu);
    r3 = tc_call(0x802f85a0u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = rd32((u32)param_1 + 0x14u) - r31;
    (void)tc_call(0x802f87f4u, &a);
    wr32((u32)param_1 + 0x14u, rd32((u32)param_1 + 0xcu));
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
