#include "tc_rt.h"

void fn_802b5300(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x802b6154u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80545c50u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0xa0001u;
        a.r[1] = 0x80397df0u;
        a.r[2] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc6cu, &a);
    } else {
        if ((u32)rd8(0x80545c50u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0003u;
            a.r[1] = 0x80397e20u;
            a.r[2] = param_1;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x8028cc6cu, &a);
            r4 = tc_lastr4();
        }
        r12 = rd32(r31 + 0x414u);
        if (r12 != 0u) {
            a.r[0] = (u32)rd16(r31 + 0x472u);
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x802b6258u, &a);
    }
    return;
}
