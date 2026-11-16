#include "tc_rt.h"

void fn_802438c8(u32 param_1)
{
    wr32(param_1, (rd32(0x805717f8u) * 0x600u) - 0x7fb19700u);
    return;
}
