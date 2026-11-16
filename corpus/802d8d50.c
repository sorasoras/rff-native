#include "tc_rt.h"

s32 fn_802d8d50(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802d5e28u, &a);
    f0 = (f64)rdf32(0x80348b00u);
    wrf32d((u32)param_1 + 0x4cu, f0);
    wrf32d((u32)param_1 + 0x50u, f0);
    wr32((u32)param_1 + 0x54u, 4u);
    wr32((u32)param_1 + 0x58u, 0u);
    wr32((u32)param_1 + 0x5cu, 0x8054754cu);
    return param_1;
}
