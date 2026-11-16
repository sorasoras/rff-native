#include "tc_rt.h"

void fn_8030c738(f64 param_1, s32 param_2, s32 param_3)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(0x805777b8u);
    f0 = (f64)(f32)(param_1 + f2);
    if (!(f0 > f2)) {
        f2 = (f64)rdf32(0x805777bcu);
        if (!(f0 < f2)) {
            f2 = f0;
        }
    }
    r4 = (u32)param_2 + (((u32)param_3 << 2u) & 0xfffffffcu);
    if (f2 == (f64)rdf32(r4 + 0xdcu)) {
        return;
    }
    wrf32d(r4 + 0xdcu, f2);
    wr8((u32)param_2 + 0xa2u, (u8)((u32)rd8((u32)param_2 + 0xa2u) | 0x10u));
    return;
}
