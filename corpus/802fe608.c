#include "tc_rt.h"

void fn_802fe608(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    r5 = param_3;
    do {
        r7 = r3;
        r3 = rd32(r3 + 0x10cu);
        r0 = r4;
        r6 = r5;
        r12 = rd32(r3);
        r4 = r7;
        r5 = r0;
        r12 = rd32(r12 + 0xcu);
    } while (r12 == 0x802fe608u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r3;
    a.r[1] = r7;
    a.r[2] = r0;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
