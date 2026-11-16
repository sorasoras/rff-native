#include "tc_rt.h"

void fn_800b65bc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = (u32)param_2;
    do {
        r0 = rd32(r3 + 0x1d8u);
        r5 = r4;
        r6 = rd32(r3 + 0x1d4u);
        r0 = r0 + r4;
        if (r0 < r6) {
            r6 = r0;
        }
        wr32(r3 + 0x1d8u, r6);
        r4 = r6;
        r3 = rd32(r3 + 0x364u);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0x20u);
    } while (r12 == 0x800b65bcu);
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
