#include "tc_rt.h"

void fn_8030a5c8(s32 param_1)
{
    u32 ctr = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802f5e7cu, &a);
    f6 = (f64)rdf32(0x805777a8u);
    r6 = 0u;
    f0 = (f64)rdf32(0x805777acu);
    ctr = 4u;
    do {
        wrf32d(r31 + 0xe3cu, f6);
        wrf32d(r31 + 0xe40u, f6);
        wr32(r31 + 0xe44u, 0u);
        wr32(r31 + 0xe48u, 0u);
        wrf32d(r31 + 0xe3cu, (f64)rdf32(r31 + 0xe40u));
        wrf32d(r31 + 0xe40u, f0);
        wr32(r31 + 0xe44u, 1u);
        wr32(r31 + 0xe48u, 0u);
        wrf32d(r31 + 0xe4cu, f6);
        wrf32d(r31 + 0xe50u, f6);
        wr32(r31 + 0xe54u, 0u);
        wr32(r31 + 0xe58u, 0u);
        wrf32d(r31 + 0xe4cu, (f64)rdf32(r31 + 0xe50u));
        r6 = r6 + 1u;
        wrf32d(r31 + 0xe50u, f0);
        wr32(r31 + 0xe54u, 1u);
        wr32(r31 + 0xe58u, 0u);
        r31 = r31 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
