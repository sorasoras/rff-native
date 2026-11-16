#include "tc_rt.h"

u32 fn_80149d64(u32 param_1)
{
    return rd32(rd32(0x805712f0u) + (rd32(param_1) * 0x16cu) + 4u);
}
