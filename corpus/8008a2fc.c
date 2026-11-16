#include "tc_rt.h"

void fn_8008a2fc(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f3 = param_3;
    r5 = (u32)param_6;
    if (param_5 != 0u) {
        wr32(param_5, 0u);
    }
    f31 = (f64)rdf32(0x8057293cu);
    r31 = param_4;
    r29 = 0u;
    do {
        r30 = r31;
        r28 = 0u;
        do {
            r4 = rd32(r30 + 0x24u);
            if (r4 != 0u && rd32(r30 + 0x28u) == 1u) {
                r3 = rd32(r4 + 0xcu);
                f0 = (f64)rdf32(r3);
                if ((param_1 < f0) || (param_1 == f0)) {
                    r0 = 0u;
                } else {
                    f0 = (f64)rdf32(r3 + 8u);
                    if ((param_2 < f0) || (param_2 == f0)) {
                        r0 = 0u;
                    } else {
                        f0 = (f64)rdf32(r3 + 0xcu);
                        if ((param_1 > f0) || (param_1 == f0)) {
                            r0 = 0u;
                        } else {
                            f0 = (f64)rdf32(r3 + 0x14u);
                            if (!((param_2 > f0) || (param_2 == f0))) {
                                r0 = 1u;
                            } else {
                                r0 = 0u;
                            }
                        }
                    }
                }
                if (r0 != 0u) {
                    if ((u32)param_6 == 0u) {
                        a.r[0] = rd32(r4 + 0xcu);
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.f[0] = param_1;
                        a.f[1] = param_2;
                        a.f[2] = f3;
                        f1 = tc_callf(rd32(r4 + 0x10u), &a);
                        r5 = 0u;
                        f3 = 0.0;
                    } else {
                        a.r[0] = rd32(r4 + 0xcu);
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.f[0] = param_1;
                        a.f[1] = param_2;
                        a.f[2] = f3;
                        f1 = tc_callf(rd32(r4 + 0x14u), &a);
                        r5 = 0u;
                        f3 = 0.0;
                    }
                    if (f1 > f31 && f1 < param_3) {
                        f31 = f1;
                        if (param_5 != 0u) {
                            wr32(param_5, r29);
                        }
                    }
                }
            }
            r28 = r28 + 1u;
            r30 = r30 + 8u;
        } while ((s32)r28 < 20);
        r29 = r29 + 1u;
        r31 = r31 + 0xa0u;
    } while ((s32)r29 < 2);
    (void)((f64)rdf32(0x8057293cu) != f31);
    return;
}
