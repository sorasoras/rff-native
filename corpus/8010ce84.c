#include "tc_rt.h"

s32 fn_8010ce84(s32 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    r6 = 0u;
    r7 = rd32(0x8046adecu);
    while (r7 != 0u) {
        r5 = r7;
        r7 = rd32(r7);
        r5 = rd32(r5 + 8u);
        if ((u32)param_1 == rd32(r5 + 0x7cu) && (u32)param_2 == rd32(r5 + 0xf4u)) {
            r6 = r5;
            return (s32)r6;
        }
    }
    return (s32)r6;
}
