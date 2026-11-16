#include "tc_rt.h"

s32 fn_800b5b00(u32 param_r3)
{
    u32 ctr = 0, r3 = 0, r5 = 0;
    (void)param_r3;
    r5 = rd32(0x8057073cu) - 1u;
    ctr = 0xb3u;
    do {
        if ((s32)r5 < 0) {
            r5 = 0xb3u;
        }
        if (rd32(((r5 << 4u) & 0xfffffff0u) - 0x7fb619f0u) != 0u) {
            r3 = r5;
            return (s32)r3;
        }
        r5 = r5 - 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0xffffffffu;
    return (s32)r3;
}
