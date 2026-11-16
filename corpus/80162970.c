#include "tc_rt.h"

void fn_80162970(s32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        (void)tc_call(0x801628b4u, &a);
        r31 = r31 + 1u;
    } while ((s32)r31 < 16);
    (void)tc_call(0x8004f8d8u, &a);
    wr32((u32)param_1 + 0x54u, 0u);
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 0u);
    return;
}
