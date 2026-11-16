#include "tc_rt.h"

void fn_801a1e2c(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xd00u, 0u);
    wr32((u32)param_1 + 0xd04u, 0u);
    wr32((u32)param_1 + 0xd08u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800a9284u, &a);
    f3 = (f64)rdf32((u32)param_1 + 0x17cu);
    f2 = (f64)rdf32((u32)param_1 + 0x180u);
    f1 = (f64)rdf32((u32)param_1 + 0x184u);
    wr32((u32)param_1 + 0xcfcu, (u32)param_2);
    f0 = (f64)rdf32(0x80575868u);
    wrf32d((u32)param_1 + 0xd0cu, f3);
    wrf32d((u32)param_1 + 0xd10u, f2);
    wrf32d((u32)param_1 + 0xd14u, f1);
    wrf32d((u32)param_1 + 0x17cu, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x180u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x184u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x170u, (f64)rdf32(0x804890c8u));
    wrf32d((u32)param_1 + 0x174u, (f64)rdf32(0x804890ccu));
    wrf32d((u32)param_1 + 0x178u, (f64)rdf32(0x804890d0u));
    wrf32d((u32)param_1 + 0x188u, f0);
    wrf32d((u32)param_1 + 0x18cu, f0);
    if (param_2 >= 0 && param_2 < 18) {
        r0 = (u32)param_2 * 0xcu;
        r6 = r0 - 0x7fc8f0f0u;
        r5 = rd32(r0 - 0x7fc8f0f0u);
        r0 = rd32(r6 + 4u);
        wr32((u32)param_1 + 0xdc4u, r5);
        wr32((u32)param_1 + 0xdc8u, r0);
        wr32((u32)param_1 + 0xdccu, rd32(r6 + 8u));
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802558bcu, &a);
    }
    return;
}
