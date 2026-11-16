#include "tc_rt.h"

void fn_800c8d68(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572f48u);
    r6 = param_1 + 0x870u;
    r5 = param_1 + 0x14f0u;
    wr32(param_1, 0x803555e0u);
    wrf32d(param_1 + 0x794u, f0);
    wrf32d(param_1 + 0x790u, f0);
    wrf32d(param_1 + 0x78cu, f0);
    wrf32d(param_1 + 0x7a0u, f0);
    wrf32d(param_1 + 0x79cu, f0);
    wrf32d(param_1 + 0x798u, f0);
    wrf32d(param_1 + 0x7acu, f0);
    wrf32d(param_1 + 0x7a8u, f0);
    wrf32d(param_1 + 0x7a4u, f0);
    wrf32d(param_1 + 0x844u, f0);
    wrf32d(param_1 + 0x840u, f0);
    wrf32d(param_1 + 0x83cu, f0);
    wrf32d(param_1 + 0x854u, f0);
    wrf32d(param_1 + 0x850u, f0);
    wrf32d(param_1 + 0x84cu, f0);
    if (r6 < r5) {
        r8 = param_1 + 0x870u;
        r9 = r5 - r8;
        r7 = param_1 + 0x11d0u;
        r10 = r9 + 0x63u;
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r10) >> 5);
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
                f0 = (f64)rdf32(0x80572f48u);
                ctr = ppc_divwu(r7 + 0x31fu - r6, 0x320u);
                if (r6 < r7) {
                    do {
                        wrf32d(r6 + 0x38u, f0);
                        wrf32d(r6 + 0x34u, f0);
                        wrf32d(r6 + 0x30u, f0);
                        wrf32d(r6 + 0x48u, f0);
                        wrf32d(r6 + 0x44u, f0);
                        wrf32d(r6 + 0x40u, f0);
                        wrf32d(r6 + 0x9cu, f0);
                        wrf32d(r6 + 0x98u, f0);
                        wrf32d(r6 + 0x94u, f0);
                        wrf32d(r6 + 0xacu, f0);
                        wrf32d(r6 + 0xa8u, f0);
                        wrf32d(r6 + 0xa4u, f0);
                        wrf32d(r6 + 0x100u, f0);
                        wrf32d(r6 + 0xfcu, f0);
                        wrf32d(r6 + 0xf8u, f0);
                        wrf32d(r6 + 0x110u, f0);
                        wrf32d(r6 + 0x10cu, f0);
                        wrf32d(r6 + 0x108u, f0);
                        wrf32d(r6 + 0x164u, f0);
                        wrf32d(r6 + 0x160u, f0);
                        wrf32d(r6 + 0x15cu, f0);
                        wrf32d(r6 + 0x174u, f0);
                        wrf32d(r6 + 0x170u, f0);
                        wrf32d(r6 + 0x16cu, f0);
                        wrf32d(r6 + 0x1c8u, f0);
                        wrf32d(r6 + 0x1c4u, f0);
                        wrf32d(r6 + 0x1c0u, f0);
                        wrf32d(r6 + 0x1d8u, f0);
                        wrf32d(r6 + 0x1d4u, f0);
                        wrf32d(r6 + 0x1d0u, f0);
                        wrf32d(r6 + 0x22cu, f0);
                        wrf32d(r6 + 0x228u, f0);
                        wrf32d(r6 + 0x224u, f0);
                        wrf32d(r6 + 0x23cu, f0);
                        wrf32d(r6 + 0x238u, f0);
                        wrf32d(r6 + 0x234u, f0);
                        wrf32d(r6 + 0x290u, f0);
                        wrf32d(r6 + 0x28cu, f0);
                        wrf32d(r6 + 0x288u, f0);
                        wrf32d(r6 + 0x2a0u, f0);
                        wrf32d(r6 + 0x29cu, f0);
                        wrf32d(r6 + 0x298u, f0);
                        wrf32d(r6 + 0x2f4u, f0);
                        wrf32d(r6 + 0x2f0u, f0);
                        wrf32d(r6 + 0x2ecu, f0);
                        wrf32d(r6 + 0x304u, f0);
                        wrf32d(r6 + 0x300u, f0);
                        wrf32d(r6 + 0x2fcu, f0);
                        r6 = r6 + 0x320u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = param_1 + 0x14f0u;
        f0 = (f64)rdf32(0x80572f48u);
        ctr = ppc_divwu(r5 + 0x63u - r6, 0x64u);
        if (r6 >= r5) {
            return;
        }
        do {
            wrf32d(r6 + 0x38u, f0);
            wrf32d(r6 + 0x34u, f0);
            wrf32d(r6 + 0x30u, f0);
            wrf32d(r6 + 0x48u, f0);
            wrf32d(r6 + 0x44u, f0);
            wrf32d(r6 + 0x40u, f0);
            r6 = r6 + 0x64u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
