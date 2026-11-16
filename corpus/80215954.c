#include "tc_rt.h"

u32 fn_80215954(s32 param_1, s32 param_2)
{
    return rd32(rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu)));
}
