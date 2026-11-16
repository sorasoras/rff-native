#include "tc_rt.h"

u32 fn_801498c8(u32 param_1)
{
    return (u32)rd8(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 0x77u) & 1u;
}
