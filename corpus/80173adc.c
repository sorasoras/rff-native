#include "tc_rt.h"

void fn_80173adc(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574e78u);
    wr32((u32)param_1 + 0x144u, 0u);
    wrf32d((u32)param_1 + 0x148u, f0);
    wrf32d((u32)param_1 + 0x14cu, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c9ee4u, &a);
    return;
}
