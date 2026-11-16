#include "tc_rt.h"

void fn_80167bec(f64 param_1, s32 param_2)
{
    wrf32d((u32)param_2 + 0x16f0u, param_1);
    wrf32d((u32)param_2 + 0x16ecu, param_1);
    return;
}
