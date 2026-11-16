#include "tc_rt.h"

u32 fn_801d3434(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32((u32)param_1 + 0x34cu);
    if (r0 != 8u) {
        if (r0 == 7u) {
            return 0u;
        }
        return 1u;
    }
    return 0u;
}
