#include "tc_rt.h"

void fn_80070170(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x4cu, param_2);
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x80031be0u, &a);
    f2 = (f64)rdf32(param_4);
    f1 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    wr32((u32)param_1 + 0x60u, r3);
    wrf32d((u32)param_1 + 0x50u, f2);
    wrf32d((u32)param_1 + 0x54u, f1);
    wrf32d((u32)param_1 + 0x58u, f0);
    return;
}
