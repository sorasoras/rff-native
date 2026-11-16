#include "tc_rt.h"

void fn_80253fc8(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r7 = 0, r8 = 0, r9 = 0;
    r9 = rd32(0x80576c88u);
    r7 = ((u32)param_1 << 2u) & 0xfffffffcu;
    r8 = rd32(r9 + 0x22cu);
    r5 = (((r8 & 0xfffffff8u) | (rd32(r7 - 0x7fc71930u) & 7u)) & 0xffffffc7u) | ((param_2 << 3u) & 0x38u);
    wr32(r9 + 0x22cu, r5);
    if (r8 != r5) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r9 + 0x22cu));
        wr32(r9 + 0x254u, (rd32(r9 + 0x254u) & 0xfffffdffu) | ((ppc_cntlzw((u32)param_1 - 2u) << 4u) & 0x200u));
        wr32(r9 + 0x5fcu, rd32(r9 + 0x5fcu) | 4u);
    }
    if (rd32(r7 - 0x7fc71930u) == 4u) {
        wr32(r9 + 0x224u, (((rd32(r9 + 0x224u) & 0xfffff9ffu) | ((((u32)param_1 - 4u) << 9u) & 0x600u)) & 0xffffffu) | 0x42000000u);
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r9 + 0x224u));
    }
    wr16(r9 + 2u, 0u);
    return;
}
