#include "tc_rt.h"

void fn_800574e4(s32 param_1, s32 param_2)
{
    u32 r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    f4 = (f64)rdf32(0x803369c0u);
    r7 = (u32)param_1 + ((u32)param_2 * 0x28u);
    wrf32d(r7 + 0x94u, (f64)rdf32(0x80489128u));
    f3 = (f64)rdf32(0x803369c4u);
    f2 = (f64)rdf32(0x803369c8u);
    wrf32d(r7 + 0x98u, (f64)rdf32(0x8048912cu));
    f1 = (f64)rdf32(0x803369ccu);
    f0 = (f64)rdf32(0x8057239cu);
    wrf32d(r7 + 0x9cu, (f64)rdf32(0x80489130u));
    wrf32d(r7 + 0xa0u, f4);
    wrf32d(r7 + 0xa4u, f3);
    wrf32d(r7 + 0xa8u, f2);
    wrf32d(r7 + 0xacu, f1);
    wrf32d(r7 + 0xb0u, f0);
    wr32(r7 + 0xb4u, 0u);
    wr32(r7 + 0x90u, (u32)param_2 + 3u);
    return;
}
