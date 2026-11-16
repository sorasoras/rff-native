#include "tc_rt.h"

void fn_80243998(u32 param_1)
{
    wr32(param_1, (rd32(0x805717f8u) * 0x600u) - 0x7fb18500u);
    return;
}
