#include "tc_rt.h"

void fn_801cea10(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x801ce388u, &a);
    f0 = (f64)rdf32(0x80575ee0u);
    wr32((u32)param_1 + 0xd04u, 0xau);
    wrf32d((u32)param_1 + 0x1cu, f0);
    wrf32d((u32)param_1 + 0x20u, f0);
    wrf32d((u32)param_1 + 0x24u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801ccd3cu, &a);
    return;
}
