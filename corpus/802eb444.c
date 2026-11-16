#include "tc_rt.h"

u32 fn_802eb444(u32 param_1)
{
    return (rd32(param_1) >> 0x12u) & 0x1fu;
}
