#include "tc_rt.h"

void fn_8008eab4(u32 param_1)
{
    u32 r3 = 0, r5 = 0;
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 1u) - 3u) << 0x1au) & 0x80000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1) + 1u, 3u);
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 2u) - 0xfu) << 0x1au) & 0x80000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1) + 2u, 0xfu);
    wr8(rd32(param_1) + 4u, 0u);
    r5 = rd32(param_1 + 0x8cu);
    if ((u32)((s32)r5 >> 31) != 0u) {
        r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 3u)) << 0x1au) & 0x80000000u);
        wr32(param_1 + 0x8cu, r5);
    }
    wr8(rd32(param_1) + 3u, 0u);
    wr8(rd32(param_1) + 7u, 0u);
    r3 = rd32(param_1);
    wr8(r3 + 5u, (u8)((u32)rd8(r3 + 5u) & 0x7fu));
    return;
}
