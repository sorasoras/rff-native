#include "tc_rt.h"

u32 fn_80149750(u32 param_1)
{
    return rd32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 0x1cu);
}
