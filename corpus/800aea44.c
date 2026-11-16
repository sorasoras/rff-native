#include "tc_rt.h"

void fn_800aea44(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r6 = rd32((u32)param_1 + 0x164cu);
    r0 = (ppc_cntlzw((u32)param_2) >> 5u) & 0x7ffffffu;
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32((u32)param_1 + 0x1650u);
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32((u32)param_1 + 0x1654u);
    r5 = (u32)param_1 + 8u;
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32(r5 + 0x1650u);
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32(r5 + 0x1654u);
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32(r5 + 0x1658u);
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r6 = rd32(r5 + 0x165cu);
    if (r6 != 0u) {
        wr32(r6 + 0x34u, r0);
    }
    r5 = rd32((u32)param_1 + 0x166cu);
    if (r5 != 0u) {
        wr32(r5 + 0x34u, r0);
    }
    wr32((u32)param_1 + 0x9cu, (rd32((u32)param_1 + 0x9cu) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    return;
}
