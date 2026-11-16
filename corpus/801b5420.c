#include "tc_rt.h"

u32 fn_801b5420(s32 param_1, s32 param_2)
{
    return rd32(rd32((u32)param_1 + 0x190u) + (((u32)param_2 << 2u) & 0xfffffffcu));
}
