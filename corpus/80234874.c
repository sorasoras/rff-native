#include "tc_rt.h"

u32 fn_80234874(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r7 = 0;
    if ((s32)param_1 >= 0 && param_1 < rd32(0x805715a8u)) {
        r7 = param_1 * 0xcu;
        r3 = rd32(0x805715b0u);
        if ((rd32(r3 + r7) & 0xff000000u) == 0u) {
            r3 = r3 + r7;
            r5 = rd32(0x805715f8u);
            r5 = ((r5 & 0x20u) != 0u) ? 0u : (rd32(r3 + 4u) >> (r5 & 0x1fu));
            wr32((u32)param_2 + 0x30u, r5);
            wr32((u32)param_2 + 0x34u, rd32(rd32(0x805715b0u) + r7 + 8u));
            wr32((u32)param_2 + 0x38u, 0u);
            wr32((u32)param_2 + 0xcu, 0u);
            return 1u;
        }
    }
    return 0u;
}
