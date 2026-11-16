#include "tc_rt.h"

u32 fn_80149f3c(u32 param_1)
{
    return ((u32)rd8(rd32(0x805712f8u) + (rd32(param_1) * 0xacu) + 0x38u) >> 4u) & 1u;
}
