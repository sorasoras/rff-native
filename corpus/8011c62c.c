#include "tc_rt.h"

void fn_8011c62c(f64 param_1, s32 param_2)
{
    u32 r5 = 0, r6 = 0;
    r5 = rd32((u32)param_2 + 0x10u);
    r6 = 0u;
    while ((s32)r6 < (s32)rd32((u32)param_2 + 0x18u)) {
        r6 = r6 + 1u;
        wrf32d(rd32(r5) + 0x10u, param_1);
    }
    return;
}
