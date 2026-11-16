#include "tc_rt.h"

void fn_801188a8(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    r0 = rd32((u32)param_1 + 0xacu);
    r5 = (u32)rd8(0x80492824u);
    r6 = (u32)rd8(0x80492821u);
    if (r0 == 1u) {
        r4 = ((r6 << 2u) & 0x3fcu) + r6 - 0x7fcb0288u;
        if (r5 >= (u32)rd8(r4) && r5 < (u32)rd8(r4 + 2u)) {
            f0 = (f64)rdf32(0x8057419cu);
            wr32((u32)param_1 + 0xb0u, 2u);
            wrf32d((u32)param_1 + 0xb4u, f0);
            return;
        }
        f0 = (f64)rdf32(0x80574198u);
        wr32((u32)param_1 + 0xb0u, 0u);
        wrf32d((u32)param_1 + 0xb4u, f0);
        return;
    }
    if (r0 == 2u) {
        r4 = ((r6 << 2u) & 0x3fcu) + r6 - 0x7fcb0288u;
        if (r5 >= (u32)rd8(r4 + 2u) && r5 < (u32)rd8(r4 + 3u)) {
            f0 = (f64)rdf32(0x8057419cu);
            wr32((u32)param_1 + 0xb0u, 2u);
            wrf32d((u32)param_1 + 0xb4u, f0);
            return;
        }
        f0 = (f64)rdf32(0x80574198u);
        wr32((u32)param_1 + 0xb0u, 0u);
        wrf32d((u32)param_1 + 0xb4u, f0);
        return;
    }
    if (r0 == 3u) {
        r4 = ((r6 << 2u) & 0x3fcu) + r6 - 0x7fcb0288u;
        if (r5 >= (u32)rd8(r4 + 3u) || r5 < (u32)rd8(r4)) {
            f0 = (f64)rdf32(0x8057419cu);
            wr32((u32)param_1 + 0xb0u, 2u);
            wrf32d((u32)param_1 + 0xb4u, f0);
            return;
        }
        f0 = (f64)rdf32(0x80574198u);
        wr32((u32)param_1 + 0xb0u, 0u);
        wrf32d((u32)param_1 + 0xb4u, f0);
        return;
    }
    f0 = (f64)rdf32(0x80574198u);
    wr32((u32)param_1 + 0xb0u, 0u);
    wrf32d((u32)param_1 + 0xb4u, f0);
    return;
}
