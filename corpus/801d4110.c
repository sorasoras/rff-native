#include "tc_rt.h"

void fn_801d4110(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x148u) << 1u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801d4884u, &a);
        a.r[0] = (u32)param_1 + 0xd80u;
        (void)tc_call(0x801d530cu, &a);
        r3 = rd32((u32)param_1 + 0xd7cu);
        wr32((u32)param_1 + 0xcfcu, 0u);
        wr32((u32)param_1 + 0xd7cu, r3 + 1u);
    }
    return;
}
