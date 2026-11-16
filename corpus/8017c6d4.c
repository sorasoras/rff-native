#include "tc_rt.h"

s32 fn_8017c6d4(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    if ((s32)rd32((u32)param_1 + ((u32)param_2 * 0x1cu) + 8u) > 60) {
        return 0;
    }
    r4 = (u32)param_1 + 0x98u;
    r5 = 0u;
    ctr = 0xf0u;
    do {
        if ((u32)((s32)rd32(r4 + 0xacu) >> 31) == 0u) {
            return (s32)((u32)param_1 + (r5 * 0x114u) + 0x98u);
        }
        r4 = r4 + 0x114u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0;
}
