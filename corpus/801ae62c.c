#include "tc_rt.h"

void fn_801ae62c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_2;
    r3 = (u32)param_1;
    for (;;) {
        r4 = rd32(r3 + 0xcu);
        if (r4 == 0u) break;
        if (rd32(r3 + 0x10u) == 0u) {
            return;
        }
        r3 = r4;
        r12 = rd32(r4);
        r12 = rd32(r12 + 0x14u);
        if (r12 != 0x801ae62cu) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r4;
            a.r[1] = param_3;
            a.r[2] = param_3;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    return;
}
