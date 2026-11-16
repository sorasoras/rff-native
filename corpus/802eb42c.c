#include "tc_rt.h"

u32 fn_802eb42c(u32 param_1)
{
    return (rd32(param_1) >> 0xdu) & 3u;
}
