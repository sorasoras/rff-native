#include "tc_rt.h"

void fn_801c371c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r4 = param_2;
    for (;;) {
        r0 = rd32(r3 + 0x10u);
        r6 = r3;
        if (r0 == 0u) break;
        r3 = r0;
        r5 = r4;
        r12 = rd32(r0);
        r4 = rd32(r6);
        r12 = rd32(r12 + 0x1cu);
        if (r12 != 0x801c371cu) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r0;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    return;
}
