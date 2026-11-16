#include "tc_rt.h"

u32 fn_8009bf34(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r5 = 0;
    if ((u32)param_1 != 0u && param_3 < 0xau) {
        r5 = 1u;
        wr32(param_2, rd32((u32)param_1 + ((param_3 << 2u) & 0xfffffffcu) + 0x28u));
    } else {
        r5 = 0u;
    }
    return r5;
}
