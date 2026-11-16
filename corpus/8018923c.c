#include "tc_rt.h"

u32 fn_8018923c(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    r5 = rd32((u32)param_1 + 4u);
    if (((u32)param_2 - ((u32)ppc_divw(param_2, (s32)r5) * r5)) != 0u) {
        return 1u;
    }
    return 0u;
}
