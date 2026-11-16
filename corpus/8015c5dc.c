#include "tc_rt.h"

u32 fn_8015c5dc(s32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)rd16((u32)param_1 + 0x2cu);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
