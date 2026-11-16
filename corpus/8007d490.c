#include "tc_rt.h"

u32 fn_8007d490(u32 param_1)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007021cu, &a);
    wr32(param_1, 0x80350d80u);
    a.r[0] = param_1 + 0xacu;
    a.r[1] = 0x8007d670u;
    a.r[2] = 0x80066970u;
    a.r[3] = 0xe4u;
    a.r[4] = 1u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80572850u);
    r5 = param_1 + 0x19cu;
    r4 = param_1 + 0x19cu;
    wrf32d(param_1 + 0x198u, f0);
    wrf32d(param_1 + 0x194u, f0);
    wrf32d(param_1 + 0x190u, f0);
    if (r5 < r4) {
        r7 = r4 - r4;
        r8 = r7 + 0xbu;
        r6 = param_1 + 0x13cu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r8) >> 1);
        r9 = r0 + ((r0 >> 0x1fu) & 1u);
        r10 = r9 + 1u;
        if ((s32)r10 > 8) {
            c0gt = r4 > r4;
            r3 = 0u;
            r4 = 0u;
            if (!c0gt) {
                c0eq = (r7 & 0x80000000u) == 0u;
                r7 = 1u;
                if (c0eq && (r8 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r4 = 1u;
                }
            }
            if (r4 != 0u) {
                r7 = r9 & 0x80000000u;
                r4 = 1u;
                if (r7 == 0u && r7 != (r10 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x80572850u);
                ctr = ppc_divwu(r6 + 0x5fu - r5, 0x60u);
                if (r5 < r6) {
                    do {
                        wrf32d(r5 + 8u, f0);
                        wrf32d(r5 + 4u, f0);
                        wrf32d(r5, f0);
                        wrf32d(r5 + 0x14u, f0);
                        wrf32d(r5 + 0x10u, f0);
                        wrf32d(r5 + 0xcu, f0);
                        wrf32d(r5 + 0x20u, f0);
                        wrf32d(r5 + 0x1cu, f0);
                        wrf32d(r5 + 0x18u, f0);
                        wrf32d(r5 + 0x2cu, f0);
                        wrf32d(r5 + 0x28u, f0);
                        wrf32d(r5 + 0x24u, f0);
                        wrf32d(r5 + 0x38u, f0);
                        wrf32d(r5 + 0x34u, f0);
                        wrf32d(r5 + 0x30u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wrf32d(r5 + 0x40u, f0);
                        wrf32d(r5 + 0x3cu, f0);
                        wrf32d(r5 + 0x50u, f0);
                        wrf32d(r5 + 0x4cu, f0);
                        wrf32d(r5 + 0x48u, f0);
                        wrf32d(r5 + 0x5cu, f0);
                        wrf32d(r5 + 0x58u, f0);
                        wrf32d(r5 + 0x54u, f0);
                        r5 = r5 + 0x60u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x19cu;
        f0 = (f64)rdf32(0x80572850u);
        ctr = ppc_divwu(r4 + 0xbu - r5, 0xcu);
        if (r5 < r4) {
            do {
                wrf32d(r5 + 8u, f0);
                wrf32d(r5 + 4u, f0);
                wrf32d(r5, f0);
                r5 = r5 + 0xcu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_1 + 0x19cu, 0u);
    return param_1;
}
