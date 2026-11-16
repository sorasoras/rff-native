#include "tc_rt.h"

void fn_8008f96c(u32 param_1)
{
    u32 r5 = 0;
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)((r5 << 1u) & 0xc0000000u) >> 31) != 0u) {
        r5 = (r5 & 0xbfffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1))) << 0x19u) & 0x40000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1), 0u);
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 1u)) << 0x1au) & 0x80000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1) + 1u, 0u);
    wr8(rd32(param_1) + 4u, 0u);
    wr8(rd32(param_1) + 7u, 0u);
    return;
}
