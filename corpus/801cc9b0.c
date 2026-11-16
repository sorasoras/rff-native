#include "tc_rt.h"

void fn_801cc9b0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x800a8e24u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x801ccb88u, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x801ccc2cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            a.r[0] = param_1;
            f1 = tc_callf(0x801ccd3cu, &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        wrf32d(param_3, (f64)(f32)((f64)rdf32(param_1 + 0xd14u) + f1));
        a.r[0] = param_1;
        f1 = tc_callf(0x801ccb94u, &a);
        r4 = tc_lastr4();
        r30 = 0u;
        r31 = 0u;
        do {
            r3 = rd32(rd32(param_1 + 0x324u) + r31);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0xcu), &a);
            r4 = tc_lastr4();
            r30 = r30 + 1u;
            r31 = r31 + 4u;
        } while (r30 < 0xau);
    }
    return;
}
