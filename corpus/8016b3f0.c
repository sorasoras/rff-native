#include "tc_rt.h"

void fn_8016b3f0(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_2;
    (void)tc_call(0x800b334cu, &a);
    a.r[0] = param_2;
    a.r[1] = rd32(0x804863d8u);
    f1 = tc_callf(0x800b32d0u, &a);
    r29 = rd32(param_2 + 0x100u);
    r30 = 0u;
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x1d0u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    do {
        if (r29 != r3) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x1d4u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r29 != r3) break;
        }
        r31 = 0u;
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1b8u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r29 == r3) {
            r31 = 1u;
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x1bcu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r29 == r3) {
                r31 = 1u;
            }
        }
        if (r31 == 0u) {
            r30 = 1u;
        }
    } while (0);
    if (r30 == 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1d0u), &a);
        a.f[0] = (f64)rdf32(0x80574c70u);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        f1 = tc_callf(0x800b5248u, &a);
        r4 = tc_lastr4();
    }
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdfe8u, r3);
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x8014995cu, &a);
    wrf32d(param_2 + 0xd50u, f1);
    wr32(param_2 + 0x1610u, 0u);
    return;
}
