#include "tc_rt.h"

void fn_8003dd7c(u32 param_1, u32 param_2)
{
    wr32(0x80571000u, param_1);
    wr32(0x80571004u, param_2);
    return;
}
