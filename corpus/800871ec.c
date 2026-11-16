#include "tc_rt.h"

s32 fn_800871ec(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 0x524u);
    while (r5 != 0u) {
        r3 = r5;
        r5 = rd32(r5);
        r3 = rd32(r3 + 8u);
        if (rd32(r3 + 0x10u) == (u32)param_2) {
            return (s32)r3;
        }
    }
    return 0;
}
