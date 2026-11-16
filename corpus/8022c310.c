#include "tc_rt.h"

u32 fn_8022c310(s32 param_1)
{
    return rd32(rd32(0x805714e8u) + (((u32)param_1 << 2u) & 0xfffffffcu));
}
