#include "tc_rt.h"

u32 fn_8014a0a8(u32 param_1)
{
    return rd32(rd32(0x805712f8u) + (rd32(param_1) * 0xacu) + 0x64u);
}
