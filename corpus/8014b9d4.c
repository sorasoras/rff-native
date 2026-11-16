#include "tc_rt.h"

void fn_8014b9d4(u32 param_1, u32 param_2)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805746e0u);
    r8 = param_1 + 0x4cu;
    r5 = param_1 + 0x64u;
    wr32(param_1, 0x803655f8u);
    wr32(param_1 + 4u, param_2);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x14u, 0xffffffffu);
    wr32(param_1 + 0x18u, 0xffffffffu);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x48u, f0);
    wrf32d(param_1 + 0x44u, f0);
    wrf32d(param_1 + 0x40u, f0);
    if (r8 < r5) {
        r7 = param_1 + 0x4cu;
        r9 = r5 - r7;
        r6 = param_1 + 4u;
        r10 = r9 + 0xbu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
        r11 = r0 + ((r0 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r7 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r7 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r7 = r11 & 0x80000000u;
                r5 = 1u;
                if (r7 == 0u && r7 != (r12 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f0 = (f64)rdf32(0x805746e0u);
                ctr = ppc_divwu(r6 + 0x5fu - r8, 0x60u);
                if (r8 < r6) {
                    do {
                        wrf32d(r8 + 8u, f0);
                        wrf32d(r8 + 4u, f0);
                        wrf32d(r8, f0);
                        wrf32d(r8 + 0x14u, f0);
                        wrf32d(r8 + 0x10u, f0);
                        wrf32d(r8 + 0xcu, f0);
                        wrf32d(r8 + 0x20u, f0);
                        wrf32d(r8 + 0x1cu, f0);
                        wrf32d(r8 + 0x18u, f0);
                        wrf32d(r8 + 0x2cu, f0);
                        wrf32d(r8 + 0x28u, f0);
                        wrf32d(r8 + 0x24u, f0);
                        wrf32d(r8 + 0x38u, f0);
                        wrf32d(r8 + 0x34u, f0);
                        wrf32d(r8 + 0x30u, f0);
                        wrf32d(r8 + 0x44u, f0);
                        wrf32d(r8 + 0x40u, f0);
                        wrf32d(r8 + 0x3cu, f0);
                        wrf32d(r8 + 0x50u, f0);
                        wrf32d(r8 + 0x4cu, f0);
                        wrf32d(r8 + 0x48u, f0);
                        wrf32d(r8 + 0x5cu, f0);
                        wrf32d(r8 + 0x58u, f0);
                        wrf32d(r8 + 0x54u, f0);
                        r8 = r8 + 0x60u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_1 + 0x64u;
        f0 = (f64)rdf32(0x805746e0u);
        ctr = ppc_divwu(r5 + 0xbu - r8, 0xcu);
        if (r8 < r5) {
            do {
                wrf32d(r8 + 8u, f0);
                wrf32d(r8 + 4u, f0);
                wrf32d(r8, f0);
                r8 = r8 + 0xcu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_1 + 0x64u, 0u);
    wr32(param_1 + 0x68u, 0u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x80u, 0u);
    wr32(param_1 + 0x28u, 0u);
    wr32(param_1 + 0x34u, 0u);
    wr32(param_1 + 0x2cu, 0u);
    wr32(param_1 + 0x38u, 0u);
    wr32(param_1 + 0x30u, 0u);
    wr32(param_1 + 0x3cu, 0u);
    return;
}
