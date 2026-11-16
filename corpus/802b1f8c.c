#include "tc_rt.h"

u32 fn_802b1f8c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    if ((u32)param_3 != 0u) {
        r3 = rd32((u32)param_3 + 4u);
    } else {
        r3 = rd32((u32)param_1 + 8u);
    }
    while (r3 != 0u) {
        r6 = rd32(r3);
        while (r6 != 0u) {
            r5 = (u32)rd16(r6 + 4u);
            if (r5 == 1u && (u32)((s32)rd16(r6 + 6u) >> 12) == 6u) {
                r6 = rd32(r6 + 8u);
                while (r6 != 0u) {
                    r5 = (u32)rd16(r6 + 6u);
                    if ((u32)((s32)r5 >> 12) == 3u && (r5 & 0xfffu) == 2u && (u32)rd16(r6 + 8u) == param_2) {
                        return r3;
                    }
                    r6 = rd32(r6);
                }
                break;
            }
            if (r5 == 3u) {
                r5 = (u32)rd16(r6 + 6u);
                if ((u32)((s32)r5 >> 12) == 3u && (r5 & 0xfffu) == 2u && (u32)rd16(r6 + 8u) == param_2) {
                    return r3;
                }
            }
            r6 = rd32(r6);
        }
        r3 = rd32(r3 + 4u);
    }
    return 0u;
}
