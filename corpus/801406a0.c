#include "tc_rt.h"

u32 fn_801406a0(u32 param_1, s32 param_2)
{
    return (u32)rd8(rd32(param_1) + (((u32)param_2 - rd32(param_1 + 8u)) * 0x1cu) + 6u);
}
