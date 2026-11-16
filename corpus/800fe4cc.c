#include "tc_rt.h"

s32 fn_800fe4cc(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x14u;
    (void)tc_call(0x802ee6f0u, &a);
    f0 = (f64)rdf32(0x80573c30u);
    wr32((u32)param_1 + 8u, 0u);
    wrf32d((u32)param_1 + 0xcu, f0);
    wr16((u32)param_1 + 0x12u, 0u);
    wr16((u32)param_1 + 0x10u, 0u);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 0u;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0x28u, 0u);
    wr32((u32)param_1 + 0x24u, 0u);
    return param_1;
}
