#include "tc_rt.h"

u32 fn_8009bfd4(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0;
    if ((u32)param_1 != 0u) {
        if (param_2 != 0u) {
            r0 = rd32((u32)param_1 + 0x90u);
            r0 = ((r0 & 0x20u) != 0u) ? 0u : ((param_5 & rd32((u32)param_1 + 0x8cu)) >> (r0 & 0x1fu));
            wr32(param_2, r0);
        }
        if (param_3 != 0u) {
            r0 = rd32((u32)param_1 + 0x98u);
            r0 = (((r0 & 0x20u) != 0u) ? 0u : ((param_5 & rd32((u32)param_1 + 0x94u)) >> (r0 & 0x1fu))) + 1u;
            wr32(param_3, r0);
        }
        if (param_4 != 0u) {
            if ((param_5 & rd32((u32)param_1 + 0x9cu)) != 0u) {
                wr8(param_4, 1u);
            } else {
                wr8(param_4, 0u);
            }
        }
        return 1u;
    }
    return 0u;
}
