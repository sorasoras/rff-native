#include "tc_rt.h"

void fn_80174750(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r0 = rd32(r3 + 0x11cu);
        r4 = r3;
        if (r0 == 0u) break;
        r3 = r0;
        r12 = rd32(r0);
        r12 = rd32(r12 + 0x7cu);
        if (r12 != 0x80174750u) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r0;
            a.r[1] = r4;
            a.r[2] = 0xau;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    return;
}
