#include "tc_rt.h"

void fn_8030c578(f64 param_1, s32 param_2)
{
    u32 r0 = 0;
    f64 f2 = 0.0;
    f2 = (f64)rdf32(0x805777b8u);
    if (!(param_1 > f2)) {
        f2 = (f64)rdf32(0x805777bcu);
        if (!(param_1 < f2)) {
            f2 = param_1;
        }
    }
    if (f2 == (f64)rdf32((u32)param_2 + 0xb0u)) {
        return;
    }
    r0 = (u32)rd8((u32)param_2 + 0xa2u);
    wrf32d((u32)param_2 + 0xb0u, f2);
    r0 = r0 | 0x20u;
    wr8((u32)param_2 + 0xa2u, (u8)r0);
    return;
}
