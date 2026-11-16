#include "tc_rt.h"

u32 fn_80140440(u32 param_1, s32 param_2)
{
    return (u32)rd16(rd32(param_1) + (((u32)param_2 - rd32(param_1 + 8u)) * 0x1au));
}
