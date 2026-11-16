#include "tc_rt.h"

u32 fn_80252590(u32 param_1)
{
    return rd32(param_1) & 3u;
}
