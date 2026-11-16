#include "tc_rt.h"

u32 fn_80066204(u32 param_1)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r29 = 0;
    u64 t0 = 0, t1 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f2a1cu, &a);
    f0 = (f64)rdf32(0x805725d8u);
    wr32(param_1, 0x803500d0u);
    wrf32d(param_1 + 0x264u, f0);
    wrf32d(param_1 + 0x260u, f0);
    wrf32d(param_1 + 0x25cu, f0);
    wrf32d(param_1 + 0x270u, f0);
    wrf32d(param_1 + 0x26cu, f0);
    wrf32d(param_1 + 0x268u, f0);
    wrf32d(param_1 + 0x280u, f0);
    wrf32d(param_1 + 0x27cu, f0);
    wrf32d(param_1 + 0x278u, f0);
    wrf32d(param_1 + 0x28cu, f0);
    wrf32d(param_1 + 0x288u, f0);
    wrf32d(param_1 + 0x284u, f0);
    a.r[0] = param_1 + 0x29cu;
    a.r[1] = 0x8007021cu;
    a.r[2] = 0x80070278u;
    a.r[3] = 0xacu;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x54cu;
    a.r[1] = 0x8007d490u;
    a.r[2] = 0x8007d6acu;
    a.r[3] = 0x1a0u;
    a.r[4] = 2u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x890u;
    (void)tc_call(0x8007021cu, &a);
    r29 = param_1 + 0x93cu;
    a.r[0] = r29;
    (void)tc_call(0x800949d0u, &a);
    f0 = (f64)rdf32(0x805725d8u);
    r6 = param_1 + 0xa74u;
    r3 = param_1 + 0xa80u;
    wrf32d(r29 + 0x28u, f0);
    wrf32d(r29 + 0x24u, f0);
    wrf32d(r29 + 0x20u, f0);
    wrf32d(param_1 + 0x97cu, f0);
    wrf32d(param_1 + 0x978u, f0);
    wrf32d(param_1 + 0x974u, f0);
    wrf32d(param_1 + 0x988u, f0);
    wrf32d(param_1 + 0x984u, f0);
    wrf32d(param_1 + 0x980u, f0);
    wrf32d(param_1 + 0x998u, f0);
    wrf32d(param_1 + 0x994u, f0);
    wrf32d(param_1 + 0x990u, f0);
    wrf32d(param_1 + 0x9a4u, f0);
    wrf32d(param_1 + 0x9a0u, f0);
    wrf32d(param_1 + 0x99cu, f0);
    wrf32d(param_1 + 0x9b8u, f0);
    wrf32d(param_1 + 0x9b4u, f0);
    wrf32d(param_1 + 0x9b0u, f0);
    wrf32d(param_1 + 0x9c4u, f0);
    wrf32d(param_1 + 0x9c0u, f0);
    wrf32d(param_1 + 0x9bcu, f0);
    wrf32d(param_1 + 0x9d0u, f0);
    wrf32d(param_1 + 0x9ccu, f0);
    wrf32d(param_1 + 0x9c8u, f0);
    wrf32d(param_1 + 0x9dcu, f0);
    wrf32d(param_1 + 0x9d8u, f0);
    wrf32d(param_1 + 0x9d4u, f0);
    wr16(param_1 + 0xa28u, 0x2e8u);
    wr8(param_1 + 0xa2au, 1u);
    wr8(param_1 + 0xa2bu, 1u);
    wrf32d(param_1 + 0xa38u, f0);
    wrf32d(param_1 + 0xa34u, f0);
    wrf32d(param_1 + 0xa30u, f0);
    wr16(param_1 + 0xa40u, 0u);
    wr8(param_1 + 0xa42u, 0u);
    wr8(param_1 + 0xa43u, 0u);
    wr16(param_1 + 0xa4cu, 0x2e8u);
    wr8(param_1 + 0xa4eu, 1u);
    wr8(param_1 + 0xa4fu, 1u);
    wr16(param_1 + 0xa50u, 0x2e8u);
    wr8(param_1 + 0xa52u, 1u);
    wr8(param_1 + 0xa53u, 1u);
    wr16(param_1 + 0xa70u, 0x2e8u);
    wr8(param_1 + 0xa72u, 1u);
    wr8(param_1 + 0xa73u, 1u);
    if (r6 < r3) {
        r4 = param_1 + 0xa74u;
        r5 = param_1 + 0xa60u;
        r7 = r3 - r4;
        r8 = r7 + 3u;
        t0 = (u64)(u32)((s32)r8 >> 2) + (u64)(((s32)r8 < 0) && ((r8 & 3u) != 0u));
        r10 = (u32)t0 + 1u;
        if ((s32)r10 > 8) {
            c0gt = r4 > r3;
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
                r7 = (u32)t0 & 0x80000000u;
                r4 = 1u;
                if (r7 == 0u && r7 != (r10 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                ctr = ((r5 + 0x1fu - r6) >> 5u) & 0x7ffffffu;
                if (r6 < r5) {
                    do {
                        wr16(r6, 0x2e8u);
                        wr8(r6 + 2u, 1u);
                        wr8(r6 + 3u, 1u);
                        wr16(r6 + 4u, 0x2e8u);
                        wr8(r6 + 6u, 1u);
                        wr8(r6 + 7u, 1u);
                        wr16(r6 + 8u, 0x2e8u);
                        wr8(r6 + 0xau, 1u);
                        wr8(r6 + 0xbu, 1u);
                        wr16(r6 + 0xcu, 0x2e8u);
                        wr8(r6 + 0xeu, 1u);
                        wr8(r6 + 0xfu, 1u);
                        wr16(r6 + 0x10u, 0x2e8u);
                        wr8(r6 + 0x12u, 1u);
                        wr8(r6 + 0x13u, 1u);
                        wr16(r6 + 0x14u, 0x2e8u);
                        wr8(r6 + 0x16u, 1u);
                        wr8(r6 + 0x17u, 1u);
                        wr16(r6 + 0x18u, 0x2e8u);
                        wr8(r6 + 0x1au, 1u);
                        wr8(r6 + 0x1bu, 1u);
                        wr16(r6 + 0x1cu, 0x2e8u);
                        wr8(r6 + 0x1eu, 1u);
                        wr8(r6 + 0x1fu, 1u);
                        r6 = r6 + 0x20u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + 0xa80u;
        ctr = ((r3 + 3u - r6) >> 2u) & 0x3fffffffu;
        if (r6 < r3) {
            do {
                wr16(r6, 0x2e8u);
                wr8(r6 + 2u, 1u);
                wr8(r6 + 3u, 1u);
                r6 = r6 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    r6 = param_1 + 0xa8cu;
    r3 = param_1 + 0xab4u;
    wr16(param_1 + 0xa84u, 0x2e8u);
    wr8(param_1 + 0xa86u, 1u);
    wr8(param_1 + 0xa87u, 1u);
    if (r6 < r3) {
        r4 = param_1 + 0xa8cu;
        r5 = param_1 + 0xa74u;
        r7 = r3 - r4;
        r8 = r7 + 7u;
        t1 = (u64)(u32)((s32)r8 >> 3) + (u64)(((s32)r8 < 0) && ((r8 & 7u) != 0u));
        r10 = (u32)t1 + 1u;
        if ((s32)r10 > 8) {
            c0gt = r4 > r3;
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
                r7 = (u32)t1 & 0x80000000u;
                r4 = 1u;
                if (r7 == 0u && r7 != (r10 & 0x80000000u)) {
                    r4 = 0u;
                }
                if (r4 != 0u) {
                    r3 = 1u;
                }
            }
            if (r3 != 0u) {
                ctr = ((r5 + 0x3fu - r6) >> 6u) & 0x3ffffffu;
                if (r6 < r5) {
                    do {
                        wr16(r6, 0x2e8u);
                        wr8(r6 + 2u, 1u);
                        wr8(r6 + 3u, 1u);
                        wr16(r6 + 8u, 0x2e8u);
                        wr8(r6 + 0xau, 1u);
                        wr8(r6 + 0xbu, 1u);
                        wr16(r6 + 0x10u, 0x2e8u);
                        wr8(r6 + 0x12u, 1u);
                        wr8(r6 + 0x13u, 1u);
                        wr16(r6 + 0x18u, 0x2e8u);
                        wr8(r6 + 0x1au, 1u);
                        wr8(r6 + 0x1bu, 1u);
                        wr16(r6 + 0x20u, 0x2e8u);
                        wr8(r6 + 0x22u, 1u);
                        wr8(r6 + 0x23u, 1u);
                        wr16(r6 + 0x28u, 0x2e8u);
                        wr8(r6 + 0x2au, 1u);
                        wr8(r6 + 0x2bu, 1u);
                        wr16(r6 + 0x30u, 0x2e8u);
                        wr8(r6 + 0x32u, 1u);
                        wr8(r6 + 0x33u, 1u);
                        wr16(r6 + 0x38u, 0x2e8u);
                        wr8(r6 + 0x3au, 1u);
                        wr8(r6 + 0x3bu, 1u);
                        r6 = r6 + 0x40u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = param_1 + 0xab4u;
        ctr = ((r3 + 7u - r6) >> 3u) & 0x1fffffffu;
        if (r6 < r3) {
            do {
                wr16(r6, 0x2e8u);
                wr8(r6 + 2u, 1u);
                wr8(r6 + 3u, 1u);
                r6 = r6 + 8u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f0 = (f64)rdf32(0x805725d8u);
    wrf32d(param_1 + 0xaccu, f0);
    wrf32d(param_1 + 0xac8u, f0);
    wrf32d(param_1 + 0xac4u, f0);
    a.r[0] = param_1 + 0xad4u;
    (void)tc_call(0x8018b660u, &a);
    a.r[0] = param_1 + 0xcdcu;
    (void)tc_call(0x8019fa70u, &a);
    a.r[0] = param_1 + 0xdf0u;
    (void)tc_call(0x800a17a4u, &a);
    a.r[0] = param_1 + 0xf28u;
    a.r[1] = 0x800cdb68u;
    a.r[2] = 0x800cdbc0u;
    a.r[3] = 0xf4u;
    a.r[4] = 5u;
    (void)tc_call(0x80255624u, &a);
    r29 = param_1 + 0x13ecu;
    a.r[0] = r29;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(r29, 0x80350198u);
    a.r[0] = param_1 + 0x14d0u;
    (void)tc_call(0x800cdb68u, &a);
    f0 = (f64)rdf32(0x805725d8u);
    r5 = param_1 + 0x1604u;
    r4 = param_1 + 0x1610u;
    wrf32d(param_1 + 0x1600u, f0);
    wrf32d(param_1 + 0x15fcu, f0);
    wrf32d(param_1 + 0x15f8u, f0);
    if (r5 < r4) {
        r7 = param_1 + 0x1604u;
        r8 = r4 - r7;
        r6 = param_1 + 0x15b0u;
        r9 = r8 + 0xbu;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r9) >> 1);
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
                f0 = (f64)rdf32(0x805725d8u);
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
        r4 = param_1 + 0x1610u;
        f0 = (f64)rdf32(0x805725d8u);
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
    f1 = (f64)rdf32(0x805725d8u);
    wrf32d(param_1 + 0x1630u, f1);
    wrf32d(param_1 + 0x162cu, f1);
    wrf32d(param_1 + 0x1628u, f1);
    wrf32d(param_1 + 0x25cu, (f64)rdf32(0x804890d4u));
    wrf32d(param_1 + 0x260u, (f64)rdf32(0x804890d8u));
    wrf32d(param_1 + 0x264u, (f64)rdf32(0x804890dcu));
    wr32(param_1 + 0x254u, 8u);
    wr32(param_1 + 0x258u, 8u);
    wrf32d(param_1 + 0x274u, f1);
    wr32(param_1 + 0xa48u, 0u);
    wr32(param_1 + 0x88cu, 1u);
    wr32(param_1 + 0xa08u, 0x21u);
    wr32(param_1 + 0xa0cu, 0x21u);
    wr32(param_1 + 0xa10u, 0x21u);
    wr32(param_1 + 0xa14u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8006c418u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8006c34cu, &a);
    wr32(param_1 + 0xa68u, 0u);
    wr32(param_1 + 0xa6cu, 4u);
    wr32(param_1 + 0xa80u, 0u);
    wr32(param_1 + 0xa18u, 0x78u);
    wr32(param_1 + 0x15c4u, 0xffffffffu);
    wr32(param_1 + 0x15c8u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x8006c858u, &a);
    f2 = (f64)rdf32(0x804890c8u);
    wrf32d(param_1 + 0x99cu, f2);
    f1 = (f64)rdf32(0x804890ccu);
    wrf32d(param_1 + 0x9a0u, f1);
    f0 = (f64)rdf32(0x804890d0u);
    wrf32d(param_1 + 0x9a4u, f0);
    wrf32d(param_1 + 0x9bcu, f2);
    wrf32d(param_1 + 0x9c0u, f1);
    wrf32d(param_1 + 0x9c4u, f0);
    wr32(param_1 + 0x9e4u, 0u);
    wr32(param_1 + 0x9ecu, 1u);
    wr32(param_1 + 0x9e8u, 0u);
    wr32(param_1 + 0x9f0u, 0u);
    wr32(param_1 + 0x9f8u, 0u);
    wr32(param_1 + 0x9f4u, 0u);
    wr32(param_1 + 0x15e4u, 0u);
    wr32(param_1 + 0x161cu, 0u);
    wr32(param_1 + 0x1620u, 0u);
    wr32(param_1 + 0x1624u, 0u);
    wr32(param_1 + 0x1638u, 0u);
    wr32(param_1 + 0x163cu, 0u);
    wr32(param_1 + 0x1640u, 0u);
    wr32(param_1 + 0x1644u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x801a0954u, &a);
    wr32(param_1 + 0xa1cu, 0u);
    wr32(param_1 + 0xa64u, 0u);
    wr32(param_1 + 0x1648u, 0u);
    return param_1;
}
