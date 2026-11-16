#include "tc_rt.h"

void fn_8018b4f0(s32 param_1)
{
    u32 r4 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    if (rd32((u32)param_1 + 0xb4u) != 5u) {
        f2 = (f64)rdf32(rd32(rd32((u32)param_1 + 0x78u) + 0xcu) + 0x14u);
        if (!(f2 > (f64)rdf32(0x80575288u))) {
            return;
        }
        r4 = 0u;
        if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
            r4 = 1u;
        }
        if (r4 == 0u) {
            return;
        }
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x74u) + (f64)rdf32(0x805752bcu));
        wrf32d((u32)param_1 + 0x74u, f0);
        if (!(f0 > f2)) {
            return;
        }
        f0 = (f64)(f32)(f0 - f2);
        wrf32d((u32)param_1 + 0x74u, f0);
        return;
    }
    return;
}
