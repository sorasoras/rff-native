#include "tc_rt.h"

u32 fn_80307f20(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    wr32((u32)param_1 + 0x824u, param_2);
    r31 = (u32)param_1;
    wr32((u32)param_1 + 0x168u, param_3);
    wr32((u32)param_1 + 0x16cu, param_4);
    wr8((u32)param_1 + 0x120u, 0u);
    wr8((u32)param_1 + 0x121u, 0u);
    wr8((u32)param_1 + 0x122u, 0u);
    wr8((u32)param_1 + 0x11du, 1u);
    if ((u32)param_1 != 0u) {
        r31 = (u32)param_1 + 0xd0u;
    }
    r3 = tc_call(0x80306860u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x80306c2cu, &a);
    r4 = rd32((u32)param_1 + 0x824u);
    r3 = rd32((u32)param_1 + 0x168u);
    r0 = rd32((u32)param_1 + 0x16cu);
    wr32((u32)param_1 + 0x180u, (u32)param_1);
    wr32((u32)param_1 + 0x184u, r4);
    wr32((u32)param_1 + 0x188u, r3);
    wr32((u32)param_1 + 0x18cu, r0);
    r3 = tc_call(0x8030abd4u, &a);
    a.r[0] = r3;
    a.r[1] = (u32)param_1 + 0x170u;
    a.r[2] = 1u;
    (void)tc_call(0x8030ad4cu, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return 1u;
}
