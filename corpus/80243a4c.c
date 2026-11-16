#include "tc_rt.h"

void fn_80243a4c(u32 param_1)
{
    wr32(param_1, (rd32(0x805717f4u) * 0x480u) - 0x7fb17780u);
    return;
}
