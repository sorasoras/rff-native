#include "tc_rt.h"

u32 fn_800f2918(s32 param_1)
{
    return rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fca44c0u);
}
