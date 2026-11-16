#include "tc_rt.h"

u32 fn_800a3514(u32 param_1)
{
    return rd32(rd32(param_1) + 4u);
}
