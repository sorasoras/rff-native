#include "tc_rt.h"

u32 fn_802dea10(s32 param_1, s32 param_2)
{
    if ((u32)param_2 == 0u) {
        return rd32((u32)param_1 + 4u);
    }
    return rd32((u32)param_2 + (u32)rd16((u32)param_1 + 0xau));
}
