#include "tc_rt.h"

s32 fn_801404f8(u32 param_1, s32 param_2, s32 param_3)
{
    return (s32)(((u32)rd16(rd32(param_1) + (((u32)param_2 - rd32(param_1 + 8u)) * 0x1au) + ((((u32)(s8)param_3 - 1u) << 1u) & 0xfffffffeu) + 0xeu) + 2u) & 0xffffu);
}
