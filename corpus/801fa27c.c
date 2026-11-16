#include "tc_rt.h"

void fn_801fa27c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        if ((u32)param_2 != 0u) {
            r3 = rd32(r3 + 0x14u);
            r12 = rd32(r3 + 0xc8u);
            r12 = rd32(r12 + 0x30u);
            if (r12 != 0x801fa27cu) break;
        } else {
            r3 = rd32(r3 + 0x14u);
            r12 = rd32(r3 + 0xc8u);
            r12 = rd32(r12 + 0x2cu);
            if (r12 != 0x801fa27cu) {
                if (r12 == 0x817ff000u) {
                    return;
                }
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.f[0] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                return;
            }
        }
    }
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = (u32)param_2;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
