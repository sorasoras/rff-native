#include "tc_rt.h"

void fn_800b5a70(u32 param_1, s32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    (void)param_1;
    r8 = rd32(param_3);
    r10 = rd32(0x8057073cu);
    r9 = 0u;
    ctr = 0xb3u;
    do {
        if ((s32)r10 < 0) {
            r10 = 0xb3u;
        }
        r0 = (r10 << 4u) & 0xfffffff0u;
        r11 = r0 - 0x7fb619f0u;
        r0 = rd32(r0 - 0x7fb619f0u);
        if (r0 != 0u && (s32)r9 >= param_2) {
            r0 = rd32(param_3) - r8;
            r8 = r8 - 1u;
            r0 = r0 * 0xcu;
            wrf32d((u32)param_4 + r0, (f64)rdf32(r11 + 4u));
            r7 = (u32)param_4 + r0;
            wrf32d(r7 + 4u, (f64)rdf32(r11 + 8u));
            wrf32d(r7 + 8u, (f64)rdf32(r11 + 0xcu));
            if ((s32)r8 <= 0) {
                return;
            }
        }
        r9 = r9 + 1u;
        r10 = r10 - 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(param_3, rd32(param_3) - r8);
    return;
}
