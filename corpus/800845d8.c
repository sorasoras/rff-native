#include "tc_rt.h"

s32 fn_800845d8(s32 param_1)
{
    u32 c0eq = 0, c0gt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0;
    u64 t0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = (u32)param_1 + 0x524u;
    (void)tc_call(0x8007ae0cu, &a);
    f1 = (f64)rdf32(0x80572908u);
    f0 = (f64)rdf32(0x8057290cu);
    r7 = (u32)param_1 + 0x730u;
    r0 = (u32)param_1 + 0x2288u;
    do {
        wrf32d(r7 + 8u, f1);
        wrf32d(r7 + 4u, f1);
        wrf32d(r7, f1);
        wrf32d(r7 + 0x14u, f1);
        wrf32d(r7 + 0x10u, f1);
        wrf32d(r7 + 0xcu, f1);
        wrf32d(r7 + 0x30u, f0);
        wrf32d(r7 + 0x40u, f1);
        wrf32d(r7 + 0x50u, f1);
        wrf32d(r7 + 0x34u, f1);
        wrf32d(r7 + 0x44u, f0);
        wrf32d(r7 + 0x54u, f1);
        wrf32d(r7 + 0x38u, f1);
        wrf32d(r7 + 0x48u, f1);
        wrf32d(r7 + 0x58u, f0);
        wrf32d(r7 + 0x3cu, f1);
        wrf32d(r7 + 0x4cu, f1);
        wrf32d(r7 + 0x5cu, f1);
        wrf32d(r7 + 0x68u, f1);
        wrf32d(r7 + 0x64u, f1);
        wrf32d(r7 + 0x60u, f1);
        wr32(r7 + 0x6cu, 0u);
        wr32(r7 + 0x18u, 0u);
        wr32(r7 + 0x24u, 0u);
        wr32(r7 + 0x1cu, 0x40u);
        wr32(r7 + 0x20u, 2u);
        wr16(r7 + 0x70u, 0xffffu);
        wrf32d(r7 + 0x28u, f1);
        r7 = r7 + 0x8cu;
    } while (r7 < r0);
    a.r[0] = (u32)param_1 + 0x2294u;
    a.r[1] = 0x80084b2cu;
    a.r[2] = 0x80084c54u;
    a.r[3] = 0xa8u;
    a.r[4] = 0xcu;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = (u32)param_1 + 0x2a74u;
    a.r[1] = 0x80084cbcu;
    a.r[2] = 0x80084d0cu;
    a.r[3] = 0x2cu;
    a.r[4] = 0x28u;
    (void)tc_call(0x80255624u, &a);
    f0 = (f64)rdf32(0x80572908u);
    r5 = (u32)param_1 + 0x315cu;
    r3 = (u32)param_1 + 0x3f1cu;
    do {
        wrf32d(r5 + 0xcu, f0);
        r6 = r5 + 0x40u;
        r4 = r5 + 0x160u;
        wrf32d(r5 + 8u, f0);
        wrf32d(r5 + 4u, f0);
        wrf32d(r5 + 0x30u, f0);
        wrf32d(r5 + 0x2cu, f0);
        wrf32d(r5 + 0x28u, f0);
        wrf32d(r5 + 0x3cu, f0);
        wrf32d(r5 + 0x38u, f0);
        wrf32d(r5 + 0x34u, f0);
        if (r6 < r4) {
            r8 = r5 + 0x40u;
            r7 = r5 + 0x60u;
            r9 = r4 - r8;
            r10 = r9 + 0x1fu;
            t0 = (u64)(u32)((s32)r10 >> 5) + (u64)(((s32)r10 < 0) && ((r10 & 0x1fu) != 0u));
            r12 = (u32)t0 + 1u;
            if ((s32)r12 > 8) {
                c0gt = r8 > r4;
                r4 = 0u;
                r8 = 0u;
                if (!c0gt) {
                    c0eq = (r9 & 0x80000000u) == 0u;
                    r9 = 1u;
                    if (c0eq && (r10 & 0x80000000u) != 0u) {
                        r9 = 0u;
                    }
                    if (r9 != 0u) {
                        r8 = 1u;
                    }
                }
                if (r8 != 0u) {
                    r9 = (u32)t0 & 0x80000000u;
                    r8 = 1u;
                    if (r9 == 0u && r9 != (r12 & 0x80000000u)) {
                        r8 = 0u;
                    }
                    if (r8 != 0u) {
                        r4 = 1u;
                    }
                }
                if (r4 != 0u) {
                    ctr = ((r7 + 0xffu - r6) >> 8u) & 0xffffffu;
                    if (r6 < r7) {
                        do {
                            wrf32d(r6 + 0x10u, f0);
                            wrf32d(r6 + 0xcu, f0);
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 0x1cu, f0);
                            wrf32d(r6 + 0x18u, f0);
                            wrf32d(r6 + 0x14u, f0);
                            wrf32d(r6 + 0x30u, f0);
                            wrf32d(r6 + 0x2cu, f0);
                            wrf32d(r6 + 0x28u, f0);
                            wrf32d(r6 + 0x3cu, f0);
                            wrf32d(r6 + 0x38u, f0);
                            wrf32d(r6 + 0x34u, f0);
                            wrf32d(r6 + 0x50u, f0);
                            wrf32d(r6 + 0x4cu, f0);
                            wrf32d(r6 + 0x48u, f0);
                            wrf32d(r6 + 0x5cu, f0);
                            wrf32d(r6 + 0x58u, f0);
                            wrf32d(r6 + 0x54u, f0);
                            wrf32d(r6 + 0x70u, f0);
                            wrf32d(r6 + 0x6cu, f0);
                            wrf32d(r6 + 0x68u, f0);
                            wrf32d(r6 + 0x7cu, f0);
                            wrf32d(r6 + 0x78u, f0);
                            wrf32d(r6 + 0x74u, f0);
                            wrf32d(r6 + 0x90u, f0);
                            wrf32d(r6 + 0x8cu, f0);
                            wrf32d(r6 + 0x88u, f0);
                            wrf32d(r6 + 0x9cu, f0);
                            wrf32d(r6 + 0x98u, f0);
                            wrf32d(r6 + 0x94u, f0);
                            wrf32d(r6 + 0xb0u, f0);
                            wrf32d(r6 + 0xacu, f0);
                            wrf32d(r6 + 0xa8u, f0);
                            wrf32d(r6 + 0xbcu, f0);
                            wrf32d(r6 + 0xb8u, f0);
                            wrf32d(r6 + 0xb4u, f0);
                            wrf32d(r6 + 0xd0u, f0);
                            wrf32d(r6 + 0xccu, f0);
                            wrf32d(r6 + 0xc8u, f0);
                            wrf32d(r6 + 0xdcu, f0);
                            wrf32d(r6 + 0xd8u, f0);
                            wrf32d(r6 + 0xd4u, f0);
                            wrf32d(r6 + 0xf0u, f0);
                            wrf32d(r6 + 0xecu, f0);
                            wrf32d(r6 + 0xe8u, f0);
                            wrf32d(r6 + 0xfcu, f0);
                            wrf32d(r6 + 0xf8u, f0);
                            wrf32d(r6 + 0xf4u, f0);
                            r6 = r6 + 0x100u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r4 = r5 + 0x160u;
            ctr = ((r4 + 0x1fu - r6) >> 5u) & 0x7ffffffu;
            if (r6 < r4) {
                do {
                    wrf32d(r6 + 0x10u, f0);
                    wrf32d(r6 + 0xcu, f0);
                    wrf32d(r6 + 8u, f0);
                    wrf32d(r6 + 0x1cu, f0);
                    wrf32d(r6 + 0x18u, f0);
                    wrf32d(r6 + 0x14u, f0);
                    r6 = r6 + 0x20u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r5 = r5 + 0x160u;
    } while (r5 < r3);
    f0 = (f64)rdf32(0x80572908u);
    r5 = (u32)param_1 + 0x3f88u;
    r4 = (u32)param_1 + 0x4150u;
    wrf32d((u32)param_1 + 0x3f84u, f0);
    wrf32d((u32)param_1 + 0x3f80u, f0);
    wrf32d((u32)param_1 + 0x3f7cu, f0);
    if (r5 < r4) {
        r7 = (u32)param_1 + 0x3f88u;
        r8 = r4 - r7;
        r6 = (u32)param_1 + 0x4090u;
        r9 = r8 + 0x17u;
        r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r9) >> 2);
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
                f0 = (f64)rdf32(0x80572908u);
                ctr = ppc_divwu(r6 + 0xbfu - r5, 0xc0u);
                if (r5 < r6) {
                    do {
                        wrf32d(r5 + 0x14u, f0);
                        wrf32d(r5 + 0x10u, f0);
                        wrf32d(r5 + 0xcu, f0);
                        wrf32d(r5 + 0x2cu, f0);
                        wrf32d(r5 + 0x28u, f0);
                        wrf32d(r5 + 0x24u, f0);
                        wrf32d(r5 + 0x44u, f0);
                        wrf32d(r5 + 0x40u, f0);
                        wrf32d(r5 + 0x3cu, f0);
                        wrf32d(r5 + 0x5cu, f0);
                        wrf32d(r5 + 0x58u, f0);
                        wrf32d(r5 + 0x54u, f0);
                        wrf32d(r5 + 0x74u, f0);
                        wrf32d(r5 + 0x70u, f0);
                        wrf32d(r5 + 0x6cu, f0);
                        wrf32d(r5 + 0x8cu, f0);
                        wrf32d(r5 + 0x88u, f0);
                        wrf32d(r5 + 0x84u, f0);
                        wrf32d(r5 + 0xa4u, f0);
                        wrf32d(r5 + 0xa0u, f0);
                        wrf32d(r5 + 0x9cu, f0);
                        wrf32d(r5 + 0xbcu, f0);
                        wrf32d(r5 + 0xb8u, f0);
                        wrf32d(r5 + 0xb4u, f0);
                        r5 = r5 + 0xc0u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_1 + 0x4150u;
        f0 = (f64)rdf32(0x80572908u);
        ctr = ppc_divwu(r4 + 0x17u - r5, 0x18u);
        if (r5 < r4) {
            do {
                wrf32d(r5 + 0x14u, f0);
                wrf32d(r5 + 0x10u, f0);
                wrf32d(r5 + 0xcu, f0);
                r5 = r5 + 0x18u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80084df4u, &a);
    return param_1;
}
