#include "tc_rt.h"

void fn_8015d1ec(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0x4acu, 0u);
    wr32((u32)param_1 + 0x480u, 0u);
    f1 = tc_callf(0x800d339cu, &a);
    f0 = (f64)rdf32(0x805749e8u);
    wrf32d((u32)param_1 + 0x490u, f1);
    wrf32d((u32)param_1 + 0x494u, f0);
    wrf32d((u32)param_1 + 0x498u, f0);
    wrf32d((u32)param_1 + 0x49cu, f0);
    wrf32d((u32)param_1 + 0x4a0u, f0);
    wr32((u32)param_1 + 0x478u, 0xffffffffu);
    wr32((u32)param_1 + 0x474u, 0u);
    wr32((u32)param_1 + 0x470u, 1u);
    wr32((u32)param_1 + 0x4a4u, 0u);
    wr32((u32)param_1 + 0x4a8u, 0u);
    wr32((u32)param_1 + 0x4b4u, 1u);
    wr32((u32)param_1 + 0x4b8u, 0u);
    return;
}
