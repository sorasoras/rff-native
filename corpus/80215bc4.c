#include "tc_rt.h"

u32 fn_80215bc4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r6 = 0u;
    r7 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x148u);
    r0 = rd32(r7);
    ctr = r0;
    if ((s32)r0 > 0) {
        for (;;) {
            r4 = r7 + r6;
            r3 = rd32(r4 + 4u);
            r8 = r3 & 0x80000000u;
            if (r8 != 0u || (rd32(r4 + 8u) & 0x80000000u) != 0u) {
                if (r8 == 0u) {
                    r9 = rd32(r4 + 8u);
                    r0 = 0xffffffffu;
                    if (r9 != 0xffffffffu) {
                        r0 = r9 ^ 0x80000000u;
                    }
                } else {
                    r0 = 0xffffffffu;
                    if (r3 != 0xffffffffu) {
                        r0 = r3 ^ 0x80000000u;
                    }
                }
                if (r0 == param_3) break;
            }
            r6 = r6 + 8u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return 0xffffffffu;
            }
        }
        if (r8 == 0u) {
            return r3;
        }
        return rd32(r4 + 8u);
    }
    return 0xffffffffu;
}
