#include "tc_rt.h"

u32 fn_8007b0f4(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0;
    if (param_3 != 0u) {
        r3 = rd32(param_3);
    } else {
        r3 = rd32(param_1);
    }
    for (;;) {
        if (r3 == 0u) {
            return 0u;
        }
        if (rd32(r3 + 8u) == (u32)param_2) break;
        r3 = rd32(r3);
    }
    return r3;
}
