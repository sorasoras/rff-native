#include "tc_rt.h"

void fn_802ec22c(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r7 = 0, r9 = 0;
    f64 f0 = 0.0;
    if (param_2 != 0u) {
        r9 = (rd32((u32)param_1 + 0x3cu) >> 0x1cu) & 0xfu;
        f0 = (f64)rdf32(0x805774c0u);
        r7 = rd32((u32)param_1 + 0x40u) + (r9 * 0x1cu);
        ctr = param_2 - r9;
        if (r9 < param_2) {
            do {
                if (r7 != 0u) {
                    wr32(r7, 0u);
                    wr16(r7 + 8u, 0u);
                    wr16(r7 + 0xau, 0u);
                    r0 = rd32(r7 + 0x18u);
                    wrf32d(r7 + 0xcu, f0);
                    r0 = r0 & 0x7fffffu;
                    r0 = (r0 & 0xff8fffffu) | 0x100000u;
                    wrf32d(r7 + 0x10u, f0);
                    r0 = r0 | 0x80000u;
                    r0 = r0 & 0xfff81fffu;
                    wr16(r7 + 0x14u, 0u);
                    wr32(r7 + 4u, 0u);
                    wr32(r7 + 0x18u, r0);
                    wr16(r7 + 0x16u, 0u);
                }
                r7 = r7 + 0x1cu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x3cu, (rd32((u32)param_1 + 0x3cu) & 0xfffffffu) | ((param_2 << 0x1cu) & 0xf0000000u));
    return;
}
