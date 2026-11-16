#include "tc_rt.h"

u32 fn_8022524c(s32 param_1)
{
    return rd32(rd32(0x80571440u) + 4u) & ((((u32)param_1 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_1 & 0x1fu)));
}
