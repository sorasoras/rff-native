#include "tc_rt.h"

u32 fn_80149788(u32 param_1, s32 param_2)
{
    return rd32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x28u);
}
