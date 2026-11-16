#include "tc_rt.h"

void fn_8015be1c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 0u;
    a.r[2] = 0x400u;
    (void)tc_call(0x8000443cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800d30c4u, &a);
    f1 = (f64)rdf32(0x805749a8u);
    f0 = (f64)rdf32(0x805749acu);
    wrf32d((u32)param_1 + 0x42cu, f1);
    wrf32d((u32)param_1 + 0x430u, f1);
    wrf32d((u32)param_1 + 0x434u, f1);
    wr32((u32)param_1 + 0x454u, 0u);
    wr32((u32)param_1 + 0x438u, 0u);
    wrf32d((u32)param_1 + 0x43cu, f0);
    wrf32d((u32)param_1 + 0x440u, f1);
    wr32((u32)param_1 + 0x448u, 0u);
    wr32((u32)param_1 + 0x444u, 0u);
    wr32((u32)param_1 + 0x450u, 0u);
    wrf32d((u32)param_1 + 0x458u, f1);
    return;
}
