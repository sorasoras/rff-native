#include "tc_rt.h"

u32 fn_802ef398(u32 param_1, s32 param_2)
{
    u32 r5 = 0;
    r5 = 0u;
    if ((u32)param_2 == rd32(param_1) && (u32)rd16(param_1 + 4u) == 0xfeffu) {
        r5 = 1u;
    }
    return r5;
}
