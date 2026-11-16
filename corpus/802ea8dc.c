#include "tc_rt.h"

void fn_802ea8dc(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    for (;;) {
        if (r4 != 0u) {
            r12 = rd32(param_1);
            r12 = rd32(r12 + 0x78u);
            r4 = r4 - 1u;
            if (r12 != 0x802ea8dcu) break;
        } else {
            r12 = rd32(param_1);
            r12 = rd32(r12 + 0x74u);
            if (r12 != 0x802ea8dcu) {
                if (r12 == 0x817ff000u) {
                    return;
                }
                a.r[0] = param_1;
                a.r[1] = r4;
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
    a.r[0] = param_1;
    a.r[1] = r4;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
