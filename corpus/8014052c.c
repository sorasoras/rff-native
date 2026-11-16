#include "tc_rt.h"

u32 fn_8014052c(u32 param_1, s32 param_2, s32 param_3)
{
    return (u32)rd16(rd32(param_1) + (((u32)param_2 - rd32(param_1 + 8u)) * 0x1au) + ((((u32)(s8)param_3 - 1u) << 1u) & 0xfffffffeu) + 0x14u);
}
