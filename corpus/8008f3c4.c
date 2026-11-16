#include "tc_rt.h"

u32 fn_8008f3c4(u32 param_1)
{
    u32 c0lt = 0, r4 = 0, r5 = 0, r6 = 0;
    r6 = 0u;
    r5 = (u32)rd8(rd32(param_1));
    c0lt = (s32)r5 < 2;
    if (r5 != 2u) {
        if (!c0lt) {
            if ((s32)r5 < 4) {
                r4 = rd32(param_1 + 0x8cu);
                if ((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31) != 0u) {
                    r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw(r5 - 4u) << 0x19u) & 0x40000000u);
                    wr32(param_1 + 0x8cu, r4);
                }
                r6 = 1u;
                wr8(rd32(param_1), 4u);
            }
        } else if ((s32)r5 >= 1) {
            r4 = rd32(param_1 + 0x8cu);
            if ((u32)((s32)((r4 << 1u) & 0xc0000000u) >> 31) != 0u) {
                r4 = (r4 & 0xbfffffffu) | ((ppc_cntlzw(r5 - 2u) << 0x19u) & 0x40000000u);
                wr32(param_1 + 0x8cu, r4);
            }
            r6 = 1u;
            wr8(rd32(param_1), 2u);
        }
    }
    return r6;
}
