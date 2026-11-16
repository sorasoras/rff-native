#include "tc_rt.h"

void fn_802439b8(u32 param_1)
{
    wr32(param_1, (rd32(0x805717f4u) * 0x600u) - 0x7fb18800u);
    return;
}
