#include "tc_rt.h"

s32 fn_802fd0c8(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 4u);
    r3 = rd32(r3 + 8u) + r3;
    return (s32)r3;
}
