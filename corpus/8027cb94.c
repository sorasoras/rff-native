#include "tc_rt.h"

void fn_8027cb94(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdb90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r26 = rd32(r29 + 0x838u);
    r25 = (u32)rd8(r29 + 0x8ccu);
    r24 = rd32(r29 + 0x8bcu);
    r30 = rd32(r29 + 0x8dcu);
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (r24 != 0xffffffffu) {
        if (r30 != 0u) {
            if (param_2 != 0u) {
                if (param_2 != r25) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                    if ((s32)r26 < 0) {
                        r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if ((r26 + 8u) <= (rd32(r29 + 0x168u) - 1u)) {
                        wr16(0x817fde72u, 1u);
                        r10 = rd32(0x817fde60u);
                        wr8(r29 + 0x8ccu, (u8)param_2);
                        r9 = rd32(0x817fde64u);
                        wr8(0x817fde5cu, 4u);
                        r8 = rd32(0x817fde68u);
                        r11 = rd32(0x817fde5cu);
                        r7 = rd32(0x817fde6cu);
                        r6 = rd32(0x817fde70u);
                        r5 = rd32(0x817fde74u);
                        r4 = rd32(0x817fde78u);
                        r3 = rd32(0x817fde7cu);
                        r0 = rd32(0x817fde80u);
                        wr32(0x817fde58u, 0x13u);
                        wr32(0x817fde84u, 0u);
                        wr32(0x817fde88u, 0x13u);
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
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fde88u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr16(0x817fde12u, 1u);
                        r10 = rd32(0x817fde00u);
                        wr8(0x817fddfcu, 4u);
                        r9 = rd32(0x817fde04u);
                        r11 = rd32(0x817fddfcu);
                        r8 = rd32(0x817fde08u);
                        r7 = rd32(0x817fde0cu);
                        r6 = rd32(0x817fde10u);
                        r5 = rd32(0x817fde14u);
                        r4 = rd32(0x817fde18u);
                        r3 = rd32(0x817fde1cu);
                        r0 = rd32(0x817fde20u);
                        wr32(0x817fddf8u, 0x1au);
                        wr32(0x817fde24u, 0u);
                        wr32(0x817fde28u, 0x1au);
                        wr32(0x817fde2cu, r11);
                        wr32(0x817fde30u, r10);
                        wr32(0x817fde34u, r9);
                        wr32(0x817fde38u, r8);
                        wr32(0x817fde3cu, r7);
                        wr32(0x817fde40u, r6);
                        wr32(0x817fde44u, r5);
                        wr32(0x817fde48u, r4);
                        wr32(0x817fde4cu, r3);
                        wr32(0x817fde50u, r0);
                        wr32(0x817fde54u, 0u);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fde28u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr8(0x817fdb9fu, 1u);
                        wr32(0x817fdbb0u, 0x4b00030u);
                        wr8(0x817fdb9eu, 1u);
                        wr32(0x817fddc8u, 0x16u);
                        wr16(0x817fdde2u, 0x15u);
                        wr32(0x817fddf4u, 0u);
                        a.r[0] = 0x817fddccu;
                        a.r[1] = 0x817fdbb0u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fddd0u;
                        a.r[1] = 0x817fdb9eu;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fddd1u;
                        a.r[1] = 0x817fdb9fu;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fddccu);
                        r11 = rd32(0x817fddd0u);
                        r10 = rd32(0x817fddd4u);
                        r9 = rd32(0x817fddd8u);
                        r8 = rd32(0x817fdddcu);
                        r7 = rd32(0x817fdde0u);
                        r6 = rd32(0x817fdde4u);
                        r5 = rd32(0x817fdde8u);
                        r4 = rd32(0x817fddecu);
                        r3 = rd32(0x817fddf0u);
                        r0 = rd32(0x817fddf4u);
                        wr32(0x817fdd98u, rd32(0x817fddc8u));
                        wr32(0x817fdd9cu, r12);
                        wr32(0x817fdda0u, r11);
                        wr32(0x817fdda4u, r10);
                        wr32(0x817fdda8u, r9);
                        wr32(0x817fddacu, r8);
                        wr32(0x817fddb0u, r7);
                        wr32(0x817fddb4u, r6);
                        wr32(0x817fddb8u, r5);
                        wr32(0x817fddbcu, r4);
                        wr32(0x817fddc0u, r3);
                        wr32(0x817fddc4u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdd98u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        r8 = (u32)rd8(0x80571b01u) - 1u;
                        wr8(0x817fdb9du, 9u);
                        wr32(0x817fdd38u, 0x16u);
                        wr32(0x817fdbacu, 0x4b00000u);
                        wr16(0x817fdd52u, 0x15u);
                        wr32(0x817fdd64u, 0u);
                        a.r[0] = 0x817fdd3cu;
                        a.r[1] = 0x817fdbacu;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdd40u;
                        a.r[1] = 0x817fdb9du;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdd41u;
                        a.r[1] = ((r8 << 3u) & 0xfffffff8u) + r8 - 0x7fcb7f28u;
                        a.r[2] = 9u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fdd3cu);
                        r11 = rd32(0x817fdd40u);
                        r10 = rd32(0x817fdd44u);
                        r9 = rd32(0x817fdd48u);
                        r8 = rd32(0x817fdd4cu);
                        r7 = rd32(0x817fdd50u);
                        r6 = rd32(0x817fdd54u);
                        r5 = rd32(0x817fdd58u);
                        r4 = rd32(0x817fdd5cu);
                        r3 = rd32(0x817fdd60u);
                        r0 = rd32(0x817fdd64u);
                        wr32(0x817fdd68u, rd32(0x817fdd38u));
                        wr32(0x817fdd6cu, r12);
                        wr32(0x817fdd70u, r11);
                        wr32(0x817fdd74u, r10);
                        wr32(0x817fdd78u, r9);
                        wr32(0x817fdd7cu, r8);
                        wr32(0x817fdd80u, r7);
                        wr32(0x817fdd84u, r6);
                        wr32(0x817fdd88u, r5);
                        wr32(0x817fdd8cu, r4);
                        wr32(0x817fdd90u, r3);
                        wr32(0x817fdd94u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdd68u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        r7 = (u32)rd8(0x80571b01u) - 1u;
                        wr8(0x817fdb9cu, 2u);
                        r7 = (r7 << 1u) & 0xfffffffeu;
                        wr32(0x817fdcd8u, 0x16u);
                        wr32(0x817fdba8u, 0x4b0001au);
                        wr16(0x817fdcf2u, 0x15u);
                        wr32(0x817fdd04u, 0u);
                        a.r[0] = 0x817fdcdcu;
                        a.r[1] = 0x817fdba8u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdce0u;
                        a.r[1] = 0x817fdb9cu;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdce1u;
                        a.r[1] = r7 - 0x7fcb7ef8u;
                        a.r[2] = 2u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fdcdcu);
                        r11 = rd32(0x817fdce0u);
                        r10 = rd32(0x817fdce4u);
                        r9 = rd32(0x817fdce8u);
                        r8 = rd32(0x817fdcecu);
                        r7 = rd32(0x817fdcf0u);
                        r6 = rd32(0x817fdcf4u);
                        r5 = rd32(0x817fdcf8u);
                        r4 = rd32(0x817fdcfcu);
                        r3 = rd32(0x817fdd00u);
                        r0 = rd32(0x817fdd04u);
                        wr32(0x817fdd08u, rd32(0x817fdcd8u));
                        wr32(0x817fdd0cu, r12);
                        wr32(0x817fdd10u, r11);
                        wr32(0x817fdd14u, r10);
                        wr32(0x817fdd18u, r9);
                        wr32(0x817fdd1cu, r8);
                        wr32(0x817fdd20u, r7);
                        wr32(0x817fdd24u, r6);
                        wr32(0x817fdd28u, r5);
                        wr32(0x817fdd2cu, r4);
                        wr32(0x817fdd30u, r3);
                        wr32(0x817fdd34u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdd08u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr8(0x817fdb9bu, (u8)param_2);
                        wr32(0x817fdba4u, 0x4b00033u);
                        wr8(0x817fdb9au, 1u);
                        wr32(0x817fdca8u, 0x16u);
                        wr16(0x817fdcc2u, 0x15u);
                        wr32(0x817fdcd4u, 0u);
                        a.r[0] = 0x817fdcacu;
                        a.r[1] = 0x817fdba4u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdcb0u;
                        a.r[1] = 0x817fdb9au;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdcb1u;
                        a.r[1] = 0x817fdb9bu;
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
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdc78u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr8(0x817fdb99u, 8u);
                        wr32(0x817fdba0u, 0x4b00030u);
                        wr8(0x817fdb98u, 1u);
                        wr32(0x817fdc48u, 0x16u);
                        wr16(0x817fdc62u, 0x15u);
                        wr32(0x817fdc74u, 0x8027cb64u);
                        a.r[0] = 0x817fdc4cu;
                        a.r[1] = 0x817fdba0u;
                        a.r[2] = 4u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdc50u;
                        a.r[1] = 0x817fdb98u;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        a.r[0] = 0x817fdc51u;
                        a.r[1] = 0x817fdb99u;
                        a.r[2] = 1u;
                        (void)tc_call(0x80004338u, &a);
                        r12 = rd32(0x817fdc4cu);
                        r11 = rd32(0x817fdc50u);
                        r10 = rd32(0x817fdc54u);
                        r9 = rd32(0x817fdc58u);
                        r8 = rd32(0x817fdc5cu);
                        r7 = rd32(0x817fdc60u);
                        r6 = rd32(0x817fdc64u);
                        r5 = rd32(0x817fdc68u);
                        r4 = rd32(0x817fdc6cu);
                        r3 = rd32(0x817fdc70u);
                        r0 = rd32(0x817fdc74u);
                        wr32(0x817fdc18u, rd32(0x817fdc48u));
                        wr32(0x817fdc1cu, r12);
                        wr32(0x817fdc20u, r11);
                        wr32(0x817fdc24u, r10);
                        wr32(0x817fdc28u, r9);
                        wr32(0x817fdc2cu, r8);
                        wr32(0x817fdc30u, r7);
                        wr32(0x817fdc34u, r6);
                        wr32(0x817fdc38u, r5);
                        wr32(0x817fdc3cu, r4);
                        wr32(0x817fdc40u, r3);
                        wr32(0x817fdc44u, r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdc18u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        wr16(0x817fdbd2u, 1u);
                        r9 = rd32(0x817fdbc0u);
                        wr8(0x817fdbbcu, 0u);
                        r8 = rd32(0x817fdbc4u);
                        r10 = rd32(0x817fdbbcu);
                        r7 = rd32(0x817fdbc8u);
                        r6 = rd32(0x817fdbccu);
                        r5 = rd32(0x817fdbd0u);
                        r4 = rd32(0x817fdbd4u);
                        r3 = rd32(0x817fdbd8u);
                        r0 = rd32(0x817fdbdcu);
                        wr32(0x817fdbb8u, 0x15u);
                        wr32(0x817fdbe4u, param_3);
                        wr32(0x817fdbe0u, 0u);
                        wr32(0x817fdbe8u, 0x15u);
                        wr32(0x817fdbecu, r10);
                        wr32(0x817fdbf0u, r9);
                        wr32(0x817fdbf4u, r8);
                        wr32(0x817fdbf8u, r7);
                        wr32(0x817fdbfcu, r6);
                        wr32(0x817fdc00u, r5);
                        wr32(0x817fdc04u, r4);
                        wr32(0x817fdc08u, r3);
                        wr32(0x817fdc0cu, r0);
                        wr32(0x817fdc10u, 0u);
                        wr32(0x817fdc14u, param_3);
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                        if ((s32)r26 < 0) {
                            r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                        }
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if ((rd32(r29 + 0x168u) - 1u) != r26) {
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x8000443cu, &a);
                            a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                            a.r[1] = 0x817fdbe8u;
                            a.r[2] = 0x30u;
                            (void)tc_call(0x80004338u, &a);
                            r6 = (u32)(s8)rd8(r29 + 0x161u);
                            r4 = rd32(r29 + 0x168u) - 1u;
                            r5 = r6 - r4;
                            r4 = r4 - r6;
                            r4 = ~(r5 | r4);
                            r4 = (u32)((s32)r4 >> 31);
                            wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            a.r[0] = r31;
                            (void)tc_call(0x8022c2d8u, &a);
                        }
                        a.r[0] = r30;
                        (void)tc_call(0x8022c2d8u, &a);
                        return;
                    }
                    r24 = 0xfffffffeu;
                    a.r[0] = r30;
                    f1 = tc_callf(0x8022c2d8u, &a);
                }
            } else if (r26 != 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = r3;
                r3 = tc_call(0x8022c2b0u, &a);
                r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                if ((s32)r26 < 0) {
                    r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                }
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                if ((r26 + 3u) <= (rd32(r29 + 0x168u) - 1u)) {
                    wr16(0x817fdf92u, 1u);
                    r10 = rd32(0x817fdf80u);
                    wr8(r29 + 0x8ccu, (u8)param_2);
                    r9 = rd32(0x817fdf84u);
                    wr8(0x817fdf7cu, 0u);
                    r8 = rd32(0x817fdf88u);
                    r11 = rd32(0x817fdf7cu);
                    r7 = rd32(0x817fdf8cu);
                    r6 = rd32(0x817fdf90u);
                    r5 = rd32(0x817fdf94u);
                    r4 = rd32(0x817fdf98u);
                    r3 = rd32(0x817fdf9cu);
                    r0 = rd32(0x817fdfa0u);
                    wr32(0x817fdf78u, 0x13u);
                    wr32(0x817fdfa4u, 0u);
                    wr32(0x817fdfa8u, 0x13u);
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
                    r31 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                    if ((s32)r26 < 0) {
                        r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if ((rd32(r29 + 0x168u) - 1u) != r26) {
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x8000443cu, &a);
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x80004338u, &a);
                        r6 = (u32)(s8)rd8(r29 + 0x161u);
                        r4 = rd32(r29 + 0x168u) - 1u;
                        r5 = r6 - r4;
                        r4 = r4 - r6;
                        r4 = ~(r5 | r4);
                        r4 = (u32)((s32)r4 >> 31);
                        wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    } else {
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                    wr16(0x817fdf32u, 1u);
                    r10 = rd32(0x817fdf20u);
                    wr8(0x817fdf1cu, 0u);
                    r9 = rd32(0x817fdf24u);
                    r11 = rd32(0x817fdf1cu);
                    r8 = rd32(0x817fdf28u);
                    r7 = rd32(0x817fdf2cu);
                    r6 = rd32(0x817fdf30u);
                    r5 = rd32(0x817fdf34u);
                    r4 = rd32(0x817fdf38u);
                    r3 = rd32(0x817fdf3cu);
                    r0 = rd32(0x817fdf40u);
                    wr32(0x817fdf18u, 0x1au);
                    wr32(0x817fdf44u, 0x8027cb64u);
                    wr32(0x817fdf48u, 0x1au);
                    wr32(0x817fdf4cu, r11);
                    wr32(0x817fdf50u, r10);
                    wr32(0x817fdf54u, r9);
                    wr32(0x817fdf58u, r8);
                    wr32(0x817fdf5cu, r7);
                    wr32(0x817fdf60u, r6);
                    wr32(0x817fdf64u, r5);
                    wr32(0x817fdf68u, r4);
                    wr32(0x817fdf6cu, r3);
                    wr32(0x817fdf70u, r0);
                    wr32(0x817fdf74u, 0x8027cb64u);
                    r3 = tc_call(0x8022c2b0u, &a);
                    r31 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                    if ((s32)r26 < 0) {
                        r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if ((rd32(r29 + 0x168u) - 1u) != r26) {
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x8000443cu, &a);
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0x817fdf48u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x80004338u, &a);
                        r6 = (u32)(s8)rd8(r29 + 0x161u);
                        r4 = rd32(r29 + 0x168u) - 1u;
                        r5 = r6 - r4;
                        r4 = r4 - r6;
                        r4 = ~(r5 | r4);
                        r4 = (u32)((s32)r4 >> 31);
                        wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    } else {
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                    wr16(0x817fded2u, 1u);
                    r9 = rd32(0x817fdec0u);
                    wr8(0x817fdebcu, 0u);
                    r8 = rd32(0x817fdec4u);
                    r10 = rd32(0x817fdebcu);
                    r7 = rd32(0x817fdec8u);
                    r6 = rd32(0x817fdeccu);
                    r5 = rd32(0x817fded0u);
                    r4 = rd32(0x817fded4u);
                    r3 = rd32(0x817fded8u);
                    r0 = rd32(0x817fdedcu);
                    wr32(0x817fdeb8u, 0x15u);
                    wr32(0x817fdee4u, param_3);
                    wr32(0x817fdee0u, 0u);
                    wr32(0x817fdee8u, 0x15u);
                    wr32(0x817fdeecu, r10);
                    wr32(0x817fdef0u, r9);
                    wr32(0x817fdef4u, r8);
                    wr32(0x817fdef8u, r7);
                    wr32(0x817fdefcu, r6);
                    wr32(0x817fdf00u, r5);
                    wr32(0x817fdf04u, r4);
                    wr32(0x817fdf08u, r3);
                    wr32(0x817fdf0cu, r0);
                    wr32(0x817fdf10u, 0u);
                    wr32(0x817fdf14u, param_3);
                    r3 = tc_call(0x8022c2b0u, &a);
                    r31 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = (u32)(s8)((u32)rd8(r29 + 0x161u) - (u32)rd8(r29 + 0x160u));
                    if ((s32)r26 < 0) {
                        r26 = (u32)(s8)(r26 + rd32(r29 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if ((rd32(r29 + 0x168u) - 1u) != r26) {
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x8000443cu, &a);
                        a.r[0] = rd32(r29 + 0x164u) + ((u32)(s8)rd8(r29 + 0x161u) * 0x30u);
                        a.r[1] = 0x817fdee8u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x80004338u, &a);
                        r6 = (u32)(s8)rd8(r29 + 0x161u);
                        r4 = rd32(r29 + 0x168u) - 1u;
                        r5 = r6 - r4;
                        r4 = r4 - r6;
                        r4 = ~(r5 | r4);
                        r4 = (u32)((s32)r4 >> 31);
                        wr8(r29 + 0x161u, (u8)((r6 + 1u) & ~r4));
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    } else {
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                    return;
                }
                r24 = 0xfffffffeu;
                a.r[0] = r30;
                f1 = tc_callf(0x8022c2d8u, &a);
            } else {
                r24 = 0u;
            }
        } else {
            r24 = 0xfffffffeu;
        }
    }
    if (param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r24;
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
