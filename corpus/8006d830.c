#include "tc_rt.h"

void fn_8006d830(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8006c8c4u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    (void)tc_call(0x8006cbb0u, &a);
    wrf32d((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb66e54u, (f64)rdf32(0x805725d8u));
    return;
}
