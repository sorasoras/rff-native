#include "tc_rt.h"

s32 fn_800fe444(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802e5818u, &a);
    a.r[0] = (u32)param_1 + 0x20u;
    (void)tc_call(0x802ed980u, &a);
    a.r[0] = (u32)param_1 + 0xd8u;
    a.r[1] = 0x803391c8u;
    (void)tc_call(0x8025bd34u, &a);
    f0 = (f64)rdf32(0x80573c30u);
    r0 = (u32)rd8((u32)param_1 + 0x70u) | 0x10u;
    wr32((u32)param_1 + 0xfcu, 0u);
    wr32((u32)param_1 + 0xb4u, 0u);
    wr32((u32)param_1 + 0xb8u, 0u);
    wrf32d((u32)param_1 + 0xbcu, f0);
    wr32((u32)param_1 + 0xc0u, 0u);
    wr32((u32)param_1 + 0xc4u, 0u);
    wr32((u32)param_1 + 0xc8u, 0u);
    wr32((u32)param_1 + 0xccu, 0u);
    wr32((u32)param_1 + 0xd0u, 0u);
    wr32((u32)param_1 + 0xd4u, 0u);
    wr32((u32)param_1 + 0xf8u, 0u);
    wr8((u32)param_1 + 0x70u, (u8)r0);
    return param_1;
}
