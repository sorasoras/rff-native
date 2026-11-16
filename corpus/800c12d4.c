#include "tc_rt.h"

u32 fn_800c12d4(s32 param_1)
{
    wr32((u32)param_1 + 0x9cu, rd32((u32)param_1 + 0x9cu) | 0x40000000u);
    return 0xbu;
}
