#include "tc_rt.h"

u32 fn_801d2270(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u && (u32)param_2 == 1u) {
        r4 = rd32(param_1 + 0x374u);
        c0eq = r4 == 0u;
        if ((s32)r4 > 0) {
            wr32(param_1 + 0x374u, r4 - 1u);
        } else {
            if (c0eq) {
                f1 = (f64)rdf32(0x80575ed4u);
                wr32(param_1 + 0x374u, 0xffffffffu);
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 1u;
                a.r[3] = 1u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
                wr32(param_1 + 0x36cu, 0u);
            } else {
                if (r4 == 0xffffffffu) {
                    if ((s32)rd32(param_1 + 0x370u) >= 10) {
                        r4 = rd32(param_1 + 0x36cu);
                        if ((r4 & 1u) == 0u) {
                            wr32(param_1 + 0x36cu, r4 | 1u);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 0xfc4u;
                            (void)tc_call(0x8010a74cu, &a);
                        }
                    }
                    if (rd32(param_1 + 0x110u) != 0u) {
                        wr32(param_1 + 0x36cu, 0u);
                    }
                }
            }
        }
    }
    return 1u;
}
