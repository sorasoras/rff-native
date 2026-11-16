#include "tc_rt.h"

s32 fn_800a5f14(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32(0x8046ad74u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        if ((u32)param_1 == rd32(r4 + 0x154u)) {
            return (s32)r4;
        }
    }
    return 0;
}
