#include "tc_rt.h"

u32 fn_801d0da0(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 != 0u && (u32)param_2 == 1u) {
        r4 = rd32(param_1 + 0x3a8u);
        c0eq = r4 == 0u;
        if ((s32)r4 > 0) {
            wr32(param_1 + 0x3a8u, r4 - 1u);
        } else {
            if (c0eq) {
                r4 = rd32(param_1 + 0x380u);
                wr32(param_1 + 0x3a8u, 0xffffffffu);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = rd32(param_1 + 0x3acu);
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80575ed4u);
                f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
                wr32(param_1 + 0x3b0u, 0u);
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
            } else {
                if (r4 == 0xffffffffu && rd32(param_1 + 0x110u) != 0u) {
                    r5 = rd32(param_1 + 0x3acu);
                    if (r5 == 0u) {
                        r31 = 0u;
                    } else {
                        a.r[0] = param_1;
                        a.r[1] = rd32(param_1 + 0x380u);
                        a.r[2] = r5;
                        a.r[3] = 1u;
                        a.f[0] = (f64)rdf32(0x80575ed4u);
                        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                        wr32(param_1 + 0x3b0u, 0u);
                    }
                }
            }
        }
    }
    return r31;
}
