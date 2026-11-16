#include "tc_rt.h"

void fn_803053ec(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0;
    if (rd32((u32)param_1 + 0x14u) != 0u) {
        r9 = 0u;
        r7 = 0u;
        for (;;) {
            r8 = rd32((u32)param_1 + 0x14u);
            if (r9 >= rd32(r8)) break;
            r8 = r8 + r7;
            r0 = rd32(r8 + 4u);
            if (param_2 <= r0 && r0 <= param_3) {
                wr32(r8 + 4u, 0u);
            }
            r7 = r7 + 8u;
            r9 = r9 + 1u;
        }
        return;
    }
    return;
}
