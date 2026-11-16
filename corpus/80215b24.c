#include "tc_rt.h"

void fn_80215b24(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0;
    f4 = (f64)rdf32(0x805769c0u);
    r7 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = 0xffffffffu;
    r8 = rd32(r7 + 0x148u);
    r6 = 0u;
    r0 = rd32(r8);
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            r4 = r8 + r6;
            r9 = rd32(r4 + 4u);
            r10 = r9 & 0x80000000u;
            if (r10 != 0u || (rd32(r4 + 8u) & 0x80000000u) != 0u) {
                if (r10 != 0u) {
                    r9 = rd32(r4 + 8u);
                }
                r4 = rd32(r7) + (r9 * 0xcu);
                f0 = (f64)(f32)((f64)rdf32(param_3 + 8u) - (f64)rdf32(r4 + 0xcu));
                f1 = (f64)(f32)((f64)rdf32(param_3) - (f64)rdf32(r4 + 4u));
                f0 = (f64)(f32)(f0 * f0);
                f0 = ppc_fmadds(f1, f1, f0);
                if (f0 < f4 || r3 == 0xffffffffu) {
                    r3 = r9;
                    f4 = f0;
                }
            }
            r6 = r6 + 8u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
