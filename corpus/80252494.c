#include "tc_rt.h"

void fn_80252494(u32 param_1, u32 param_2, u32 param_3)
{
    wr32(param_1, (((rd32(param_1) & 0xfffffffcu) | (param_2 & 3u)) & 0xfffffff3u) | ((param_3 << 2u) & 0xcu));
    return;
}
