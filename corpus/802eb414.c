#include "tc_rt.h"

u32 fn_802eb414(u32 param_1)
{
    return (rd32(param_1) >> 0x17u) & 1u;
}
