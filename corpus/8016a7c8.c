#include "tc_rt.h"

void fn_8016a7c8(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b516cu, &a);
    r0 = rd32((u32)param_2 + 0x148u) | 0x4000000u;
    wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) | 0x4000000u);
    wr32((u32)param_2 + 0x148u, r0);
    return;
}
