#include "tc_rt.h"

u32 fn_802eb3f0(u32 param_1)
{
    return (rd32(param_1) >> 0x19u) & 1u;
}
