#include "tc_rt.h"

void fn_80215ab0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0;
    f3 = (f64)rdf32(0x805769c0u);
    r7 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu));
    r3 = 0xffffffffu;
    r8 = 0u;
    r6 = 0u;
    r0 = rd32(r7);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            r4 = r7 + r6;
            f4 = (f64)(f32)((f64)rdf32(param_3 + 8u) - (f64)rdf32(r4 + 0xcu));
            f1 = (f64)(f32)((f64)rdf32(param_3) - (f64)rdf32(r4 + 4u));
            f0 = ppc_fmadds(f1, f1, (f64)(f32)(f4 * f4));
            if (f0 < f3 || r3 == 0xffffffffu) {
                r3 = r8;
                f3 = f0;
            }
            r6 = r6 + 0xcu;
            r8 = r8 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
