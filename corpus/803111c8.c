#include "tc_rt.h"

void fn_803111c8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    for (;;) {
        r6 = r3;
        r5 = r4;
        if ((rd32(r3 + 0x50u) & 2u) != 0u) break;
        r3 = rd32(r3 + 0x9cu);
        r4 = r6;
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x10u);
        if (r12 != 0x803111c8u) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r3;
            a.r[1] = r6;
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
