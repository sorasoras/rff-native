#include "tc_rt.h"

void fn_801b9738(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + ((rd32((u32)param_2 + 0x3ecu) << 2u) & 0xfffffffcu) + 0x1e8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x2cu), &a);
    }
    if (rd32((u32)param_2 + 0x3ecu) == 4u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801b9838u, &a);
    }
    return;
}
