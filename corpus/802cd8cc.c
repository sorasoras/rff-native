#include "tc_rt.h"

void fn_802cd8cc(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    u32 r9 = 0, r10 = 0, r11 = 0, r12 = 0, r14 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(param_1 + 0x1cu, 0u);
    r9 = param_1 + 0x1cu;
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1, 0x80399d40u);
    wr32(param_1 + 0x18u, 0u);
    wr32(param_1 + 0x1cu, r9);
    wr32(param_1 + 0x20u, r9);
    a.r[0] = param_1 + 0x3cu;
    a.r[1] = 0x802cd8c0u;
    a.r[2] = 0x802cb69cu;
    a.r[3] = 4u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    r0 = rd32(param_1 + 0x50u) & 0x1fu;
    r10 = (u32)(s16)rd16(0x80348a2au);
    r6 = rd32(param_1 + 0x4cu) & 0x1fu;
    r9 = (u32)(s16)rd16(0x80348a2cu);
    r8 = (u32)(s16)rd16(0x80348a2eu);
    wr16(param_1 + 0x24u, rd16(0x80348a28u));
    wr16(param_1 + 0x26u, (u16)r10);
    wr16(param_1 + 0x28u, (u16)r9);
    wr16(param_1 + 0x2au, (u16)r8);
    wr16(param_1 + 0x2cu, 0xffu);
    wr16(param_1 + 0x2eu, 0xffu);
    wr16(param_1 + 0x30u, 0xffu);
    wr16(param_1 + 0x32u, 0xffu);
    wr16(param_1 + 0x34u, 0xffu);
    wr16(param_1 + 0x36u, 0xffu);
    wr16(param_1 + 0x38u, 0xffu);
    wr16(param_1 + 0x3au, 0xffu);
    wr32(param_1 + 0x4cu, r6);
    wr32(param_1 + 0x50u, r0);
    wr8(param_1 + 0x54u, 0u);
    wr32(param_1 + 0x58u, 0u);
    a.r[0] = param_1 + 4u;
    a.r[1] = param_2;
    a.r[2] = 0x14u;
    (void)tc_call(0x8025bdf4u, &a);
    r20 = rd32(param_2 + 0x3cu);
    r23 = param_2 + 0x40u;
    r18 = 8u;
    r12 = (r20 >> 4u) & 0xfu;
    r11 = r20 & 0xfu;
    r24 = ((r20 << 2u) & 0x3cu) + 0x40u;
    r9 = (u32)(s16)rd16(param_2 + 0x16u);
    r8 = (u32)(s16)rd16(param_2 + 0x18u);
    r22 = param_2 + r24;
    r24 = r24 + (r12 * 0x14u);
    r7 = (u32)(s16)rd16(param_2 + 0x1au);
    r21 = param_2 + r24;
    r6 = (u32)(s16)rd16(param_2 + 0x1cu);
    r24 = r24 + ((r20 >> 6u) & 0x3cu);
    r5 = (u32)(s16)rd16(param_2 + 0x1eu);
    r4 = (u32)(s16)rd16(param_2 + 0x20u);
    r19 = (r20 >> 8u) & 0xfu;
    r3 = (u32)(s16)rd16(param_2 + 0x22u);
    r0 = (u32)(s16)rd16(param_2 + 0x24u);
    r30 = (u32)(s16)rd16(param_2 + 0x26u);
    r29 = (u32)(s16)rd16(param_2 + 0x28u);
    r28 = (u32)(s16)rd16(param_2 + 0x2au);
    r27 = rd32(param_2 + 0x2cu);
    r26 = rd32(param_2 + 0x30u);
    r25 = rd32(param_2 + 0x34u);
    r14 = rd32(param_2 + 0x38u);
    wr16(param_1 + 0x24u, rd16(param_2 + 0x14u));
    wr16(param_1 + 0x26u, (u16)r9);
    wr16(param_1 + 0x28u, (u16)r8);
    wr16(param_1 + 0x2au, (u16)r7);
    wr16(param_1 + 0x2cu, (u16)r6);
    wr16(param_1 + 0x2eu, (u16)r5);
    wr16(param_1 + 0x30u, (u16)r4);
    wr16(param_1 + 0x32u, (u16)r3);
    wr16(param_1 + 0x34u, (u16)r0);
    wr16(param_1 + 0x36u, (u16)r30);
    wr16(param_1 + 0x38u, (u16)r29);
    wr16(param_1 + 0x3au, (u16)r28);
    wr32(param_1 + 0x3cu, r27);
    wr32(param_1 + 0x40u, r26);
    wr32(param_1 + 0x44u, r25);
    wr32(param_1 + 0x48u, r14);
    if (r11 <= 8u) {
        r18 = r11;
    }
    r14 = 0xau;
    if (r12 <= 0xau) {
        r14 = r12;
    }
    r27 = 8u;
    if (r19 <= 8u) {
        r27 = r19;
    }
    r5 = (r20 >> 0x19u) & 1u;
    r3 = (r20 >> 0x1bu) & 1u;
    wr8(0x817fdfb4u, (u8)((r20 >> 0xcu) & 1u));
    r3 = (0u - r3) | r3;
    r6 = (r20 >> 0xdu) & 3u;
    wr8(0x817fdfb3u, (u8)((r20 >> 0x17u) & 1u));
    r28 = 3u;
    wr8(0x817fdfb1u, (u8)((((0u - r5) | r5) >> 0x1fu) & 1u));
    wr8(0x817fdfb2u, (u8)((r20 >> 0x18u) & 1u));
    wr8(0x817fdfb0u, (u8)((r3 >> 0x1fu) & 1u));
    if (r6 <= 3u) {
        r28 = r6;
    }
    r0 = (r20 >> 0xfu) & 7u;
    r29 = 4u;
    if (r0 <= 4u) {
        r29 = r0;
    }
    r0 = (r20 >> 0x12u) & 0x1fu;
    r30 = 0x10u;
    if (r0 <= 0x10u) {
        r30 = r0;
    }
    a.r[0] = param_1;
    a.r[1] = r18 & 0xffu;
    a.r[2] = r14 & 0xffu;
    a.r[3] = r27 & 0xffu;
    a.r[4] = r30 & 0xffu;
    a.r[5] = (u32)rd8(0x817fdfb4u);
    a.r[6] = r29 & 0xffu;
    a.r[7] = r28 & 0xffu;
    f1 = tc_callf(0x802cebc8u, &a);
    r4 = rd32(param_1 + 0x58u);
    if (r4 != 0u) {
        r19 = r18 & 0xffu;
        if (r19 != 0u) {
            r3 = rd32(param_1 + 0x50u);
            r20 = (r3 >> 0x1cu) & 0xfu;
            r25 = r4 + ((r3 >> 0x17u) & 0x1e0u);
            while (r20 < r19) {
                a.r[0] = r25;
                a.r[1] = 0u;
                a.r[2] = 0x20u;
                f1 = tc_callf(0x8000443cu, &a);
                r25 = r25 + 0x20u;
                r20 = r20 + 1u;
            }
            wr32(param_1 + 0x50u, (rd32(param_1 + 0x50u) & 0xfffffffu) | ((r18 << 0x1cu) & 0xf0000000u));
        }
        if ((r18 & 0xffu) != 0u) {
            r18 = 0u;
            r19 = rd32(param_1 + 0x58u);
            r20 = rd32(param_3) + 0xcu;
            while ((r18 & 0xffu) < ((rd32(param_1 + 0x50u) >> 0x1cu) & 0xfu)) {
                r0 = (r18 << 2u) & 0x3fcu;
                r3 = rd32(param_3 + 0xcu);
                r26 = r23 + r0;
                r0 = (u32)rd16(r23 + r0);
                r0 = (r0 << 3u) & 0xfffffff8u;
                r0 = rd32(r20 + r0);
                a.r[0] = r3;
                a.r[1] = 0x74696d67u;
                a.r[2] = r20 + r0;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
                f1 = tc_lastf();
                r25 = (r18 << 5u) & 0x1fe0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = rd32(param_1 + 0x58u) + r25;
                a.r[1] = r3;
                a.r[2] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802cc3d0u, &a);
                a.r[0] = r19 + r25;
                a.r[1] = (u32)rd8(r26 + 2u);
                a.r[2] = (u32)rd8(r26 + 3u);
                f1 = tc_callf(0x80252494u, &a);
                r18 = r18 + 1u;
            }
        }
        r3 = r14 & 0xffu;
        r4 = rd32(param_1 + 0x58u) + ((rd32(param_1 + 0x4cu) >> 0x17u) & 0x1e0u);
        do {
            if ((s32)r3 > 0) {
                r0 = (r3 >> 2u) & 0x3fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        f1 = (f64)rdf32(r22 + 4u);
                        wrf32d(r4, (f64)rdf32(r22));
                        f0 = (f64)rdf32(r22 + 8u);
                        wrf32d(r4 + 4u, f1);
                        f1 = (f64)rdf32(r22 + 0xcu);
                        wrf32d(r4 + 8u, f0);
                        f0 = (f64)rdf32(r22 + 0x10u);
                        wrf32d(r4 + 0xcu, f1);
                        f2 = (f64)rdf32(r22 + 0x14u);
                        wrf32d(r4 + 0x10u, f0);
                        f1 = (f64)rdf32(r22 + 0x18u);
                        wrf32d(r4 + 0x14u, f2);
                        f0 = (f64)rdf32(r22 + 0x1cu);
                        wrf32d(r4 + 0x18u, f1);
                        f1 = (f64)rdf32(r22 + 0x20u);
                        wrf32d(r4 + 0x1cu, f0);
                        f0 = (f64)rdf32(r22 + 0x24u);
                        wrf32d(r4 + 0x20u, f1);
                        f2 = (f64)rdf32(r22 + 0x28u);
                        wrf32d(r4 + 0x24u, f0);
                        f1 = (f64)rdf32(r22 + 0x2cu);
                        wrf32d(r4 + 0x28u, f2);
                        f0 = (f64)rdf32(r22 + 0x30u);
                        wrf32d(r4 + 0x2cu, f1);
                        f1 = (f64)rdf32(r22 + 0x34u);
                        wrf32d(r4 + 0x30u, f0);
                        f0 = (f64)rdf32(r22 + 0x38u);
                        wrf32d(r4 + 0x34u, f1);
                        f2 = (f64)rdf32(r22 + 0x3cu);
                        wrf32d(r4 + 0x38u, f0);
                        f1 = (f64)rdf32(r22 + 0x40u);
                        wrf32d(r4 + 0x3cu, f2);
                        f0 = (f64)rdf32(r22 + 0x44u);
                        wrf32d(r4 + 0x40u, f1);
                        f1 = (f64)rdf32(r22 + 0x48u);
                        wrf32d(r4 + 0x44u, f0);
                        f0 = (f64)rdf32(r22 + 0x4cu);
                        r22 = r22 + 0x50u;
                        wrf32d(r4 + 0x48u, f1);
                        wrf32d(r4 + 0x4cu, f0);
                        r4 = r4 + 0x50u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = r3 & 3u;
                    if (r3 == 0u) break;
                }
                ctr = r3;
                do {
                    f1 = (f64)rdf32(r22 + 4u);
                    wrf32d(r4, (f64)rdf32(r22));
                    f0 = (f64)rdf32(r22 + 8u);
                    wrf32d(r4 + 4u, f1);
                    f1 = (f64)rdf32(r22 + 0xcu);
                    wrf32d(r4 + 8u, f0);
                    f0 = (f64)rdf32(r22 + 0x10u);
                    r22 = r22 + 0x14u;
                    wrf32d(r4 + 0xcu, f1);
                    wrf32d(r4 + 0x10u, f0);
                    r4 = r4 + 0x14u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        r3 = rd32(param_1 + 0x4cu);
        r5 = r27 & 0xffu;
        r0 = (r3 >> 0x18u) & 0xfu;
        r3 = (r3 >> 0x17u) & 0x1e0u;
        r0 = r0 * 0x14u;
        r0 = rd32(param_1 + 0x58u) + r0;
        r3 = r3 + r0;
        if (r5 != 0u) {
            r4 = (rd32(param_1 + 0x50u) >> 0x14u) & 0xfu;
            c1gt = r4 > r5;
            if (r4 < r5) {
                r9 = r5 - 8u;
                if ((r5 - r4) > 8u && !c1gt) {
                    r10 = r3 + ((r4 << 2u) & 0xfffffffcu);
                    ctr = ((r9 + 7u - r4) >> 3u) & 0x1fffffffu;
                    if (r4 < r9) {
                        do {
                            wr8(r10, 1u);
                            r4 = r4 + 8u;
                            wr8(r10 + 1u, 4u);
                            wr8(r10 + 2u, 0x3cu);
                            wr8(r10 + 3u, 0u);
                            wr8(r10 + 4u, 1u);
                            wr8(r10 + 5u, 4u);
                            wr8(r10 + 6u, 0x3cu);
                            wr8(r10 + 7u, 0u);
                            wr8(r10 + 8u, 1u);
                            wr8(r10 + 9u, 4u);
                            wr8(r10 + 0xau, 0x3cu);
                            wr8(r10 + 0xbu, 0u);
                            wr8(r10 + 0xcu, 1u);
                            wr8(r10 + 0xdu, 4u);
                            wr8(r10 + 0xeu, 0x3cu);
                            wr8(r10 + 0xfu, 0u);
                            wr8(r10 + 0x10u, 1u);
                            wr8(r10 + 0x11u, 4u);
                            wr8(r10 + 0x12u, 0x3cu);
                            wr8(r10 + 0x13u, 0u);
                            wr8(r10 + 0x14u, 1u);
                            wr8(r10 + 0x15u, 4u);
                            wr8(r10 + 0x16u, 0x3cu);
                            wr8(r10 + 0x17u, 0u);
                            wr8(r10 + 0x18u, 1u);
                            wr8(r10 + 0x19u, 4u);
                            wr8(r10 + 0x1au, 0x3cu);
                            wr8(r10 + 0x1bu, 0u);
                            wr8(r10 + 0x1cu, 1u);
                            wr8(r10 + 0x1du, 4u);
                            wr8(r10 + 0x1eu, 0x3cu);
                            wr8(r10 + 0x1fu, 0u);
                            r10 = r10 + 0x20u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                r5 = r27 & 0xffu;
                r10 = r3 + ((r4 << 2u) & 0xfffffffcu);
                ctr = r5 - r4;
                if (r4 < r5) {
                    do {
                        wr8(r10, 1u);
                        wr8(r10 + 1u, 4u);
                        wr8(r10 + 2u, 0x3cu);
                        wr8(r10 + 3u, 0u);
                        r10 = r10 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
            wr32(param_1 + 0x50u, (rd32(param_1 + 0x50u) & 0xff0fffffu) | ((r27 << 0x14u) & 0xf00000u));
        }
        r5 = 0u;
        while (r5 < ((rd32(param_1 + 0x50u) >> 0x14u) & 0xfu)) {
            r5 = r5 + 1u;
            r0 = (u32)rd8(r21 + 1u);
            wr8(r3, rd8(r21));
            r4 = (u32)rd8(r21 + 2u);
            wr8(r3 + 1u, (u8)r0);
            r0 = (u32)rd8(r21 + 3u);
            r21 = r21 + 4u;
            wr8(r3 + 2u, (u8)r4);
            wr8(r3 + 3u, (u8)r0);
            r3 = r3 + 4u;
        }
        if ((u32)rd8(0x817fdfb1u) != 0u) {
            r4 = rd32(param_1 + 0x4cu);
            r7 = param_2 + r24;
            r5 = (r4 >> 0x12u) & 0x3cu;
            r3 = ((r4 >> 0x18u) & 0xfu) * 0x14u;
            r4 = (r4 >> 0x17u) & 0x1e0u;
            r0 = (u32)rd8(param_2 + r24);
            r24 = r24 + 4u;
            r5 = r5 + r4;
            r4 = (u32)rd8(r7 + 1u);
            r3 = rd32(param_1 + 0x58u) + r3;
            r5 = r5 + r3;
            r3 = (u32)rd8(r7 + 2u);
            wr8(r5, (u8)r0);
            r0 = (u32)rd8(r7 + 3u);
            wr8(r5 + 1u, (u8)r4);
            wr8(r5 + 2u, (u8)r3);
            wr8(r5 + 3u, (u8)r0);
        }
        if ((u32)rd8(0x817fdfb0u) != 0u) {
            r6 = rd32(param_1 + 0x4cu);
            r8 = param_2 + r24;
            r4 = (r6 >> 0x12u) & 0x3cu;
            r5 = ((r6 >> 0x18u) & 0xfu) * 0x14u;
            r3 = (r6 >> 0x17u) & 0x1e0u;
            r6 = (r6 >> 6u) & 4u;
            r3 = r4 + r3;
            r4 = (u32)rd8(r8 + 1u);
            r5 = r6 + r5;
            r3 = rd32(param_1 + 0x58u) + r3;
            r5 = r5 + r3;
            r3 = (u32)rd8(r8 + 2u);
            wr8(r5, rd8(param_2 + r24));
            r24 = r24 + 4u;
            r0 = (u32)rd8(r8 + 3u);
            wr8(r5 + 1u, (u8)r4);
            wr8(r5 + 2u, (u8)r3);
            wr8(r5 + 3u, (u8)r0);
        }
        if ((u32)rd8(0x817fdfb4u) != 0u) {
            r4 = rd32(param_1 + 0x4cu);
            r10 = param_2 + r24;
            r5 = (u32)rd8(param_2 + r24);
            r24 = r24 + 4u;
            r6 = ((r4 >> 0x18u) & 0xfu) * 0x14u;
            r3 = ((r4 >> 0x12u) & 0x3cu) + ((r4 >> 0x17u) & 0x1e0u);
            r0 = ((r4 >> 5u) & 4u) + ((r4 >> 6u) & 4u);
            r4 = (u32)rd8(r10 + 1u);
            r7 = r6 + r3;
            r3 = (u32)rd8(r10 + 2u);
            r6 = rd32(param_1 + 0x58u) + r0;
            wr8(r6 + r7, (u8)r5);
            r6 = r6 + r7;
            r0 = (u32)rd8(r10 + 3u);
            wr8(r6 + 1u, (u8)r4);
            wr8(r6 + 2u, (u8)r3);
            wr8(r6 + 3u, (u8)r0);
        }
        r3 = r28 & 0xffu;
        c1lt = (s32)r3 < 0;
        c1gt = (s32)r3 > 0;
        if (r3 != 0u) {
            r12 = rd32(param_1 + 0x4cu);
            r5 = param_2 + r24;
            r6 = 0u;
            r11 = (r12 >> 4u) & 4u;
            r4 = ((r12 >> 0x18u) & 0xfu) * 0x14u;
            r9 = (r12 >> 6u) & 4u;
            r10 = (r12 >> 0xcu) & 4u;
            r8 = (r12 >> 5u) & 4u;
            r0 = ((r12 >> 0x12u) & 0x3cu) + ((r12 >> 0x17u) & 0x1e0u);
            r14 = (r12 >> 0xdu) & 0x1cu;
            r12 = (r12 >> 3u) & 4u;
            r8 = r10 + r8;
            r4 = r4 + r0;
            r4 = r8 + (r11 + r9) + r4;
            r0 = r4 + (rd32(param_1 + 0x58u) + (r14 + r12));
            if (c1gt) {
                r8 = r3 - 8u;
                if ((s32)r3 > 8) {
                    r7 = 0u;
                    if (!c1lt && (s32)r3 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        r3 = r5;
                        r4 = r0;
                        ctr = ((r8 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r8 > 0) {
                            do {
                                r6 = r6 + 8u;
                                r7 = rd32(r3 + 4u);
                                wr32(r4, rd32(r3));
                                f0 = (f64)rdf32(r3 + 8u);
                                wr32(r4 + 4u, r7);
                                r8 = rd32(r3 + 0xcu);
                                wrf32d(r4 + 8u, f0);
                                r7 = rd32(r3 + 0x10u);
                                wr32(r4 + 0xcu, r8);
                                r8 = rd32(r3 + 0x14u);
                                wr32(r4 + 0x10u, r7);
                                r7 = rd32(r3 + 0x18u);
                                wr32(r4 + 0x14u, r8);
                                f0 = (f64)rdf32(r3 + 0x1cu);
                                wr32(r4 + 0x18u, r7);
                                r8 = rd32(r3 + 0x20u);
                                wrf32d(r4 + 0x1cu, f0);
                                r7 = rd32(r3 + 0x24u);
                                wr32(r4 + 0x20u, r8);
                                r8 = rd32(r3 + 0x28u);
                                wr32(r4 + 0x24u, r7);
                                r7 = rd32(r3 + 0x2cu);
                                wr32(r4 + 0x28u, r8);
                                f0 = (f64)rdf32(r3 + 0x30u);
                                wr32(r4 + 0x2cu, r7);
                                r8 = rd32(r3 + 0x34u);
                                wrf32d(r4 + 0x30u, f0);
                                r7 = rd32(r3 + 0x38u);
                                wr32(r4 + 0x34u, r8);
                                r8 = rd32(r3 + 0x3cu);
                                wr32(r4 + 0x38u, r7);
                                r7 = rd32(r3 + 0x40u);
                                wr32(r4 + 0x3cu, r8);
                                f0 = (f64)rdf32(r3 + 0x44u);
                                wr32(r4 + 0x40u, r7);
                                r8 = rd32(r3 + 0x48u);
                                wrf32d(r4 + 0x44u, f0);
                                r7 = rd32(r3 + 0x4cu);
                                wr32(r4 + 0x48u, r8);
                                r8 = rd32(r3 + 0x50u);
                                wr32(r4 + 0x4cu, r7);
                                r7 = rd32(r3 + 0x54u);
                                wr32(r4 + 0x50u, r8);
                                f0 = (f64)rdf32(r3 + 0x58u);
                                wr32(r4 + 0x54u, r7);
                                r8 = rd32(r3 + 0x5cu);
                                wrf32d(r4 + 0x58u, f0);
                                r7 = rd32(r3 + 0x60u);
                                wr32(r4 + 0x5cu, r8);
                                r8 = rd32(r3 + 0x64u);
                                wr32(r4 + 0x60u, r7);
                                r7 = rd32(r3 + 0x68u);
                                wr32(r4 + 0x64u, r8);
                                f0 = (f64)rdf32(r3 + 0x6cu);
                                wr32(r4 + 0x68u, r7);
                                r8 = rd32(r3 + 0x70u);
                                wrf32d(r4 + 0x6cu, f0);
                                r7 = rd32(r3 + 0x74u);
                                wr32(r4 + 0x70u, r8);
                                r8 = rd32(r3 + 0x78u);
                                wr32(r4 + 0x74u, r7);
                                r7 = rd32(r3 + 0x7cu);
                                wr32(r4 + 0x78u, r8);
                                f0 = (f64)rdf32(r3 + 0x80u);
                                wr32(r4 + 0x7cu, r7);
                                r8 = rd32(r3 + 0x84u);
                                wrf32d(r4 + 0x80u, f0);
                                r7 = rd32(r3 + 0x88u);
                                wr32(r4 + 0x84u, r8);
                                r8 = rd32(r3 + 0x8cu);
                                wr32(r4 + 0x88u, r7);
                                r7 = rd32(r3 + 0x90u);
                                wr32(r4 + 0x8cu, r8);
                                f0 = (f64)rdf32(r3 + 0x94u);
                                wr32(r4 + 0x90u, r7);
                                r8 = rd32(r3 + 0x98u);
                                wrf32d(r4 + 0x94u, f0);
                                r7 = rd32(r3 + 0x9cu);
                                r3 = r3 + 0xa0u;
                                wr32(r4 + 0x98u, r8);
                                wr32(r4 + 0x9cu, r7);
                                r4 = r4 + 0xa0u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r7 = r6 * 0x14u;
                r4 = r28 & 0xffu;
                r5 = r5 + r7;
                r7 = r0 + r7;
                ctr = r4 - r6;
                if ((s32)r6 < (s32)r4) {
                    do {
                        r0 = rd32(r5 + 4u);
                        wr32(r7, rd32(r5));
                        f0 = (f64)rdf32(r5 + 8u);
                        wr32(r7 + 4u, r0);
                        r3 = rd32(r5 + 0xcu);
                        wrf32d(r7 + 8u, f0);
                        r0 = rd32(r5 + 0x10u);
                        r5 = r5 + 0x14u;
                        wr32(r7 + 0xcu, r3);
                        wr32(r7 + 0x10u, r0);
                        r7 = r7 + 0x14u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r12 = r29 & 0xffu;
        c0eq = r12 == 0u;
        r24 = r24 + (((rd32(param_2 + 0x3cu) >> 0xdu) & 3u) * 0x14u);
        if (!c0eq) {
            if (!c0eq) {
                r10 = rd32(param_1 + 0x4cu);
                r3 = (rd32(param_1 + 0x50u) >> 0xfu) & 7u;
                c1gt = r3 > r12;
                r7 = ((r10 >> 3u) & 4u) + (((r10 >> 0xcu) & 4u) + ((r10 >> 5u) & 4u) + (((r10 >> 4u) & 4u) + ((r10 >> 6u) & 4u))) + (rd32(param_1 + 0x58u) + ((((r10 >> 0x18u) & 0xfu) * 0x14u) + (((r10 >> 0x12u) & 0x3cu) + ((r10 >> 0x17u) & 0x1e0u))));
                if (r3 < r12) {
                    r6 = r12 - 8u;
                    if ((r12 - r3) > 8u && !c1gt) {
                        r5 = r7 + ((r3 << 2u) & 0xfffffffcu);
                        ctr = ((r6 + 7u - r3) >> 3u) & 0x1fffffffu;
                        if (r3 < r6) {
                            do {
                                wr8(r5, 0u);
                                r3 = r3 + 8u;
                                wr8(r5 + 1u, 0u);
                                wr8(r5 + 2u, 0u);
                                wr8(r5 + 3u, 0u);
                                wr8(r5 + 4u, 0u);
                                wr8(r5 + 5u, 0u);
                                wr8(r5 + 6u, 0u);
                                wr8(r5 + 7u, 0u);
                                wr8(r5 + 8u, 0u);
                                wr8(r5 + 9u, 0u);
                                wr8(r5 + 0xau, 0u);
                                wr8(r5 + 0xbu, 0u);
                                wr8(r5 + 0xcu, 0u);
                                wr8(r5 + 0xdu, 0u);
                                wr8(r5 + 0xeu, 0u);
                                wr8(r5 + 0xfu, 0u);
                                wr8(r5 + 0x10u, 0u);
                                wr8(r5 + 0x11u, 0u);
                                wr8(r5 + 0x12u, 0u);
                                wr8(r5 + 0x13u, 0u);
                                wr8(r5 + 0x14u, 0u);
                                wr8(r5 + 0x15u, 0u);
                                wr8(r5 + 0x16u, 0u);
                                wr8(r5 + 0x17u, 0u);
                                wr8(r5 + 0x18u, 0u);
                                wr8(r5 + 0x19u, 0u);
                                wr8(r5 + 0x1au, 0u);
                                wr8(r5 + 0x1bu, 0u);
                                wr8(r5 + 0x1cu, 0u);
                                wr8(r5 + 0x1du, 0u);
                                wr8(r5 + 0x1eu, 0u);
                                wr8(r5 + 0x1fu, 0u);
                                r5 = r5 + 0x20u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                    r4 = r29 & 0xffu;
                    r6 = r7 + ((r3 << 2u) & 0xfffffffcu);
                    ctr = r4 - r3;
                    if (r3 < r4) {
                        do {
                            wr8(r6, 0u);
                            wr8(r6 + 1u, 0u);
                            wr8(r6 + 2u, 0u);
                            wr8(r6 + 3u, 0u);
                            r6 = r6 + 4u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
                wr32(param_1 + 0x50u, (rd32(param_1 + 0x50u) & 0xfffc7fffu) | ((r29 << 0xfu) & 0x38000u));
            }
            r10 = rd32(param_1 + 0x4cu);
            r4 = r29 & 0xffu;
            c1lt = (s32)r4 < 0;
            r5 = param_2 + r24;
            r6 = 0u;
            r0 = ((r10 >> 3u) & 4u) + (((r10 >> 0xcu) & 4u) + ((r10 >> 5u) & 4u) + (((r10 >> 4u) & 4u) + ((r10 >> 6u) & 4u))) + (rd32(param_1 + 0x58u) + ((((r10 >> 0x18u) & 0xfu) * 0x14u) + (((r10 >> 0x12u) & 0x3cu) + ((r10 >> 0x17u) & 0x1e0u))));
            if ((s32)r4 > 0) {
                r8 = r4 - 8u;
                if ((s32)r4 > 8) {
                    r7 = 0u;
                    if (!c1lt && (s32)r4 <= 2147483646) {
                        r7 = 1u;
                    }
                    if (r7 != 0u) {
                        r3 = r5;
                        r4 = r0;
                        ctr = ((r8 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r8 > 0) {
                            do {
                                r6 = r6 + 8u;
                                r7 = (u32)rd8(r3 + 1u);
                                wr8(r4, rd8(r3));
                                r8 = (u32)rd8(r3 + 2u);
                                wr8(r4 + 1u, (u8)r7);
                                r7 = (u32)rd8(r3 + 3u);
                                wr8(r4 + 2u, (u8)r8);
                                r8 = (u32)rd8(r3 + 4u);
                                wr8(r4 + 3u, (u8)r7);
                                r7 = (u32)rd8(r3 + 5u);
                                wr8(r4 + 4u, (u8)r8);
                                r8 = (u32)rd8(r3 + 6u);
                                wr8(r4 + 5u, (u8)r7);
                                r7 = (u32)rd8(r3 + 7u);
                                wr8(r4 + 6u, (u8)r8);
                                r8 = (u32)rd8(r3 + 8u);
                                wr8(r4 + 7u, (u8)r7);
                                r7 = (u32)rd8(r3 + 9u);
                                wr8(r4 + 8u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0xau);
                                wr8(r4 + 9u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0xbu);
                                wr8(r4 + 0xau, (u8)r8);
                                r8 = (u32)rd8(r3 + 0xcu);
                                wr8(r4 + 0xbu, (u8)r7);
                                r7 = (u32)rd8(r3 + 0xdu);
                                wr8(r4 + 0xcu, (u8)r8);
                                r8 = (u32)rd8(r3 + 0xeu);
                                wr8(r4 + 0xdu, (u8)r7);
                                r7 = (u32)rd8(r3 + 0xfu);
                                wr8(r4 + 0xeu, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x10u);
                                wr8(r4 + 0xfu, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x11u);
                                wr8(r4 + 0x10u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x12u);
                                wr8(r4 + 0x11u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x13u);
                                wr8(r4 + 0x12u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x14u);
                                wr8(r4 + 0x13u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x15u);
                                wr8(r4 + 0x14u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x16u);
                                wr8(r4 + 0x15u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x17u);
                                wr8(r4 + 0x16u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x18u);
                                wr8(r4 + 0x17u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x19u);
                                wr8(r4 + 0x18u, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x1au);
                                wr8(r4 + 0x19u, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x1bu);
                                wr8(r4 + 0x1au, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x1cu);
                                wr8(r4 + 0x1bu, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x1du);
                                wr8(r4 + 0x1cu, (u8)r8);
                                r8 = (u32)rd8(r3 + 0x1eu);
                                wr8(r4 + 0x1du, (u8)r7);
                                r7 = (u32)rd8(r3 + 0x1fu);
                                r3 = r3 + 0x20u;
                                wr8(r4 + 0x1eu, (u8)r8);
                                wr8(r4 + 0x1fu, (u8)r7);
                                r4 = r4 + 0x20u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r4 = r29 & 0xffu;
                r7 = (r6 << 2u) & 0xfffffffcu;
                r5 = r5 + r7;
                r7 = r0 + r7;
                ctr = r4 - r6;
                if ((s32)r6 < (s32)r4) {
                    do {
                        r0 = (u32)rd8(r5 + 1u);
                        wr8(r7, rd8(r5));
                        r3 = (u32)rd8(r5 + 2u);
                        wr8(r7 + 1u, (u8)r0);
                        r0 = (u32)rd8(r5 + 3u);
                        r5 = r5 + 4u;
                        wr8(r7 + 2u, (u8)r3);
                        wr8(r7 + 3u, (u8)r0);
                        r7 = r7 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r0 = r30 & 0xffu;
        c0eq = r0 == 0u;
        r24 = r24 + ((rd32(param_2 + 0x3cu) >> 0xdu) & 0x1cu);
        do {
            if (!c0eq) {
                if (!c0eq) {
                    r11 = rd32(param_1 + 0x4cu);
                    r3 = (rd32(param_1 + 0x50u) >> 9u) & 0x1fu;
                    c0lt = r3 < r0;
                    r10 = ((r11 >> 0xdu) & 0x1cu) + (((r11 >> 3u) & 4u) + (((r11 >> 4u) & 4u) + (((r11 >> 5u) & 4u) + ((r11 >> 0xcu) & 4u)))) + (rd32(param_1 + 0x58u) + (((r11 >> 0x17u) & 0x1e0u) + ((r11 >> 0x12u) & 0x3cu) + (((((r11 >> 0x12u) & 3u) + ((r11 >> 0x18u) & 0xfu)) * 0x14u) + ((r11 >> 6u) & 4u))));
                    do {
                        if (c0lt) {
                            r4 = (r3 << 4u) & 0xfffffff0u;
                            wr8(0x817fdfa4u, 0xffu);
                            r3 = r0 - r3;
                            r18 = r10 + r4;
                            wr8(0x817fdfa5u, 0xafu);
                            wr8(0x817fdfa6u, 0u);
                            wr8(0x817fdfa7u, 0x61u);
                            r0 = rd32(0x817fdfa4u);
                            wr8(0x817fdfa8u, 0x77u);
                            wr32(0x817fdf9cu, r0);
                            wr8(0x817fdfa9u, 0x57u);
                            r11 = (u32)rd8(0x817fdf9cu);
                            wr8(0x817fdfaau, 0u);
                            r10 = (u32)rd8(0x817fdf9du);
                            wr8(0x817fdfabu, 0x81u);
                            r9 = (u32)rd8(0x817fdf9eu);
                            r8 = (u32)rd8(0x817fdf9fu);
                            wr32(0x817fdf98u, rd32(0x817fdfa8u));
                            r7 = (u32)rd8(0x817fdf98u);
                            r6 = (u32)rd8(0x817fdf99u);
                            r5 = (u32)rd8(0x817fdf9au);
                            r4 = (u32)rd8(0x817fdf9bu);
                            if (c0lt) {
                                r0 = (r3 >> 1u) & 0x7fffffffu;
                                ctr = r0;
                                if (r0 != 0u) {
                                    do {
                                        wr8(r18, 0xffu);
                                        wr8(r18 + 1u, 4u);
                                        wr8(r18 + 2u, 0xffu);
                                        wr8(r18 + 3u, 0u);
                                        wr8(r18 + 4u, (u8)r11);
                                        wr8(r18 + 5u, (u8)r10);
                                        wr8(r18 + 6u, (u8)r9);
                                        wr8(r18 + 7u, (u8)r8);
                                        wr8(r18 + 8u, (u8)r7);
                                        wr8(r18 + 9u, (u8)r6);
                                        wr8(r18 + 0xau, (u8)r5);
                                        wr8(r18 + 0xbu, (u8)r4);
                                        wr8(r18 + 0xcu, 0u);
                                        wr8(r18 + 0xdu, 0u);
                                        wr8(r18 + 0xeu, 0u);
                                        wr8(r18 + 0xfu, 0u);
                                        wr8(r18 + 0x10u, 0xffu);
                                        wr8(r18 + 0x11u, 4u);
                                        wr8(r18 + 0x12u, 0xffu);
                                        wr8(r18 + 0x13u, 0u);
                                        wr8(r18 + 0x14u, (u8)r11);
                                        wr8(r18 + 0x15u, (u8)r10);
                                        wr8(r18 + 0x16u, (u8)r9);
                                        wr8(r18 + 0x17u, (u8)r8);
                                        wr8(r18 + 0x18u, (u8)r7);
                                        wr8(r18 + 0x19u, (u8)r6);
                                        wr8(r18 + 0x1au, (u8)r5);
                                        wr8(r18 + 0x1bu, (u8)r4);
                                        wr8(r18 + 0x1cu, 0u);
                                        wr8(r18 + 0x1du, 0u);
                                        wr8(r18 + 0x1eu, 0u);
                                        wr8(r18 + 0x1fu, 0u);
                                        r18 = r18 + 0x20u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                    r3 = r3 & 1u;
                                    if (r3 == 0u) break;
                                }
                                ctr = r3;
                                do {
                                    wr8(r18, 0xffu);
                                    wr8(r18 + 1u, 4u);
                                    wr8(r18 + 2u, 0xffu);
                                    wr8(r18 + 3u, 0u);
                                    wr8(r18 + 4u, (u8)r11);
                                    wr8(r18 + 5u, (u8)r10);
                                    wr8(r18 + 6u, (u8)r9);
                                    wr8(r18 + 7u, (u8)r8);
                                    wr8(r18 + 8u, (u8)r7);
                                    wr8(r18 + 9u, (u8)r6);
                                    wr8(r18 + 0xau, (u8)r5);
                                    wr8(r18 + 0xbu, (u8)r4);
                                    wr8(r18 + 0xcu, 0u);
                                    wr8(r18 + 0xdu, 0u);
                                    wr8(r18 + 0xeu, 0u);
                                    wr8(r18 + 0xfu, 0u);
                                    r18 = r18 + 0x10u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                    } while (0);
                    wr32(param_1 + 0x50u, (rd32(param_1 + 0x50u) & 0xffffc1ffu) | ((r30 << 9u) & 0x3e00u));
                }
                r10 = rd32(param_1 + 0x4cu);
                r3 = r30 & 0xffu;
                r5 = param_2 + r24;
                r6 = ((r10 >> 0xdu) & 0x1cu) + (((r10 >> 3u) & 4u) + (((r10 >> 4u) & 4u) + (((r10 >> 5u) & 4u) + ((r10 >> 0xcu) & 4u)))) + (rd32(param_1 + 0x58u) + (((r10 >> 0x17u) & 0x1e0u) + ((r10 >> 0x12u) & 0x3cu) + (((((r10 >> 0x12u) & 3u) + ((r10 >> 0x18u) & 0xfu)) * 0x14u) + ((r10 >> 6u) & 4u))));
                if ((s32)r3 > 0) {
                    r0 = (r3 >> 1u) & 0x7fffffffu;
                    ctr = r0;
                    if (r0 != 0u) {
                        do {
                            r0 = (u32)rd8(r5 + 1u);
                            wr8(r6, rd8(r5));
                            r4 = (u32)rd8(r5 + 2u);
                            wr8(r6 + 1u, (u8)r0);
                            r0 = (u32)rd8(r5 + 3u);
                            wr8(r6 + 2u, (u8)r4);
                            r4 = (u32)rd8(r5 + 4u);
                            wr8(r6 + 3u, (u8)r0);
                            r0 = (u32)rd8(r5 + 5u);
                            wr8(r6 + 4u, (u8)r4);
                            r4 = (u32)rd8(r5 + 6u);
                            wr8(r6 + 5u, (u8)r0);
                            r0 = (u32)rd8(r5 + 7u);
                            wr8(r6 + 6u, (u8)r4);
                            r4 = (u32)rd8(r5 + 8u);
                            wr8(r6 + 7u, (u8)r0);
                            r0 = (u32)rd8(r5 + 9u);
                            wr8(r6 + 8u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0xau);
                            wr8(r6 + 9u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xbu);
                            wr8(r6 + 0xau, (u8)r4);
                            r4 = (u32)rd8(r5 + 0xcu);
                            wr8(r6 + 0xbu, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xdu);
                            wr8(r6 + 0xcu, (u8)r4);
                            r4 = (u32)rd8(r5 + 0xeu);
                            wr8(r6 + 0xdu, (u8)r0);
                            r0 = (u32)rd8(r5 + 0xfu);
                            wr8(r6 + 0xeu, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x10u);
                            wr8(r6 + 0xfu, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x11u);
                            wr8(r6 + 0x10u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x12u);
                            wr8(r6 + 0x11u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x13u);
                            wr8(r6 + 0x12u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x14u);
                            wr8(r6 + 0x13u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x15u);
                            wr8(r6 + 0x14u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x16u);
                            wr8(r6 + 0x15u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x17u);
                            wr8(r6 + 0x16u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x18u);
                            wr8(r6 + 0x17u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x19u);
                            wr8(r6 + 0x18u, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x1au);
                            wr8(r6 + 0x19u, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x1bu);
                            wr8(r6 + 0x1au, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x1cu);
                            wr8(r6 + 0x1bu, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x1du);
                            wr8(r6 + 0x1cu, (u8)r4);
                            r4 = (u32)rd8(r5 + 0x1eu);
                            wr8(r6 + 0x1du, (u8)r0);
                            r0 = (u32)rd8(r5 + 0x1fu);
                            r5 = r5 + 0x20u;
                            wr8(r6 + 0x1eu, (u8)r4);
                            wr8(r6 + 0x1fu, (u8)r0);
                            r6 = r6 + 0x20u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        r3 = r3 & 1u;
                        if (r3 == 0u) break;
                    }
                    ctr = r3;
                    do {
                        r0 = (u32)rd8(r5 + 1u);
                        wr8(r6, rd8(r5));
                        r4 = (u32)rd8(r5 + 2u);
                        wr8(r6 + 1u, (u8)r0);
                        r0 = (u32)rd8(r5 + 3u);
                        wr8(r6 + 2u, (u8)r4);
                        r4 = (u32)rd8(r5 + 4u);
                        wr8(r6 + 3u, (u8)r0);
                        r0 = (u32)rd8(r5 + 5u);
                        wr8(r6 + 4u, (u8)r4);
                        r4 = (u32)rd8(r5 + 6u);
                        wr8(r6 + 5u, (u8)r0);
                        r0 = (u32)rd8(r5 + 7u);
                        wr8(r6 + 6u, (u8)r4);
                        r4 = (u32)rd8(r5 + 8u);
                        wr8(r6 + 7u, (u8)r0);
                        r0 = (u32)rd8(r5 + 9u);
                        wr8(r6 + 8u, (u8)r4);
                        r4 = (u32)rd8(r5 + 0xau);
                        wr8(r6 + 9u, (u8)r0);
                        r0 = (u32)rd8(r5 + 0xbu);
                        wr8(r6 + 0xau, (u8)r4);
                        r4 = (u32)rd8(r5 + 0xcu);
                        wr8(r6 + 0xbu, (u8)r0);
                        r0 = (u32)rd8(r5 + 0xdu);
                        wr8(r6 + 0xcu, (u8)r4);
                        r4 = (u32)rd8(r5 + 0xeu);
                        wr8(r6 + 0xdu, (u8)r0);
                        r0 = (u32)rd8(r5 + 0xfu);
                        r5 = r5 + 0x10u;
                        wr8(r6 + 0xeu, (u8)r4);
                        wr8(r6 + 0xfu, (u8)r0);
                        r6 = r6 + 0x10u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        } while (0);
        r24 = r24 + ((rd32(param_2 + 0x3cu) >> 0xeu) & 0x1f0u);
        if ((u32)rd8(0x817fdfb3u) != 0u) {
            r6 = rd32(param_1 + 0x4cu);
            r10 = param_2 + r24;
            r8 = ((r6 >> 0x18u) & 0xfu) * 0x14u;
            r4 = (r6 >> 6u) & 4u;
            r3 = (u32)rd8(r10 + 2u);
            r0 = ((r6 >> 0xcu) & 4u) + ((r6 >> 5u) & 4u);
            r7 = (r6 >> 0x12u) & 0x3cu;
            r6 = (r6 >> 0x17u) & 0x1e0u;
            r7 = r7 + r6;
            r0 = r4 + r0;
            r6 = rd32(param_1 + 0x58u) + r0;
            r4 = (u32)rd8(r10 + 1u);
            r7 = r8 + r7;
            r0 = (u32)rd8(r10 + 3u);
            wr8(r6 + r7, rd8(param_2 + r24));
            r6 = r6 + r7;
            r24 = r24 + 4u;
            wr8(r6 + 1u, (u8)r4);
            wr8(r6 + 2u, (u8)r3);
            wr8(r6 + 3u, (u8)r0);
        }
        if ((u32)rd8(0x817fdfb2u) != 0u) {
            r4 = rd32(param_1 + 0x4cu);
            r10 = param_2 + r24;
            r3 = (r4 >> 0x18u) & 0xfu;
            r7 = (r4 >> 0xcu) & 4u;
            r5 = (r4 >> 5u) & 4u;
            r6 = (r4 >> 0x12u) & 0x3cu;
            r0 = ((r4 >> 4u) & 4u) + ((r4 >> 6u) & 4u);
            r4 = (r4 >> 0x17u) & 0x1e0u;
            r7 = r7 + r5;
            r8 = r3 * 0x14u;
            r3 = (u32)rd8(r10 + 2u);
            r0 = r7 + r0;
            r7 = r6 + r4;
            r4 = (u32)rd8(r10 + 1u);
            r6 = rd32(param_1 + 0x58u) + r0;
            r7 = r8 + r7;
            r0 = (u32)rd8(r10 + 3u);
            wr8(r6 + r7, rd8(param_2 + r24));
            r6 = r6 + r7;
            wr8(r6 + 1u, (u8)r4);
            wr8(r6 + 2u, (u8)r3);
            wr8(r6 + 3u, (u8)r0);
        }
    }
    return;
}
