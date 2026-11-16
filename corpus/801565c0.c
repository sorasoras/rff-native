#include "tc_rt.h"

void fn_801565c0(u32 param_1, s32 param_2)
{
    u32 r6 = 0;
    TcArgs a = {0};
    (void)param_1;
    r6 = rd32((u32)param_2 + 0x4cu);
    a.r[0] = rd32((u32)param_2 + ((r6 << 2u) & 0xfffffffcu) + 0x28u);
    a.r[1] = r6;
    a.r[2] = (u32)param_2 + 0x44u;
    (void)tc_call(0x80155f6cu, &a);
    return;
}
