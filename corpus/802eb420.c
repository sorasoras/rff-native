#include "tc_rt.h"

u32 fn_802eb420(u32 param_1)
{
    return (rd32(param_1) >> 0x18u) & 1u;
}
