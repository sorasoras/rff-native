#include "tc_rt.h"

void fn_8030c6ec(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0;
    f64 f2 = 0.0;
    f2 = (f64)rdf32(0x805777b8u);
    if (!(param_1 > f2)) {
        f2 = (f64)rdf32(0x805777bcu);
        if (!(param_1 < f2)) {
            f2 = param_1;
        }
    }
    r4 = (u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu);
    if (f2 == (f64)rdf32(r4 + 0xccu)) {
        return;
    }
    wrf32d(r4 + 0xccu, f2);
    wr8((u32)param_2 + 0xa2u, (u8)((u32)rd8((u32)param_2 + 0xa2u) | 0x10u));
    return;
}
