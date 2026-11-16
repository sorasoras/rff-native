#include "tc_rt.h"

void fn_8030c434(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r0 = 0;
    f64 f1 = 0.0, f3 = 0.0;
    f3 = (f64)rdf32(0x805777b8u);
    if (!(param_1 > f3)) {
        f3 = (f64)rdf32(0x805777bcu);
        if (!(param_1 < f3)) {
            f3 = param_1;
        }
    }
    f1 = (f64)rdf32(0x805777b8u);
    if (!(param_2 > f1)) {
        f1 = (f64)rdf32(0x805777bcu);
        if (!(param_2 < f1)) {
            f1 = param_2;
        }
    }
    if (!(f1 < (f64)rdf32(0x805777bcu))) {
        if (f1 != (f64)rdf32((u32)param_3 + 0x104u) || f3 != (f64)rdf32((u32)param_3 + 0x108u)) {
            r0 = (u32)rd8((u32)param_3 + 0xa2u);
            wrf32d((u32)param_3 + 0x104u, f1);
            r0 = r0 | 8u;
            wrf32d((u32)param_3 + 0x108u, f3);
            wr8((u32)param_3 + 0xa2u, (u8)r0);
            return;
        }
        return;
    }
    if (f3 == (f64)rdf32((u32)param_3 + 0x108u)) {
        return;
    }
    r0 = (u32)rd8((u32)param_3 + 0xa2u);
    wrf32d((u32)param_3 + 0x108u, f3);
    r0 = r0 | 8u;
    wr8((u32)param_3 + 0xa2u, (u8)r0);
    return;
}
