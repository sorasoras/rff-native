#include "tc_rt.h"

void fn_8008f460(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r4 = 0, r5 = 0, r7 = 0, r8 = 0;
    r7 = rd32(param_1);
    if ((u32)rd8(r7) != 0u) {
        r7 = (u32)rd8(r7 + 1u);
        if (r7 != 0u) {
            return;
        }
        if ((u32)param_2 == 1u) {
            r4 = rd32(param_1 + 0x8cu);
            if ((u32)((s32)r4 >> 31) != 0u) {
                r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw(r7 - 1u) << 0x1au) & 0x80000000u);
                wr32(param_1 + 0x8cu, r4);
            }
            wr8(rd32(param_1) + 1u, 1u);
            r8 = rd32(param_1 + 0x8cu);
            if ((u32)((s32)r8 >> 31) != 0u) {
                r8 = (r8 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 2u) - (param_3 & 0xffu)) << 0x1au) & 0x80000000u);
                wr32(param_1 + 0x8cu, r8);
            }
            wr8(rd32(param_1) + 2u, (u8)param_3);
        } else {
            if ((u32)param_2 == 2u) {
                r4 = rd32(param_1 + 0x8cu);
                if ((u32)((s32)r4 >> 31) != 0u) {
                    r4 = (r4 & 0x7fffffffu) | ((ppc_cntlzw(r7 - 2u) << 0x1au) & 0x80000000u);
                    wr32(param_1 + 0x8cu, r4);
                }
                wr8(rd32(param_1) + 1u, 2u);
                r8 = rd32(param_1 + 0x8cu);
                if ((u32)((s32)r8 >> 31) != 0u) {
                    r8 = (r8 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 2u) - (param_3 & 0xffu)) << 0x1au) & 0x80000000u);
                    wr32(param_1 + 0x8cu, r8);
                }
                wr8(rd32(param_1) + 2u, (u8)param_3);
            }
        }
        r5 = rd32(param_1 + 0x8cu);
        if ((u32)((s32)r5 >> 31) != 0u) {
            r5 = (r5 & 0x7fffffffu) | ((ppc_cntlzw((u32)rd8(rd32(param_1) + 3u)) << 0x1au) & 0x80000000u);
            wr32(param_1 + 0x8cu, r5);
        }
        wr8(rd32(param_1) + 3u, 0u);
        wr8(rd32(param_1) + 4u, 0u);
        r4 = rd32(param_1);
        wr8(r4 + 7u, (u8)((u32)rd8(r4 + 7u) & 0xf0u));
        wr8(rd32(param_1) + 5u, (u8)param_4);
        return;
    }
    return;
}
