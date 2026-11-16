#include "tc_rt.h"

void fn_80083e44(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    f1 = (f64)rdf32(0x805728f4u);
    f2 = (f64)rdf32(0x805728f0u);
    f0 = (f64)rdf32(0x805728f8u);
    wr32((u32)param_1 + 0x70u, 0u);
    wrf32d((u32)param_1 + 0x40u, f2);
    wrf32d((u32)param_1 + 0x50u, f1);
    wrf32d((u32)param_1 + 0x60u, f1);
    wrf32d((u32)param_1 + 0x44u, f1);
    wrf32d((u32)param_1 + 0x54u, f2);
    wrf32d((u32)param_1 + 0x64u, f1);
    wrf32d((u32)param_1 + 0x48u, f1);
    wrf32d((u32)param_1 + 0x58u, f1);
    wrf32d((u32)param_1 + 0x68u, f2);
    wrf32d((u32)param_1 + 0x4cu, f1);
    wrf32d((u32)param_1 + 0x5cu, f1);
    wrf32d((u32)param_1 + 0x6cu, f1);
    wr32((u32)param_1 + 0x84u, 0xffffffffu);
    wr32((u32)param_1 + 0x80u, 0u);
    wrf32d((u32)param_1 + 0x74u, f1);
    wr32((u32)param_1 + 0x78u, 0u);
    wr32((u32)param_1 + 0x88u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x8cu, f2);
    wr32((u32)param_1 + 0x94u, 0u);
    wr32((u32)param_1 + 0x98u, 0xffffffffu);
    wrf32d((u32)param_1 + 0x9cu, f0);
    wrf32d((u32)param_1 + 0xa0u, f2);
    return;
}
