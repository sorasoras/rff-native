#include "tc_rt.h"

void fn_8012c8b4(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x98u, rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x9cu));
    return;
}
