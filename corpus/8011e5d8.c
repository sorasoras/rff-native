#include "tc_rt.h"

u32 fn_8011e5d8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_1);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0xcu), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r3 = rd32(param_1);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
            a.r[0] = param_1;
            (void)tc_call(0x8011e3f0u, &a);
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
