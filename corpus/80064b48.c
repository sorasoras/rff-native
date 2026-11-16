#include "tc_rt.h"

void fn_80064b48(f64 param_1, s32 param_2)
{
    wrf32d(rd32((u32)param_2 + 0x70u) + 0x54u, param_1);
    return;
}
