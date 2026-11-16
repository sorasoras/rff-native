#include "tc_rt.h"

void fn_8030b728(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(0x805777b8u);
    f0 = (f64)rdf32(0x805777bcu);
    wr32((u32)param_1 + 0x8cu, param_2);
    wr32((u32)param_1 + 0x90u, param_3);
    wr32((u32)param_1 + 0x94u, param_4);
    wr32((u32)param_1 + 0x98u, param_5);
    wr8((u32)param_1 + 0xa2u, 0u);
    wr8((u32)param_1 + 0x9fu, 0u);
    wr8((u32)param_1 + 0xa0u, 0u);
    wr8((u32)param_1 + 0x9eu, 0u);
    wr8((u32)param_1 + 0xa1u, 0u);
    wrf32d((u32)param_1 + 0x100u, f1);
    wrf32d((u32)param_1 + 0x104u, f0);
    wrf32d((u32)param_1 + 0x108u, f1);
    wrf32d((u32)param_1 + 0xb0u, f1);
    wrf32d((u32)param_1 + 0xa8u, f0);
    wrf32d((u32)param_1 + 0xacu, f0);
    wr32((u32)param_1 + 0xb4u, 1u);
    wrf32d((u32)param_1 + 0xb8u, f1);
    wrf32d((u32)param_1 + 0xbcu, f1);
    wrf32d((u32)param_1 + 0xc0u, f0);
    wrf32d((u32)param_1 + 0xc4u, f0);
    wrf32d((u32)param_1 + 0xc8u, f0);
    wrf32d((u32)param_1 + 0xccu, f1);
    wrf32d((u32)param_1 + 0xdcu, f1);
    wrf32d((u32)param_1 + 0xecu, f0);
    wrf32d((u32)param_1 + 0xd0u, f1);
    wrf32d((u32)param_1 + 0xe0u, f1);
    wrf32d((u32)param_1 + 0xf0u, f0);
    wrf32d((u32)param_1 + 0xd4u, f1);
    wrf32d((u32)param_1 + 0xe4u, f1);
    wrf32d((u32)param_1 + 0xf4u, f0);
    wrf32d((u32)param_1 + 0xd8u, f1);
    wrf32d((u32)param_1 + 0xe8u, f1);
    wrf32d((u32)param_1 + 0xf8u, f0);
    wrf32d((u32)param_1 + 0xfcu, f1);
    wr8((u32)param_1 + 0xa3u, 0u);
    wr32((u32)param_1 + 0x10cu, 0u);
    wr32((u32)param_1 + 0x110u, 0u);
    return;
}
