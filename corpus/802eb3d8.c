#include "tc_rt.h"

u32 fn_802eb3d8(u32 param_1)
{
    return (rd32(param_1) >> 4u) & 0xfu;
}
