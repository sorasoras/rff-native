#include "tc_rt.h"

void fn_802f94e4(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r3 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (param_r3 != 0u) {
        c0eq = rd32(param_r3) == 0u;
        if (!c0eq && !c0eq) {
            if (rd32(param_r3 + 4u) != 0u) {
                r31 = param_r3 + 8u;
                while (rd32(param_r3 + 4u) != 0u) {
                    r29 = rd32(r31 + 4u);
                    if (r29 != 0u) {
                        r30 = r29 + 0xcu;
                        while (r30 != rd32(r29 + 0xcu)) {
                            r30 = rd32(r30 + 4u);
                            if (r30 != 0u) {
                                r12 = rd32(r30 + 0x10u);
                                if (r12 != 0u) {
                                    a.r[0] = rd32(r30 + 8u);
                                    a.r[1] = rd32(r30 + 0xcu);
                                    a.r[2] = rd32(r30 + 0x14u);
                                    a.f[0] = f1;
                                    f1 = tc_callf(r12, &a);
                                }
                            }
                        }
                        r3 = r29 + 8u;
                        if (r3 != 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            (void)tc_call(0x802dea2cu, &a);
                        }
                    }
                    a.r[0] = param_r3 + 4u;
                    a.r[1] = r29;
                    f1 = tc_callf(0x802debd0u, &a);
                }
            }
            a.r[0] = rd32(param_r3);
            a.r[1] = 3u;
            (void)tc_call(0x8026d1d8u, &a);
            a.r[0] = rd32(param_r3);
            (void)tc_call(0x8026d088u, &a);
            wr32(param_r3, 0u);
        }
        r3 = param_r3 + 4u;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802dea2cu, &a);
        }
        if ((s32)param_r4 > 0) {
            (void)tc_call(0x80040cd4u, &a);
        }
    }
    return;
}
