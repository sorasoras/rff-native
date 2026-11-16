#include "tc_rt.h"

void fn_801f185c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    r0 = rd32((u32)param_1 + 0xb0u);
    c0lt = (s32)r0 < 2;
    f4 = (f64)rdf32(0x805765f0u);
    f3 = (f64)rdf32(rd32(rd32((u32)param_1 + 0x78u) + 0xcu) + 0x14u);
    if (r0 == 2u) {
        f4 = (f64)(f32)((f64)rdf32(0x805765fcu) * (f64)rdf32((u32)param_1 + 0xacu));
    } else if (!c0lt) {
        c0lt = (s32)r0 < 4;
        if (r0 != 4u && c0lt) {
            f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xacu) - (f64)rdf32(0x805765f8u));
            if (!(f4 < f0)) {
                f4 = f0;
            }
            f1 = (f64)(f32)f4;
            f0 = (f64)rdf32(0x805765f0u);
            f2 = (f64)rdf32(0x805765fcu);
            wrf32d((u32)param_1 + 0xacu, f4);
            f4 = (f64)(f32)(f2 * f1);
            if ((f1 < f0) || (f1 == f0)) {
                wrf32d((u32)param_1 + 0xacu, f0);
                wr32((u32)param_1 + 0xb0u, 0u);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt) {
            f4 = (f64)rdf32(0x805765f4u);
            f0 = (f64)(f32)((f64)rdf32(0x805765f8u) + (f64)rdf32((u32)param_1 + 0xacu));
            if (!(f4 < f0)) {
                f4 = f0;
            }
            f1 = (f64)(f32)f4;
            f0 = (f64)rdf32(0x805765f4u);
            f2 = (f64)rdf32(0x805765fcu);
            wrf32d((u32)param_1 + 0xacu, f4);
            f4 = (f64)(f32)(f2 * f1);
            if ((f1 > f0) || (f1 == f0)) {
                wrf32d((u32)param_1 + 0xacu, f0);
                wr32((u32)param_1 + 0xb0u, 2u);
            }
        }
    }
    f1 = (f64)rdf32(0x805765f0u);
    if (!(f3 > f1)) {
        return;
    }
    f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x74u) + f4);
    wrf32d((u32)param_1 + 0x74u, f0);
    if (!(f0 > f3)) {
        return;
    }
    wrf32d((u32)param_1 + 0x74u, f1);
    return;
}
