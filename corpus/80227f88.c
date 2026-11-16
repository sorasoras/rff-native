#include "tc_rt.h"

u32 fn_80227f88(s32 param_1)
{
    u32 t0 = 0;
    t0 = (u32)param_1 + 0x34u;
    wr32(t0, 0x80578640u);
    wr32(t0 + 4u, 0u);
    wr32(t0 + 8u, 0u);
    wr32(t0 + 0xcu, 0u);
    wr32(t0 + 0x10u, 0u);
    wr32(t0 + 0x14u, 0u);
    wr32(t0 + 0x18u, 0u);
    wr32(t0 + 0x1cu, 0u);
    wr32(t0 + 0x20u, 0u);
    wr32(t0 + 0x24u, 0u);
    wr32(t0 + 0x28u, 0u);
    wr32(t0 + 0x2cu, 0u);
    wr32(t0 + 0x30u, 0u);
    wr32(t0 + 0x34u, 0u);
    wr32(t0 + 0x38u, 0u);
    wr32(t0 + 0x3cu, 0u);
    wr32(t0 + 0x40u, 0u);
    wr32(t0 + 0x44u, 0u);
    wr32(t0 + 0x48u, 0u);
    wr32((u32)param_1 + 0x1a8u, 0u);
    wr32((u32)param_1 + 0x1acu, 0u);
    wr32((u32)param_1 + 0x1b0u, 0u);
    wr32((u32)param_1 + 0x1b4u, 0u);
    wr32((u32)param_1 + 0x1b8u, 0u);
    wr32((u32)param_1 + 0x1bcu, 0u);
    wr32((u32)param_1 + 0x1c0u, 0u);
    wr32((u32)param_1 + 0x80u, 0u);
    wr32((u32)param_1 + 0x84u, 0x817ff000u);
    wr32((u32)param_1 + 0x198u, 0x817ff000u);
    wr32((u32)param_1 + 0x19cu, 0u);
    wr32((u32)param_1 + 0x88u, 0u);
    wr32((u32)param_1 + 0x8cu, 0u);
    wr32((u32)param_1 + 4u, 0x817fe000u);
    wr32((u32)param_1 + 8u, 0x80579e40u);
    wr32((u32)param_1 + 0xcu, 1u);
    return 0u;
}
