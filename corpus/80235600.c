#include "tc_rt.h"

void fn_80235600(void)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0u;
    f1 = tc_callf(0x8023c15cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = 0x802354dcu;
    a.r[7] = 0u;
    (void)tc_call(0x8023c168u, &a);
    wr32(0x80571634u, 0u);
    wr32(0x805715d4u, 0u);
    return;
}
