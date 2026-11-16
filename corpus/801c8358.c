#include "tc_rt.h"

u32 fn_801c8358(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r6 = rd32(0x805706e8u);
    r7 = rd32(0x8046adecu);
    r5 = 0u;
    while (r7 != 0u) {
        r4 = r7;
        r7 = rd32(r7);
        r8 = rd32(r4 + 8u);
        if ((r6 == rd32(r8 + 0x7cu) && (u32)((s32)((rd32(r8 + 0x74u) << 1u) & 0xc0000000u) >> 31) == 0u) && rd32(r8 + 0xf8u) == rd32((u32)param_1 + 0xf8u)) {
            r0 = rd32(r8 + 0x124u);
            if (r0 == 6u || r0 == 4u) {
                r5 = r5 + 1u;
            }
        }
    }
    r4 = rd32((u32)param_1 + 0x16cu);
    r0 = r4 ^ r5;
    r3 = (u32)((s32)r0 >> 1);
    r0 = r0 & r4;
    r0 = r3 - r0;
    return (r0 >> 0x1fu) & 1u;
}
