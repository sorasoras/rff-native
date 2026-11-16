#include "tc_rt.h"

void fn_8020bf8c(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1;
    (void)tc_call(0x8020c058u, &a);
    f0 = (f64)rdf32(0x805767a8u);
    wr32((u32)param_1 + 8u, 0xffffffffu);
    wrf32d((u32)param_1 + 4u, f0);
    wr32((u32)param_1 + 0xcu, 8u);
    return;
}
