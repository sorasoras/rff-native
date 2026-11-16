#include "tc_rt.h"

s32 fn_80183a70(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 6u;
    a.r[3] = 6u;
    (void)tc_call(0x801970c0u, &a);
    wr32((u32)param_1 + 0x28u, 0x8036f408u);
    a.r[0] = (u32)param_1 + 0x4cu;
    a.r[1] = 0x80183b58u;
    a.r[2] = 0x80183b94u;
    a.r[3] = 0x70u;
    a.r[4] = 6u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x2ecu;
    (void)tc_call(0x80161490u, &a);
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x50u, 0u);
    wr32((u32)param_1 + 0x54u, rd32(param_2));
    wr32((u32)param_1 + 0xc0u, 0u);
    wr32((u32)param_1 + 0xc4u, rd32(param_2 + 4u));
    wr32((u32)param_1 + 0x130u, 0u);
    wr32((u32)param_1 + 0x134u, rd32(param_2 + 8u));
    wr32((u32)param_1 + 0x1a0u, 0u);
    wr32((u32)param_1 + 0x1a4u, rd32(param_2 + 0xcu));
    wr32((u32)param_1 + 0x210u, 0u);
    wr32((u32)param_1 + 0x214u, rd32(param_2 + 0x10u));
    wr32((u32)param_1 + 0x280u, 0u);
    wr32((u32)param_1 + 0x284u, rd32(param_2 + 0x14u));
    a.r[0] = (u32)param_1 + 0x2ecu;
    (void)tc_call(0x801614ccu, &a);
    return param_1;
}
