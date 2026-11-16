#include "tc_rt.h"

s32 fn_8003ad30(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r8 = rd32(param_2);
    r0 = (u32)param_3 - 1u;
    r3 = rd32((u32)param_1 + 0x10u);
    r7 = ~(r0 | r0);
    r9 = r8 + 0x20u;
    while (r3 != 0u) {
        if (rd32(r3 + 0x1cu) == 0u) {
            r0 = rd32(r3 + 8u);
            if (r0 >= r9) {
                r0 = r3 + r0;
                r6 = r7 & ((u32)param_3 + r3 + 0x1fu);
                r0 = r0 - r6;
                if (r0 >= r8) {
                    wr32(param_2, r6 + r8 - r3);
                    return (s32)r3;
                }
            }
        }
        r3 = rd32(r3 + 0x18u);
    }
    return 0;
}
