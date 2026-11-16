#include "tc_rt.h"

u32 fn_802ace1c(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = 0u;
    if ((u32)rd8((u32)param_1 + 0x24u) != 0u) {
        r5 = 1u;
    } else {
        r4 = rd32((u32)param_1 + 0x6cu);
        if (r4 == 0u || (u32)rd8(r4 + 0x71u) == 0u || rd32((u32)param_1 + 0x28u) > 0x1f40u || (u32)rd16((u32)param_1 + 0x20u) > 0x10u) {
            r5 = 1u;
        }
    }
    if ((u32)rd8((u32)param_1 + 0x25u) != r5) {
        wr8((u32)param_1 + 0x25u, (u8)r5);
        if (r5 == 0u) {
            return 0x30000u;
        }
        return 0x10000u;
    }
    return 0u;
}
