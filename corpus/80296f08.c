#include "tc_rt.h"

void fn_80296f08(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x8053efd0u, 0x8053e02cu);
    a.r[0] = 0x8053dfb0u;
    a.r[1] = 0u;
    a.r[2] = 0x1020u;
    f1 = tc_callf(0x8000443cu, &a);
    wr16(0x8053dfc8u, 1u);
    r3 = rd32(0x8053efd0u);
    wr16(0x8053dfccu, 2u);
    wr16(0x8053dfd0u, 0x1002u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0xfa0u;
    a.r[2] = 1u;
    a.r[3] = 0x8053dfccu;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x802b1b2cu, &a);
    return;
}
