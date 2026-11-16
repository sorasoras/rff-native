#include "tc_rt.h"

void fn_802bfbb4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    do {
        wr32(0x805472d0u, 0u);
        r4 = rd32(r4 + 0x10u);
        r12 = rd32(param_1);
        r4 = r4 + 0x10u;
        r12 = rd32(r12 + 0x5cu);
    } while (r12 == 0x802bfbb4u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0x80540000u;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
