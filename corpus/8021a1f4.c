#include "tc_rt.h"

void fn_8021a1f4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0, r6 = 0, r7 = 0;
    r7 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    if (rd32(r7 + 0x58u) != 0u) {
        r6 = (u32)param_1 + (u32)param_2;
        if ((u32)rd8(r6 + 2u) != 0u) {
            return;
        }
        if (rd32(r7 + 0x14u) == 0xffffffffu) {
            return;
        }
        for (;;) {
            r4 = rd32(r7 + 0x14u);
            if ((s32)r4 > param_3) break;
            wr32(r7 + 0x14u, rd32(r7 + 0x14u) + 1u);
        }
        if ((s32)r4 < (s32)rd32(rd32(r7 + 0x58u))) {
            return;
        }
        wr8(r6 + 2u, 1u);
        return;
    }
    return;
}
