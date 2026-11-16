#include "tc_rt.h"

void fn_8007e210(u32 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = (u32)param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = param_5;
    do {
        r0 = r4;
        r4 = r5;
        wr32(param_1 + 0x150u, r0);
        r5 = r6;
        r6 = r7;
        r7 = param_6;
        r12 = rd32(param_1);
        r12 = rd32(r12 + 0xc0u);
    } while (r12 == 0x8007e210u);
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = param_6;
    a.r[5] = param_6;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
