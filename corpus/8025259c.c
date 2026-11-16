#include "tc_rt.h"

u32 fn_8025259c(u32 param_1)
{
    return (rd32(param_1) >> 2u) & 3u;
}
