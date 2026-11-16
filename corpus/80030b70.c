#include "tc_rt.h"

void fn_80030b70(s32 param_1, s32 param_2, u32 param_r5)
{
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_r5;
    (void)tc_call(0x80030b04u, &a);
    wr8((u32)param_1 + 0x36u, 2u);
    f0 = (f64)rdf32(0x80571e40u);
    wr32((u32)param_1 + 0x48u, (u32)param_1 + 0x98u);
    wrf32d((u32)param_1 + 0x98u, (f64)rdf32((u32)param_2 + 0x2cu));
    wrf32d((u32)param_1 + 0x9cu, (f64)rdf32((u32)param_2 + 0x30u));
    wrf32d((u32)param_1 + 0xa0u, (f64)rdf32((u32)param_2 + 0x34u));
    wrf32d((u32)param_1 + 0xb4u, (f64)rdf32((u32)param_2 + 0x4cu));
    wrf32d((u32)param_1 + 0xb8u, (f64)rdf32((u32)param_2 + 0x50u));
    wrf32d((u32)param_1 + 0xbcu, (f64)rdf32((u32)param_2 + 0x54u));
    wrf32d((u32)param_1 + 0xa4u, (f64)rdf32((u32)param_2 + 0x3cu));
    wrf32d((u32)param_1 + 0xa8u, (f64)rdf32((u32)param_2 + 0x40u));
    wrf32d((u32)param_1 + 0xacu, (f64)rdf32((u32)param_2 + 0x44u));
    wrf32d((u32)param_1 + 0xb0u, (f64)rdf32((u32)param_2 + 0x48u));
    wr32((u32)param_1 + 0xc0u, 0u);
    wrf32d((u32)param_1 + 0xc4u, f0);
    return;
}
