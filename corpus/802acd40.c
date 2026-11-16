#include "tc_rt.h"

u32 fn_802acd40(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    if ((u32)param_1 == 0u) {
        return 0u;
    }
    if (param_2 > 0x3du) {
        return 0u;
    }
    r3 = (u32)rd8((u32)param_1 + param_2 + 0x24u);
    if (r3 == 0u) {
        return 0u;
    }
    r3 = ((r3 - 1u) * 0xa4u) - 0x7fabedf8u;
    r3 = r3 + 0x68u;
    return r3;
}
