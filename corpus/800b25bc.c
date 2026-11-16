#include "tc_rt.h"

void fn_800b25bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xed4u, 0u);
    wr32((u32)param_1 + 0xed0u, 0xbu);
    a.r[0] = (u32)param_1;
    a.r[1] = 0xbu;
    (void)tc_call(0x800b31dcu, &a);
    r0 = rd32((u32)param_1 + 0x9cu);
    r3 = rd32((u32)param_1 + 0x148u) | 0x400000u;
    wr32((u32)param_1 + 0x1b0u, 1u);
    r0 = r0 | 0x8000000u;
    wr32((u32)param_1 + 0x148u, r3);
    wr8((u32)param_1 + 0x162cu, 0u);
    wr8((u32)param_1 + 0x162du, 1u);
    wr32((u32)param_1 + 0xb8u, 1u);
    wr32((u32)param_1 + 0x9cu, r0);
    return;
}
