#include "tc_rt.h"

u32 fn_8009f044(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0;
    if ((u32)param_1 != 0u) {
        r6 = rd32((u32)param_1 + 0x1cu);
        if (r6 >= 1u) {
            r5 = rd32(rd32((u32)param_1 + 0x14u) + (((r6 - 1u) << 2u) & 0xfffffffcu));
            if (r6 >= (((r5 << 1u) & 0xfffffffeu) + 1u)) {
                if (param_2 != 0u) {
                    wr32(param_2, r5);
                }
                return 1u;
            }
        }
    }
    return 0u;
}
