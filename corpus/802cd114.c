#include "tc_rt.h"

void fn_802cd114(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r3 = rd32(r3 + 0x10u);
        if (r3 == 0u) break;
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x10u);
        if (r12 != 0x802cd114u) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r3;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    return;
}
