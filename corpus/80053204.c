#include "tc_rt.h"

void fn_80053204(void)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x41u;
    a.r[1] = 0u;
    (void)tc_call(0x80054098u, &a);
    (void)tc_call(0x80053318u, &a);
    wr32(0x805710e8u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8004e22cu, &a);
    wr32(0x805710ecu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8003d790u, &a);
    a.r[0] = 0x803d2678u;
    (void)tc_call(0x80057550u, &a);
    wr32(0x805710e0u, 0u);
    wr32(0x805710e4u, 0u);
    r3 = tc_call(0x8003ced8u, &a);
    if (r3 == 1u) {
        f0 = (f64)rdf32(0x805722b0u);
        r0 = rd32(0x805710e0u) * 0x6d0u;
        wr32(0x80571100u, 1u);
        wrf32d(r0 - 0x7fc2e65cu, f0);
    } else {
        f0 = (f64)rdf32(0x805722b4u);
        r0 = rd32(0x805710e0u) * 0x6d0u;
        wr32(0x80571100u, 0u);
        wrf32d(r0 - 0x7fc2e65cu, f0);
    }
    return;
}
