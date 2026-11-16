#include "tc_rt.h"

void fn_800480cc(u32 param_1, u32 param_2)
{
    wr32(param_1, rd32(0x80571054u));
    wr32(param_2, rd32(0x80571058u));
    return;
}
