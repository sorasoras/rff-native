#include "tc_rt.h"

u32 fn_801c0900(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    r6 = 0u;
    if (param_3 < 0) {
        r3 = rd32((u32)param_1 + 0x94u);
        r5 = r3 + (rd32((u32)param_1 + 0xbcu) * 0xcu);
    } else {
        r3 = (u32)param_1 + (((u32)param_3 << 2u) & 0xfffffffcu);
        r0 = rd32(r3 + 0x9cu);
        r3 = rd32(r3 + 0x74u);
        r0 = r0 * 0xcu;
        r5 = r3 + r0;
    }
    if (param_2 >= 0) {
        r0 = r3 + ((u32)param_2 * 0xcu);
        if (r0 < r5) {
            r6 = r0;
        }
    }
    return r6;
}
