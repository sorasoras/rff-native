#include "tc_rt.h"

s32 fn_8004df80(f64 param_1, s32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0;
    r0 = (u32)rd16((u32)param_2 + 8u);
    r3 = rd32((u32)param_2 + 0xcu);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            f0 = (f64)rdf32(r3 + 0x1cu);
            if ((param_1 < f0) || (param_1 == f0)) {
                f0 = (f64)rdf32(r3 + 0x18u);
                if ((param_1 > f0) || (param_1 == f0)) {
                    return (s32)r3;
                }
            }
            r3 = r3 + 0x70u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0;
}
