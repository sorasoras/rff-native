#include "tc_rt.h"

u32 fn_8014a150(u32 param_1)
{
    return rd32(rd32(0x805712fcu) + (rd32(param_1) * 0x418u) + 0x54u);
}
