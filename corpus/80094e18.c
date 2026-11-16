#include "tc_rt.h"

s32 fn_80094e18(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    r5 = 0u;
    r0 = rd32((u32)param_1 + 0xcu);
    r3 = rd32(rd32((u32)param_1 + 8u) + 4u);
    while (r3 != r0) {
        r3 = rd32(r3 + 4u);
        r5 = r5 + 1u;
    }
    return (s32)r5;
}
