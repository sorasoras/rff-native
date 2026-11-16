#include "tc_rt.h"

void fn_8028db44(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80577388u;
    a.r[1] = 0u;
    (void)tc_call(0x802a6020u, &a);
    f1 = tc_callf(0x8028d7a0u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x8029703cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802974b8u, &a);
    (void)tc_call(0x802903a4u, &a);
    r3 = tc_call(0x8029407cu, &a);
    if ((r3 & 0xffffu) == 0u) {
        wr32(0x8053d670u, 0x8028f764u);
        a.r[0] = 0x8053d668u;
        a.r[1] = 0u;
        a.r[2] = 0x3e8u;
        (void)tc_call(0x8028d76cu, &a);
    } else {
        wr8(0x8053d666u, 1u);
        wr32(0x8053d670u, 0x8028dbf4u);
        a.r[0] = 0x8053d668u;
        a.r[1] = 0u;
        a.r[2] = 0x1388u;
        (void)tc_call(0x8028d76cu, &a);
    }
    return;
}
