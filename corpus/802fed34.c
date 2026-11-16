#include "tc_rt.h"

void fn_802fed34(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    for (;;) {
        r4 = rd32(r3 + 0x10u);
        wr32(r3 + 0x1cu, 0u);
        if (r4 == 0u) break;
        r12 = rd32(r4);
        r3 = r4;
        r12 = rd32(r12 + 0x48u);
        if (r12 != 0x802fed34u) {
            if (r12 == 0x817ff000u) {
                return;
            }
            a.r[0] = r4;
            a.r[1] = r4;
            a.f[0] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            return;
        }
    }
    return;
}
