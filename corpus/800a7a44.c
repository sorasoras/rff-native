#include "tc_rt.h"

s32 fn_800a7a44(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r4 = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    if (r4 == 0u) {
        return 0;
    }
    r5 = rd32(r4 + 8u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        if ((u32)param_1 == rd32(r4 + 0x84u)) {
            return (s32)r4;
        }
    }
    r4 = 0u;
    return (s32)r4;
}
