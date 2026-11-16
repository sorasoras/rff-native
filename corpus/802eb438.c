#include "tc_rt.h"

u32 fn_802eb438(u32 param_1)
{
    return (rd32(param_1) >> 0xfu) & 7u;
}
