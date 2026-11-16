#include "tc_rt.h"

u32 fn_8009bf04(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0;
    if ((u32)param_1 != 0u && param_2 < 0xau) {
        r4 = 1u;
        wr32((u32)param_1 + ((param_2 << 2u) & 0xfffffffcu) + 0x28u, param_3);
    } else {
        r4 = 0u;
    }
    return r4;
}
