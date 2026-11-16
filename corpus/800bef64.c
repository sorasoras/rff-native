#include "tc_rt.h"

u32 fn_800bef64(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r0 = 0u;
    if (param_1 >= 0 && param_1 <= 36) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r0 = 0u;
        if (param_1 >= 353 && param_1 <= 360) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r8 = (((u32)param_1 - 0x1f8u) << 4u) & 0xfffffff0u;
            r4 = ((u32)param_2 << 4u) & 0xfffffff0u;
            r3 = r8 - 0x7fcc8388u + r4;
            if ((f64)rdf32(0x80572e70u) != (f64)rdf32(r3 + 0xcu)) {
                if (param_3 != 0u) {
                    f1 = (f64)rdf32(r3 + 4u);
                    f0 = (f64)rdf32(r3 + 8u);
                    wrf32d(param_3, (f64)rdf32(r4 + r8 - 0x7fcc8388u));
                    wrf32d(param_3 + 4u, f1);
                    wrf32d(param_3 + 8u, f0);
                }
                if (param_4 != 0u) {
                    wrf32d(param_4, (f64)rdf32(r3 + 0xcu));
                }
                return 1u;
            }
            return 0u;
        }
    }
    return 0u;
}
