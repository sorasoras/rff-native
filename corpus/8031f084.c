#include "tc_rt.h"

void fn_8031f084(s32 param_1, s32 param_2)
{
    u32 r5 = 0, r7 = 0;
    r7 = rd32((u32)param_1 + 0x38u);
    wr32((u32)param_1 + 0x54u, 0u);
    while (r7 != 0u) {
        if ((u32)param_2 == 0u || (u32)rd16(r7 + 0xe2u) != 0u) {
            r5 = (u32)rd16(r7 + 0xe2u);
            if (r5 != 0u) {
                wr16(r7 + 0xe2u, (u16)(r5 - 1u));
            }
            if (rd32(r7 + 0xcu) == 1u && rd32(r7 + 0xd8u) == 1u) {
                wr32(r7 + 0xd8u, 0u);
            }
        }
        r7 = rd32(r7 + (u32)rd16((u32)param_1 + 0x42u) + 4u);
    }
    return;
}
