#include "tc_rt.h"

u32 fn_802eb3e4(u32 param_1)
{
    return (rd32(param_1) >> 8u) & 0xfu;
}
