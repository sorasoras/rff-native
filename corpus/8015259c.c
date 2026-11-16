#include "tc_rt.h"

void fn_8015259c(u32 param_r3)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r17 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x8057483cu);
    f0 = (f64)rdf32(0x8057484cu);
    r4 = param_r3 + 0x7cu;
    r6 = param_r3 + 0xb8u;
    wr8(param_r3, 0u);
    wr8(param_r3 + 1u, 0u);
    wr32(param_r3 + 4u, 0u);
    wr32(param_r3 + 8u, 0u);
    wrf32d(param_r3 + 0xcu, f1);
    wr32(param_r3 + 0x10u, ppc_single_bits(f1));
    wr32(param_r3 + 0x14u, ppc_single_bits(f1));
    wr32(param_r3 + 0x18u, ppc_single_bits(f1));
    wr32(param_r3 + 0x1cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x20u, ppc_single_bits(f1));
    wr32(param_r3 + 0x24u, ppc_single_bits(f1));
    wr32(param_r3 + 0x28u, ppc_single_bits(f1));
    wr32(param_r3 + 0x2cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x30u, ppc_single_bits(f1));
    wrf32d(param_r3 + 0x34u, f0);
    wr32(param_r3 + 0x38u, 0u);
    wr8(param_r3 + 0x3cu, 0u);
    wr32(param_r3 + 0x40u, ppc_single_bits(f1));
    wr32(param_r3 + 0x44u, ppc_single_bits(f1));
    wr32(param_r3 + 0x48u, ppc_single_bits(f1));
    wr32(param_r3 + 0x4cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x50u, ppc_single_bits(f1));
    wr32(param_r3 + 0x54u, ppc_single_bits(f1));
    wr32(param_r3 + 0x58u, ppc_single_bits(f1));
    wr32(param_r3 + 0x5cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x60u, ppc_single_bits(f1));
    wr32(param_r3 + 0x64u, ppc_single_bits(f1));
    wr32(param_r3 + 0x68u, ppc_single_bits(f1));
    wr32(param_r3 + 0x6cu, ppc_single_bits(f1));
    wrf32d(param_r3 + 0x78u, f1);
    wrf32d(param_r3 + 0x74u, f1);
    wrf32d(param_r3 + 0x70u, f1);
    if (r4 < r6) {
        r8 = param_r3 + 0x7cu;
        r9 = r6 - r8;
        r7 = param_r3 + 0x58u;
        r10 = r9 + 0xbu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
        r11 = r0 + ((r0 >> 0x1fu) & 1u);
        r12 = r11 + 1u;
        if ((s32)r12 > 8) {
            c0gt = r8 > r6;
            r5 = 0u;
            r6 = 0u;
            if (!c0gt) {
                r8 = 1u;
                if ((r9 & 0x80000000u) == 0u && (r10 & 0x80000000u) != 0u) {
                    r8 = 0u;
                }
                if (r8 != 0u) {
                    r6 = 1u;
                }
            }
            if (r6 != 0u) {
                r8 = r11 & 0x80000000u;
                r6 = 1u;
                if (r8 == 0u && r8 != (r12 & 0x80000000u)) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                f0 = (f64)rdf32(0x8057483cu);
                ctr = ppc_divwu(r7 + 0x5fu - r4, 0x60u);
                if (r4 < r7) {
                    do {
                        wrf32d(r4 + 8u, f0);
                        wrf32d(r4 + 4u, f0);
                        wrf32d(r4, f0);
                        wrf32d(r4 + 0x14u, f0);
                        wrf32d(r4 + 0x10u, f0);
                        wrf32d(r4 + 0xcu, f0);
                        wrf32d(r4 + 0x20u, f0);
                        wrf32d(r4 + 0x1cu, f0);
                        wrf32d(r4 + 0x18u, f0);
                        wrf32d(r4 + 0x2cu, f0);
                        wrf32d(r4 + 0x28u, f0);
                        wrf32d(r4 + 0x24u, f0);
                        wrf32d(r4 + 0x38u, f0);
                        wrf32d(r4 + 0x34u, f0);
                        wrf32d(r4 + 0x30u, f0);
                        wrf32d(r4 + 0x44u, f0);
                        wrf32d(r4 + 0x40u, f0);
                        wrf32d(r4 + 0x3cu, f0);
                        wrf32d(r4 + 0x50u, f0);
                        wrf32d(r4 + 0x4cu, f0);
                        wrf32d(r4 + 0x48u, f0);
                        wrf32d(r4 + 0x5cu, f0);
                        wrf32d(r4 + 0x58u, f0);
                        wrf32d(r4 + 0x54u, f0);
                        r4 = r4 + 0x60u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r6 = param_r3 + 0xb8u;
        f0 = (f64)rdf32(0x8057483cu);
        ctr = ppc_divwu(r6 + 0xbu - r4, 0xcu);
        if (r4 < r6) {
            do {
                wrf32d(r4 + 8u, f0);
                wrf32d(r4 + 4u, f0);
                wrf32d(r4, f0);
                r4 = r4 + 0xcu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x8057483cu);
    f3 = (f64)rdf32(0x80574860u);
    r17 = param_r3 + 0xf8u;
    f2 = (f64)rdf32(0x80574864u);
    f1 = (f64)rdf32(0x80574868u);
    wr32(param_r3 + 0xb8u, 0u);
    wr32(param_r3 + 0xbcu, 0u);
    wr32(param_r3 + 0xc4u, 0u);
    wrf32d(param_r3 + 0xc8u, f3);
    wrf32d(param_r3 + 0xccu, f2);
    wrf32d(param_r3 + 0xd0u, f1);
    wr16(param_r3 + 0xd4u, 0u);
    wr16(param_r3 + 0xd6u, 0u);
    wr32(param_r3 + 0xd8u, 0u);
    wrf32d(param_r3 + 0xe8u, f0);
    wrf32d(param_r3 + 0xe4u, f0);
    wrf32d(param_r3 + 0xe0u, f0);
    wrf32d(param_r3 + 0xf4u, f0);
    wrf32d(param_r3 + 0xf0u, f0);
    wrf32d(param_r3 + 0xecu, f0);
    a.r[0] = r17;
    (void)tc_call(0x8006f1b4u, &a);
    f1 = (f64)rdf32(0x8057483cu);
    f0 = (f64)rdf32(0x8057486cu);
    wr32(r17, 0x80365608u);
    wrf32d(r17 + 0xecu, f1);
    wrf32d(r17 + 0xe8u, f1);
    wrf32d(r17 + 0xe4u, f1);
    wrf32d(param_r3 + 0x1e8u, f0);
    wr32(param_r3 + 0x1ecu, 0u);
    return;
}
