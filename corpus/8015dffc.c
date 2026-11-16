#include "tc_rt.h"

void fn_8015dffc(s32 param_1, s32 param_2)
{
    u32 r5 = 0;
    if ((u32)param_2 != 0u) {
        wrf32d(rd32((u32)param_1 + 0x78u) + 0x58u, (f64)rdf32(0x80574a14u));
    } else {
        wrf32d(rd32((u32)param_1 + 0x78u) + 0x58u, (f64)rdf32(0x80574a18u));
        r5 = rd32((u32)param_1 + 0x78u);
        wrf32d(r5 + 0x54u, (f64)rdf32(rd32(r5 + 0x48u) + 0x18u));
    }
    wr32((u32)param_1 + 0x14cu, 0u);
    return;
}
