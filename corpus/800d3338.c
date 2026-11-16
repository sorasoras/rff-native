#include "tc_rt.h"

void fn_800d3338(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d33a4u, &a);
    if (r3 != 0u) {
        wr32((u32)param_1 + 0x28u, rd32((u32)param_1 + 0x28u) | 0x80000000u);
    } else {
        if ((f64)rdf32((u32)param_1 + 0x1cu) < (f64)rdf32(0x80573124u)) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d3188u, &a);
        }
        wrf32d((u32)param_1 + 4u, (f64)rdf32(0x80573128u));
    }
    return;
}
