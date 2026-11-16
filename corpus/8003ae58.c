#include "tc_rt.h"

u32 fn_8003ae58(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r7 = rd32(param_2);
    r0 = (u32)param_3 - 1u;
    r3 = rd32((u32)param_1 + 0xcu);
    r6 = ~(r0 | r0);
    r8 = r7 + 0x20u;
    while (r3 != 0u) {
        if (rd32(r3 + 0x1cu) == 0u) {
            r0 = rd32(r3 + 8u);
            if (r0 >= r8) {
                r9 = r3 + r0;
                r0 = (r6 & (r9 - r7)) - 0x20u;
                if (r0 >= r3) {
                    r0 = r9 - r0;
                    wr32(param_2, r0);
                    return r3;
                }
            }
        }
        r3 = rd32(r3 + 0xcu);
    }
    return 0u;
}
