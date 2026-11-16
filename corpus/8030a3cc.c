#include "tc_rt.h"

u32 fn_8030a3cc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0;
    u64 t0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x802f5da8u, &a);
    wr32(param_1, 0x8039d690u);
    a.r[0] = param_1 + 0x100u;
    (void)tc_call(0x803079d0u, &a);
    f0 = (f64)rdf32(0x805777a8u);
    r5 = param_1 + 0xe4cu;
    r3 = param_1 + 0xebcu;
    wr32(param_1 + 0xe34u, 0u);
    wr32(param_1 + 0xe38u, param_2);
    wrf32d(param_1 + 0xe3cu, f0);
    wrf32d(param_1 + 0xe40u, f0);
    wr32(param_1 + 0xe44u, 0u);
    wr32(param_1 + 0xe48u, 0u);
    if (r5 < r3) {
        r6 = param_1 + 0xe4cu;
        r4 = param_1 + 0xe3cu;
        r7 = r3 - r6;
        r8 = r7 + 0xfu;
        t0 = (u64)(u32)((s32)r8 >> 4) + (u64)(((s32)r8 < 0) && ((r8 & 0xfu) != 0u));
        r10 = (u32)t0 + 1u;
        if ((s32)r10 > 8) {
            c0gt = r6 > r3;
            r3 = 0u;
            r6 = 0u;
            if (!c0gt) {
                c0eq = (r7 & 0x80000000u) == 0u;
                r7 = 1u;
                if (c0eq && (r8 & 0x80000000u) != 0u) {
                    r7 = 0u;
                }
                if (r7 != 0u) {
                    r6 = 1u;
                }
            }
            if (r6 != 0u) {
                r7 = (u32)t0 & 0x80000000u;
                r6 = 1u;
                if (r7 == 0u && r7 != (r10 & 0x80000000u)) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x805777a8u);
                ctr = ((r4 + 0x7fu - r5) >> 7u) & 0x1ffffffu;
                if (r5 < r4) {
                    do {
                        wrf32d(r5, f0);
                        wrf32d(r5 + 4u, f0);
                        wr32(r5 + 8u, 0u);
                        wr32(r5 + 0xcu, 0u);
                        wrf32d(r5 + 0x10u, f0);
                        wrf32d(r5 + 0x14u, f0);
                        wr32(r5 + 0x18u, 0u);
                        wr32(r5 + 0x1cu, 0u);
                        wrf32d(r5 + 0x20u, f0);
                        wrf32d(r5 + 0x24u, f0);
                        wr32(r5 + 0x28u, 0u);
                        wr32(r5 + 0x2cu, 0u);
                        wrf32d(r5 + 0x30u, f0);
                        wrf32d(r5 + 0x34u, f0);
                        wr32(r5 + 0x38u, 0u);
                        wr32(r5 + 0x3cu, 0u);
                        wrf32d(r5 + 0x40u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wr32(r5 + 0x48u, 0u);
                        wr32(r5 + 0x4cu, 0u);
                        wrf32d(r5 + 0x50u, f0);
                        wrf32d(r5 + 0x54u, f0);
                        wr32(r5 + 0x58u, 0u);
                        wr32(r5 + 0x5cu, 0u);
                        wrf32d(r5 + 0x60u, f0);
                        wrf32d(r5 + 0x64u, f0);
                        wr32(r5 + 0x68u, 0u);
                        wr32(r5 + 0x6cu, 0u);
                        wrf32d(r5 + 0x70u, f0);
                        wrf32d(r5 + 0x74u, f0);
                        wr32(r5 + 0x78u, 0u);
                        wr32(r5 + 0x7cu, 0u);
                        r5 = r5 + 0x80u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + 0xebcu;
        f0 = (f64)rdf32(0x805777a8u);
        ctr = ((r3 + 0xfu - r5) >> 4u) & 0xfffffffu;
        if (r5 < r3) {
            do {
                wrf32d(r5, f0);
                wrf32d(r5 + 4u, f0);
                wr32(r5 + 8u, 0u);
                wr32(r5 + 0xcu, 0u);
                r5 = r5 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    return param_1;
}
