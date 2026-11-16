#include "tc_rt.h"

void fn_802ab69c(void)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x80541208u;
    a.r[1] = 0u;
    a.r[2] = 0x418u;
    f1 = tc_callf(0x8000443cu, &a);
    wr8(0x8054126du, 1u);
    wr8(0x8054161cu, 5u);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(0x802ad0c0u, &a);
    return;
}
