#include "tc_rt.h"

void fn_802b8350(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r3 = 0;
    r3 = ((u32)param_3 * 0x538u) - 0x7faba3a8u;
    wrf32d(r3 + 0x84u, param_1);
    wrf32d(r3 + 0x88u, param_2);
    return;
}
