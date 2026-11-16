#include "tc_rt.h"

u32 fn_8019e328(u32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r29 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    f0 = (f64)rdf32(0x805757d8u);
    r5 = param_1 + 0x20u;
    r4 = param_1 + 0x28cu;
    wr32(param_1, 0x80370da0u);
    wrf32d(param_1 + 0x1cu, f0);
    wrf32d(param_1 + 0x18u, f0);
    wrf32d(param_1 + 0x14u, f0);
    if (r5 < r4) {
        r7 = param_1 + 0x20u;
        r8 = r4 - r7;
        r6 = param_1 + 0x1ecu;
        r9 = r8 + 0x13u;
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r9) >> 3);
        r10 = r0 + ((r0 >> 0x1fu) & 1u);
        r11 = r10 + 1u;
        if ((s32)r11 > 8) {
            c0gt = r7 > r4;
            r3 = 0u;
            r4 = 0u;
            if (!c0gt) {
                r7 = 1u;
                if ((r8 & 0x80000000u) == 0u && (r9 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                r7 = r10 & 0x80000000u;
                r4 = 1u;
                if (r7 == 0u && r7 != (r11 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x805757d8u);
                ctr = ppc_divwu(r6 + 0x9fu - r5, 0xa0u);
                if (r5 < r6) {
                    do {
                        wrf32d(r5 + 0x10u, f0);
                        wrf32d(r5 + 0xcu, f0);
                        wrf32d(r5 + 8u, f0);
                        wrf32d(r5 + 0x24u, f0);
                        wrf32d(r5 + 0x20u, f0);
                        wrf32d(r5 + 0x1cu, f0);
                        wrf32d(r5 + 0x38u, f0);
                        wrf32d(r5 + 0x34u, f0);
                        wrf32d(r5 + 0x30u, f0);
                        wrf32d(r5 + 0x4cu, f0);
                        wrf32d(r5 + 0x48u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wrf32d(r5 + 0x60u, f0);
                        wrf32d(r5 + 0x5cu, f0);
                        wrf32d(r5 + 0x58u, f0);
                        wrf32d(r5 + 0x74u, f0);
                        wrf32d(r5 + 0x70u, f0);
                        wrf32d(r5 + 0x6cu, f0);
                        wrf32d(r5 + 0x88u, f0);
                        wrf32d(r5 + 0x84u, f0);
                        wrf32d(r5 + 0x80u, f0);
                        wrf32d(r5 + 0x9cu, f0);
                        wrf32d(r5 + 0x98u, f0);
                        wrf32d(r5 + 0x94u, f0);
                        r5 = r5 + 0xa0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x28cu;
        f0 = (f64)rdf32(0x805757d8u);
        ctr = ppc_divwu(r4 + 0x13u - r5, 0x14u);
        if (r5 < r4) {
            do {
                wrf32d(r5 + 0x10u, f0);
                wrf32d(r5 + 0xcu, f0);
                wrf32d(r5 + 8u, f0);
                r5 = r5 + 0x14u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r30 = param_1 + 0xcu;
    r29 = 0u;
    do {
        a.r[0] = param_1;
        a.r[1] = r30;
        (void)tc_call(0x8019f15cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x14u;
    } while ((s32)r29 < 32);
    return param_1;
}
