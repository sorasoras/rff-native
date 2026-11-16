#include "tc_rt.h"

void fn_802bed44(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    if (rd32((u32)param_1 + 0x14u) != 1u) {
        return;
    }
    r0 = rd32((u32)param_1 + 0x18u);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        f1 = (f64)rdf32((u32)param_1 + 4u);
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) + (f64)rdf32((u32)param_1 + 0x10u));
        wrf32d((u32)param_1 + 0xcu, f2);
        if (!((f2 > f1) || (f2 == f1))) {
            return;
        }
        wrf32d((u32)param_1 + 0xcu, (f64)(f32)(f2 - (f64)(f32)(f1 - (f64)rdf32((u32)param_1 + 8u))));
        return;
    }
    if (!c0lt) {
        if ((s32)r0 >= 4) {
            return;
        }
        if ((u32)rd8((u32)param_1 + 0x1cu) != 0u) {
            f0 = (f64)rdf32((u32)param_1 + 8u);
            f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) - (f64)rdf32((u32)param_1 + 0x10u));
            wrf32d((u32)param_1 + 0xcu, f1);
            if (!((f1 < f0) || (f1 == f0))) {
                return;
            }
            wrf32d((u32)param_1 + 0xcu, f0);
            wr8((u32)param_1 + 0x1cu, 0u);
            return;
        }
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 4u) - (f64)rdf32(0x80348620u));
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) + (f64)rdf32((u32)param_1 + 0x10u));
        wrf32d((u32)param_1 + 0xcu, f0);
        if (!((f0 > f2) || (f0 == f2))) {
            return;
        }
        wrf32d((u32)param_1 + 0xcu, f2);
        wr8((u32)param_1 + 0x1cu, 1u);
        return;
    }
    c0lt = (s32)r0 < 0;
    if (r0 == 0u) {
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 4u) - (f64)rdf32(0x80348620u));
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) + (f64)rdf32((u32)param_1 + 0x10u));
        wrf32d((u32)param_1 + 0xcu, f0);
        if (!((f0 > f2) || (f0 == f2))) {
            return;
        }
        wrf32d((u32)param_1 + 0xcu, f2);
        wr32((u32)param_1 + 0x14u, 0u);
        return;
    }
    if (!c0lt) {
        f0 = (f64)rdf32((u32)param_1 + 8u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) - (f64)rdf32((u32)param_1 + 0x10u));
        wrf32d((u32)param_1 + 0xcu, f1);
        if (!((f1 < f0) || (f1 == f0))) {
            return;
        }
        wrf32d((u32)param_1 + 0xcu, f0);
        wr32((u32)param_1 + 0x14u, 0u);
        return;
    }
    return;
}
