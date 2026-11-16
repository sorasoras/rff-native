#include "tc_rt.h"

u32 fn_8026ed10(s32 param_1)
{
    return rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x33000000u);
}
