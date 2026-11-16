#include "tc_rt.h"

void fn_80154f5c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r4 = param_2;
    do {
        r3 = r4;
        r4 = param_3;
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x1f0u);
    } while (r12 == 0x80154f5cu);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = param_3;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
