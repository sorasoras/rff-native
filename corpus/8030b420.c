#include "tc_rt.h"

void fn_8030b420(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    f0 = (f64)rdf32(0x805777bcu);
    f1 = (f64)rdf32(0x805777b8u);
    r6 = param_1 + 0x44u;
    r5 = param_1 + 0x8cu;
    wr32(param_1, 0u);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0x8039d6ecu);
    wrf32d(param_1 + 0x2cu, f1);
    wrf32d(param_1 + 0x30u, f1);
    wrf32d(param_1 + 0x34u, f0);
    wrf32d(param_1 + 0x38u, f0);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x40u, f0);
    if (r6 < r5) {
        r8 = param_1 + 0x44u;
        r9 = r5 - r8;
        r7 = param_1 - 0x34u;
        r10 = r9 + 0x17u;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 2);
        r11 = r0 + ((r0 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r8 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r8 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r8 = r11 & 0x80000000u;
                r5 = 1u;
                if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f1 = (f64)rdf32(0x805777b8u);
                f0 = (f64)rdf32(0x805777bcu);
                ctr = ppc_divwu(r7 + 0xbfu - r6, 0xc0u);
                if (r6 < r7) {
                    do {
                        wrf32d(r6, f1);
                        wrf32d(r6 + 4u, f1);
                        wrf32d(r6 + 8u, f0);
                        wrf32d(r6 + 0xcu, f0);
                        wrf32d(r6 + 0x10u, f0);
                        wrf32d(r6 + 0x14u, f0);
                        wrf32d(r6 + 0x18u, f1);
                        wrf32d(r6 + 0x1cu, f1);
                        wrf32d(r6 + 0x20u, f0);
                        wrf32d(r6 + 0x24u, f0);
                        wrf32d(r6 + 0x28u, f0);
                        wrf32d(r6 + 0x2cu, f0);
                        wrf32d(r6 + 0x30u, f1);
                        wrf32d(r6 + 0x34u, f1);
                        wrf32d(r6 + 0x38u, f0);
                        wrf32d(r6 + 0x3cu, f0);
                        wrf32d(r6 + 0x40u, f0);
                        wrf32d(r6 + 0x44u, f0);
                        wrf32d(r6 + 0x48u, f1);
                        wrf32d(r6 + 0x4cu, f1);
                        wrf32d(r6 + 0x50u, f0);
                        wrf32d(r6 + 0x54u, f0);
                        wrf32d(r6 + 0x58u, f0);
                        wrf32d(r6 + 0x5cu, f0);
                        wrf32d(r6 + 0x60u, f1);
                        wrf32d(r6 + 0x64u, f1);
                        wrf32d(r6 + 0x68u, f0);
                        wrf32d(r6 + 0x6cu, f0);
                        wrf32d(r6 + 0x70u, f0);
                        wrf32d(r6 + 0x74u, f0);
                        wrf32d(r6 + 0x78u, f1);
                        wrf32d(r6 + 0x7cu, f1);
                        wrf32d(r6 + 0x80u, f0);
                        wrf32d(r6 + 0x84u, f0);
                        wrf32d(r6 + 0x88u, f0);
                        wrf32d(r6 + 0x8cu, f0);
                        wrf32d(r6 + 0x90u, f1);
                        wrf32d(r6 + 0x94u, f1);
                        wrf32d(r6 + 0x98u, f0);
                        wrf32d(r6 + 0x9cu, f0);
                        wrf32d(r6 + 0xa0u, f0);
                        wrf32d(r6 + 0xa4u, f0);
                        wrf32d(r6 + 0xa8u, f1);
                        wrf32d(r6 + 0xacu, f1);
                        wrf32d(r6 + 0xb0u, f0);
                        wrf32d(r6 + 0xb4u, f0);
                        wrf32d(r6 + 0xb8u, f0);
                        wrf32d(r6 + 0xbcu, f0);
                        r6 = r6 + 0xc0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_1 + 0x8cu;
        f1 = (f64)rdf32(0x805777b8u);
        f0 = (f64)rdf32(0x805777bcu);
        ctr = ppc_divwu(r5 + 0x17u - r6, 0x18u);
        if (r6 < r5) {
            do {
                wrf32d(r6, f1);
                wrf32d(r6 + 4u, f1);
                wrf32d(r6 + 8u, f0);
                wrf32d(r6 + 0xcu, f0);
                wrf32d(r6 + 0x10u, f0);
                wrf32d(r6 + 0x14u, f0);
                r6 = r6 + 0x18u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_1 + 0x94u, 0u);
    wr8(param_1 + 0x9cu, 0u);
    wr8(param_1 + 0x9du, 0u);
    wr8(param_1 + 0x9eu, 0u);
    wr8(param_1 + 0x9fu, 0u);
    wr8(param_1 + 0xa2u, 0u);
    wr32(param_1 + 0x114u, 0u);
    wr32(param_1 + 0x118u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x28u, 0u);
    return;
}
