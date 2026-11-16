#include "tc_rt.h"

void fn_80270bac(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0;
    r5 = rd32(0x80571a9cu) + 1u;
    wr32(0x80571a98u, rd32(0x80571a98u) + 1u);
    r8 = 0x805033a0u;
    r9 = 0x80503320u;
    wr32(0x80571a9cu, r5);
    r7 = 0u;
    ctr = 0x20u;
    do {
        if (rd32(r8) == 0u && rd32(r9) == 0xffffffffu) {
            r0 = (r7 << 2u) & 0xfffffffcu;
            wr32(r0 - 0x7fafcc60u, param_1);
            wr32(r0 - 0x7fafcce0u, param_2);
            return;
        }
        r8 = r8 + 4u;
        r9 = r9 + 4u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
