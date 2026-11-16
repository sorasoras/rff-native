#include "tc_rt.h"

void fn_80279ad4(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = (u32)rd8(param_r3 + 0x56u);
    if (param_r4 != 0u) {
        (void)tc_call(0x80284b24u, &a);
        a.r[0] = r26;
        r3 = tc_call(0x802799d4u, &a);
        wr8(r26 - 0x7faf36a0u, (u8)r3);
        r28 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
        a.r[0] = r3;
        (void)tc_call(0x802789b4u, &a);
        a.r[0] = param_r3;
        a.r[1] = 0x8038fc04u;
        a.r[2] = 0x10u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            wr8(r28 + 0x8c1u, 0u);
        } else {
            wr8(r28 + 0x8c1u, 0xfbu);
        }
        wr8(r28 + 0x8c3u, (u8)r26);
        wr32(r28 + 0x8b8u, 0u);
        wr32(r28 + 0x8d8u, 1u);
        wr32(r28 + 0x8bcu, 0u);
        wr8(r28 + 0x983u, 0x64u);
        wr8(r28 + 0x986u, 0u);
        wr8(r28 + 0x98du, 0u);
        wr32(0x817fdf4cu, 0x1770u);
        wr16(0x817fdf48u, 1u);
        wr32(0x817fdf50u, 0x17u);
        wr16(0x817fdf6au, 6u);
        wr32(0x817fdf7cu, 0x802790ecu);
        a.r[0] = 0x817fdf54u;
        a.r[1] = 0x817fdf4cu;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x817fdf58u;
        a.r[1] = 0x817fdf48u;
        a.r[2] = 2u;
        (void)tc_call(0x80004338u, &a);
        r29 = r28 + 0x934u;
        r12 = rd32(0x817fdf4cu);
        wr16(0x817fdf70u, rd16(0x817fdf48u));
        r11 = rd32(0x817fdf50u);
        r10 = rd32(0x817fdf54u);
        r9 = rd32(0x817fdf58u);
        r8 = rd32(0x817fdf5cu);
        r7 = rd32(0x817fdf60u);
        r6 = rd32(0x817fdf64u);
        r5 = rd32(0x817fdf68u);
        r4 = rd32(0x817fdf70u);
        r3 = rd32(0x817fdf78u);
        r0 = rd32(0x817fdf7cu);
        wr32(0x817fdf6cu, r29);
        wr32(0x817fdf74u, r12);
        wr32(0x817fdf80u, r11);
        wr32(0x817fdf84u, r10);
        wr32(0x817fdf88u, r9);
        wr32(0x817fdf8cu, r8);
        wr32(0x817fdf90u, r7);
        wr32(0x817fdf94u, r6);
        wr32(0x817fdf98u, r5);
        wr32(0x817fdf9cu, r29);
        wr32(0x817fdfa0u, r4);
        wr32(0x817fdfa4u, r12);
        wr32(0x817fdfa8u, r3);
        wr32(0x817fdfacu, r0);
        r3 = tc_call(0x8022c2b0u, &a);
        r29 = r3;
        r3 = tc_call(0x8022c2b0u, &a);
        r30 = (u32)(s8)((u32)rd8(r28 + 0x161u) - (u32)rd8(r28 + 0x160u));
        if ((s32)r30 < 0) {
            r30 = (u32)(s8)(r30 + rd32(r28 + 0x168u));
        }
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        if ((rd32(r28 + 0x168u) - 1u) == r30) {
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
        } else {
            a.r[0] = rd32(r28 + 0x164u) + ((u32)(s8)rd8(r28 + 0x161u) * 0x30u);
            a.r[1] = 0u;
            a.r[2] = 0x30u;
            (void)tc_call(0x8000443cu, &a);
            a.r[0] = rd32(r28 + 0x164u) + ((u32)(s8)rd8(r28 + 0x161u) * 0x30u);
            a.r[1] = 0x817fdf80u;
            a.r[2] = 0x30u;
            (void)tc_call(0x80004338u, &a);
            r6 = (u32)(s8)rd8(r28 + 0x161u);
            r4 = rd32(r28 + 0x168u) - 1u;
            r5 = r6 - r4;
            r4 = r4 - r6;
            r4 = ~(r5 | r4);
            r4 = (u32)((s32)r4 >> 31);
            wr8(r28 + 0x161u, (u8)((r6 + 1u) & ~r4));
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
        }
        (void)tc_call(0x8023f948u, &a);
    } else {
        f1 = tc_callf(0x80284b24u, &a);
        r29 = (u32)(s8)rd8(r26 - 0x7faf36a0u);
        wr8(r26 - 0x7faf36a0u, 0xffu);
        if (r29 != 0xffffffffu) {
            r28 = rd32(((r29 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
            wr32(r28 + 0x8bcu, 0xffffffffu);
            r12 = rd32(r28 + 0x89cu);
            if (r12 != 0u) {
                a.r[0] = r29;
                a.r[1] = 0xffffffffu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            } else {
                r12 = rd32((r29 * 0x14u) - 0x7faf0f40u);
                if (r12 != 0u) {
                    a.r[0] = r29;
                    a.r[1] = 0xffffffffu;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(r12, &a);
                }
            }
            do {
                r3 = tc_call(0x8022c2b0u, &a);
                r27 = r3;
                r3 = tc_call(0x8022c2b0u, &a);
                r30 = (u32)(s8)((u32)rd8(r28 + 0x161u) - (u32)rd8(r28 + 0x160u));
                if ((s32)r30 < 0) {
                    r30 = (u32)(s8)(r30 + rd32(r28 + 0x168u));
                }
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                if (r30 == 0u) {
                    a.r[0] = r27;
                    f1 = tc_callf(0x8022c2d8u, &a);
                    r30 = 0u;
                } else {
                    a.r[0] = 0x817fdfb0u;
                    a.r[1] = rd32(r28 + 0x164u) + ((u32)(s8)rd8(r28 + 0x160u) * 0x30u);
                    a.r[2] = 0x30u;
                    (void)tc_call(0x80004338u, &a);
                    a.r[0] = r27;
                    f1 = tc_callf(0x8022c2d8u, &a);
                    r30 = 1u;
                }
                if (r30 != 0u) {
                    r12 = rd32(0x817fdfdcu);
                    if (r12 != 0u) {
                        a.r[0] = r29;
                        a.r[1] = 0xffffffffu;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(r12, &a);
                    }
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = r3;
                    r3 = tc_call(0x8022c2b0u, &a);
                    r27 = (u32)(s8)((u32)rd8(r28 + 0x161u) - (u32)rd8(r28 + 0x160u));
                    if ((s32)r27 < 0) {
                        r27 = (u32)(s8)(r27 + rd32(r28 + 0x168u));
                    }
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r27 == 0u) {
                        a.r[0] = r26;
                        (void)tc_call(0x8022c2d8u, &a);
                    } else {
                        a.r[0] = rd32(r28 + 0x164u) + ((u32)(s8)rd8(r28 + 0x160u) * 0x30u);
                        a.r[1] = 0u;
                        a.r[2] = 0x30u;
                        (void)tc_call(0x8000443cu, &a);
                        r6 = (u32)(s8)rd8(r28 + 0x160u);
                        r4 = rd32(r28 + 0x168u) - 1u;
                        r5 = r6 - r4;
                        r4 = r4 - r6;
                        r4 = ~(r5 | r4);
                        r4 = (u32)((s32)r4 >> 31);
                        wr8(r28 + 0x160u, (u8)((r6 + 1u) & ~r4));
                        a.r[0] = r26;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                }
            } while (r30 != 0u);
            (void)tc_call(0x80284b24u, &a);
            r4 = rd32(r28 + 0x8acu);
            if (r4 != 0u) {
                a.r[0] = r29;
                a.r[1] = r4;
                a.r[2] = rd32(r28 + 0x8b4u);
                (void)tc_call(0x8027aca8u, &a);
            }
            a.r[0] = r29;
            f1 = tc_callf(0x802789b4u, &a);
            wr8(r29 - 0x7fa8e510u, 0u);
            r12 = rd32(r28 + 0x8a4u);
            if (r12 == 0u) {
                return;
            }
            a.r[0] = r29;
            a.r[1] = 0xffffffffu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        } else {
            (void)tc_call(0x80284b24u, &a);
        }
    }
    return;
}
