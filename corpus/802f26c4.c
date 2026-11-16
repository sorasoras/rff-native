#include "tc_rt.h"

void fn_802f26c4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1);
    if (r4 == 0u) {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        wr16(r4 + 0xfeu, (u16)param_2);
        wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x800000u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
