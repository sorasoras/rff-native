#include "tc_rt.h"

void fn_80215ce8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0eq = 0, c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    u32 r9 = 0, r10 = 0, r11 = 0, r12 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r8 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfacu, rd32(param_3));
    wr32(0x817fdfb0u, r8);
    wr32(0x817fdfb4u, r0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfacu;
    r3 = tc_call(0x80215ab0u, &a);
    r28 = r3;
    r6 = rd32(param_4 + 4u);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdfa0u, rd32(param_4));
    wr32(0x817fdfa4u, r6);
    wr32(0x817fdfa8u, r0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfa0u;
    r3 = tc_call(0x80215ab0u, &a);
    if (r28 == 0xffffffffu || r3 == 0xffffffffu) {
        wr32(param_5, 0u);
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = r28;
        a.r[3] = r3;
        a.r[4] = 0x817fdf48u;
        r3 = tc_call(0x80216658u, &a);
        r29 = rd32(0x817fdf48u) + 4u;
        r5 = r29 * 0xcu;
        r28 = (0u - r5) & 0xfffffff8u;
        wr32(r28 - 0x7e8020c0u, rd32(0x817fdf40u));
        r1 = r28 - 0x7e8020c0u;
        f0 = (f64)rdf32(0x805769c0u);
        r28 = r1 + 8u;
        wrf32d(r1 + 0x10u, f0);
        r6 = r28 + 0xcu;
        wrf32d(r1 + 0xcu, f0);
        wrf32d(r1 + 8u, f0);
        r5 = ((ppc_mulhwu(0xaaaaaaabu, r5) >> 3u) & 0x1fffffffu) * 0xcu;
        r4 = r28 + r5;
        c1gt = r6 > r4;
        if (r6 < r4) {
            r9 = r5 - 0xcu;
            r10 = r9 + 0xbu;
            r7 = r4 - 0x60u;
            r0 = (u32)((s32)ppc_mulhw(715827883, (s32)r10) >> 1);
            r11 = r0 + ((r0 >> 0x1fu) & 1u);
            r12 = r11 + 1u;
            if ((s32)r12 > 8) {
                r5 = 0u;
                r8 = 0u;
                if (!c1gt) {
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
                    r9 = r11 & 0x80000000u;
                    r8 = 1u;
                    if (r9 == 0u && r9 != (r12 & 0x80000000u)) {
                        r8 = 0u;
                    }
                    if (r8 != 0u) {
                        r5 = 1u;
                    }
                }
                if (r5 != 0u) {
                    f0 = (f64)rdf32(0x805769c0u);
                    ctr = ppc_divwu(r7 + 0x5fu - r6, 0x60u);
                    if (r6 < r7) {
                        do {
                            wrf32d(r6 + 8u, f0);
                            wrf32d(r6 + 4u, f0);
                            wrf32d(r6, f0);
                            wrf32d(r6 + 0x14u, f0);
                            wrf32d(r6 + 0x10u, f0);
                            wrf32d(r6 + 0xcu, f0);
                            wrf32d(r6 + 0x20u, f0);
                            wrf32d(r6 + 0x1cu, f0);
                            wrf32d(r6 + 0x18u, f0);
                            wrf32d(r6 + 0x2cu, f0);
                            wrf32d(r6 + 0x28u, f0);
                            wrf32d(r6 + 0x24u, f0);
                            wrf32d(r6 + 0x38u, f0);
                            wrf32d(r6 + 0x34u, f0);
                            wrf32d(r6 + 0x30u, f0);
                            wrf32d(r6 + 0x44u, f0);
                            wrf32d(r6 + 0x40u, f0);
                            wrf32d(r6 + 0x3cu, f0);
                            wrf32d(r6 + 0x50u, f0);
                            wrf32d(r6 + 0x4cu, f0);
                            wrf32d(r6 + 0x48u, f0);
                            wrf32d(r6 + 0x5cu, f0);
                            wrf32d(r6 + 0x58u, f0);
                            wrf32d(r6 + 0x54u, f0);
                            r6 = r6 + 0x60u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            f0 = (f64)rdf32(0x805769c0u);
            ctr = ppc_divwu(r4 + 0xbu - r6, 0xcu);
            if (r6 < r4) {
                do {
                    wrf32d(r6 + 8u, f0);
                    wrf32d(r6 + 4u, f0);
                    wrf32d(r6, f0);
                    r6 = r6 + 0xcu;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        f0 = (f64)rdf32(param_3);
        r6 = (r29 - 2u) * 0xcu;
        f4 = (f64)rdf32(param_3 + 4u);
        wrf32d(r28, f0);
        f3 = (f64)rdf32(param_3 + 8u);
        wrf32d(r28 + 4u, f4);
        r0 = (r29 - 1u) * 0xcu;
        f2 = (f64)rdf32(param_4);
        r5 = r28 + r6;
        wrf32d(r28 + 8u, f3);
        f1 = (f64)rdf32(param_4 + 4u);
        r4 = r28 + r0;
        wrf32d(r28 + 0xcu, f0);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(r28 + 0x10u, f4);
        wrf32d(r28 + 0x14u, f3);
        wrf32d(r28 + r6, f2);
        wrf32d(r5 + 4u, f1);
        wrf32d(r5 + 8u, f0);
        wrf32d(r28 + r0, f2);
        wrf32d(r4 + 4u, f1);
        wrf32d(r4 + 8u, f0);
        if (r3 != 0u) {
            r6 = r28 + 0x18u;
            r5 = (param_2 << 2u) & 0xfffffffcu;
            r7 = 0u;
            while ((s32)r7 < (s32)rd32(0x817fdf48u)) {
                r0 = rd32(r3);
                r3 = r3 + 4u;
                r7 = r7 + 1u;
                r0 = r0 * 0xcu;
                r4 = rd32(param_1 + r5) + r0;
                f2 = (f64)rdf32(r4 + 0xcu);
                f1 = (f64)rdf32(r4 + 8u);
                f0 = (f64)rdf32(r4 + 4u);
                wrf32d(0x817fdf98u, f1);
                wrf32d(r6, f0);
                wrf32d(r6 + 4u, f1);
                wrf32d(r6 + 8u, f2);
                r6 = r6 + 0xcu;
                wrf32d(0x817fdf94u, f0);
                wrf32d(0x817fdf9cu, f2);
            }
            if ((s32)r29 > 3) {
                r0 = rd32(r28 + 0x1cu);
                wr32(0x817fdf88u, rd32(r28 + 0x18u));
                wr32(0x817fdf8cu, r0);
                wr32(0x817fdf90u, rd32(r28 + 0x20u));
                a.r[0] = 0x817fdf88u;
                a.r[1] = r28 + 0xcu;
                a.r[2] = 0x817fdf88u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdf88u;
                f1 = tc_callf(0x80234440u, &a);
                r0 = rd32(r28 + 0x1cu);
                f31 = f1;
                wr32(0x817fdf7cu, rd32(r28 + 0x18u));
                wr32(0x817fdf80u, r0);
                wr32(0x817fdf84u, rd32(r28 + 0x20u));
                a.r[0] = 0x817fdf7cu;
                a.r[1] = param_3;
                a.r[2] = 0x817fdf7cu;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdf7cu;
                f1 = tc_callf(0x80234440u, &a);
                if (f31 > f1) {
                    c1lt = (s32)r29 < 1;
                    r7 = 1u;
                    if ((s32)r29 > 1) {
                        r4 = r29 - 8u;
                        if ((s32)(r29 - 1u) > 8) {
                            r5 = 0u;
                            r6 = 0u;
                            if (!c1lt && (s32)r29 <= 2147483646) {
                                r6 = 1u;
                            }
                            if (r6 != 0u) {
                                r6 = r29 & 0x80000000u;
                                r3 = 1u;
                                if ((r6 - 0x80000000u) == 0u && r6 != ((r29 - 1u) & 0x80000000u)) {
                                    r3 = 0u;
                                }
                                if (r3 != 0u) {
                                    r5 = 1u;
                                }
                            }
                            if (r5 != 0u) {
                                r3 = r28 + 0xcu;
                                ctr = ((r4 + 6u) >> 3u) & 0x1fffffffu;
                                if ((s32)r4 > 1) {
                                    do {
                                        r7 = r7 + 8u;
                                        wrf32d(r3, (f64)rdf32(r3 + 0xcu));
                                        wrf32d(r3 + 4u, (f64)rdf32(r3 + 0x10u));
                                        wrf32d(r3 + 8u, (f64)rdf32(r3 + 0x14u));
                                        wrf32d(r3 + 0xcu, (f64)rdf32(r3 + 0x18u));
                                        wrf32d(r3 + 0x10u, (f64)rdf32(r3 + 0x1cu));
                                        wrf32d(r3 + 0x14u, (f64)rdf32(r3 + 0x20u));
                                        wrf32d(r3 + 0x18u, (f64)rdf32(r3 + 0x24u));
                                        wrf32d(r3 + 0x1cu, (f64)rdf32(r3 + 0x28u));
                                        wrf32d(r3 + 0x20u, (f64)rdf32(r3 + 0x2cu));
                                        wrf32d(r3 + 0x24u, (f64)rdf32(r3 + 0x30u));
                                        wrf32d(r3 + 0x28u, (f64)rdf32(r3 + 0x34u));
                                        wrf32d(r3 + 0x2cu, (f64)rdf32(r3 + 0x38u));
                                        wrf32d(r3 + 0x30u, (f64)rdf32(r3 + 0x3cu));
                                        wrf32d(r3 + 0x34u, (f64)rdf32(r3 + 0x40u));
                                        wrf32d(r3 + 0x38u, (f64)rdf32(r3 + 0x44u));
                                        wrf32d(r3 + 0x3cu, (f64)rdf32(r3 + 0x48u));
                                        wrf32d(r3 + 0x40u, (f64)rdf32(r3 + 0x4cu));
                                        wrf32d(r3 + 0x44u, (f64)rdf32(r3 + 0x50u));
                                        wrf32d(r3 + 0x48u, (f64)rdf32(r3 + 0x54u));
                                        wrf32d(r3 + 0x4cu, (f64)rdf32(r3 + 0x58u));
                                        wrf32d(r3 + 0x50u, (f64)rdf32(r3 + 0x5cu));
                                        wrf32d(r3 + 0x54u, (f64)rdf32(r3 + 0x60u));
                                        wrf32d(r3 + 0x58u, (f64)rdf32(r3 + 0x64u));
                                        wrf32d(r3 + 0x5cu, (f64)rdf32(r3 + 0x68u));
                                        r3 = r3 + 0x60u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                        }
                        r3 = r28 + (r7 * 0xcu);
                        ctr = r29 - r7;
                        if ((s32)r7 < (s32)r29) {
                            do {
                                wrf32d(r3, (f64)rdf32(r3 + 0xcu));
                                wrf32d(r3 + 4u, (f64)rdf32(r3 + 0x10u));
                                wrf32d(r3 + 8u, (f64)rdf32(r3 + 0x14u));
                                r3 = r3 + 0xcu;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                    r29 = r29 - 1u;
                }
            }
            if ((s32)r29 >= 4) {
                r30 = (r29 - 3u) * 0xcu;
                r6 = r28 + r30;
                r25 = (r29 - 4u) * 0xcu;
                r0 = rd32(r6 + 4u);
                wr32(0x817fdf70u, rd32(r28 + r30));
                wr32(0x817fdf74u, r0);
                wr32(0x817fdf78u, rd32(r6 + 8u));
                a.r[0] = 0x817fdf70u;
                a.r[1] = r28 + r25;
                a.r[2] = 0x817fdf70u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdf70u;
                f1 = tc_callf(0x80234440u, &a);
                r6 = rd32(param_4 + 4u);
                f31 = f1;
                r0 = rd32(param_4 + 8u);
                wr32(0x817fdf64u, rd32(param_4));
                wr32(0x817fdf68u, r6);
                wr32(0x817fdf6cu, r0);
                a.r[0] = 0x817fdf64u;
                a.r[1] = r28 + r25;
                a.r[2] = 0x817fdf64u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdf64u;
                f1 = tc_callf(0x80234440u, &a);
                if (f31 > f1) {
                    r3 = r28 + r30;
                    f1 = (f64)rdf32(param_4 + 4u);
                    r29 = r29 - 1u;
                    wrf32d(r28 + r30, (f64)rdf32(param_4));
                    f0 = (f64)rdf32(param_4 + 8u);
                    wrf32d(r3 + 4u, f1);
                    wrf32d(r3 + 8u, f0);
                }
            }
            r0 = rd32(r28 + 0x10u);
            wr32(0x817fdfc4u, rd32(r28 + 0xcu));
            wr32(0x817fdfc8u, r0);
            wr32(0x817fdfccu, rd32(r28 + 0x14u));
            a.r[0] = 0x817fdfc4u;
            a.r[1] = r28 + 0x18u;
            a.r[2] = 0x817fdfc4u;
            (void)tc_call(0x802343a4u, &a);
            r30 = (r29 - 2u) * 0xcu;
            r7 = r28 + r30;
            r6 = rd32(r7 + 4u);
            wr32(0x817fdfb8u, rd32(r28 + r30));
            wr32(0x817fdfbcu, r6);
            wr32(0x817fdfc0u, rd32(r7 + 8u));
            a.r[0] = 0x817fdfb8u;
            a.r[1] = r28 + ((r29 - 3u) * 0xcu);
            a.r[2] = 0x817fdfb8u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdfc4u;
            f1 = tc_callf(0x80234440u, &a);
            if (!(f1 > (f64)rdf32(0x805769c4u))) {
                f0 = (f64)rdf32(0x805769c0u);
                wrf32d(0x817fdfccu, f0);
                wrf32d(0x817fdfc8u, f0);
                wrf32d(0x817fdfc4u, f0);
            } else {
                f1 = (f64)rdf32(0x805769c0u);
                r0 = 0u;
                if (f1 == (f64)rdf32(0x817fdfc4u) && f1 == (f64)rdf32(0x817fdfc8u) && f1 == (f64)rdf32(0x817fdfccu)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfc4u;
                    a.r[1] = 0x817fdfc4u;
                    (void)tc_call(0x802343e4u, &a);
                }
            }
            r0 = rd32(r28 + 0x10u);
            wr32(0x817fdf58u, rd32(r28 + 0xcu));
            wr32(0x817fdf5cu, r0);
            wr32(0x817fdf60u, rd32(r28 + 0x14u));
            a.r[0] = 0x817fdf58u;
            a.r[1] = 0x817fdfc4u;
            a.r[2] = 0x817fdf58u;
            (void)tc_call(0x80234380u, &a);
            wrf32d(r28, (f64)rdf32(0x817fdf58u));
            wrf32d(r28 + 4u, (f64)rdf32(0x817fdf5cu));
            wrf32d(r28 + 8u, (f64)rdf32(0x817fdf60u));
            a.r[0] = 0x817fdfb8u;
            f1 = tc_callf(0x80234440u, &a);
            if (!(f1 > (f64)rdf32(0x805769c4u))) {
                f0 = (f64)rdf32(0x805769c0u);
                wrf32d(0x817fdfc0u, f0);
                wrf32d(0x817fdfbcu, f0);
                wrf32d(0x817fdfb8u, f0);
            } else {
                f1 = (f64)rdf32(0x805769c0u);
                r0 = 0u;
                if (f1 == (f64)rdf32(0x817fdfb8u) && f1 == (f64)rdf32(0x817fdfbcu) && f1 == (f64)rdf32(0x817fdfc0u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfb8u;
                    a.r[1] = 0x817fdfb8u;
                    (void)tc_call(0x802343e4u, &a);
                }
            }
            r7 = r28 + r30;
            r0 = rd32(r7 + 4u);
            wr32(0x817fdf4cu, rd32(r28 + r30));
            wr32(0x817fdf50u, r0);
            wr32(0x817fdf54u, rd32(r7 + 8u));
            a.r[0] = 0x817fdf4cu;
            a.r[1] = 0x817fdfb8u;
            a.r[2] = 0x817fdf4cu;
            (void)tc_call(0x80234380u, &a);
            r0 = (r29 - 1u) * 0xcu;
            wrf32d(r28 + r0, (f64)rdf32(0x817fdf4cu));
            r3 = r28 + r0;
            wrf32d(r3 + 4u, (f64)rdf32(0x817fdf50u));
            wrf32d(r3 + 8u, (f64)rdf32(0x817fdf54u));
        }
        c1lt = (s32)r29 < 0;
        wr32(param_5, r29);
        r3 = param_1 + 0x408u;
        r7 = 0u;
        if ((s32)r29 > 0) {
            r5 = r29 - 8u;
            if ((s32)r29 > 8) {
                r6 = 0u;
                if (!c1lt && (s32)r29 <= 2147483646) {
                    r6 = 1u;
                }
                if (r6 != 0u) {
                    r4 = r28;
                    r6 = r3;
                    f1 = (f64)rdf32(0x805769c0u);
                    ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r5 > 0) {
                        do {
                            r7 = r7 + 8u;
                            wrf32d(r6, (f64)rdf32(r4));
                            wrf32d(r6 + 4u, (f64)rdf32(r4 + 4u));
                            wrf32d(r6 + 8u, (f64)rdf32(r4 + 8u));
                            wrf32d(r6 + 4u, f1);
                            wrf32d(r6 + 0xcu, (f64)rdf32(r4 + 0xcu));
                            wrf32d(r6 + 0x10u, (f64)rdf32(r4 + 0x10u));
                            wrf32d(r6 + 0x14u, (f64)rdf32(r4 + 0x14u));
                            wrf32d(r6 + 0x10u, f1);
                            wrf32d(r6 + 0x18u, (f64)rdf32(r4 + 0x18u));
                            wrf32d(r6 + 0x1cu, (f64)rdf32(r4 + 0x1cu));
                            wrf32d(r6 + 0x20u, (f64)rdf32(r4 + 0x20u));
                            wrf32d(r6 + 0x1cu, f1);
                            wrf32d(r6 + 0x24u, (f64)rdf32(r4 + 0x24u));
                            wrf32d(r6 + 0x28u, (f64)rdf32(r4 + 0x28u));
                            wrf32d(r6 + 0x2cu, (f64)rdf32(r4 + 0x2cu));
                            wrf32d(r6 + 0x28u, f1);
                            wrf32d(r6 + 0x30u, (f64)rdf32(r4 + 0x30u));
                            wrf32d(r6 + 0x34u, (f64)rdf32(r4 + 0x34u));
                            wrf32d(r6 + 0x38u, (f64)rdf32(r4 + 0x38u));
                            wrf32d(r6 + 0x34u, f1);
                            wrf32d(r6 + 0x3cu, (f64)rdf32(r4 + 0x3cu));
                            wrf32d(r6 + 0x40u, (f64)rdf32(r4 + 0x40u));
                            wrf32d(r6 + 0x44u, (f64)rdf32(r4 + 0x44u));
                            wrf32d(r6 + 0x40u, f1);
                            wrf32d(r6 + 0x48u, (f64)rdf32(r4 + 0x48u));
                            wrf32d(r6 + 0x4cu, (f64)rdf32(r4 + 0x4cu));
                            wrf32d(r6 + 0x50u, (f64)rdf32(r4 + 0x50u));
                            wrf32d(r6 + 0x4cu, f1);
                            wrf32d(r6 + 0x54u, (f64)rdf32(r4 + 0x54u));
                            wrf32d(r6 + 0x58u, (f64)rdf32(r4 + 0x58u));
                            f0 = (f64)rdf32(r4 + 0x5cu);
                            r4 = r4 + 0x60u;
                            wrf32d(r6 + 0x5cu, f0);
                            wrf32d(r6 + 0x58u, f1);
                            r6 = r6 + 0x60u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r5 = r7 * 0xcu;
            f0 = (f64)rdf32(0x805769c0u);
            r4 = r28 + r5;
            r5 = r3 + r5;
            ctr = r29 - r7;
            if ((s32)r7 < (s32)r29) {
                do {
                    wrf32d(r5, (f64)rdf32(r4));
                    wrf32d(r5 + 4u, (f64)rdf32(r4 + 4u));
                    f1 = (f64)rdf32(r4 + 8u);
                    r4 = r4 + 0xcu;
                    wrf32d(r5 + 8u, f1);
                    wrf32d(r5 + 4u, f0);
                    r5 = r5 + 0xcu;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    }
    return;
}
