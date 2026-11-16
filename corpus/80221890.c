#include "tc_rt.h"

void fn_80221890(u32 param_1, u32 param_2)
{
    (void)param_1;
    wr32(0x80571424u, param_2);
    return;
}
