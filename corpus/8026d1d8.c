#include "tc_rt.h"

void fn_8026d1d8(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    if ((param_2 & 1u) != 0u) {
        r3 = rd32((u32)param_1 + 0x18u);
        wr32((u32)param_1 + 0x44u, 0u);
        wr32((u32)param_1 + 0x3cu, r3);
    }
    if ((param_2 & 2u) != 0u) {
        r3 = rd32((u32)param_1 + 0x44u);
        while (r3 != 0u) {
            wr32(r3 + 8u, rd32((u32)param_1 + 0x1cu));
            r3 = rd32(r3 + 0xcu);
        }
        wr32((u32)param_1 + 0x40u, rd32((u32)param_1 + 0x1cu));
    }
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
