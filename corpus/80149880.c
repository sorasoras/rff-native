#include "tc_rt.h"

u32 fn_80149880(u32 param_1)
{
    return (u32)rd8(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 0x70u);
}
