#include "tc_rt.h"

void fn_8022816c(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x198u, param_2);
    wr32((u32)param_1 + 4u, param_3);
    wr32((u32)param_1 + 0x19cu, 0x9032u);
    wr32((u32)param_1 + 0x80u, 0u);
    wr32((u32)param_1 + 0x8cu, 0u);
    wr32((u32)param_1 + 8u, 0x80579e40u);
    wr32((u32)param_1 + 0x34u, 0x80578640u);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0x14u, 0u);
    wr32((u32)param_1 + 0x18u, 0u);
    wr32((u32)param_1 + 0x1cu, 0u);
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x24u, 0u);
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x2cu, 0u);
    wr32((u32)param_1 + 0x30u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    wr32((u32)param_1 + 0x3cu, 0u);
    wr32((u32)param_1 + 0x40u, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x50u, 0u);
    wr32((u32)param_1 + 0x54u, 0u);
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 0u);
    wr32((u32)param_1 + 0x64u, 0u);
    wr32((u32)param_1 + 0x68u, 0u);
    wr32((u32)param_1 + 0x6cu, 0u);
    wr32((u32)param_1 + 0x70u, 0u);
    wr32((u32)param_1 + 0x74u, 0u);
    wr32((u32)param_1 + 0x78u, 0u);
    wr32((u32)param_1 + 0x7cu, 0u);
    wr32((u32)param_1 + 0x1a4u, 0u);
    wr32((u32)param_1 + 0x1a8u, 0u);
    wr32((u32)param_1 + 0x1acu, 0u);
    wr32((u32)param_1 + 0x1b0u, 0u);
    wr32((u32)param_1 + 0x1b4u, 0u);
    wr32((u32)param_1 + 0x1b8u, 0u);
    wr32((u32)param_1 + 0x1bcu, 0u);
    wr32((u32)param_1 + 0x1c0u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80228148u, &a);
    return;
}
