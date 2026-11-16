#include "tc_rt.h"

void fn_802f5d08(f64 param_1, s32 param_2, s32 param_3)
{
    wrf32d((u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu) + 0x30u, param_1);
    return;
}
