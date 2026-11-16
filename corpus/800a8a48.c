#include "tc_rt.h"

void fn_800a8a48(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572b78u);
    wr32((u32)param_1 + 0x2b0u, 0u);
    wr32((u32)param_1 + 0x2b8u, 0u);
    wr32((u32)param_1 + 0x2b4u, 0u);
    wr32((u32)param_1 + 0x2bcu, 0u);
    wrf32d((u32)param_1 + 0x2e4u, f0);
    wrf32d((u32)param_1 + 0x2e0u, f0);
    wrf32d((u32)param_1 + 0x2dcu, f0);
    wrf32d((u32)param_1 + 0x2d8u, f0);
    wr32((u32)param_1 + 0x2e8u, 0u);
    wrf32d((u32)param_1 + 0x2f0u, f0);
    wrf32d((u32)param_1 + 0x2ecu, f0);
    wr32((u32)param_1 + 0x2f4u, 0u);
    wr32((u32)param_1 + 0x2f8u, 0u);
    wr32((u32)param_1 + 0x2fcu, 0u);
    wr32((u32)param_1 + 0x2c0u, 0u);
    wr32((u32)param_1 + 0x2c4u, 0u);
    wr32((u32)param_1 + 0x2c8u, 0u);
    wr32((u32)param_1 + 0x2ccu, 0u);
    wr32((u32)param_1 + 0x2d4u, 0u);
    wr32((u32)param_1 + 0x2d0u, 0u);
    wr32((u32)param_1 + 0x304u, 0u);
    return;
}
