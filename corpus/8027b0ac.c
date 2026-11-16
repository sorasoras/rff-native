#include "tc_rt.h"

void fn_8027b0ac(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fda00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r10 = (u32)rd8(0x805772c9u);
    r9 = (u32)rd8(0x805772cau);
    r8 = (u32)rd8(0x805772cbu);
    r7 = (u32)rd8(0x805772ccu);
    r4 = (u32)rd8(0x805772cdu);
    r3 = (u32)rd8(0x805772ceu);
    wr8(0x817fda2cu, rd8(0x805772c8u));
    r31 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    wr8(0x817fda2du, (u8)r10);
    wr8(0x817fda2eu, (u8)r9);
    wr8(0x817fda2fu, (u8)r8);
    wr8(0x817fda30u, (u8)r7);
    wr8(0x817fda31u, (u8)r4);
    wr8(0x817fda32u, (u8)r3);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = rd32(r31 + 0x83cu);
    r26 = rd32(r31 + 0x8bcu);
    r30 = rd32(r31 + 0x8dcu);
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    do {
        if (r26 != 0xffffffffu) {
            if (r30 != 0u) {
                if (param_2 != 0u) {
                    c0lt = (s32)param_2 < 3;
                    if (param_2 == 3u) {
                        wr16(0x817fdab2u, 1u);
                        r10 = rd32(0x817fdaa0u);
                        wr8(0x817fda9cu, 0u);
                        r9 = rd32(0x817fdaa4u);
                        r11 = rd32(0x817fda9cu);
                        r8 = rd32(0x817fdaa8u);
                        r7 = rd32(0x817fdaacu);
                        r6 = rd32(0x817fdab0u);
                        r5 = rd32(0x817fdab4u);
                        r4 = rd32(0x817fdab8u);
                        r3 = rd32(0x817fdabcu);
                        r0 = rd32(0x817fdac0u);
                        wr32(0x817fda98u, 0x19u);
                        wr32(0x817fdac4u, param_3);
                        wr32(0x817fdac8u, 0x19u);
                        wr32(0x817fdaccu, r11);
                        wr32(0x817fdad0u, r10);
                        wr32(0x817fdad4u, r9);
                        wr32(0x817fdad8u, r8);
                        wr32(0x817fdadcu, r7);
                        wr32(0x817fdae0u, r6);
                        wr32(0x817fdae4u, r5);
                        wr32(0x817fdae8u, r4);
                        wr32(0x817fdaecu, r3);
                        wr32(0x817fdaf0u, r0);
                        wr32(0x817fdaf4u, param_3);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r29 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r29 < 0) {
                            r29 = (u32)(s8)(r29 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r29) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdac8u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            f1 = tc_callf(0x8022c2d8u, &a);
                            r0 = 1u;
                        } else {
                            a.r[0] = r30;
                            f1 = tc_callf(0x8022c2d8u, &a);
                            r0 = 0u;
                        }
                        if (r0 != 0u) {
                            return;
                        }
                        r26 = 0xfffffffeu;
                    } else {
                        if (!c0lt) {
                            c0lt = (s32)param_2 < 5;
                            if (param_2 != 5u) {
                                if (!c0lt) break;
                                wr32(0x817fda14u, 0x4a20008u);
                                wr8(0x817fda09u, 1u);
                                wr8(0x817fda08u, 1u);
                                wr32(0x817fda68u, 0x16u);
                                wr16(0x817fda82u, 0x15u);
                                wr32(0x817fda94u, param_3);
                                a.r[0] = 0x817fda6cu;
                                a.r[1] = 0x817fda14u;
                                a.r[2] = 4u;
                                (void)tc_call(0x80004338u, &a);
                                a.r[0] = 0x817fda70u;
                                a.r[1] = 0x817fda08u;
                                a.r[2] = 1u;
                                (void)tc_call(0x80004338u, &a);
                                a.r[0] = 0x817fda71u;
                                a.r[1] = 0x817fda09u;
                                a.r[2] = 1u;
                                (void)tc_call(0x80004338u, &a);
                                r12 = rd32(0x817fda6cu);
                                r11 = rd32(0x817fda70u);
                                r10 = rd32(0x817fda74u);
                                r9 = rd32(0x817fda78u);
                                r8 = rd32(0x817fda7cu);
                                r7 = rd32(0x817fda80u);
                                r6 = rd32(0x817fda84u);
                                r5 = rd32(0x817fda88u);
                                r4 = rd32(0x817fda8cu);
                                r3 = rd32(0x817fda90u);
                                r0 = rd32(0x817fda94u);
                                wr32(0x817fda38u, rd32(0x817fda68u));
                                wr32(0x817fda3cu, r12);
                                wr32(0x817fda40u, r11);
                                wr32(0x817fda44u, r10);
                                wr32(0x817fda48u, r9);
                                wr32(0x817fda4cu, r8);
                                wr32(0x817fda50u, r7);
                                wr32(0x817fda54u, r6);
                                wr32(0x817fda58u, r5);
                                wr32(0x817fda5cu, r4);
                                wr32(0x817fda60u, r3);
                                wr32(0x817fda64u, r0);
                                r3 = tc_call(0x8022c2b0u, &a);
                                r30 = r3;
                                r3 = tc_call(0x8022c2b0u, &a);
                                r29 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                                if ((s32)r29 < 0) {
                                    r29 = (u32)(s8)(r29 + rd32(r31 + 0x168u));
                                }
                                a.r[0] = r3;
                                (void)tc_call(0x8022c2d8u, &a);
                                if ((rd32(r31 + 0x168u) - 1u) != r29) {
                                    a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                    a.r[1] = 0u;
                                    a.r[2] = 0x30u;
                                    (void)tc_call(0x8000443cu, &a);
                                    a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                    a.r[1] = 0x817fda38u;
                                    a.r[2] = 0x30u;
                                    (void)tc_call(0x80004338u, &a);
                                    r6 = (u32)(s8)rd8(r31 + 0x161u);
                                    r4 = rd32(r31 + 0x168u) - 1u;
                                    r5 = r6 - r4;
                                    r4 = r4 - r6;
                                    r4 = ~(r5 | r4);
                                    r4 = (u32)((s32)r4 >> 31);
                                    wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                    a.r[0] = r30;
                                    f1 = tc_callf(0x8022c2d8u, &a);
                                    r0 = 1u;
                                } else {
                                    a.r[0] = r30;
                                    f1 = tc_callf(0x8022c2d8u, &a);
                                    r0 = 0u;
                                }
                                if (r0 != 0u) {
                                    return;
                                }
                                r26 = 0xfffffffeu;
                                break;
                            }
                        } else {
                            c0lt = (s32)param_2 < 1;
                            if (param_2 != 1u) {
                                if (!c0lt) {
                                    wr16(0x817fdb12u, 1u);
                                    r10 = rd32(0x817fdb00u);
                                    wr8(0x817fdafcu, 4u);
                                    r9 = rd32(0x817fdb04u);
                                    r11 = rd32(0x817fdafcu);
                                    r8 = rd32(0x817fdb08u);
                                    r7 = rd32(0x817fdb0cu);
                                    r6 = rd32(0x817fdb10u);
                                    r5 = rd32(0x817fdb14u);
                                    r4 = rd32(0x817fdb18u);
                                    r3 = rd32(0x817fdb1cu);
                                    r0 = rd32(0x817fdb20u);
                                    wr32(0x817fdaf8u, 0x19u);
                                    wr32(0x817fdb24u, param_3);
                                    wr32(0x817fdb28u, 0x19u);
                                    wr32(0x817fdb2cu, r11);
                                    wr32(0x817fdb30u, r10);
                                    wr32(0x817fdb34u, r9);
                                    wr32(0x817fdb38u, r8);
                                    wr32(0x817fdb3cu, r7);
                                    wr32(0x817fdb40u, r6);
                                    wr32(0x817fdb44u, r5);
                                    wr32(0x817fdb48u, r4);
                                    wr32(0x817fdb4cu, r3);
                                    wr32(0x817fdb50u, r0);
                                    wr32(0x817fdb54u, param_3);
                                    r3 = tc_call(0x8022c2b0u, &a);
                                    r30 = r3;
                                    r3 = tc_call(0x8022c2b0u, &a);
                                    r29 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                                    if ((s32)r29 < 0) {
                                        r29 = (u32)(s8)(r29 + rd32(r31 + 0x168u));
                                    }
                                    a.r[0] = r3;
                                    (void)tc_call(0x8022c2d8u, &a);
                                    if ((rd32(r31 + 0x168u) - 1u) != r29) {
                                        a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                        a.r[1] = 0u;
                                        a.r[2] = 0x30u;
                                        (void)tc_call(0x8000443cu, &a);
                                        a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                        a.r[1] = 0x817fdb28u;
                                        a.r[2] = 0x30u;
                                        (void)tc_call(0x80004338u, &a);
                                        r6 = (u32)(s8)rd8(r31 + 0x161u);
                                        r4 = rd32(r31 + 0x168u) - 1u;
                                        r5 = r6 - r4;
                                        r4 = r4 - r6;
                                        r4 = ~(r5 | r4);
                                        r4 = (u32)((s32)r4 >> 31);
                                        wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                        a.r[0] = r30;
                                        f1 = tc_callf(0x8022c2d8u, &a);
                                        r0 = 1u;
                                    } else {
                                        a.r[0] = r30;
                                        f1 = tc_callf(0x8022c2d8u, &a);
                                        r0 = 0u;
                                    }
                                    if (r0 != 0u) {
                                        return;
                                    }
                                    r26 = 0xfffffffeu;
                                    break;
                                }
                                break;
                            }
                        }
                        r3 = tc_call(0x8022c2b0u, &a);
                        r29 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r30 < 0) {
                            r30 = (u32)(s8)(r30 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((r30 + 7u) <= (rd32(r31 + 0x168u) - 1u)) {
                            wr16(0x817fddb2u, 1u);
                            r10 = rd32(0x817fdda0u);
                            wr8(0x817fdd9cu, 4u);
                            r9 = rd32(0x817fdda4u);
                            r11 = rd32(0x817fdd9cu);
                            r8 = rd32(0x817fdda8u);
                            r7 = rd32(0x817fddacu);
                            r6 = rd32(0x817fddb0u);
                            r5 = rd32(0x817fddb4u);
                            r4 = rd32(0x817fddb8u);
                            r3 = rd32(0x817fddbcu);
                            r0 = rd32(0x817fddc0u);
                            wr32(0x817fdd98u, 0x14u);
                            wr32(0x817fddc4u, 0u);
                            wr32(0x817fddc8u, 0x14u);
                            wr32(0x817fddccu, r11);
                            wr32(0x817fddd0u, r10);
                            wr32(0x817fddd4u, r9);
                            wr32(0x817fddd8u, r8);
                            wr32(0x817fdddcu, r7);
                            wr32(0x817fdde0u, r6);
                            wr32(0x817fdde4u, r5);
                            wr32(0x817fdde8u, r4);
                            wr32(0x817fddecu, r3);
                            wr32(0x817fddf0u, r0);
                            wr32(0x817fddf4u, 0u);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fddc8u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr16(0x817fdd52u, 1u);
                            r10 = rd32(0x817fdd40u);
                            wr8(0x817fdd3cu, 4u);
                            r9 = rd32(0x817fdd44u);
                            r11 = rd32(0x817fdd3cu);
                            r8 = rd32(0x817fdd48u);
                            r7 = rd32(0x817fdd4cu);
                            r6 = rd32(0x817fdd50u);
                            r5 = rd32(0x817fdd54u);
                            r4 = rd32(0x817fdd58u);
                            r3 = rd32(0x817fdd5cu);
                            r0 = rd32(0x817fdd60u);
                            wr32(0x817fdd38u, 0x19u);
                            wr32(0x817fdd64u, 0u);
                            wr32(0x817fdd68u, 0x19u);
                            wr32(0x817fdd6cu, r11);
                            wr32(0x817fdd70u, r10);
                            wr32(0x817fdd74u, r9);
                            wr32(0x817fdd78u, r8);
                            wr32(0x817fdd7cu, r7);
                            wr32(0x817fdd80u, r6);
                            wr32(0x817fdd84u, r5);
                            wr32(0x817fdd88u, r4);
                            wr32(0x817fdd8cu, r3);
                            wr32(0x817fdd90u, r0);
                            wr32(0x817fdd94u, 0u);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdd68u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr8(0x817fda0eu, 1u);
                            wr32(0x817fda20u, 0x4a20009u);
                            wr8(0x817fda0du, 1u);
                            wr32(0x817fdd08u, 0x16u);
                            wr16(0x817fdd22u, 0x15u);
                            wr32(0x817fdd34u, 0u);
                            a.r[0] = 0x817fdd0cu;
                            a.r[1] = 0x817fda20u;
                            a.r[2] = 4u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdd10u;
                            a.r[1] = 0x817fda0du;
                            a.r[2] = 1u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdd11u;
                            a.r[1] = 0x817fda0eu;
                            a.r[2] = 1u;
                            (void)tc_call(0x80004338u, &a);
                            r12 = rd32(0x817fdd0cu);
                            r11 = rd32(0x817fdd10u);
                            r10 = rd32(0x817fdd14u);
                            r9 = rd32(0x817fdd18u);
                            r8 = rd32(0x817fdd1cu);
                            r7 = rd32(0x817fdd20u);
                            r6 = rd32(0x817fdd24u);
                            r5 = rd32(0x817fdd28u);
                            r4 = rd32(0x817fdd2cu);
                            r3 = rd32(0x817fdd30u);
                            r0 = rd32(0x817fdd34u);
                            wr32(0x817fdcd8u, rd32(0x817fdd08u));
                            wr32(0x817fdcdcu, r12);
                            wr32(0x817fdce0u, r11);
                            wr32(0x817fdce4u, r10);
                            wr32(0x817fdce8u, r9);
                            wr32(0x817fdcecu, r8);
                            wr32(0x817fdcf0u, r7);
                            wr32(0x817fdcf4u, r6);
                            wr32(0x817fdcf8u, r5);
                            wr32(0x817fdcfcu, r4);
                            wr32(0x817fdd00u, r3);
                            wr32(0x817fdd04u, r0);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdcd8u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr8(0x817fda0cu, 0x80u);
                            wr32(0x817fda1cu, 0x4a20001u);
                            wr8(0x817fda0bu, 1u);
                            wr32(0x817fdca8u, 0x16u);
                            wr16(0x817fdcc2u, 0x15u);
                            wr32(0x817fdcd4u, 0u);
                            a.r[0] = 0x817fdcacu;
                            a.r[1] = 0x817fda1cu;
                            a.r[2] = 4u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdcb0u;
                            a.r[1] = 0x817fda0bu;
                            a.r[2] = 1u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdcb1u;
                            a.r[1] = 0x817fda0cu;
                            a.r[2] = 1u;
                            (void)tc_call(0x80004338u, &a);
                            r12 = rd32(0x817fdcacu);
                            r11 = rd32(0x817fdcb0u);
                            r10 = rd32(0x817fdcb4u);
                            r9 = rd32(0x817fdcb8u);
                            r8 = rd32(0x817fdcbcu);
                            r7 = rd32(0x817fdcc0u);
                            r6 = rd32(0x817fdcc4u);
                            r5 = rd32(0x817fdcc8u);
                            r4 = rd32(0x817fdcccu);
                            r3 = rd32(0x817fdcd0u);
                            r0 = rd32(0x817fdcd4u);
                            wr32(0x817fdc78u, rd32(0x817fdca8u));
                            wr32(0x817fdc7cu, r12);
                            wr32(0x817fdc80u, r11);
                            wr32(0x817fdc84u, r10);
                            wr32(0x817fdc88u, r9);
                            wr32(0x817fdc8cu, r8);
                            wr32(0x817fdc90u, r7);
                            wr32(0x817fdc94u, r6);
                            wr32(0x817fdc98u, r5);
                            wr32(0x817fdc9cu, r4);
                            wr32(0x817fdca0u, r3);
                            wr32(0x817fdca4u, r0);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdc78u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr8(0x817fda30u, rd8(0x80571afau));
                            wr32(0x817fda18u, 0x4a20001u);
                            wr8(0x817fda0au, 7u);
                            wr32(0x817fdc18u, 0x16u);
                            wr16(0x817fdc32u, 0x15u);
                            wr32(0x817fdc44u, 0u);
                            a.r[0] = 0x817fdc1cu;
                            a.r[1] = 0x817fda18u;
                            a.r[2] = 4u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdc20u;
                            a.r[1] = 0x817fda0au;
                            a.r[2] = 1u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = 0x817fdc21u;
                            a.r[1] = 0x817fda2cu;
                            a.r[2] = 7u;
                            (void)tc_call(0x80004338u, &a);
                            r12 = rd32(0x817fdc1cu);
                            r11 = rd32(0x817fdc20u);
                            r10 = rd32(0x817fdc24u);
                            r9 = rd32(0x817fdc28u);
                            r8 = rd32(0x817fdc2cu);
                            r7 = rd32(0x817fdc30u);
                            r6 = rd32(0x817fdc34u);
                            r5 = rd32(0x817fdc38u);
                            r4 = rd32(0x817fdc3cu);
                            r3 = rd32(0x817fdc40u);
                            r0 = rd32(0x817fdc44u);
                            wr32(0x817fdc48u, rd32(0x817fdc18u));
                            wr32(0x817fdc4cu, r12);
                            wr32(0x817fdc50u, r11);
                            wr32(0x817fdc54u, r10);
                            wr32(0x817fdc58u, r9);
                            wr32(0x817fdc5cu, r8);
                            wr32(0x817fdc60u, r7);
                            wr32(0x817fdc64u, r6);
                            wr32(0x817fdc68u, r5);
                            wr32(0x817fdc6cu, r4);
                            wr32(0x817fdc70u, r3);
                            wr32(0x817fdc74u, r0);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdc48u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr16(0x817fdbd2u, 1u);
                            r10 = rd32(0x817fdbc0u);
                            wr8(0x817fdbbcu, 0u);
                            r9 = rd32(0x817fdbc4u);
                            r11 = rd32(0x817fdbbcu);
                            r8 = rd32(0x817fdbc8u);
                            r7 = rd32(0x817fdbccu);
                            r6 = rd32(0x817fdbd0u);
                            r5 = rd32(0x817fdbd4u);
                            r4 = rd32(0x817fdbd8u);
                            r3 = rd32(0x817fdbdcu);
                            r0 = rd32(0x817fdbe0u);
                            wr32(0x817fdbb8u, 0x19u);
                            wr32(0x817fdbe4u, 0u);
                            wr32(0x817fdbe8u, 0x19u);
                            wr32(0x817fdbecu, r11);
                            wr32(0x817fdbf0u, r10);
                            wr32(0x817fdbf4u, r9);
                            wr32(0x817fdbf8u, r8);
                            wr32(0x817fdbfcu, r7);
                            wr32(0x817fdc00u, r6);
                            wr32(0x817fdc04u, r5);
                            wr32(0x817fdc08u, r4);
                            wr32(0x817fdc0cu, r3);
                            wr32(0x817fdc10u, r0);
                            wr32(0x817fdc14u, 0u);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdbe8u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            wr16(0x817fdb72u, 1u);
                            r9 = rd32(0x817fdb60u);
                            wr8(0x817fdb5cu, 0u);
                            r8 = rd32(0x817fdb64u);
                            r10 = rd32(0x817fdb5cu);
                            r7 = rd32(0x817fdb68u);
                            r6 = rd32(0x817fdb6cu);
                            r5 = rd32(0x817fdb70u);
                            r4 = rd32(0x817fdb74u);
                            r3 = rd32(0x817fdb78u);
                            r0 = rd32(0x817fdb7cu);
                            wr32(0x817fdb58u, 0x15u);
                            wr32(0x817fdb84u, param_3);
                            wr32(0x817fdb80u, 0u);
                            wr32(0x817fdb88u, 0x15u);
                            wr32(0x817fdb8cu, r10);
                            wr32(0x817fdb90u, r9);
                            wr32(0x817fdb94u, r8);
                            wr32(0x817fdb98u, r7);
                            wr32(0x817fdb9cu, r6);
                            wr32(0x817fdba0u, r5);
                            wr32(0x817fdba4u, r4);
                            wr32(0x817fdba8u, r3);
                            wr32(0x817fdbacu, r0);
                            wr32(0x817fdbb0u, 0u);
                            wr32(0x817fdbb4u, param_3);
                            r3 = tc_call(0x8022c2b0u, &a);
                            r30 = r3;
                            r3 = tc_call(0x8022c2b0u, &a);
                            r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                            if ((s32)r27 < 0) {
                                r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                            }
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if ((rd32(r31 + 0x168u) - 1u) != r27) {
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x8000443cu, &a);
                                a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                                a.r[1] = 0x817fdb88u;
                                a.r[2] = 0x30u;
                                (void)tc_call(0x80004338u, &a);
                                r6 = (u32)(s8)rd8(r31 + 0x161u);
                                r4 = rd32(r31 + 0x168u) - 1u;
                                r5 = r6 - r4;
                                r4 = r4 - r6;
                                r4 = ~(r5 | r4);
                                r4 = (u32)((s32)r4 >> 31);
                                wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            } else {
                                a.r[0] = r30;
                                (void)tc_call(0x8022c2d8u, &a);
                            }
                            a.r[0] = r29;
                            (void)tc_call(0x8022c2d8u, &a);
                            return;
                        }
                        r26 = 0xfffffffeu;
                        a.r[0] = r29;
                        f1 = tc_callf(0x8022c2d8u, &a);
                    }
                } else if (r29 != 0u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r29 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                    if ((s32)r30 < 0) {
                        r30 = (u32)(s8)(r30 + rd32(r31 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if ((r30 + 5u) <= (rd32(r31 + 0x168u) - 1u)) {
                        wr16(0x817fdf92u, 1u);
                        r10 = rd32(0x817fdf80u);
                        wr8(0x817fdf7cu, 4u);
                        r9 = rd32(0x817fdf84u);
                        r11 = rd32(0x817fdf7cu);
                        r8 = rd32(0x817fdf88u);
                        r7 = rd32(0x817fdf8cu);
                        r6 = rd32(0x817fdf90u);
                        r5 = rd32(0x817fdf94u);
                        r4 = rd32(0x817fdf98u);
                        r3 = rd32(0x817fdf9cu);
                        r0 = rd32(0x817fdfa0u);
                        wr32(0x817fdf78u, 0x19u);
                        wr32(0x817fdfa4u, 0u);
                        wr32(0x817fdfa8u, 0x19u);
                        wr32(0x817fdfacu, r11);
                        wr32(0x817fdfb0u, r10);
                        wr32(0x817fdfb4u, r9);
                        wr32(0x817fdfb8u, r8);
                        wr32(0x817fdfbcu, r7);
                        wr32(0x817fdfc0u, r6);
                        wr32(0x817fdfc4u, r5);
                        wr32(0x817fdfc8u, r4);
                        wr32(0x817fdfccu, r3);
                        wr32(0x817fdfd0u, r0);
                        wr32(0x817fdfd4u, 0u);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r27 < 0) {
                            r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r27) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdfa8u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr8(0x817fda12u, 1u);
                        wr32(0x817fda28u, 0x4a20001u);
                        wr8(0x817fda11u, 1u);
                        wr32(0x817fdf48u, 0x16u);
                        wr16(0x817fdf62u, 0x15u);
                        wr32(0x817fdf74u, 0u);
                        a.r[0] = 0x817fdf4cu;
                        a.r[1] = 0x817fda28u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdf50u;
                        a.r[1] = 0x817fda11u;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdf51u;
                        a.r[1] = 0x817fda12u;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fdf4cu);
                        r11 = rd32(0x817fdf50u);
                        r10 = rd32(0x817fdf54u);
                        r9 = rd32(0x817fdf58u);
                        r8 = rd32(0x817fdf5cu);
                        r7 = rd32(0x817fdf60u);
                        r6 = rd32(0x817fdf64u);
                        r5 = rd32(0x817fdf68u);
                        r4 = rd32(0x817fdf6cu);
                        r3 = rd32(0x817fdf70u);
                        r0 = rd32(0x817fdf74u);
                        wr32(0x817fdf18u, rd32(0x817fdf48u));
                        wr32(0x817fdf1cu, r12);
                        wr32(0x817fdf20u, r11);
                        wr32(0x817fdf24u, r10);
                        wr32(0x817fdf28u, r9);
                        wr32(0x817fdf2cu, r8);
                        wr32(0x817fdf30u, r7);
                        wr32(0x817fdf34u, r6);
                        wr32(0x817fdf38u, r5);
                        wr32(0x817fdf3cu, r4);
                        wr32(0x817fdf40u, r3);
                        wr32(0x817fdf44u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r27 < 0) {
                            r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r27) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdf18u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr8(0x817fda10u, 0u);
                        wr32(0x817fda24u, 0x4a20009u);
                        wr8(0x817fda0fu, 1u);
                        wr32(0x817fdee8u, 0x16u);
                        wr16(0x817fdf02u, 0x15u);
                        wr32(0x817fdf14u, 0u);
                        a.r[0] = 0x817fdeecu;
                        a.r[1] = 0x817fda24u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdef0u;
                        a.r[1] = 0x817fda0fu;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdef1u;
                        a.r[1] = 0x817fda10u;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fdeecu);
                        r11 = rd32(0x817fdef0u);
                        r10 = rd32(0x817fdef4u);
                        r9 = rd32(0x817fdef8u);
                        r8 = rd32(0x817fdefcu);
                        r7 = rd32(0x817fdf00u);
                        r6 = rd32(0x817fdf04u);
                        r5 = rd32(0x817fdf08u);
                        r4 = rd32(0x817fdf0cu);
                        r3 = rd32(0x817fdf10u);
                        r0 = rd32(0x817fdf14u);
                        wr32(0x817fdeb8u, rd32(0x817fdee8u));
                        wr32(0x817fdebcu, r12);
                        wr32(0x817fdec0u, r11);
                        wr32(0x817fdec4u, r10);
                        wr32(0x817fdec8u, r9);
                        wr32(0x817fdeccu, r8);
                        wr32(0x817fded0u, r7);
                        wr32(0x817fded4u, r6);
                        wr32(0x817fded8u, r5);
                        wr32(0x817fdedcu, r4);
                        wr32(0x817fdee0u, r3);
                        wr32(0x817fdee4u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r27 < 0) {
                            r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r27) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdeb8u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr16(0x817fde72u, 1u);
                        r10 = rd32(0x817fde60u);
                        wr8(0x817fde5cu, 0u);
                        r9 = rd32(0x817fde64u);
                        r11 = rd32(0x817fde5cu);
                        r8 = rd32(0x817fde68u);
                        r7 = rd32(0x817fde6cu);
                        r6 = rd32(0x817fde70u);
                        r5 = rd32(0x817fde74u);
                        r4 = rd32(0x817fde78u);
                        r3 = rd32(0x817fde7cu);
                        r0 = rd32(0x817fde80u);
                        wr32(0x817fde58u, 0x14u);
                        wr32(0x817fde84u, 0u);
                        wr32(0x817fde88u, 0x14u);
                        wr32(0x817fde8cu, r11);
                        wr32(0x817fde90u, r10);
                        wr32(0x817fde94u, r9);
                        wr32(0x817fde98u, r8);
                        wr32(0x817fde9cu, r7);
                        wr32(0x817fdea0u, r6);
                        wr32(0x817fdea4u, r5);
                        wr32(0x817fdea8u, r4);
                        wr32(0x817fdeacu, r3);
                        wr32(0x817fdeb0u, r0);
                        wr32(0x817fdeb4u, 0u);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r27 < 0) {
                            r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r27) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fde88u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr16(0x817fde12u, 1u);
                        r9 = rd32(0x817fde00u);
                        wr8(0x817fddfcu, 0u);
                        r8 = rd32(0x817fde04u);
                        r10 = rd32(0x817fddfcu);
                        r7 = rd32(0x817fde08u);
                        r6 = rd32(0x817fde0cu);
                        r5 = rd32(0x817fde10u);
                        r4 = rd32(0x817fde14u);
                        r3 = rd32(0x817fde18u);
                        r0 = rd32(0x817fde1cu);
                        wr32(0x817fddf8u, 0x15u);
                        wr32(0x817fde24u, param_3);
                        wr32(0x817fde20u, 0u);
                        wr32(0x817fde28u, 0x15u);
                        wr32(0x817fde2cu, r10);
                        wr32(0x817fde30u, r9);
                        wr32(0x817fde34u, r8);
                        wr32(0x817fde38u, r7);
                        wr32(0x817fde3cu, r6);
                        wr32(0x817fde40u, r5);
                        wr32(0x817fde44u, r4);
                        wr32(0x817fde48u, r3);
                        wr32(0x817fde4cu, r0);
                        wr32(0x817fde50u, 0u);
                        wr32(0x817fde54u, param_3);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r27 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
                        if ((s32)r27 < 0) {
                            r27 = (u32)(s8)(r27 + rd32(r31 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r31 + 0x168u) - 1u) != r27) {
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fde28u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r31 + 0x161u);
                            r4 = rd32(r31 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r31 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r30;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        a.r[0] = r29;
                        (void)tc_call(0x8022c2d8u, &a);
                        return;
                    }
                    r26 = 0xfffffffeu;
                    a.r[0] = r29;
                    f1 = tc_callf(0x8022c2d8u, &a);
                } else {
                    r26 = 0u;
                }
            } else {
                r26 = 0xfffffffeu;
            }
        }
    } while (0);
    if (param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r26;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        a.f[0] = f1;
        (void)tc_call(param_3, &a);
    }
    return;
}
