#include "tc_rt.h"

void fn_800a8aec(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    r8 = rd32((u32)param_1 + 0x2fcu);
    if (r8 != 0u) {
        if (rd32((u32)param_1 + 0x2e8u) == 2u) {
            return;
        }
        r4 = 0u;
        if ((f64)rdf32((u32)param_1 + 0x2ecu) > (f64)rdf32(0x80572b78u)) {
            r4 = 4u;
        }
        r6 = (u32)param_1;
        r7 = r4 & 4u;
        r9 = 0u;
        ctr = 2u;
        do {
            if (rd32(r8 + 8u) != 0u) {
                f1 = (f64)rdf32((u32)param_1 + 0x2e0u);
                f0 = (f64)rdf32(r8 + 4u);
                if ((f1 < f0) || (f1 == f0)) {
                    f0 = (f64)rdf32(r8);
                    if ((f1 > f0) || (f1 == f0)) {
                        wr32(r6 + 0x2c0u, 1u);
                        r0 = rd32(r8 + 8u);
                        if (r0 == 1u) {
                            wr32((u32)param_1 + 0x2d0u, rd32((u32)param_1 + 0x2d0u) + 1u);
                        } else {
                            if (r0 == 2u && r7 == 0u) {
                                wr32((u32)param_1 + 0x2d4u, rd32((u32)param_1 + 0x2d4u) + 1u);
                            }
                        }
                    }
                }
            }
            if (rd32(r8 + 0x2cu) != 0u) {
                f1 = (f64)rdf32((u32)param_1 + 0x2e0u);
                f0 = (f64)rdf32(r8 + 0x28u);
                if ((f1 < f0) || (f1 == f0)) {
                    f0 = (f64)rdf32(r8 + 0x24u);
                    if ((f1 > f0) || (f1 == f0)) {
                        wr32(r6 + 0x2c4u, 1u);
                        r0 = rd32(r8 + 0x2cu);
                        if (r0 == 1u) {
                            wr32((u32)param_1 + 0x2d0u, rd32((u32)param_1 + 0x2d0u) + 1u);
                        } else {
                            if (r0 == 2u && r7 == 0u) {
                                wr32((u32)param_1 + 0x2d4u, rd32((u32)param_1 + 0x2d4u) + 1u);
                            }
                        }
                    }
                }
            }
            r6 = r6 + 8u;
            r9 = r9 + 1u;
            r8 = r8 + 0x48u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
