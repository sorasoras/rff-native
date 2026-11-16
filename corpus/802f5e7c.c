#include "tc_rt.h"

void fn_802f5e7c(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0;
    f4 = (f64)rdf32(0x805775acu);
    f0 = (f64)rdf32(0x805775a8u);
    wr32((u32)param_1 + 0x7cu, 0u);
    wr8((u32)param_1 + 0x80u, 0u);
    wr8((u32)param_1 + 0x78u, 0u);
    wr8((u32)param_1 + 0x79u, 0u);
    wr8((u32)param_1 + 0x7au, 0u);
    wr8((u32)param_1 + 0x7bu, 0u);
    wr32((u32)param_1 + 0x84u, 0u);
    wr32((u32)param_1 + 0x88u, 0u);
    wrf32d((u32)param_1 + 0x58u, f4);
    wrf32d((u32)param_1 + 0x5cu, f4);
    wr32((u32)param_1 + 0x60u, 0u);
    wr32((u32)param_1 + 0x64u, 0u);
    wrf32d((u32)param_1 + 0x68u, f0);
    wrf32d((u32)param_1 + 0x6cu, f0);
    wr32((u32)param_1 + 0x70u, 0u);
    wr32((u32)param_1 + 0x74u, 0u);
    r5 = rd32((u32)param_1 + 0x10u);
    f1 = (f64)rdf32(0x805775a8u);
    r4 = 1u;
    f0 = (f64)rdf32(0x805775acu);
    wrf32d((u32)param_1 + 0x58u, f4);
    wrf32d((u32)param_1 + 0x5cu, f1);
    wr32((u32)param_1 + 0x60u, 1u);
    wr32((u32)param_1 + 0x64u, 0u);
    wrf32d((u32)param_1 + 0xa4u, f1);
    wrf32d((u32)param_1 + 0xb0u, f1);
    wrf32d((u32)param_1 + 0xa8u, f0);
    wrf32d((u32)param_1 + 0xacu, f0);
    wrf32d((u32)param_1 + 0x94u, f1);
    wrf32d((u32)param_1 + 0x98u, f1);
    wr32((u32)param_1 + 0x9cu, 0u);
    wr32((u32)param_1 + 0xa0u, 0u);
    wrf32d((u32)param_1 + 0xb4u, f0);
    if (r5 != 0u) {
        r4 = rd32(r5 + 0x34u);
    }
    f0 = (f64)rdf32(0x805775acu);
    f1 = (f64)rdf32(0x805775a8u);
    wr32((u32)param_1 + 0xb8u, r4);
    wrf32d((u32)param_1 + 0xbcu, f1);
    wrf32d((u32)param_1 + 0xc0u, f0);
    wrf32d((u32)param_1 + 0xc4u, f0);
    wrf32d((u32)param_1 + 0xc8u, f0);
    wrf32d((u32)param_1 + 0xccu, f0);
    wrf32d((u32)param_1 + 0xd0u, f1);
    wrf32d((u32)param_1 + 0xd4u, f1);
    wrf32d((u32)param_1 + 0xd8u, f1);
    wrf32d((u32)param_1 + 0xdcu, f1);
    wrf32d((u32)param_1 + 0x30u, f1);
    wrf32d((u32)param_1 + 0x34u, f1);
    wrf32d((u32)param_1 + 0x38u, f0);
    wrf32d((u32)param_1 + 0x3cu, f0);
    wrf32d((u32)param_1 + 0x40u, f0);
    wrf32d((u32)param_1 + 0x44u, f0);
    wr32((u32)param_1 + 0x48u, 0u);
    return;
}
