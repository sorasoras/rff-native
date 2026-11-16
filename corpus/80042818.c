#include "tc_rt.h"

u32 fn_80042818(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r8 = rd32((u32)param_1 + 0x2cu);
    r5 = 0u;
    r0 = rd32(param_2 + 0x10u);
    r7 = rd32(r8);
    r9 = r8 + (((r0 - (ppc_divwu(r0, r7) * r7)) << 3u) & 0xfffffff8u);
    r6 = rd32(r9 + 4u);
    ctr = r6;
    if (r6 > 0u) {
        for (;;) {
            r6 = rd32(r9 + 8u);
            r11 = r6 + r5;
            r6 = rd32(r6 + r5);
            if (r6 == r0) {
                r8 = rd32(r11 + 4u);
                if ((s32)r8 >= 0) {
                    r10 = rd32((u32)param_1 + 0xcu) + (rd32((u32)param_1 + 0x28u) * r8);
                } else {
                    r10 = 0u;
                }
                if (rd32(r10 + 0x10u) != rd32(param_2 + 0x10u)) {
                    r8 = 0u;
                } else {
                    r8 = 0u;
                    if (rd32(r10) == rd32(param_2) && rd32(r10 + 4u) == rd32(param_2 + 4u) && rd32(r10 + 8u) == rd32(param_2 + 8u) && rd32(r10 + 0xcu) == rd32(param_2 + 0xcu)) {
                        r8 = 1u;
                    }
                }
                if (r8 != 0u) break;
            }
            r5 = r5 + 8u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return 0xffffffffu;
            }
        }
        return rd32(r11 + 4u);
    }
    return 0xffffffffu;
}
