#include "tc_rt.h"

u32 fn_800412e8(void)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8003c9d0u, &a);
    wr32(0x8034f7f4u, r3);
    r3 = tc_call(0x80047138u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 6u) {
        f1 = tc_callf(0x8004197cu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80335c20u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80335be8u;
        a.r[1] = 0x127u;
        a.r[2] = 0x80335c37u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x802285e4u, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = 0x8034f7c0u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(((rd32(0x8034f808u) << 2u) & 0xfffffffcu) - 0x7fcb0840u), &a);
    (void)tc_call(0x8003abc0u, &a);
    r3 = rd32(0x8034f808u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
