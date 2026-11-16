#include "tc_rt.h"

void fn_8003c0e0(s32 param_1)
{
    wr32(0x803be230u, rd32((u32)param_1 + 0x10u));
    return;
}
