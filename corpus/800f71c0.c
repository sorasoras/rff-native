#include "tc_rt.h"

void fn_800f71c0(u32 param_1, s32 param_2)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(param_1, (u32)param_2);
    if ((u32)param_2 != 0u) {
        f0 = (f64)rdf32(0x80573bd0u);
        wrf32d((u32)param_2 + 0x14u, f0);
        wrf32d((u32)param_2 + 0x10u, f0);
        wrf32d((u32)param_2 + 0xcu, f0);
        wrf32d((u32)param_2 + 0x20u, f0);
        wrf32d((u32)param_2 + 0x1cu, f0);
        wrf32d((u32)param_2 + 0x18u, f0);
        wrf32d((u32)param_2 + 0x3cu, f0);
        wrf32d((u32)param_2 + 0x38u, f0);
        wrf32d((u32)param_2 + 0x34u, f0);
        wrf32d((u32)param_2 + 0x48u, f0);
        wrf32d((u32)param_2 + 0x44u, f0);
        wrf32d((u32)param_2 + 0x40u, f0);
        wrf32d((u32)param_2 + 0x64u, f0);
        wrf32d((u32)param_2 + 0x60u, f0);
        wrf32d((u32)param_2 + 0x5cu, f0);
        wrf32d((u32)param_2 + 0x70u, f0);
        wrf32d((u32)param_2 + 0x6cu, f0);
        wrf32d((u32)param_2 + 0x68u, f0);
        a.r[0] = (u32)param_2;
        a.r[1] = 0u;
        a.r[2] = 0x170u;
        (void)tc_call(0x8000443cu, &a);
        wr32((u32)param_2 + 0x164u, 0xffffffffu);
        wr32((u32)param_2 + 0x168u, 0xffffffffu);
        wr32((u32)param_2 + 0x16cu, 0u);
        wr32((u32)param_2 + 4u, 0u);
    }
    wr32(rd32(param_1), 0u);
    return;
}
