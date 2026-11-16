#include "tc_rt.h"

void fn_8030c7d4(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    f0 = (f64)rdf32(param_3 + 4u);
    f3 = (f64)rdf32(param_3 + 8u);
    r4 = (u32)param_1 + ((u32)param_2 * 0x18u);
    f2 = (f64)rdf32(param_3 + 0xcu);
    wrf32d(r4 + 0x2cu, (f64)rdf32(param_3));
    f1 = (f64)rdf32(param_3 + 0x10u);
    wrf32d(r4 + 0x30u, f0);
    f0 = (f64)rdf32(param_3 + 0x14u);
    wrf32d(r4 + 0x34u, f3);
    wrf32d(r4 + 0x38u, f2);
    wrf32d(r4 + 0x3cu, f1);
    wrf32d(r4 + 0x40u, f0);
    wr8((u32)param_1 + 0xa2u, (u8)((u32)rd8((u32)param_1 + 0xa2u) | 0x3cu));
    return;
}
