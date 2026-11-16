#include "tc_rt.h"

s32 fn_8030111c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80577758u);
    f0 = (f64)rdf32(0x8057775cu);
    wrf32d((u32)param_1 + 0x30u, f1);
    wrf32d((u32)param_1 + 0x34u, f1);
    wrf32d((u32)param_1 + 0x38u, f1);
    wrf32d((u32)param_1 + 0x3cu, f1);
    wrf32d((u32)param_1 + 0x40u, f1);
    wrf32d((u32)param_1 + 0x44u, f1);
    wrf32d((u32)param_1 + 0x48u, f0);
    wrf32d((u32)param_1 + 0x4cu, f0);
    wrf32d((u32)param_1 + 0x50u, f0);
    wr32((u32)param_1 + 0x54u, 0u);
    wr8((u32)param_1 + 0x58u, 1u);
    wr32((u32)param_1 + 0x5cu, 0u);
    wr32((u32)param_1 + 0x60u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802f00a4u, &a);
    return param_1;
}
