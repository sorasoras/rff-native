#include "tc_rt.h"

s32 fn_8021d7c4(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x40u, 0x8036045cu);
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f82d0u, &a);
    wr32((u32)param_1 + 0x40u, 0x803789b0u);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x80119b14u, &a);
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x800f82d0u, &a);
    r31 = (u32)param_1 + 0x48cu;
    a.r[0] = r31;
    a.r[1] = 8u;
    a.r[2] = 4u;
    a.r[3] = 0x20u;
    (void)tc_call(0x801892ccu, &a);
    wr32(r31 + 0x28u, 0x803789e8u);
    a.r[0] = r31 + 0x2cu;
    a.r[1] = 0x8021d8d8u;
    a.r[2] = 0x8021d90cu;
    a.r[3] = 0x5cu;
    a.r[4] = 0x20u;
    (void)tc_call(0x80255624u, &a);
    r31 = (u32)param_1 + 0x1040u;
    a.r[0] = r31;
    a.r[1] = 4u;
    a.r[2] = 3u;
    a.r[3] = 0xcu;
    (void)tc_call(0x801892ccu, &a);
    wr32(r31 + 0x28u, 0x803789d0u);
    a.r[0] = r31 + 0x2cu;
    a.r[1] = 0x8021d968u;
    a.r[2] = 0x8021d99cu;
    a.r[3] = 0x5cu;
    a.r[4] = 0xcu;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x14c4u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x14d0u;
    a.r[1] = 0x8021dae0u;
    a.r[2] = 0x8021db14u;
    a.r[3] = 0x58u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
