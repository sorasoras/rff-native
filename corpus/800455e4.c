#include "tc_rt.h"

void fn_800455e4(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80242ce0u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80242ce8u, &a);
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80243144u, &a);
    (void)tc_call(0x80249844u, &a);
    a.r[0] = 0x80045520u;
    a.r[1] = 0x800454e0u;
    (void)tc_call(0x80249734u, &a);
    f1 = tc_callf(0x8004553cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 3u;
    a.r[1] = 4u;
    a.r[2] = 0x80045504u;
    a.r[3] = 0x800454e0u;
    a.r[4] = 0x7d0000u;
    a.r[5] = 0x80335cc0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8004f0d4u, &a);
    a.r[0] = 0x80045550u;
    r3 = tc_call(0x802450d8u, &a);
    wr32(0x80571038u, r3);
    (void)tc_call(0x800455a8u, &a);
    return;
}
