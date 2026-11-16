#include "tc_rt.h"

void fn_80157370(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r5 = 0, r6 = 0;
    r5 = (u32)param_1;
    r6 = 0u;
    ctr = 7u;
    do {
        if ((u32)param_2 == rd32(r5 + 0x28u)) {
            wr32((u32)param_1 + ((r6 << 2u) & 0xfffffffcu) + 0x28u, 0xffffffffu);
            return;
        }
        r5 = r5 + 4u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
