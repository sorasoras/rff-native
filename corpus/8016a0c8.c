#include "tc_rt.h"

void fn_8016a0c8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = rd32(param_2 + 0x100u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1d0u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    do {
        if (r29 != r3) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x1d4u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r29 != r3) break;
        }
        r31 = 0u;
        a.r[0] = param_2;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1b8u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r29 == r3) {
            r31 = 1u;
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
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
        r29 = rd32(param_2 + 0x100u);
        r31 = 0u;
        a.r[0] = param_2;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1b8u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r29 == r3) {
            r31 = 1u;
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x1bcu), &a);
            f1 = tc_lastf();
            if (r29 == r3) {
                r31 = 1u;
            }
        }
        if (r31 == 0u) {
            a.r[0] = param_2 + 0x428u;
            f1 = tc_callf(0x8014ca78u, &a);
        }
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
    return;
}
