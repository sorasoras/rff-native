#include "tc_rt.h"

u32 fn_80216c28(u32 param_1, u32 param_2)
{
    u32 r0 = 0;
    r0 = rd32(param_1);
    if (param_2 == r0) {
        r0 = rd32(param_1 + 4u);
    }
    return r0 & 0x80000000u;
}
