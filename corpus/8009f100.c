#include "tc_rt.h"

u32 fn_8009f100(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r6 = 0, r7 = 0, r8 = 0;
    if ((u32)param_1 != 0u) {
        r8 = rd32((u32)param_1 + 0x1cu);
        if (r8 >= 1u) {
            r6 = rd32((u32)param_1 + 0x14u);
            r7 = rd32(r6 + (((r8 - 1u) << 2u) & 0xfffffffcu));
            if (r8 >= (((r7 << 1u) & 0xfffffffeu) + 1u) && param_3 < r7) {
                if (param_2 != 0u) {
                    wr32(param_2, rd32(r6 + (((r8 - (((param_3 << 1u) & 0xfffffffeu) + 3u)) << 2u) & 0xfffffffcu)));
                }
                return 1u;
            }
        }
    }
    return 0u;
}
