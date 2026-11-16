#include "tc_rt.h"

void fn_802cb994(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    r4 = param_2;
    r0 = (u32)rd8((u32)param_1 + 1u);
    if (r0 < param_3) {
        r0 = param_3;
    }
    wr8((u32)param_1 + 1u, (u8)r0);
    r6 = 0u;
    ctr = param_3;
    if ((s32)param_3 > 0) {
        do {
            r0 = rd32((u32)param_1 + 4u);
            f0 = (f64)rdf32(r4 + 4u);
            wrf32d(r6 + r0, (f64)rdf32(r4));
            f1 = (f64)rdf32(r4 + 8u);
            wrf32d(r0 + r6 + 4u, f0);
            f0 = (f64)rdf32(r4 + 0xcu);
            f3 = (f64)rdf32(r4 + 0x10u);
            r5 = rd32((u32)param_1 + 4u) + r6;
            f2 = (f64)rdf32(r4 + 0x14u);
            wrf32d(r5 + 8u, f1);
            f1 = (f64)rdf32(r4 + 0x18u);
            wrf32d(r5 + 0xcu, f0);
            f0 = (f64)rdf32(r4 + 0x1cu);
            r4 = r4 + 0x20u;
            r5 = rd32((u32)param_1 + 4u) + r6;
            wrf32d(r5 + 0x10u, f3);
            wrf32d(r5 + 0x14u, f2);
            r5 = rd32((u32)param_1 + 4u) + r6;
            r6 = r6 + 0x20u;
            wrf32d(r5 + 0x18u, f1);
            wrf32d(r5 + 0x1cu, f0);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
