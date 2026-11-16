#include "tc_rt.h"

void fn_80041274(u32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80045d50u, &a);
    if (rd32(0x8034f7ecu) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80335be8u;
        a.r[1] = 0x116u;
        a.r[2] = 0x80335c0du;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802285e4u, &a);
    }
    wr32(0x8034f7ecu, param_1);
    wr32(0x8034f7f0u, param_2);
    return;
}
