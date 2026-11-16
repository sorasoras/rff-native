#include "tc_rt.h"

void fn_8018cfac(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r6 = rd32((u32)param_1 + 0x8cu);
    r7 = 0u;
    r5 = 0u;
    r4 = r6 + 1u;
    r6 = (u32)ppc_divw((s32)rd32((u32)param_1 + 0x88u), (s32)r6);
    ctr = r4;
    if ((s32)r4 > 0) {
        while ((s32)rd32((u32)param_1 + 0x5cu) >= (s32)(r5 + r6)) {
            r5 = r5 + r6;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) break;
        }
    }
    r4 = rd32((u32)param_1 + 0x8cu);
    wr32((u32)param_1 + 0x60u, r7);
    if (r7 != (r4 + 1u)) {
        return;
    }
    wr32((u32)param_1 + 0x60u, 0xffffffffu);
    return;
}
