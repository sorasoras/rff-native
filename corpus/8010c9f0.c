#include "tc_rt.h"

void fn_8010c9f0(s32 param_1, u32 param_2)
{
    wr32((u32)param_1 + 0x180cu, param_2);
    return;
}
