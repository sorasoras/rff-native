#include "tc_rt.h"

void fn_8016a3f8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    r30 = rd32(param_2 + 0x100u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1b8u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r30 == r3) {
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
        if (r30 == r3) {
            r31 = 1u;
        }
    }
    if (r31 == 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x1b8u), &a);
        a.f[0] = (f64)rdf32(0x80574c70u);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    }
    return;
}
