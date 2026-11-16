#include "tc_rt.h"

void fn_8017f998(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x80u);
    a.r[1] = 1u;
    (void)tc_call(0x8017fde4u, &a);
    wr32((u32)param_1 + 0x80u, 1u);
    a.r[0] = 1u;
    a.r[1] = 1u;
    (void)tc_call(0x8017fdc8u, &a);
    f2 = (f64)rdf32(param_2 + 4u);
    f1 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(0x80575058u);
    wrf32d((u32)param_1 + 0x9cu, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 0xa0u, f2);
    wrf32d((u32)param_1 + 0xa4u, f1);
    wrf32d((u32)param_1 + 0xa8u, f0);
    return;
}
