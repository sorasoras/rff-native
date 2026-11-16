#include "tc_rt.h"

void fn_80052770(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x803ca428u;
    a.r[1] = 0u;
    (void)tc_call(0x80079ac4u, &a);
    a.r[0] = 0x803ca648u;
    a.r[1] = 1u;
    (void)tc_call(0x80079ac4u, &a);
    r3 = tc_call(0x80052c3cu, &a);
    a.r[0] = r3;
    a.r[1] = 0x803ca428u;
    (void)tc_call(0x800cb960u, &a);
    r3 = tc_call(0x80052c3cu, &a);
    a.r[0] = r3;
    a.r[1] = 0x803ca648u;
    (void)tc_call(0x800cb970u, &a);
    r4 = 0x803c91d0u;
    f2 = (f64)rdf32(0x80572268u);
    f1 = (f64)rdf32(0x805722a4u);
    f0 = (f64)rdf32(0x805722a8u);
    ctr = 5u;
    do {
        wr16(r4 + 0xcu, 0u);
        wr32(r4 + 0x90u, 0u);
        wrf32d(r4, f2);
        wrf32d(r4 + 4u, f2);
        wrf32d(r4 + 8u, f1);
        wrf32d(r4 + 0x98u, f0);
        wr16(r4 + 0xa8u, 0u);
        wr32(r4 + 0x12cu, 0u);
        wrf32d(r4 + 0x9cu, f2);
        wrf32d(r4 + 0xa0u, f2);
        wrf32d(r4 + 0xa4u, f1);
        wrf32d(r4 + 0x134u, f0);
        wr16(r4 + 0x144u, 0u);
        wr32(r4 + 0x1c8u, 0u);
        wrf32d(r4 + 0x138u, f2);
        wrf32d(r4 + 0x13cu, f2);
        wrf32d(r4 + 0x140u, f1);
        wrf32d(r4 + 0x1d0u, f0);
        wr16(r4 + 0x1e0u, 0u);
        wr32(r4 + 0x264u, 0u);
        wrf32d(r4 + 0x1d4u, f2);
        wrf32d(r4 + 0x1d8u, f2);
        wrf32d(r4 + 0x1dcu, f1);
        wrf32d(r4 + 0x26cu, f0);
        wr16(r4 + 0x27cu, 0u);
        wr32(r4 + 0x300u, 0u);
        wrf32d(r4 + 0x270u, f2);
        wrf32d(r4 + 0x274u, f2);
        wrf32d(r4 + 0x278u, f1);
        wrf32d(r4 + 0x308u, f0);
        wr16(r4 + 0x318u, 0u);
        wr32(r4 + 0x39cu, 0u);
        wrf32d(r4 + 0x30cu, f2);
        wrf32d(r4 + 0x310u, f2);
        wrf32d(r4 + 0x314u, f1);
        wrf32d(r4 + 0x3a4u, f0);
        r4 = r4 + 0x3a8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(0x805710ccu, 0u);
    return;
}
