#include "tc_rt.h"

void fn_8023a598(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x804e5e88u, param_1);
    r3 = tc_call(0x8023029cu, &a);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
    f1 = tc_callf(0x80255b5cu, &a);
    wr32(0x804e5e8cu, tc_lastr4());
    wr32(0x80571660u, param_2);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x8023a508u;
    a.r[7] = 0u;
    (void)tc_call(0x8023cc3cu, &a);
    return;
}
