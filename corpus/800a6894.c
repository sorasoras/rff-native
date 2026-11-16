#include "tc_rt.h"

s32 fn_800a6894(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    r5 = rd32(0x805706e8u);
    r6 = rd32(0x8046adecu);
    while (r6 != 0u) {
        r4 = r6;
        r6 = rd32(r6);
        r4 = rd32(r4 + 8u);
        if (r5 == rd32(r4 + 0x7cu) && (u32)param_1 == rd32(r4 + 0xf4u)) {
            return (s32)r4;
        }
    }
    return 0;
}
