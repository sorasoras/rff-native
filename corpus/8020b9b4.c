#include "tc_rt.h"

void fn_8020b9b4(s32 param_1)
{
    f64 f0 = 0.0, f2 = 0.0;
    f2 = (f64)rdf32(rd32(rd32((u32)param_1 + 0x78u) + 0xcu) + 0x14u);
    if (f2 > (f64)rdf32(0x8057678cu)) {
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x74u) + (f64)rdf32(0x805767a0u));
        wrf32d((u32)param_1 + 0x74u, f0);
        if (!(f0 > f2)) {
            return;
        }
        wrf32d((u32)param_1 + 0x74u, f2);
        return;
    }
    return;
}
