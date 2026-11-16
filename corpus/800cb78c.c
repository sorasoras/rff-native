#include "tc_rt.h"

s32 fn_800cb78c(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80572f78u);
    wr32((u32)param_1 + 0x10a4u, 0x803557c4u);
    wrf32d((u32)param_1 + 0x14u, f0);
    wrf32d((u32)param_1 + 0x10u, f0);
    wrf32d((u32)param_1 + 0xcu, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wrf32d((u32)param_1 + 0x18u, f0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800cb950u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800cb960u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800cb970u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800cb808u, &a);
    return param_1;
}
