#include "tc_rt.h"

u32 fn_802eeea0(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r5 = rd32((u32)param_1 + 4u);
    r0 = (u32)param_1 + 4u;
    while (r5 != r0) {
        if (rd32((u32)param_2 + 4u) == rd32(rd32(r5 + 8u) + 0xcu)) {
            return r5;
        }
        r5 = rd32(r5);
    }
    return 0u;
}
