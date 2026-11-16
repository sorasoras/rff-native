#include "tc_rt.h"

u32 fn_803012bc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    r5 = param_3;
    for (;;) {
        r0 = rd32(r3 + 0x18u);
        r8 = r3;
        r7 = r4;
        r6 = r5;
        if (r0 == 0u) {
            return 0u;
        }
        r3 = r0;
        r4 = r8;
        r12 = rd32(r0);
        r5 = r7;
        r12 = rd32(r12 + 0x10u);
        if (r12 != 0x803012bcu) {
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r12 == 0x817ff000u) {
        return r0;
    }
    a.r[0] = r0;
    a.r[1] = r8;
    a.r[2] = r7;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return r3;
}
