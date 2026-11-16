#include "tc_rt.h"

void fn_801d1b9c(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    f64 f0 = 0.0;
    r4 = rd32((u32)param_1 + 0x280u);
    if (r4 != 0u) {
        r5 = rd32((u32)param_1 + 0xe0u);
        if (r5 == 0u) {
            return;
        }
        f0 = (f64)rdf32(r5 + 0xd88u);
        if (r4 != 0u) {
            wrf32d(r4 + 0x20u, f0);
        }
        f0 = (f64)rdf32(r5 + 0xd8cu);
        if ((s32)rd32((u32)param_1 + 0x288u) > 1) {
            r4 = rd32((u32)param_1 + 0x280u) + 0xe4u;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x20u, f0);
        }
        f0 = (f64)rdf32(r5 + 0xd90u);
        if ((s32)rd32((u32)param_1 + 0x288u) > 2) {
            r4 = rd32((u32)param_1 + 0x280u) + 0x1c8u;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 != 0u) {
            wrf32d(r4 + 0x20u, f0);
        }
        f0 = (f64)rdf32(r5 + 0xd94u);
        if ((s32)rd32((u32)param_1 + 0x288u) > 3) {
            r4 = rd32((u32)param_1 + 0x280u) + 0x2acu;
        } else {
            r4 = rd32((u32)param_1 + 0x280u);
        }
        if (r4 == 0u) {
            return;
        }
        wrf32d(r4 + 0x20u, f0);
        return;
    }
    return;
}
