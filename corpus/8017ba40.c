#include "tc_rt.h"

s32 fn_8017ba40(s32 param_1)
{
    u32 c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8017bc44u;
    a.r[2] = 0x8017bc74u;
    a.r[3] = 0x1cu;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x70u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = (u32)param_1 + 0x98u;
    a.r[1] = 0x8017e4ecu;
    a.r[2] = 0x8017e700u;
    a.r[3] = 0x114u;
    a.r[4] = 0xf0u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80575028u);
    r6 = (u32)param_1 + 0x10000u;
    r5 = r6;
    wrf32d(r6 + 0x360u, f0);
    r4 = r6 + 0x5b0u;
    wrf32d(r6 + 0x35cu, f0);
    wrf32d(r6 + 0x358u, f0);
    r6 = r6 + 0x36cu;
    if (r6 < r4) {
        r7 = r5 + 0x36cu;
        r8 = r4 - r7;
        r5 = r5 + 0x510u;
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
                f0 = (f64)rdf32(0x80575028u);
                ctr = ppc_divwu(r5 + 0x9fu - r6, 0xa0u);
                if (r6 < r5) {
                    do {
                        wrf32d(r6 + 8u, f0);
                        wrf32d(r6 + 4u, f0);
                        wrf32d(r6, f0);
                        wrf32d(r6 + 0x1cu, f0);
                        wrf32d(r6 + 0x18u, f0);
                        wrf32d(r6 + 0x14u, f0);
                        wrf32d(r6 + 0x30u, f0);
                        wrf32d(r6 + 0x2cu, f0);
                        wrf32d(r6 + 0x28u, f0);
                        wrf32d(r6 + 0x44u, f0);
                        wrf32d(r6 + 0x40u, f0);
                        wrf32d(r6 + 0x3cu, f0);
                        wrf32d(r6 + 0x58u, f0);
                        wrf32d(r6 + 0x54u, f0);
                        wrf32d(r6 + 0x50u, f0);
                        wrf32d(r6 + 0x6cu, f0);
                        wrf32d(r6 + 0x68u, f0);
                        wrf32d(r6 + 0x64u, f0);
                        wrf32d(r6 + 0x80u, f0);
                        wrf32d(r6 + 0x7cu, f0);
                        wrf32d(r6 + 0x78u, f0);
                        wrf32d(r6 + 0x94u, f0);
                        wrf32d(r6 + 0x90u, f0);
                        wrf32d(r6 + 0x8cu, f0);
                        r6 = r6 + 0xa0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_1 + 0x105b0u;
        f0 = (f64)rdf32(0x80575028u);
        ctr = ppc_divwu(r4 + 0x13u - r6, 0x14u);
        if (r6 < r4) {
            do {
                wrf32d(r6 + 8u, f0);
                wrf32d(r6 + 4u, f0);
                wrf32d(r6, f0);
                r6 = r6 + 0x14u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x94u, 0u);
    return param_1;
}
