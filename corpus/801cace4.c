#include "tc_rt.h"

u32 fn_801cace4(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    r5 = 0u;
    if (rd32((u32)param_1 + 4u) != (u32)param_2) {
        r5 = 1u;
        wr32((u32)param_1 + 4u, (u32)param_2);
    }
    return r5;
}
