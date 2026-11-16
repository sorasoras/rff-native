#include "tc_rt.h"

void fn_802eddb4(u32 param_1, u32 param_r4)
{
    u32 r3 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    do {
        r12 = rd32(param_1);
        r6 = (u32)rd16(param_r4 + 0xeu);
        r12 = rd32(r12 + 0x10u);
    } while (r12 == 0x802eddb4u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[3] = r6;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
