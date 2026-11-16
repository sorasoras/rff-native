#include "tc_rt.h"

void fn_800b6584(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    do {
        r5 = rd32(r3 + 0x1d8u);
        r0 = r4;
        if (r5 > r4) {
            r0 = r5;
        }
        r0 = r0 - r4;
        r5 = r4;
        wr32(r3 + 0x1d8u, r0);
        r4 = r0;
        r3 = rd32(r3 + 0x364u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x1cu);
    } while (r12 == 0x800b6584u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = r0;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
