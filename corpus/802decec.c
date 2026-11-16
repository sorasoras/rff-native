#include "tc_rt.h"

u32 fn_802decec(u32 param_1)
{
    u32 r3 = 0;
    r3 = (u32)rd16(rd32(param_1));
    wr32(param_1, rd32(param_1) + 2u);
    return r3;
}
