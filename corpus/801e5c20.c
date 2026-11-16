#include "tc_rt.h"

void fn_801e5c20(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        a.r[0] = 1u;
        f1 = tc_callf(0x80050c04u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801e5998u, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80050c04u, &a);
        r3 = tc_call(0x801e5d2cu, &a);
    } while (r3 != 0u);
    return;
}
