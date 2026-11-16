#include "tc_rt.h"

void fn_802219d4(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r7 = 0;
    r3 = param_1;
    r5 = 0xfffffffdu;
    ctr = 7u;
    do {
        r7 = r5 + 9u;
        r0 = (u32)((s32)ppc_mulhw(954437177, (s32)r7) >> 1);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 9u;
        r5 = r7 - r0;
        r0 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fcc361cu);
        r5 = r5 + 1u;
        wr32(r3, r0);
        r3 = r3 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
