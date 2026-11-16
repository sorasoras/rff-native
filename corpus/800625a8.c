#include "tc_rt.h"

void fn_800625a8(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x9cu, (rd32((u32)param_1 + 0x9cu) & 0x7fffffffu) | (((u32)param_2 << 0x1fu) & 0x80000000u));
    return;
}
