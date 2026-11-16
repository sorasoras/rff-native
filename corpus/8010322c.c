#include "tc_rt.h"

u32 fn_8010322c(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x80571248u);
    while (r4 != 0u) {
        if (rd32(r4) == (u32)param_1) {
            return r4;
        }
        r4 = rd32(r4 + 0x3cu);
    }
    return r4;
}
