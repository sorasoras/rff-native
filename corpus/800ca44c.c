#include "tc_rt.h"

void fn_800ca44c(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xacu;
    a.r[1] = param_2;
    (void)tc_call(0x800cb5f4u, &a);
    f1 = (f64)rdf32(param_2 + 4u);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d((u32)param_1 + 4u, (f64)rdf32(param_2));
    wrf32d((u32)param_1 + 8u, f1);
    wrf32d((u32)param_1 + 0xcu, f0);
    return;
}
