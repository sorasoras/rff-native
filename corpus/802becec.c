#include "tc_rt.h"

void fn_802becec(f64 param_1, f64 param_2, f64 param_3, s32 param_4, s32 param_5)
{
    f64 f0 = 0.0;
    wr32((u32)param_4 + 0x18u, (u32)param_5);
    wrf32d((u32)param_4 + 4u, param_1);
    wrf32d((u32)param_4 + 8u, param_2);
    wrf32d((u32)param_4 + 0x10u, param_3);
    wr32((u32)param_4 + 0x14u, 0u);
    wr8((u32)param_4 + 0x1cu, 0u);
    if ((u32)param_5 == 1u) {
        f0 = (f64)(f32)param_1;
    } else {
        f0 = (f64)(f32)param_2;
    }
    wrf32d((u32)param_4 + 0xcu, f0);
    return;
}
