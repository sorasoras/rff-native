#include "tc_rt.h"

void fn_80178594(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574fa4u);
    r0 = rd32((u32)param_1 + 0x64u);
    wrf32d((u32)param_1 + 0xf4u, (f64)rdf32(0x804890c8u));
    r0 = r0 | 0x70000000u;
    wrf32d((u32)param_1 + 0xf8u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0xfcu, (f64)rdf32(0x804890d0u));
    wr8((u32)param_1 + 0x1a6u, 0u);
    wrf32d((u32)param_1 + 0x1acu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x1b0u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x1b4u, (f64)rdf32(0x804890d0u));
    wr8((u32)param_1 + 0x1b8u, 0u);
    wr32((u32)param_1 + 0x1bcu, 0u);
    wrf32d((u32)param_1 + 0x1c8u, f0);
    wrf32d((u32)param_1 + 0x1ccu, f0);
    wrf32d((u32)param_1 + 0x1d0u, f0);
    wr8((u32)param_1 + 0x1b9u, 0u);
    wr32((u32)param_1 + 0x1c0u, 0u);
    wrf32d((u32)param_1 + 0x1d4u, f0);
    wrf32d((u32)param_1 + 0x1d8u, f0);
    wrf32d((u32)param_1 + 0x1dcu, f0);
    wr8((u32)param_1 + 0x1bau, 0u);
    wr32((u32)param_1 + 0x1c4u, 0u);
    wrf32d((u32)param_1 + 0x1e0u, f0);
    wrf32d((u32)param_1 + 0x1e4u, f0);
    wrf32d((u32)param_1 + 0x1e8u, f0);
    wr32((u32)param_1 + 0x64u, r0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80178da4u, &a);
    return;
}
