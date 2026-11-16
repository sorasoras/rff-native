#include "tc_rt.h"

void fn_8021ee38(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 0x8033c95cu;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = r31 + 0x14d8u;
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    wr32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x434u, 1u);
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    r30 = r3 + 0x44u;
    a.r[0] = r30;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x42cu);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    r30 = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu);
    a.r[0] = r30 + 0x48cu;
    a.r[1] = 0u;
    r3 = tc_call(0x801894d8u, &a);
    a.r[0] = r30 + 0x44u;
    a.r[1] = r3;
    (void)tc_call(0x80119ffcu, &a);
    wr32((u32)param_1 + 0x20u, 0u);
    return;
}
