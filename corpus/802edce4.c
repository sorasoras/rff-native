#include "tc_rt.h"

u32 fn_802edce4(s32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)rd8(rd32((u32)param_1 + 0xcu) + 0xau);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
