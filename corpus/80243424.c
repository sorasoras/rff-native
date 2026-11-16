#include "tc_rt.h"

void fn_80243424(s32 param_1)
{
    wr32((u32)param_1 + 8u, rd32(0x805717e8u));
    wr32(0x805717e8u, (u32)param_1);
    return;
}
