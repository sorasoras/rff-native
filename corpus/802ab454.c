#include "tc_rt.h"

u32 fn_802ab454(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x802966a4u, &a);
    f1 = tc_lastf();
    r4 = (u32)rd8(r3);
    wr32((u32)param_1 + 4u, 3u);
    r31 = (r4 >> 5u) & 1u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x2au;
    r3 = tc_call(0x80297a6cu, &a);
    if (r3 != 0u) {
        r5 = (u32)rd8(r3 + 0xbu);
        r6 = (u32)rd8(r3 + 0xdu);
        r7 = (u32)rd16(r3) | 0x8000u;
    } else {
        r5 = 1u;
        r6 = 0u;
        r7 = 0u;
    }
    a.r[0] = (u32)param_1 + 0x2au;
    a.r[1] = 0x18u;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r31;
    r3 = tc_call(0x8029fcf4u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u) {
        if ((u32)rd8(0x80540a20u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80000u;
            a.r[1] = 0x80396ba8u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802a98acu, &a);
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 2u;
        a.r[2] = 0x3cu;
        (void)tc_call(0x8028d220u, &a);
        r3 = 1u;
    }
    return r3;
}
