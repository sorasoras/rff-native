#include "tc_rt.h"

void fn_80194c48(void)
{
    TcArgs a = {0};
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    (void)tc_call(0x801e6900u, &a);
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x804d910cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x80195ce8u, &a);
    return;
}
