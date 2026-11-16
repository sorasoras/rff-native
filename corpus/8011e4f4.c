#include "tc_rt.h"

s32 fn_8011e4f4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0;
    if ((u32)param_2 == 0u) {
        return -1;
    }
    r5 = rd32((u32)param_1 + 0x1cu);
    r0 = (u32)param_1 + 0x20u;
    r3 = 0xffffffffu;
    r6 = 0u;
    while (r5 != r0) {
        if ((u32)param_2 == r5) {
            r3 = r6;
        }
        r5 = rd32(r5 + 0x18u);
        r6 = r6 + 1u;
    }
    return (s32)r3;
}
