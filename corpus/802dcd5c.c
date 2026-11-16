#include "tc_rt.h"

void fn_802dcd5c(s32 param_1)
{
    wr32((u32)param_1 + 0x2cu, rd32(rd32((u32)param_1 + 0x10u) + 4u) + rd32((((u32)rd8((u32)param_1 + 0xeu) << 2u) & 0xfffffffcu) - 0x7fc63ec0u));
    return;
}
