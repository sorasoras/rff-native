#include "tc_rt.h"

void fn_801a54f4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        r0 = rd32((u32)param_1 + 0x9cu);
        wr32((u32)param_1 + 0xd04u, 0u);
        r0 = r0 & 0xfbffffffu;
        wr32((u32)param_1 + 0xeecu, 0u);
        wr32((u32)param_1 + 0x9cu, r0);
        wr32((u32)param_1 + 0xf40u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            (void)tc_call(0x801a2fdcu, &a);
            r0 = rd32((u32)param_1 + 0xd04u);
            if (r0 == 0u) {
                f1 = (f64)rdf32((u32)param_1 + 0xde0u);
                f0 = (f64)rdf32(0x80575868u);
                if (!((f1 < f0) || (f1 == f0))) {
                    return;
                }
                wrf32d((u32)param_1 + 0xde0u, f0);
                wr32((u32)param_1 + 0xd04u, 1u);
            } else {
                if (r0 == 1u) {
                    a.f[0] = (f64)rdf32(0x80575934u);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0xdu;
                    a.r[2] = 0u;
                    (void)tc_call(0x800a94c0u, &a);
                    wr32((u32)param_1 + 0xd04u, 2u);
                    wr32((u32)param_1 + 0xd00u, 0u);
                } else {
                    if ((s32)rd32((u32)param_1 + 0xd00u) > 0) {
                        f0 = (f64)rdf32(0x80575868u);
                        r0 = rd32((u32)param_1 + 0x9cu) & 0xfdffffffu;
                        wr32((u32)param_1 + 0x2b0u, 1u);
                        wr32((u32)param_1 + 0xdc0u, 0u);
                        wr32((u32)param_1 + 0x9cu, r0);
                        wrf32d((u32)param_1 + 0xde0u, f0);
                    }
                    f0 = (f64)rdf32(0x8057596cu);
                    f1 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
                    if ((f1 > f0) || (f1 == f0)) {
                        r3 = rd32((u32)param_1 + 0xf40u);
                        if ((r3 & 1u) == 0u) {
                            wr32((u32)param_1 + 0xf40u, r3 | 1u);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 0xfa3u;
                            (void)tc_call(0x8010a74cu, &a);
                        }
                    }
                }
            }
        }
    }
    return;
}
