#include "tc_rt.h"

void fn_80177804(u32 param_r3)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    (void)tc_call(0x8006f1b4u, &a);
    f1 = (f64)rdf32(0x80574fa4u);
    f0 = (f64)rdf32(0x80574fa8u);
    r3 = param_r3 + 0x1d4u;
    r5 = param_r3 + 0x1ecu;
    r0 = (u32)rd8(param_r3 + 0x1a4u) & 0xffffff7fu;
    wr32(param_r3, 0x8036f010u);
    wr32(param_r3 + 0xe4u, 0u);
    wr32(param_r3 + 0xe8u, 0xffffffffu);
    wr32(param_r3 + 0xecu, 0u);
    wr32(param_r3 + 0xf0u, 0xffffffffu);
    wrf32d(param_r3 + 0xfcu, f1);
    wrf32d(param_r3 + 0xf8u, f1);
    wrf32d(param_r3 + 0xf4u, f1);
    wr32(param_r3 + 0x100u, ppc_single_bits(f1));
    wr32(param_r3 + 0x104u, ppc_single_bits(f1));
    wr32(param_r3 + 0x108u, ppc_single_bits(f1));
    wr32(param_r3 + 0x10cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x110u, ppc_single_bits(f1));
    wr32(param_r3 + 0x114u, ppc_single_bits(f1));
    wr32(param_r3 + 0x118u, ppc_single_bits(f1));
    wr32(param_r3 + 0x11cu, ppc_single_bits(f1));
    wr32(param_r3 + 0x120u, ppc_single_bits(f1));
    wr32(param_r3 + 0x124u, 0u);
    wrf32d(param_r3 + 0x128u, f1);
    wrf32d(param_r3 + 0x12cu, f1);
    wrf32d(param_r3 + 0x130u, f1);
    wrf32d(param_r3 + 0x134u, f1);
    wrf32d(param_r3 + 0x138u, f1);
    wr16(param_r3 + 0x140u, 0u);
    wr16(param_r3 + 0x142u, 0u);
    wrf32d(param_r3 + 0x144u, f0);
    wr32(param_r3 + 0x148u, 0u);
    wr32(param_r3 + 0x14cu, 0xffffffffu);
    wr32(param_r3 + 0x194u, 0u);
    wrf32d(param_r3 + 0x198u, f1);
    wr32(param_r3 + 0x19cu, 0u);
    wr8(param_r3 + 0x1a4u, (u8)r0);
    wrf32d(param_r3 + 0x1b4u, f1);
    wrf32d(param_r3 + 0x1b0u, f1);
    wrf32d(param_r3 + 0x1acu, f1);
    wrf32d(param_r3 + 0x1d0u, f1);
    wrf32d(param_r3 + 0x1ccu, f1);
    wrf32d(param_r3 + 0x1c8u, f1);
    if (r3 < r5) {
        r7 = param_r3 + 0x1d4u;
        r8 = r5 - r7;
        r6 = param_r3 + 0x18cu;
        r9 = r8 + 0xbu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r9) >> 1);
        r10 = r0 + ((r0 >> 0x1fu) & 1u);
        r11 = r10 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r7 > r5;
            r4 = 0u;
            r5 = 0u;
            if (!c0gt) {
                r7 = 1u;
                if ((r8 & 0x80000000u) == 0u && (r9 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r7 = r10 & 0x80000000u;
                r5 = 1u;
                if (r7 == 0u && r7 != (r11 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                f0 = (f64)rdf32(0x80574fa4u);
                ctr = ppc_divwu(r6 + 0x5fu - r3, 0x60u);
                if (r3 < r6) {
                    do {
                        wrf32d(r3 + 8u, f0);
                        wrf32d(r3 + 4u, f0);
                        wrf32d(r3, f0);
                        wrf32d(r3 + 0x14u, f0);
                        wrf32d(r3 + 0x10u, f0);
                        wrf32d(r3 + 0xcu, f0);
                        wrf32d(r3 + 0x20u, f0);
                        wrf32d(r3 + 0x1cu, f0);
                        wrf32d(r3 + 0x18u, f0);
                        wrf32d(r3 + 0x2cu, f0);
                        wrf32d(r3 + 0x28u, f0);
                        wrf32d(r3 + 0x24u, f0);
                        wrf32d(r3 + 0x38u, f0);
                        wrf32d(r3 + 0x34u, f0);
                        wrf32d(r3 + 0x30u, f0);
                        wrf32d(r3 + 0x44u, f0);
                        wrf32d(r3 + 0x40u, f0);
                        wrf32d(r3 + 0x3cu, f0);
                        wrf32d(r3 + 0x50u, f0);
                        wrf32d(r3 + 0x4cu, f0);
                        wrf32d(r3 + 0x48u, f0);
                        wrf32d(r3 + 0x5cu, f0);
                        wrf32d(r3 + 0x58u, f0);
                        wrf32d(r3 + 0x54u, f0);
                        r3 = r3 + 0x60u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_r3 + 0x1ecu;
        f0 = (f64)rdf32(0x80574fa4u);
        ctr = ppc_divwu(r5 + 0xbu - r3, 0xcu);
        if (r3 < r5) {
            do {
                wrf32d(r3 + 8u, f0);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3, f0);
                r3 = r3 + 0xcu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return;
}
