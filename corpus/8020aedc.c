#include "tc_rt.h"

void fn_8020aedc(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80576770u);
    wr32((u32)param_1 + 0xcu, 0u);
    wrf32d((u32)param_1 + 8u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8020b3c4u, &a);
    r3 = rd32((u32)param_1 + 0x10u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32((u32)param_1 + 0x10u, 0u);
    }
    return;
}
