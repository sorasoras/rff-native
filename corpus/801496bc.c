#include "tc_rt.h"

u32 fn_801496bc(u32 param_1)
{
    return rd32(rd32(0x805712ecu) + (rd32(param_1) * 0x108u) + 4u);
}
