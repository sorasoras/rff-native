#include "tc_rt.h"

u32 fn_801ea440(s32 param_1, u32 param_2)
{
    u32 r0 = 0;
    if (rd32(0x803541bcu) == 0u) {
        return 0u;
    }
    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
    if (r0 == 1u) {
        return param_2 & rd32(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcabe68u));
    }
    if (r0 == 2u) {
        return param_2 & rd32(rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcabe58u));
    }
    return 0u;
}
