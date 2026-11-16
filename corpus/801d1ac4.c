#include "tc_rt.h"

void fn_801d1ac4(s32 param_1)
{
    u32 r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    r5 = rd32((u32)param_1 + 0x280u);
    if (r5 != 0u) {
        r6 = rd32((u32)param_1 + 0xe0u);
        f0 = (f64)(f32)((f64)rdf32(r6 + 0xd74u) * (f64)(f32)((f64)rdf32(0x80575f20u) * (f64)rdf32(r6 + 0xd78u)));
        if (r5 != 0u) {
            wrf32d(r5 + 0x24u, f0);
            wr32(r5 + 0x30u, 0x2085u);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 1) {
            r5 = rd32((u32)param_1 + 0x280u) + 0xe4u;
        } else {
            r5 = rd32((u32)param_1 + 0x280u);
        }
        if (r5 != 0u) {
            wrf32d(r5 + 0x24u, f0);
            wr32(r5 + 0x30u, 0x2085u);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 2) {
            r5 = rd32((u32)param_1 + 0x280u) + 0x1c8u;
        } else {
            r5 = rd32((u32)param_1 + 0x280u);
        }
        if (r5 != 0u) {
            wrf32d(r5 + 0x24u, f0);
            wr32(r5 + 0x30u, 0x2085u);
        }
        if ((s32)rd32((u32)param_1 + 0x288u) > 3) {
            r5 = rd32((u32)param_1 + 0x280u) + 0x2acu;
        } else {
            r5 = rd32((u32)param_1 + 0x280u);
        }
        if (r5 == 0u) {
            return;
        }
        wrf32d(r5 + 0x24u, f0);
        wr32(r5 + 0x30u, 0x2085u);
        return;
    }
    return;
}
