#include "tc_rt.h"

s32 fn_8015bd00(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0;
    r4 = (u32)param_1 + 0x9cu;
    r5 = 0u;
    ctr = 4u;
    do {
        r6 = 0u;
        if ((u32)((s32)((rd32((u32)param_1 + 0x6e0u) << 2u) & 0xc0000000u) >> 31) == 0u || rd32((u32)param_1 + 0x6b0u) != r4) {
            r6 = 1u;
            if ((u32)((s32)((rd32((u32)param_1 + 0x71cu) << 2u) & 0xc0000000u) >> 31) == 0u || rd32((u32)param_1 + 0x6ecu) != r4) {
                r6 = 2u;
                if ((u32)((s32)((rd32((u32)param_1 + 0x758u) << 2u) & 0xc0000000u) >> 31) == 0u || rd32((u32)param_1 + 0x728u) != r4) {
                    r6 = 3u;
                    if ((u32)((s32)((rd32((u32)param_1 + 0x794u) << 2u) & 0xc0000000u) >> 31) == 0u || rd32((u32)param_1 + 0x764u) != r4) {
                        r6 = 4u;
                    }
                }
            }
        }
        if (r6 == 4u) break;
        r5 = r5 + 1u;
        r4 = r4 + 0x17cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if (r5 == 4u) {
        return 0;
    }
    return (s32)r4;
}
