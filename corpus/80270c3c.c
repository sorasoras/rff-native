#include "tc_rt.h"

void fn_80270c3c(s32 param_1, s32 param_2)
{
    u32 ctr = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = 0x805033a0u;
    wr32(0x80571a98u, rd32(0x80571a98u) - 1u);
    r7 = 0x80503320u;
    r5 = 0u;
    ctr = 0x20u;
    do {
        if ((u32)param_1 == rd32(r6) && (u32)param_2 == rd32(r7)) {
            r6 = (r5 << 2u) & 0xfffffffcu;
            wr32(r6 - 0x7fafcc60u, 0u);
            wr32(r6 - 0x7fafcce0u, 0xffffffffu);
            return;
        }
        r6 = r6 + 4u;
        r7 = r7 + 4u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
