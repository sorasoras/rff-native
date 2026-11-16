#include "tc_rt.h"

u32 fn_802d5dac(u32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)rd8(rd32(param_1));
    wr32(param_1, rd32(param_1) + 1u);
    return r3;
}
