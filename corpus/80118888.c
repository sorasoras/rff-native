#include "tc_rt.h"

void fn_80118888(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574198u);
    wr32((u32)param_1 + 0xb0u, 0u);
    wrf32d((u32)param_1 + 0xb4u, f0);
    wrf32d((u32)param_1 + 0xb8u, f0);
    wr32((u32)param_1 + 0xacu, 4u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80083e44u, &a);
    return;
}
