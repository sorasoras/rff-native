#include "tc_rt.h"

void fn_801945d0(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xacu, (u32)param_2);
    r3 = (u32)param_1 + ((u32)param_2 * 0x30u);
    if (rd32(rd32(rd32(r3 + 0x2cu) + 8u) + 0x18u) != 0u) {
        r3 = r3 + 0x20u;
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8025279cu, &a);
    }
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0xacu) * 0x30u);
    a.r[1] = 0u;
    (void)tc_call(0x80252720u, &a);
    return;
}
