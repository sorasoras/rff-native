#include "tc_rt.h"

void fn_802ca43c(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r5 = (0u - param_2) | param_2;
    r4 = (r5 >> 0x1fu) & 1u;
    wr8((u32)param_1 + 0x2a8u, (u8)(((u32)rd8((u32)param_1 + 0x2a8u) & 0xffffffdfu) | ((r5 >> 0x1au) & 0x20u)));
    wr8((u32)param_1 + 0x8fu, (u8)r4);
    if (r4 != 0u) {
        r5 = rd32((u32)param_1 + 4u);
        f1 = (f64)rdf32(r5 + 0x38u);
        f0 = (f64)rdf32(r5 + 0x34u);
        r4 = rd32(rd32((u32)param_1 + 0x238u) + 0x10u);
        wrf32d(r4 + 0x44u, f0);
        wrf32d(r4 + 0x48u, f1);
        if (rd32(rd32((u32)param_1 + 4u) + 0x20u) != 0u) {
            return;
        }
        r4 = rd32(rd32((u32)param_1 + 0x23cu) + 0x10u);
        wrf32d(r4 + 0x44u, f0);
        wrf32d(r4 + 0x48u, f1);
        r4 = rd32(rd32((u32)param_1 + 0x240u) + 0x10u);
        wrf32d(r4 + 0x44u, f0);
        wrf32d(r4 + 0x48u, f1);
        r4 = rd32(rd32((u32)param_1 + 0x244u) + 0x10u);
        wrf32d(r4 + 0x44u, f0);
        wrf32d(r4 + 0x48u, f1);
        r3 = rd32(rd32((u32)param_1 + 0x248u) + 0x10u);
        wrf32d(r3 + 0x44u, f0);
        wrf32d(r3 + 0x48u, f1);
    } else {
        f0 = (f64)rdf32(0x80348964u);
        r4 = rd32(rd32((u32)param_1 + 0x238u) + 0x10u);
        wrf32d(r4 + 0x44u, f0);
        wrf32d(r4 + 0x48u, f0);
        if (rd32(rd32((u32)param_1 + 4u) + 0x20u) == 0u) {
            r4 = rd32(rd32((u32)param_1 + 0x23cu) + 0x10u);
            wrf32d(r4 + 0x44u, f0);
            wrf32d(r4 + 0x48u, f0);
            r4 = rd32(rd32((u32)param_1 + 0x240u) + 0x10u);
            wrf32d(r4 + 0x44u, f0);
            wrf32d(r4 + 0x48u, f0);
            r4 = rd32(rd32((u32)param_1 + 0x244u) + 0x10u);
            wrf32d(r4 + 0x44u, f0);
            wrf32d(r4 + 0x48u, f0);
            r3 = rd32(rd32((u32)param_1 + 0x248u) + 0x10u);
            wrf32d(r3 + 0x44u, f0);
            wrf32d(r3 + 0x48u, f0);
        }
    }
    return;
}
