#include "tc_rt.h"

void fn_80085568(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r9 = 0;
    r3 = (u32)param_1;
    r9 = (u32)param_1;
    ctr = 0xcu;
    do {
        wr32(r9 + 0x2294u, 0u);
        wr32(r9 + 0x2298u, 0x40u);
        wr32(r9 + 0x229cu, 0xffffffffu);
        wrf32d(r9 + 0x22a0u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22a4u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22a8u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22acu, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22b0u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22b4u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22b8u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22bcu, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22c0u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22c4u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22c8u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22ccu, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22d0u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22d4u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22d8u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22dcu, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22e0u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22e4u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22e8u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22ecu, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22f0u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x22f4u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x22f8u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x22fcu, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x2300u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x2304u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x2308u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x230cu, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x2310u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x2314u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x2318u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x231cu, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x2320u, (f64)rdf32(0x804890d0u));
        wrf32d(r9 + 0x2324u, (f64)rdf32(0x804890c8u));
        wrf32d(r9 + 0x2328u, (f64)rdf32(0x804890ccu));
        wrf32d(r9 + 0x232cu, (f64)rdf32(0x804890d0u));
        r9 = r9 + 0xa8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    ctr = 0x14u;
    do {
        wr32(r3 + 0x2a74u, 0u);
        wrf32d(r3 + 0x2a7cu, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2a80u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2a84u, (f64)rdf32(0x804890d0u));
        wrf32d(r3 + 0x2a88u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2a8cu, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2a90u, (f64)rdf32(0x804890d0u));
        wrf32d(r3 + 0x2a94u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2a98u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2a9cu, (f64)rdf32(0x804890d0u));
        wr32(r3 + 0x2aa0u, 0u);
        wrf32d(r3 + 0x2aa8u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2aacu, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2ab0u, (f64)rdf32(0x804890d0u));
        wrf32d(r3 + 0x2ab4u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2ab8u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2abcu, (f64)rdf32(0x804890d0u));
        wrf32d(r3 + 0x2ac0u, (f64)rdf32(0x804890c8u));
        wrf32d(r3 + 0x2ac4u, (f64)rdf32(0x804890ccu));
        wrf32d(r3 + 0x2ac8u, (f64)rdf32(0x804890d0u));
        r3 = r3 + 0x58u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
