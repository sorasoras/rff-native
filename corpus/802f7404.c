#include "tc_rt.h"

u32 fn_802f7404(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    r4 = param_2;
    do {
        r0 = rd32(r3);
        r6 = r3;
        if (r0 == 0u) {
            return 0u;
        }
        r3 = r0;
        r5 = r4;
        r12 = rd32(r0);
        r4 = rd32(r6 + 0xcu);
        r12 = rd32(r12 + 0x10u);
    } while (r12 == 0x802f7404u);
    if (r12 == 0x817ff000u) {
        return r0;
    }
    a.r[0] = r0;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return r3;
}
