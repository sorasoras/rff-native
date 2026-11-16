#include "tc_rt.h"

void fn_80077890(u32 param_1)
{
    u32 r0 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r0 = rd32(0x804865f0u);
    if (r0 < 0x14u) {
        r0 = r0 * 0xcu;
        f1 = (f64)rdf32(param_1 + 4u);
        r4 = r0 - 0x7fb79a10u;
        f0 = (f64)rdf32(param_1 + 8u);
        wrf32d(r4 + 4u, (f64)rdf32(param_1));
        wrf32d(r4 + 8u, f1);
        wrf32d(r4 + 0xcu, f0);
        wr32(0x804865f0u, rd32(0x804865f0u) + 1u);
        return;
    }
    return;
}
