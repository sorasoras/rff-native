#include "tc_rt.h"

u32 fn_802966b4(u32 param_1)
{
    u32 r3 = 0;
    r3 = rd32(0x8053dec0u);
    wr32(0x8053dec0u, param_1);
    return r3;
}
