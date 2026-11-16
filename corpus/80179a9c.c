#include "tc_rt.h"

void fn_80179a9c(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80173860u, &a);
    if (((u32)param_1 + 0x80u) != 0u) {
        wr32((u32)param_1 + 0x98u, 0u);
    }
    r0 = rd32((u32)param_1 + 0xf8u);
    if (r0 == 0x31u) {
        wrf32d((u32)param_1 + 0x12cu, (f64)rdf32(0x80574ff4u));
    } else {
        if (r0 == 0x32u) {
            wrf32d((u32)param_1 + 0x12cu, (f64)rdf32(0x80574ff8u));
        } else {
            if (r0 == 0x47u) {
                f0 = (f64)rdf32(0x80574ffcu);
                wrf32d((u32)param_1 + 0x12cu, (f64)rdf32(0x80574ff8u));
                wrf32d((u32)param_1 + 0x134u, f0);
            } else {
                if (r0 == 0x48u) {
                    f0 = (f64)rdf32(0x80575000u);
                    wrf32d((u32)param_1 + 0x12cu, f0);
                    wrf32d((u32)param_1 + 0x134u, f0);
                }
            }
        }
    }
    return;
}
