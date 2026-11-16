#include "tc_rt.h"

void fn_80144158(u32 param_1)
{
    wr32(param_1 + 8u, rd32(rd32(param_1) + 0x48u));
    return;
}
