#include "tc_rt.h"

s32 fn_80157d94(s32 param_1)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80320f84u, &a);
    f0 = (f64)rdf32(0x80574910u);
    wr32((u32)param_1 + 8u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x30u, f0);
    wrf32d((u32)param_1 + 0x2cu, f0);
    wrf32d((u32)param_1 + 0x28u, f0);
    wrf32d((u32)param_1 + 0x44u, f0);
    wrf32d((u32)param_1 + 0x40u, f0);
    wrf32d((u32)param_1 + 0x3cu, f0);
    wrf32d((u32)param_1 + 0x50u, f0);
    wrf32d((u32)param_1 + 0x4cu, f0);
    wrf32d((u32)param_1 + 0x48u, f0);
    wr32((u32)param_1 + 0x10u, 0xffffffffu);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_1 + 0x14u, 0xffffffffu);
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x1cu, 0u);
    wr32((u32)param_1 + 0x20u, 0xffffffffu);
    wr32((u32)param_1 + 0x24u, 0u);
    return param_1;
}
