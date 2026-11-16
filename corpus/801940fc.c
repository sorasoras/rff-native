#include "tc_rt.h"

void fn_801940fc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x1a0u);
    wr32((u32)param_1 + 0x1acu, param_2);
    wr32((u32)param_1 + 0x1a8u, 1u);
    a.r[0] = r6 + 0xbcu;
    a.r[1] = param_3;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1a0u);
    (void)tc_call(0x80161a60u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x801894d8u, &a);
    wr32(rd32((u32)param_1 + 0x1a0u) + 0x54u, r3);
    return;
}
