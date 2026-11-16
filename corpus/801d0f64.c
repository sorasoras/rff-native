#include "tc_rt.h"

u32 fn_801d0f64(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        wr32(param_1 + 0x3a4u, 1u);
    } else {
        if ((u32)param_2 == 1u) {
            r4 = rd32(param_1 + 0x3a8u);
            c0eq = r4 == 0u;
            if ((s32)r4 > 0) {
                wr32(param_1 + 0x3a8u, r4 - 1u);
            } else {
                if (c0eq) {
                    wr32(param_1 + 0x3a8u, 0xffffffffu);
                    r4 = rd32(param_1 + 0x388u);
                    wr32(param_1 + 0x3b0u, 0u);
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80575ed4u);
                    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    f1 = tc_callf(0x801d1744u, &a);
                    wr32(param_1 + 0x3a4u, 1u);
                    a.r[0] = param_1;
                    a.r[1] = 1u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
                } else {
                    if (r4 == 0xffffffffu) {
                        a.r[0] = param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x801d1878u, &a);
                        if (rd32(param_1 + 0x110u) != 0u) {
                            r31 = 0u;
                            a.r[0] = param_1;
                            a.r[1] = 0u;
                            (void)tc_call(0x801d1928u, &a);
                            wr32(param_1 + 0x3a4u, 0u);
                        }
                        if ((s32)rd32(param_1 + 0x370u) > (s32)rd32(0x80570994u)) {
                            r4 = rd32(param_1 + 0x3b0u);
                            if ((r4 & 1u) == 0u) {
                                r3 = rd32(param_1 + 0x320u);
                                wr32(param_1 + 0x3b0u, r4 | 1u);
                                a.r[0] = r3;
                                a.r[1] = r3;
                                a.r[2] = 4u;
                                a.r[3] = 1u;
                                (void)tc_call(0x801ce2f4u, &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return r31;
}
