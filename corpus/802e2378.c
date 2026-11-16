#include "tc_rt.h"

s32 fn_802e2378(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802e0a3cu, &a);
    f0 = (f64)rdf32(0x80577444u);
    f1 = (f64)rdf32(0x80577440u);
    wrf32d((u32)param_1 + 0x50u, f0);
    wrf32d((u32)param_1 + 0x4cu, f1);
    wrf32d((u32)param_1 + 0x54u, f0);
    wr32((u32)param_1 + 0x58u, 4u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 0x80571d24u);
    return param_1;
}
