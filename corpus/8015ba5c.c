#include "tc_rt.h"

void fn_8015ba5c(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8015aaccu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x24u;
    } while ((s32)r30 < 10);
    f0 = (f64)rdf32(0x80574960u);
    wr32((u32)param_1 + 0x168u, 0u);
    wr32((u32)param_1 + 0x178u, 0u);
    wr32((u32)param_1 + 0x16cu, 0xffffffffu);
    wr32((u32)param_1 + 0x170u, 0u);
    wrf32d((u32)param_1 + 0x174u, f0);
    return;
}
