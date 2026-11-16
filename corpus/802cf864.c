#include "tc_rt.h"

void fn_802cf864(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r30 = 1u;
    r23 = 0u;
    a.r[0] = 1u;
    (void)tc_call(0x80251e90u, &a);
    r3 = rd32(param_1 + 0x4cu);
    if (((r3 >> 8u) & 1u) == 0u) {
        a.r[0] = 4u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 2u;
        (void)tc_call(0x80251eb4u, &a);
    } else {
        r6 = ((r3 >> 0x12u) & 0x3cu) + ((r3 >> 0x17u) & 0x1e0u);
        r0 = rd32(param_1 + 0x58u) + (((r3 >> 0x18u) & 0xfu) * 0x14u);
        r24 = r6 + r0;
        r6 = (u32)rd8(r6 + r0);
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 2u;
        (void)tc_call(0x80251eb4u, &a);
        a.r[0] = 2u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = (u32)rd8(r24 + 1u);
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 2u;
        (void)tc_call(0x80251eb4u, &a);
        r3 = (u32)rd8(r24);
        r30 = 1u;
        if (r3 != 1u && (u32)rd8(r24 + 1u) != 1u) {
            r30 = 0u;
        }
        r23 = 0u;
        if (r3 == 0u || (u32)rd8(r24 + 1u) == 0u) {
            r23 = 1u;
        }
    }
    r29 = 0u;
    if (r30 != 0u) {
        r29 = 1u;
        if (param_2 == 0u) {
            r29 = 0u;
        }
    }
    if (r23 != 0u) {
        r5 = rd32(param_1 + 0x4cu);
        wr32(0x817fdf10u, 0xffffffffu);
        if (((r5 >> 7u) & 1u) != 0u) {
            r4 = (r5 >> 0x12u) & 0x3cu;
            r3 = ((r5 >> 0x18u) & 0xfu) * 0x14u;
            r0 = (r5 >> 0x17u) & 0x1e0u;
            r5 = (r5 >> 6u) & 4u;
            r0 = r4 + r0;
            r3 = r5 + r3;
            r0 = rd32(param_1 + 0x58u) + r0;
            r6 = r3 + r0;
            r5 = (u32)rd8(r3 + r0);
            r4 = (u32)rd8(r6 + 1u);
            r3 = (u32)rd8(r6 + 2u);
            r0 = (u32)rd8(r6 + 3u);
            wr8(0x817fdf10u, (u8)r5);
            wr8(0x817fdf11u, (u8)r4);
            wr8(0x817fdf12u, (u8)r3);
            wr8(0x817fdf13u, (u8)r0);
        }
        wr32(0x817fdf08u, rd32(0x817fdf10u));
        a.r[0] = 0x817fdf04u;
        a.r[1] = 0x817fdf08u;
        a.r[2] = param_3;
        (void)tc_call(0x802cba90u, &a);
        r7 = (u32)rd8(0x817fdf04u);
        r6 = (u32)rd8(0x817fdf05u);
        r5 = (u32)rd8(0x817fdf06u);
        r0 = (u32)rd8(0x817fdf07u);
        wr8(0x817fdf10u, (u8)r7);
        wr8(0x817fdf11u, (u8)r6);
        wr8(0x817fdf12u, (u8)r5);
        wr8(0x817fdf13u, (u8)r0);
        wr8(0x817fdf00u, (u8)r7);
        wr8(0x817fdf01u, (u8)r6);
        wr8(0x817fdf02u, (u8)r5);
        wr8(0x817fdf03u, (u8)r0);
        a.r[0] = 4u;
        a.r[1] = 0x817fdf00u;
        (void)tc_call(0x80251db8u, &a);
        c0eq = r29 == 0u;
        r29 = 0u;
        if (!c0eq || (rd32(0x817fdf10u) + 0x10000u) != 0xffffu) {
            r29 = 1u;
        }
    }
    r31 = 0u;
    wr8(0x817fdf3cu, 0u);
    wr8(0x817fdf3du, 0u);
    wr8(0x817fdf3eu, 0u);
    wr8(0x817fdf3fu, 0u);
    wr8(0x817fdf40u, 0u);
    wr8(0x817fdf41u, 0u);
    wr8(0x817fdf42u, 0u);
    wr8(0x817fdf43u, 0u);
    wr8(0x817fdf44u, 0u);
    wr8(0x817fdf45u, 0u);
    a.r[0] = (rd32(param_1 + 0x50u) >> 0x14u) & 0xfu;
    (void)tc_call(0x8025016cu, &a);
    if (((rd32(param_1 + 0x50u) >> 0x14u) & 0xfu) != 0u) {
        r4 = rd32(param_1 + 0x4cu);
        r0 = (r4 >> 0x18u) & 0xfu;
        r4 = (r4 >> 0x17u) & 0x1e0u;
        r0 = r0 * 0x14u;
        r28 = 0u;
        r0 = rd32(param_1 + 0x58u) + r0;
        r23 = r4 + r0;
        while (r28 < ((rd32(param_1 + 0x50u) >> 0x14u) & 0xfu)) {
            r6 = (u32)rd8(r23 + 2u);
            if ((u32)rd8(r23) == 1u && r6 != 0x3cu) {
                r31 = 1u;
                wr8(((ppc_mulhwu(0xaaaaaaabu, r6 - 0x1eu) >> 1u) & 0x7fffffffu) - 0x7e8020c4u, 1u);
            }
            a.r[0] = r28;
            a.r[1] = (u32)rd8(r23);
            a.r[2] = (u32)rd8(r23 + 1u);
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0x7du;
            (void)tc_call(0x8024ff44u, &a);
            r23 = r23 + 4u;
            r28 = r28 + 1u;
        }
    }
    if (r31 != 0u) {
        r28 = 0u;
        r23 = rd32(param_1 + 0x58u) + ((rd32(param_1 + 0x4cu) >> 0x17u) & 0x1e0u);
        while ((r28 & 0xffu) < ((rd32(param_1 + 0x50u) >> 0x18u) & 0xfu)) {
            r3 = r28 & 0xffu;
            if ((u32)rd8(r3 - 0x7e8020c4u) != 0u) {
                a.r[0] = 0x817fdf80u;
                a.r[1] = r23 + (r3 * 0x14u);
                (void)tc_call(0x802cd5a4u, &a);
                a.r[0] = 0x817fdf80u;
                a.r[1] = ((r28 << 2u) & 0x3fcu) - (r28 & 0xffu) + 0x1eu;
                a.r[2] = 1u;
                (void)tc_call(0x80254568u, &a);
            }
            r28 = r28 + 1u;
        }
    }
    if (((rd32(param_1 + 0x50u) >> 0x1cu) & 0xfu) != 0u) {
        r31 = rd32(param_1 + 0x58u);
        r28 = 0u;
        r27 = 0u;
        while (r27 < ((rd32(param_1 + 0x50u) >> 0x1cu) & 0xfu)) {
            r0 = rd32(r31 + 4u);
            wr32(0x817fdf60u, rd32(r31));
            wr32(0x817fdf64u, r0);
            r0 = rd32(r31 + 0xcu);
            wr32(0x817fdf68u, rd32(r31 + 8u));
            wr32(0x817fdf6cu, r0);
            r0 = rd32(r31 + 0x14u);
            wr32(0x817fdf70u, rd32(r31 + 0x10u));
            wr32(0x817fdf74u, r0);
            r0 = rd32(r31 + 0x1cu);
            wr32(0x817fdf78u, rd32(r31 + 0x18u));
            wr32(0x817fdf7cu, r0);
            a.r[0] = 0x817fdf60u;
            r3 = tc_call(0x80252588u, &a);
            if ((r3 - 8u) <= 1u) {
                a.r[0] = 0x817fdf60u;
                r3 = tc_call(0x80252558u, &a);
                if (r3 != 0u) {
                    a.r[0] = 0x817fdf30u;
                    a.r[1] = rd32(r3 + 8u);
                    a.r[2] = rd32(r3 + 4u);
                    a.r[3] = (u32)rd16(r3);
                    (void)tc_call(0x80252774u, &a);
                    a.r[0] = 0x817fdf30u;
                    a.r[1] = r28;
                    (void)tc_call(0x8025279cu, &a);
                    a.r[0] = 0x817fdf60u;
                    a.r[1] = r28;
                    (void)tc_call(0x802524a8u, &a);
                    r28 = r28 + 1u;
                }
            }
            a.r[0] = 0x817fdf60u;
            a.r[1] = r27;
            (void)tc_call(0x80252720u, &a);
            r31 = r31 + 0x20u;
            r27 = r27 + 1u;
        }
    }
    r0 = (u32)rd16(param_1 + 0x26u);
    wr16(0x817fdf28u, rd16(param_1 + 0x24u));
    wr16(0x817fdf2au, (u16)r0);
    r0 = (u32)rd16(param_1 + 0x2au);
    wr16(0x817fdf2cu, rd16(param_1 + 0x28u));
    wr16(0x817fdf2eu, (u16)r0);
    a.r[0] = 1u;
    a.r[1] = 0x817fdf28u;
    (void)tc_call(0x80253584u, &a);
    r0 = (u32)rd16(param_1 + 0x2eu);
    wr16(0x817fdf20u, rd16(param_1 + 0x2cu));
    wr16(0x817fdf22u, (u16)r0);
    r0 = (u32)rd16(param_1 + 0x32u);
    wr16(0x817fdf24u, rd16(param_1 + 0x30u));
    wr16(0x817fdf26u, (u16)r0);
    a.r[0] = 2u;
    a.r[1] = 0x817fdf20u;
    (void)tc_call(0x80253584u, &a);
    r0 = (u32)rd16(param_1 + 0x36u);
    wr16(0x817fdf18u, rd16(param_1 + 0x34u));
    wr16(0x817fdf1au, (u16)r0);
    r0 = (u32)rd16(param_1 + 0x3au);
    wr16(0x817fdf1cu, rd16(param_1 + 0x38u));
    wr16(0x817fdf1eu, (u16)r0);
    a.r[0] = 3u;
    a.r[1] = 0x817fdf18u;
    (void)tc_call(0x80253584u, &a);
    wr8(0x817fdefcu, rd8(param_1 + 0x3cu));
    wr8(0x817fdefdu, rd8(param_1 + 0x3du));
    wr8(0x817fdefeu, rd8(param_1 + 0x3eu));
    wr8(0x817fdeffu, rd8(param_1 + 0x3fu));
    a.r[0] = 0u;
    a.r[1] = 0x817fdefcu;
    (void)tc_call(0x802535e8u, &a);
    wr8(0x817fdef8u, rd8(param_1 + 0x40u));
    wr8(0x817fdef9u, rd8(param_1 + 0x41u));
    wr8(0x817fdefau, rd8(param_1 + 0x42u));
    wr8(0x817fdefbu, rd8(param_1 + 0x43u));
    a.r[0] = 1u;
    a.r[1] = 0x817fdef8u;
    (void)tc_call(0x802535e8u, &a);
    wr8(0x817fdef4u, rd8(param_1 + 0x44u));
    wr8(0x817fdef5u, rd8(param_1 + 0x45u));
    wr8(0x817fdef6u, rd8(param_1 + 0x46u));
    wr8(0x817fdef7u, rd8(param_1 + 0x47u));
    a.r[0] = 2u;
    a.r[1] = 0x817fdef4u;
    (void)tc_call(0x802535e8u, &a);
    wr8(0x817fdef0u, rd8(param_1 + 0x48u));
    wr8(0x817fdef1u, rd8(param_1 + 0x49u));
    wr8(0x817fdef2u, rd8(param_1 + 0x4au));
    wr8(0x817fdef3u, rd8(param_1 + 0x4bu));
    a.r[0] = 3u;
    a.r[1] = 0x817fdef0u;
    (void)tc_call(0x802535e8u, &a);
    r8 = rd32(param_1 + 0x4cu);
    if (((r8 >> 0xeu) & 1u) == 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 2u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
        a.r[0] = 1u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
        a.r[0] = 2u;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
        a.r[0] = 3u;
        a.r[1] = 2u;
        a.r[2] = 2u;
        a.r[3] = 2u;
        a.r[4] = 3u;
        (void)tc_call(0x80253720u, &a);
    } else {
        r23 = 0u;
        r27 = (((r8 >> 0x18u) & 0xfu) * 0x14u) + (((r8 >> 0x12u) & 0x3cu) + ((r8 >> 0x17u) & 0x1e0u)) + (rd32(param_1 + 0x58u) + (((r8 >> 5u) & 4u) + ((r8 >> 6u) & 4u)));
        do {
            r0 = (u32)rd8(r27);
            a.r[0] = r23;
            a.r[1] = r0 & 3u;
            a.r[2] = (r0 >> 2u) & 3u;
            a.r[3] = (r0 >> 4u) & 3u;
            a.r[4] = (r0 >> 6u) & 3u;
            (void)tc_call(0x80253720u, &a);
            r23 = r23 + 1u;
            r27 = r27 + 1u;
        } while ((s32)r23 < 4);
    }
    r0 = rd32(param_1 + 0x50u);
    r27 = 0u;
    wr8(0x817fdf0cu, 0u);
    r3 = (r0 >> 9u) & 0x1fu;
    wr8(0x817fdf0du, 0u);
    wr8(0x817fdf0eu, 0u);
    if (r3 == 0u) {
        r0 = (r0 >> 0x1cu) & 0xfu;
        r28 = 0u;
        if (r0 != 0u) {
            do {
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r24 = 0x80399d00u;
                        r23 = 0u;
                        r25 = 0x80399d20u;
                        while (r23 < ((rd32(param_1 + 0x50u) >> 0x1cu) & 0xfu)) {
                            r22 = r28 & 0xffu;
                            a.r[0] = r22;
                            a.r[1] = r23;
                            a.r[2] = r23;
                            a.r[3] = 0xffu;
                            (void)tc_call(0x80253860u, &a);
                            r7 = 0u;
                            if (r23 == 0u) {
                                r7 = 0xfu;
                            }
                            r31 = 0u;
                            if (r23 == 0u) {
                                r31 = 7u;
                            }
                            a.r[0] = r22;
                            a.r[1] = 0xfu;
                            a.r[2] = 8u;
                            a.r[3] = 0xeu;
                            a.r[4] = r7;
                            (void)tc_call(0x802533f4u, &a);
                            a.r[0] = r22;
                            a.r[1] = 7u;
                            a.r[2] = 4u;
                            a.r[3] = 6u;
                            a.r[4] = r31;
                            (void)tc_call(0x80253434u, &a);
                            a.r[0] = r22;
                            a.r[1] = rd32(r24);
                            (void)tc_call(0x80253644u, &a);
                            a.r[0] = r22;
                            a.r[1] = rd32(r25);
                            (void)tc_call(0x80253694u, &a);
                            r28 = r28 + 1u;
                            r24 = r24 + 4u;
                            r25 = r25 + 4u;
                            r23 = r23 + 1u;
                        }
                    } else {
                        a.r[0] = 0u;
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        a.r[3] = 0xffu;
                        (void)tc_call(0x80253860u, &a);
                        a.r[0] = 0u;
                        a.r[1] = 0xfu;
                        a.r[2] = 0xfu;
                        a.r[3] = 0xfu;
                        a.r[4] = 8u;
                        (void)tc_call(0x802533f4u, &a);
                        a.r[0] = 0u;
                        a.r[1] = 7u;
                        a.r[2] = 7u;
                        a.r[3] = 7u;
                        a.r[4] = 4u;
                        (void)tc_call(0x80253434u, &a);
                        a.r[0] = 1u;
                        a.r[1] = 1u;
                        a.r[2] = 1u;
                        a.r[3] = 0xffu;
                        (void)tc_call(0x80253860u, &a);
                        a.r[0] = 1u;
                        a.r[1] = 8u;
                        a.r[2] = 0u;
                        a.r[3] = 0xeu;
                        a.r[4] = 0xfu;
                        (void)tc_call(0x802533f4u, &a);
                        a.r[0] = 1u;
                        a.r[1] = 4u;
                        a.r[2] = 0u;
                        a.r[3] = 6u;
                        a.r[4] = 7u;
                        (void)tc_call(0x80253434u, &a);
                        a.r[0] = 1u;
                        a.r[1] = rd32(0x80399d00u);
                        (void)tc_call(0x80253644u, &a);
                        a.r[0] = 1u;
                        a.r[1] = rd32(0x80399d20u);
                        (void)tc_call(0x80253694u, &a);
                        r28 = 2u;
                    }
                    r5 = 0u;
                    if (((u32)(s16)rd16(param_1 + 0x24u) == (u32)(s16)rd16(0x80348a28u) && (u32)(s16)rd16(param_1 + 0x26u) == (u32)(s16)rd16(0x80348a2au) && (u32)(s16)rd16(param_1 + 0x28u) == (u32)(s16)rd16(0x80348a2cu)) && (u32)(s16)rd16(param_1 + 0x2au) == (u32)(s16)rd16(0x80348a2eu)) {
                        r5 = 1u;
                    }
                    if (r5 != 0u) {
                        r3 = 0u;
                        if ((u32)(s16)rd16(param_1 + 0x2cu) == 0xffu && (u32)(s16)rd16(param_1 + 0x2eu) == 0xffu && (u32)(s16)rd16(param_1 + 0x30u) == 0xffu && (u32)(s16)rd16(param_1 + 0x32u) == 0xffu) {
                            r3 = 1u;
                        }
                        if (r3 != 0u) break;
                    }
                    r22 = r28 & 0xffu;
                    a.r[0] = r22;
                    a.r[1] = 0xffu;
                    a.r[2] = 0xffu;
                    a.r[3] = 0xffu;
                    (void)tc_call(0x80253860u, &a);
                    a.r[0] = r22;
                    a.r[1] = 2u;
                    a.r[2] = 4u;
                    a.r[3] = 0u;
                    a.r[4] = 0xfu;
                    (void)tc_call(0x802533f4u, &a);
                    a.r[0] = r22;
                    a.r[1] = 1u;
                    a.r[2] = 2u;
                    a.r[3] = 0u;
                    a.r[4] = 7u;
                    (void)tc_call(0x80253434u, &a);
                    r28 = r28 + 1u;
                } else {
                    a.r[0] = 0u;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0xffu;
                    (void)tc_call(0x80253860u, &a);
                    a.r[0] = 0u;
                    a.r[1] = 2u;
                    a.r[2] = 4u;
                    a.r[3] = 8u;
                    a.r[4] = 0xfu;
                    (void)tc_call(0x802533f4u, &a);
                    a.r[0] = 0u;
                    a.r[1] = 1u;
                    a.r[2] = 2u;
                    a.r[3] = 4u;
                    a.r[4] = 7u;
                    (void)tc_call(0x80253434u, &a);
                    r28 = 1u;
                }
            } while (0);
            if (r29 != 0u) {
                r22 = r28 & 0xffu;
                a.r[0] = r22;
                a.r[1] = 0xffu;
                a.r[2] = 0xffu;
                a.r[3] = 4u;
                (void)tc_call(0x80253860u, &a);
                a.r[0] = r22;
                a.r[1] = 0xfu;
                a.r[2] = 0u;
                a.r[3] = 0xau;
                a.r[4] = 0xfu;
                (void)tc_call(0x802533f4u, &a);
                a.r[0] = r22;
                a.r[1] = 7u;
                a.r[2] = 0u;
                a.r[3] = 5u;
                a.r[4] = 7u;
                (void)tc_call(0x80253434u, &a);
                r28 = r28 + 1u;
            }
        } else {
            a.r[0] = 0u;
            a.r[1] = 0xffu;
            a.r[2] = 0xffu;
            a.r[3] = 4u;
            (void)tc_call(0x80253860u, &a);
            a.r[0] = 0u;
            a.r[1] = 0xfu;
            a.r[2] = 4u;
            a.r[3] = 0xau;
            a.r[4] = 0xfu;
            (void)tc_call(0x802533f4u, &a);
            a.r[0] = 0u;
            a.r[1] = 7u;
            a.r[2] = 2u;
            a.r[3] = 5u;
            a.r[4] = 7u;
            (void)tc_call(0x80253434u, &a);
            r29 = 1u;
            r28 = 1u;
        }
        r22 = r28 & 0xffu;
        r23 = 0u;
        while ((r23 & 0xffu) < r22) {
            r24 = r23 & 0xffu;
            a.r[0] = r24;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x80253474u, &a);
            a.r[0] = r24;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 1u;
            a.r[5] = 0u;
            (void)tc_call(0x802534ccu, &a);
            a.r[0] = r24;
            (void)tc_call(0x8025326cu, &a);
            a.r[0] = r24;
            a.r[1] = 0u;
            a.r[2] = 0u;
            (void)tc_call(0x802536e4u, &a);
            r23 = r23 + 1u;
        }
        a.r[0] = r22;
        (void)tc_call(0x802539bcu, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x802539bcu, &a);
        r9 = rd32(param_1 + 0x4cu);
        r28 = 0u;
        r25 = ((r9 >> 0xdu) & 0x1cu) + (((r9 >> 3u) & 4u) + (((r9 >> 4u) & 4u) + (((r9 >> 5u) & 4u) + ((r9 >> 0xcu) & 4u)))) + (rd32(param_1 + 0x58u) + (((r9 >> 0x17u) & 0x1e0u) + ((r9 >> 0x12u) & 0x3cu) + (((((r9 >> 0x12u) & 3u) + ((r9 >> 0x18u) & 0xfu)) * 0x14u) + ((r9 >> 6u) & 4u))));
        while (r28 < ((rd32(param_1 + 0x50u) >> 9u) & 0x1fu)) {
            a.r[0] = r28;
            a.r[1] = (u32)rd8(r25);
            a.r[2] = ((u32)rd8(r25 + 2u) & 0xfffffeffu) | (((u32)rd8(r25 + 3u) << 8u) & 0x100u);
            a.r[3] = (u32)rd8(r25 + 1u);
            (void)tc_call(0x80253860u, &a);
            r0 = (u32)rd8(r25 + 3u);
            a.r[0] = r28;
            a.r[1] = (r0 >> 1u) & 3u;
            a.r[2] = (r0 >> 3u) & 3u;
            (void)tc_call(0x802536e4u, &a);
            r0 = (u32)rd8(r25 + 5u);
            r5 = (u32)rd8(r25 + 4u);
            r4 = r5 & 0xfu;
            r5 = (r5 >> 4u) & 0xfu;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r0 & 0xfu;
            a.r[4] = (r0 >> 4u) & 0xfu;
            (void)tc_call(0x802533f4u, &a);
            r6 = (u32)rd8(r25 + 6u);
            r0 = (u32)rd8(r25 + 7u);
            r4 = r6 & 0xfu;
            r5 = (r6 >> 4u) & 3u;
            r6 = (r6 >> 6u) & 3u;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r0 & 1u;
            a.r[5] = (r0 >> 1u) & 3u;
            (void)tc_call(0x80253474u, &a);
            a.r[0] = r28;
            a.r[1] = ((u32)rd8(r25 + 7u) >> 3u) & 0x1fu;
            (void)tc_call(0x80253644u, &a);
            r0 = (u32)rd8(r25 + 9u);
            r5 = (u32)rd8(r25 + 8u);
            r4 = r5 & 0xfu;
            r5 = (r5 >> 4u) & 0xfu;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r0 & 0xfu;
            a.r[4] = (r0 >> 4u) & 0xfu;
            (void)tc_call(0x80253434u, &a);
            r6 = (u32)rd8(r25 + 0xau);
            r0 = (u32)rd8(r25 + 0xbu);
            r4 = r6 & 0xfu;
            r5 = (r6 >> 4u) & 3u;
            r6 = (r6 >> 6u) & 3u;
            a.r[0] = r28;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r0 & 1u;
            a.r[5] = (r0 >> 1u) & 3u;
            (void)tc_call(0x802534ccu, &a);
            a.r[0] = r28;
            a.r[1] = ((u32)rd8(r25 + 0xbu) >> 3u) & 0x1fu;
            (void)tc_call(0x80253694u, &a);
            r10 = (u32)rd8(r25 + 0xfu);
            r6 = (u32)rd8(r25 + 0xdu);
            r9 = (u32)rd8(r25 + 0xeu);
            r24 = (r6 >> 3u) & 0xfu;
            wr32(0x817fdee8u, (r10 >> 3u) & 1u);
            r5 = r10 & 3u;
            r8 = r9 & 7u;
            wr32(0x817fdeecu, (r10 >> 4u) & 3u);
            r6 = r6 & 7u;
            r9 = (r9 >> 3u) & 7u;
            r10 = (r10 >> 2u) & 1u;
            a.r[0] = r28;
            a.r[1] = (u32)rd8(r25 + 0xcu);
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r24;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.s[1] = rd32(0x817fdeecu);
            (void)tc_call(0x80252ec0u, &a);
            if ((s32)r24 >= 1 && (s32)r24 <= 3) {
                r27 = 1u;
                wr8(r24 - 0x7e8020f5u, 1u);
            }
            r25 = r25 + 0x10u;
            r28 = r28 + 1u;
        }
        r29 = 1u;
    }
    if (r27 != 0u) {
        r9 = rd32(param_1 + 0x4cu);
        f30 = (f64)rdf32(0x80348a3cu);
        r31 = 0x817fdf0cu;
        r8 = (r9 >> 4u) & 4u;
        r5 = ((r9 >> 0x18u) & 0xfu) * 0x14u;
        r4 = (r9 >> 6u) & 4u;
        r7 = (r9 >> 0xcu) & 4u;
        r6 = (r9 >> 5u) & 4u;
        r10 = (r9 >> 0xdu) & 0x1cu;
        r3 = ((r9 >> 0x12u) & 0x3cu) + ((r9 >> 0x17u) & 0x1e0u);
        r9 = (r9 >> 3u) & 4u;
        r6 = r7 + r6;
        r4 = r8 + r4;
        r3 = r5 + r3;
        r4 = r6 + r4;
        r3 = r4 + r3;
        r27 = 0u;
        r24 = r3 + (rd32(param_1 + 0x58u) + (r10 + r9));
        while (r27 < ((rd32(param_1 + 0x50u) >> 0x12u) & 3u)) {
            if ((u32)rd8(r31) != 0u) {
                a.f[0] = (f64)(f32)(f30 * (f64)rdf32(r24 + 8u));
                f1 = tc_callf(0x802d5a94u, &a);
                f31 = f1;
                a.f[0] = (f64)(f32)(f30 * (f64)rdf32(r24 + 8u));
                f1 = tc_callf(0x802d5a20u, &a);
                wrf32d(0x817fdf48u, (f64)(f32)(f31 * (f64)rdf32(r24 + 0xcu)));
                wrf32d(0x817fdf4cu, (f64)(f32)(-f1 * (f64)rdf32(r24 + 0x10u)));
                wrf32d(0x817fdf50u, (f64)rdf32(r24));
                wrf32d(0x817fdf54u, (f64)(f32)(f1 * (f64)rdf32(r24 + 0xcu)));
                wrf32d(0x817fdf58u, (f64)(f32)(f31 * (f64)rdf32(r24 + 0x10u)));
                wrf32d(0x817fdf5cu, (f64)rdf32(r24 + 4u));
                a.r[0] = r27 + 1u;
                a.r[1] = 0x817fdf48u;
                (void)tc_call(0x802cd6bcu, &a);
            }
            r31 = r31 + 1u;
            r24 = r24 + 0x14u;
            r27 = r27 + 1u;
        }
    }
    a.r[0] = (rd32(param_1 + 0x50u) >> 0xfu) & 7u;
    (void)tc_call(0x8025324cu, &a);
    if (((rd32(param_1 + 0x50u) >> 0xfu) & 7u) != 0u) {
        r9 = rd32(param_1 + 0x4cu);
        r27 = 0u;
        r24 = ((r9 >> 3u) & 4u) + (((r9 >> 0xcu) & 4u) + ((r9 >> 5u) & 4u) + (((r9 >> 4u) & 4u) + ((r9 >> 6u) & 4u))) + (rd32(param_1 + 0x58u) + ((((r9 >> 0x18u) & 0xfu) * 0x14u) + (((r9 >> 0x12u) & 0x3cu) + ((r9 >> 0x17u) & 0x1e0u))));
        while (r27 < ((rd32(param_1 + 0x50u) >> 0xfu) & 7u)) {
            a.r[0] = r27;
            a.r[1] = (u32)rd8(r24);
            a.r[2] = (u32)rd8(r24 + 1u);
            (void)tc_call(0x80253180u, &a);
            a.r[0] = r27;
            a.r[1] = (u32)rd8(r24 + 2u);
            a.r[2] = (u32)rd8(r24 + 3u);
            (void)tc_call(0x8025307cu, &a);
            r24 = r24 + 4u;
            r27 = r27 + 1u;
        }
    }
    r7 = rd32(param_1 + 0x4cu);
    if (((r7 >> 6u) & 1u) == 0u) {
        a.r[0] = 7u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 7u;
        a.r[4] = 0u;
        (void)tc_call(0x8025379cu, &a);
    } else {
        r0 = rd32(param_1 + 0x58u) + (((r7 >> 6u) & 4u) + (((r7 >> 0xcu) & 4u) + ((r7 >> 5u) & 4u)));
        r3 = (((r7 >> 0x18u) & 0xfu) * 0x14u) + (((r7 >> 0x12u) & 0x3cu) + ((r7 >> 0x17u) & 0x1e0u));
        r6 = r3 + r0;
        r0 = (u32)rd8(r3 + r0);
        a.r[0] = r0 & 0xfu;
        a.r[1] = (u32)rd8(r6 + 2u);
        a.r[2] = (u32)rd8(r6 + 1u);
        a.r[3] = (r0 >> 4u) & 0xfu;
        a.r[4] = (u32)rd8(r6 + 3u);
        (void)tc_call(0x8025379cu, &a);
    }
    r3 = rd32(param_1 + 0x4cu);
    if (((r3 >> 5u) & 1u) == 0u) {
        a.r[0] = 1u;
        a.r[1] = 4u;
        a.r[2] = 5u;
        a.r[3] = 0xfu;
        (void)tc_call(0x80253ebcu, &a);
    } else {
        r4 = (r3 >> 0x18u) & 0xfu;
        r8 = (r3 >> 4u) & 4u;
        r0 = (r3 >> 6u) & 4u;
        r7 = (r3 >> 0xcu) & 4u;
        r6 = (r3 >> 5u) & 4u;
        r5 = (r3 >> 0x12u) & 0x3cu;
        r3 = (r3 >> 0x17u) & 0x1e0u;
        r0 = r8 + r0;
        r6 = r7 + r6;
        r0 = r6 + r0;
        r3 = r5 + r3;
        r4 = r4 * 0x14u;
        r0 = rd32(param_1 + 0x58u) + r0;
        r3 = r4 + r3;
        r6 = r3 + r0;
        r3 = (u32)rd8(r3 + r0);
        r4 = (u32)rd8(r6 + 1u);
        r5 = (u32)rd8(r6 + 2u);
        r6 = (u32)rd8(r6 + 3u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80253ebcu, &a);
    }
    return;
}
