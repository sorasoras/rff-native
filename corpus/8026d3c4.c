#include "tc_rt.h"

u32 fn_8026d3c4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d56cu, &a);
    }
    r3 = rd32((u32)param_1 + 0x44u);
    if ((u32)param_2 != 0u) {
        while (r3 != 0u && rd32(r3) != (u32)param_2) {
            r3 = rd32(r3 + 0xcu);
        }
    }
    if (r3 != 0u) {
        r31 = 1u;
        wr32((u32)param_1 + 0x3cu, rd32(r3 + 4u));
        wr32((u32)param_1 + 0x40u, rd32(r3 + 8u));
        wr32((u32)param_1 + 0x44u, rd32(r3 + 0xcu));
    } else {
        r31 = 0u;
    }
    if ((rd32((u32)param_1 + 0x38u) & 4u) != 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        (void)tc_call(0x8022d648u, &a);
    }
    return r31;
}
