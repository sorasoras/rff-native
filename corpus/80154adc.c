#include "tc_rt.h"

void fn_80154adc(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    if (rd32((u32)param_1 + 0xcu) == (u32)param_2) {
        wr8((u32)param_1 + 8u, 0u);
        wr32((u32)param_1 + 0xcu, 0u);
        wr32((u32)param_1 + 0x38u, 0xffffffffu);
    }
    r3 = (u32)param_1 + 0x44u;
    if (rd32(r3 + 4u) == (u32)param_2) {
        wr8(r3, 0u);
        wr32(r3 + 4u, 0u);
        wr32(r3 + 0x30u, 0xffffffffu);
    }
    if (rd32(r3 + 0x40u) == (u32)param_2) {
        wr8(r3 + 0x3cu, 0u);
        wr32(r3 + 0x40u, 0u);
        wr32(r3 + 0x6cu, 0xffffffffu);
        return;
    }
    return;
}
