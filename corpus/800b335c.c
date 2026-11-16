#include "tc_rt.h"

void fn_800b335c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x36cu;
    f1 = tc_callf(0x80154b34u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_1) + 0x138u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        r3 = rd32(param_1 + 0xda4u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x20u), &a);
            if (r3 != 0u || (u32)rd8(param_1 + 0xd80u) == 0u) {
                return;
            }
        }
        a.r[0] = param_1;
        r3 = tc_call(0x800b333cu, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x15u;
            r3 = tc_call(0x800b1aa4u, &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = 0x15u;
                (void)tc_call(0x800b31a0u, &a);
            }
        }
    }
    return;
}
