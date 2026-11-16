#include "tc_rt.h"

void fn_80119f48(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0xe8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = param_1;
    f1 = tc_callf(0x8011a35cu, &a);
    r4 = tc_lastr4();
    r3 = rd32(param_1);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x800fec80u, &a);
        r4 = tc_lastr4();
    }
    if (rd32(param_1 + 0x3f4u) != 0u) {
        a.r[0] = param_1 + 0x18u;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1 + 0xe4u) + 0xcu), &a);
    }
    return;
}
