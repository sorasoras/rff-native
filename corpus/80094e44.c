#include "tc_rt.h"

s32 fn_80094e44(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    r5 = rd32(rd32((u32)param_1 + 8u) + 4u);
    r4 = rd32(rd32((u32)param_1 + 0x10u) + 0xcu);
    r0 = rd32((u32)param_1 + 0xcu);
    while (r5 != r0) {
        r3 = rd32(r5 + 0xcu);
        if ((s32)r3 > (s32)r4) {
            r4 = r3;
        }
        r5 = rd32(r5 + 4u);
    }
    return (s32)r4;
}
