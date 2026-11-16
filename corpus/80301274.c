#include "tc_rt.h"

void fn_80301274(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = param_5;
    for (;;) {
        r0 = rd32(r3 + 0x18u);
        r12 = r3;
        r9 = r4;
        r11 = r5;
        r10 = r6;
        r8 = r7;
        if (r0 == 0u) {
            return;
        }
        r3 = r0;
        r4 = r12;
        r12 = rd32(r0);
        r5 = r9;
        r6 = r11;
        r7 = r10;
        r12 = rd32(r12 + 0xcu);
        if (r12 != 0x80301274u) {
            fl_ = 1u;
            break;
        }
    }
    if (fl_ == 1u) {
        fl_ = 0u;
    }
    if (r12 == 0x817ff000u) {
        return;
    }
    a.r[0] = r0;
    a.r[1] = r4;
    a.r[2] = r9;
    a.r[3] = r11;
    a.r[4] = r10;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = 0.0;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    return;
}
