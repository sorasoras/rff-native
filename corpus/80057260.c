#include "tc_rt.h"

void fn_80057260(s32 param_1)
{
    u32 c0gt = 0, c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572390u);
    r5 = (u32)param_1 + 0x30u;
    r4 = (u32)param_1 + 0x90u;
    c0lt = r5 < r4;
    wrf32d((u32)param_1 + 0xcu, f0);
    wrf32d((u32)param_1 + 8u, f0);
    wrf32d((u32)param_1 + 4u, f0);
    if (c0lt) {
        r4 = r4 + 0x2fu;
        r4 = r4 - r5;
        r4 = ppc_divwu(r4, 0x30u);
        ctr = r4;
        if (c0lt) {
            do {
                wrf32d(r5 + 0xcu, f0);
                wrf32d(r5 + 8u, f0);
                wrf32d(r5 + 4u, f0);
                r5 = r5 + 0x30u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x80572390u);
    r6 = (u32)param_1 + 0xb8u;
    r5 = (u32)param_1 + 0x108u;
    wrf32d((u32)param_1 + 0x9cu, f0);
    wrf32d((u32)param_1 + 0x98u, f0);
    wrf32d((u32)param_1 + 0x94u, f0);
    if (r6 < r5) {
        r8 = (u32)param_1 + 0xb8u;
        r9 = r5 - r8;
        r7 = (u32)param_1 - 0x38u;
        r10 = r9 + 0x27u;
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r10) >> 4);
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
                f0 = (f64)rdf32(0x80572390u);
                ctr = ppc_divwu(r7 + 0x13fu - r6, 0x140u);
                if (r6 < r7) {
                    do {
                        wrf32d(r6 + 0xcu, f0);
                        wrf32d(r6 + 8u, f0);
                        wrf32d(r6 + 4u, f0);
                        wrf32d(r6 + 0x34u, f0);
                        wrf32d(r6 + 0x30u, f0);
                        wrf32d(r6 + 0x2cu, f0);
                        wrf32d(r6 + 0x5cu, f0);
                        wrf32d(r6 + 0x58u, f0);
                        wrf32d(r6 + 0x54u, f0);
                        wrf32d(r6 + 0x84u, f0);
                        wrf32d(r6 + 0x80u, f0);
                        wrf32d(r6 + 0x7cu, f0);
                        wrf32d(r6 + 0xacu, f0);
                        wrf32d(r6 + 0xa8u, f0);
                        wrf32d(r6 + 0xa4u, f0);
                        wrf32d(r6 + 0xd4u, f0);
                        wrf32d(r6 + 0xd0u, f0);
                        wrf32d(r6 + 0xccu, f0);
                        wrf32d(r6 + 0xfcu, f0);
                        wrf32d(r6 + 0xf8u, f0);
                        wrf32d(r6 + 0xf4u, f0);
                        wrf32d(r6 + 0x124u, f0);
                        wrf32d(r6 + 0x120u, f0);
                        wrf32d(r6 + 0x11cu, f0);
                        r6 = r6 + 0x140u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = (u32)param_1 + 0x108u;
        f0 = (f64)rdf32(0x80572390u);
        ctr = ppc_divwu(r5 + 0x27u - r6, 0x28u);
        if (r6 >= r5) {
            return;
        }
        do {
            wrf32d(r6 + 0xcu, f0);
            wrf32d(r6 + 8u, f0);
            wrf32d(r6 + 4u, f0);
            r6 = r6 + 0x28u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        return;
    }
    return;
}
