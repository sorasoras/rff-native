#include "tc_rt.h"

u32 fn_800f7018(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0;
    r0 = rd32((u32)param_1 + 0x154u);
    if ((s32)r0 < 16) {
        r0 = r0 * 0xcu;
        r5 = (u32)param_1 + r0;
        wrf32d(r5 + 0x88u, (f64)rdf32(param_2));
        wrf32d(r5 + 0x8cu, (f64)rdf32(param_2 + 4u));
        wrf32d(r5 + 0x90u, (f64)rdf32(param_2 + 8u));
        r0 = rd32((u32)param_1 + 0x154u) + 1u;
        wr32((u32)param_1 + 0x154u, r0);
        r0 = r0 * 0xcu;
        r5 = (u32)param_1 + r0;
        wrf32d(r5 + 0x88u, (f64)rdf32(param_2));
        wrf32d(r5 + 0x8cu, (f64)rdf32(param_2 + 4u));
        wrf32d(r5 + 0x90u, (f64)rdf32(param_2 + 8u));
        return rd32((u32)param_1 + 0x154u);
    }
    return 0x10u;
}
