#include "tc_rt.h"

u32 fn_8023c15c(u32 param_1)
{
    wr32(0x80571688u, param_1);
    return 1u;
}
