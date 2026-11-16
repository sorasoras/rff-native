#include "tc_rt.h"

u32 fn_801c878c(u32 param_1, u32 param_2)
{
    u32 c0eq = 0, c0gt = 0, c1gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    u32 r10 = 0;
    u64 t0 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    f0 = (f64)rdf32(0x80575de0u);
    r5 = param_1 + 0x171cu;
    r3 = param_1 + 0x1accu;
    wr32(param_1, 0x803736e0u);
    wr32(param_1 + 0x1690u, 0u);
    wrf32d(param_1 + 0x1718u, f0);
    wrf32d(param_1 + 0x1714u, f0);
    wrf32d(param_1 + 0x1710u, f0);
    if (r5 < r3) {
        r6 = param_1 + 0x171cu;
        r4 = param_1 + 0x1a4cu;
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
                f0 = (f64)rdf32(0x80575de0u);
                ctr = ((r4 + 0x7fu - r5) >> 7u) & 0x1ffffffu;
                if (r5 < r4) {
                    do {
                        wrf32d(r5 + 0xcu, f0);
                        wrf32d(r5 + 8u, f0);
                        wrf32d(r5 + 4u, f0);
                        wrf32d(r5 + 0x1cu, f0);
                        wrf32d(r5 + 0x18u, f0);
                        wrf32d(r5 + 0x14u, f0);
                        wrf32d(r5 + 0x2cu, f0);
                        wrf32d(r5 + 0x28u, f0);
                        wrf32d(r5 + 0x24u, f0);
                        wrf32d(r5 + 0x3cu, f0);
                        wrf32d(r5 + 0x38u, f0);
                        wrf32d(r5 + 0x34u, f0);
                        wrf32d(r5 + 0x4cu, f0);
                        wrf32d(r5 + 0x48u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wrf32d(r5 + 0x5cu, f0);
                        wrf32d(r5 + 0x58u, f0);
                        wrf32d(r5 + 0x54u, f0);
                        wrf32d(r5 + 0x6cu, f0);
                        wrf32d(r5 + 0x68u, f0);
                        wrf32d(r5 + 0x64u, f0);
                        wrf32d(r5 + 0x7cu, f0);
                        wrf32d(r5 + 0x78u, f0);
                        wrf32d(r5 + 0x74u, f0);
                        r5 = r5 + 0x80u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + 0x1accu;
        f0 = (f64)rdf32(0x80575de0u);
        ctr = ((r3 + 0xfu - r5) >> 4u) & 0xfffffffu;
        if (r5 < r3) {
            do {
                wrf32d(r5 + 0xcu, f0);
                wrf32d(r5 + 8u, f0);
                wrf32d(r5 + 4u, f0);
                r5 = r5 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x80575de0u);
    r7 = param_1 + 0x1b30u;
    r0 = param_1 + 0x1c8cu;
    wr32(param_1 + 0x1b10u, 0x28u);
    c1gt = r7 > r0;
    wr32(param_1 + 0x1b0cu, 0x80373938u);
    wr32(param_1 + 0x1b18u, 0x29u);
    wr32(param_1 + 0x1b14u, 0x80373908u);
    wrf32d(param_1 + 0x1b1cu, f0);
    wrf32d(param_1 + 0x1b2cu, f0);
    wrf32d(param_1 + 0x1b28u, f0);
    wrf32d(param_1 + 0x1b24u, f0);
    if (r7 < r0) {
        r6 = r0 - r7;
        r8 = r6 + 0xbu;
        r4 = param_1 + 0x1c2cu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r8) >> 1);
        r9 = r0 + ((r0 >> 0x1fu) & 1u);
        r10 = r9 + 1u;
        if ((s32)r10 > 8) {
            r3 = 0u;
            r5 = 0u;
            if (!c1gt) {
                c0eq = (r6 & 0x80000000u) == 0u;
                r6 = 1u;
                if (c0eq && (r8 & 0x80000000u) != 0u) {
                    r6 = 0u;
                }
                if (r6 != 0u) {
                    r5 = 1u;
                }
            }
            if (r5 != 0u) {
                r6 = r9 & 0x80000000u;
                r5 = 1u;
                if (r6 == 0u && r6 != (r10 & 0x80000000u)) {
                    r5 = 0u;
                }
                if (r5 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                f0 = (f64)rdf32(0x80575de0u);
                ctr = ppc_divwu(r4 + 0x5fu - r7, 0x60u);
                if (r7 < r4) {
                    do {
                        wrf32d(r7 + 8u, f0);
                        wrf32d(r7 + 4u, f0);
                        wrf32d(r7, f0);
                        wrf32d(r7 + 0x14u, f0);
                        wrf32d(r7 + 0x10u, f0);
                        wrf32d(r7 + 0xcu, f0);
                        wrf32d(r7 + 0x20u, f0);
                        wrf32d(r7 + 0x1cu, f0);
                        wrf32d(r7 + 0x18u, f0);
                        wrf32d(r7 + 0x2cu, f0);
                        wrf32d(r7 + 0x28u, f0);
                        wrf32d(r7 + 0x24u, f0);
                        wrf32d(r7 + 0x38u, f0);
                        wrf32d(r7 + 0x34u, f0);
                        wrf32d(r7 + 0x30u, f0);
                        wrf32d(r7 + 0x44u, f0);
                        wrf32d(r7 + 0x40u, f0);
                        wrf32d(r7 + 0x3cu, f0);
                        wrf32d(r7 + 0x50u, f0);
                        wrf32d(r7 + 0x4cu, f0);
                        wrf32d(r7 + 0x48u, f0);
                        wrf32d(r7 + 0x5cu, f0);
                        wrf32d(r7 + 0x58u, f0);
                        wrf32d(r7 + 0x54u, f0);
                        r7 = r7 + 0x60u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = param_1 + 0x1c8cu;
        f0 = (f64)rdf32(0x80575de0u);
        ctr = ppc_divwu(r4 + 0xbu - r7, 0xcu);
        if (r7 < r4) {
            do {
                wrf32d(r7 + 8u, f0);
                wrf32d(r7 + 4u, f0);
                wrf32d(r7, f0);
                r7 = r7 + 0xcu;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32(param_1 + 0x1c8cu, 0u);
    a.r[0] = param_1 + 0x1c90u;
    (void)tc_call(0x8020bea4u, &a);
    wr32(param_1 + 0x1dd8u, 0x2au);
    wr32(param_1 + 0x1dd4u, 0x803738d8u);
    wr32(param_1 + 0x1de4u, 0u);
    wr32(param_1 + 0x1de8u, 0u);
    wr32(param_1 + 0x1dfcu, param_2);
    wr32(param_1 + 0x1decu, 0u);
    wr32(param_1 + 0x1df0u, 0u);
    wr32(param_1 + 0x1df4u, 0u);
    wr32(param_1 + 0x1df8u, 0u);
    wr32(param_1 + 0x1694u, 0u);
    wr32(param_1 + 0x1698u, 0u);
    wr32(param_1 + 0x169cu, 0u);
    wr32(param_1 + 0x16a0u, 0u);
    wr32(param_1 + 0x16a4u, 0u);
    wr32(param_1 + 0x16a8u, 0u);
    wr32(param_1 + 0x16acu, 0u);
    wr32(param_1 + 0x16b0u, 0u);
    wr32(param_1 + 0x16b4u, 0u);
    wr32(param_1 + 0x16b8u, 0u);
    wr32(param_1 + 0x16bcu, 0u);
    wr32(param_1 + 0x16c0u, 0u);
    wr32(param_1 + 0x16c4u, 0u);
    wr32(param_1 + 0x16c8u, 0u);
    wr32(param_1 + 0x16ccu, 0u);
    wr32(param_1 + 0x16d0u, 0u);
    wr32(param_1 + 0x16d4u, 0u);
    wr32(param_1 + 0x16d8u, 0u);
    wr32(param_1 + 0x16dcu, 0u);
    wr32(param_1 + 0x16e0u, 0u);
    wr32(param_1 + 0x16e4u, 0u);
    wr32(param_1 + 0x16e8u, 0u);
    wr32(param_1 + 0x16ecu, 0u);
    wr32(param_1 + 0x16f0u, 0u);
    wr32(param_1 + 0x16f4u, 0u);
    wr32(param_1 + 0x16f8u, 0u);
    wr32(param_1 + 0x16fcu, 0u);
    wr32(param_1 + 0x1700u, 0u);
    wr32(param_1 + 0x1704u, 0u);
    wr32(param_1 + 0x1708u, 0u);
    return param_1;
}
