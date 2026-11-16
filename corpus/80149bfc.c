#include "tc_rt.h"

u32 fn_80149bfc(u32 param_1)
{
    return rd32(rd32(0x805712e8u) + (rd32(param_1) * 0x304u) + 0x3cu);
}
