#include "tc_rt.h"

u32 fn_80189214(s32 param_1, s32 param_2)
{
    u32 r6 = 0;
    r6 = rd32((u32)param_1 + 4u);
    if ((r6 - 1u) != ((u32)param_2 - ((u32)ppc_divw(param_2, (s32)r6) * r6))) {
        return 1u;
    }
    return 0u;
}
