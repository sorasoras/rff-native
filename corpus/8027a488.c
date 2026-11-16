#include "tc_rt.h"

void fn_8027a488(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = rd32(r30 + 0x8dcu);
    r26 = rd32(r30 + 0x8bcu);
    r25 = (u32)rd8(r30 + 0x98cu);
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (r26 != 0xffffffffu) {
        if (r27 == 0u || r25 != 0u) {
            r26 = 0xfffffffeu;
        } else {
            r3 = tc_call(0x8022c2b0u, &a);
            wr8(r30 + 0x98cu, 1u);
            wr32(r30 + 0x988u, param_3);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            wr8(0x817fdf7cu, 0u);
            r9 = rd32(0x817fdf80u);
            wr16(0x817fdf92u, 1u);
            r8 = rd32(0x817fdf84u);
            r10 = rd32(0x817fdf7cu);
            r7 = rd32(0x817fdf88u);
            r6 = rd32(0x817fdf8cu);
            r5 = rd32(0x817fdf90u);
            r4 = rd32(0x817fdf94u);
            r3 = rd32(0x817fdf98u);
            r0 = rd32(0x817fdf9cu);
            wr32(0x817fdf78u, 0x15u);
            wr32(0x817fdfa4u, 0x8027a434u);
            wr32(0x817fdfa0u, param_2);
            wr32(0x817fdfa8u, 0x15u);
            wr32(0x817fdfacu, r10);
            wr32(0x817fdfb0u, r9);
            wr32(0x817fdfb4u, r8);
            wr32(0x817fdfb8u, r7);
            wr32(0x817fdfbcu, r6);
            wr32(0x817fdfc0u, r5);
            wr32(0x817fdfc4u, r4);
            wr32(0x817fdfc8u, r3);
            wr32(0x817fdfccu, r0);
            wr32(0x817fdfd0u, param_2);
            wr32(0x817fdfd4u, 0x8027a434u);
            r3 = tc_call(0x8022c2b0u, &a);
            r31 = r3;
            r3 = tc_call(0x8022c2b0u, &a);
            r27 = (u32)(s8)((u32)rd8(r30 + 0x161u) - (u32)rd8(r30 + 0x160u));
            if ((s32)r27 < 0) {
                r27 = (u32)(s8)(r27 + rd32(r30 + 0x168u));
            }
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
            if ((rd32(r30 + 0x168u) - 1u) == r27) {
                a.r[0] = r31;
                f1 = tc_callf(0x8022c2d8u, &a);
                r0 = 0u;
            } else {
                a.r[0] = rd32(r30 + 0x164u) + ((u32)(s8)rd8(r30 + 0x161u) * 0x30u);
                a.r[1] = 0u;
                a.r[2] = 0x30u;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = rd32(r30 + 0x164u) + ((u32)(s8)rd8(r30 + 0x161u) * 0x30u);
                a.r[1] = 0x817fdfa8u;
                a.r[2] = 0x30u;
                (void)tc_call(0x80004338u, &a);
                r6 = (u32)(s8)rd8(r30 + 0x161u);
                r4 = rd32(r30 + 0x168u) - 1u;
                r5 = r6 - r4;
                r4 = r4 - r6;
                r4 = ~(r5 | r4);
                r4 = (u32)((s32)r4 >> 31);
                wr8(r30 + 0x161u, (u8)((r6 + 1u) & ~r4));
                a.r[0] = r31;
                f1 = tc_callf(0x8022c2d8u, &a);
                r0 = 1u;
            }
            if (r0 != 0u) {
                r26 = 0u;
            } else {
                r26 = 0xfffffffeu;
                r3 = tc_call(0x8022c2b0u, &a);
                wr8(r30 + 0x98cu, 0u);
                wr32(r30 + 0x988u, 0u);
                a.r[0] = r3;
                f1 = tc_callf(0x8022c2d8u, &a);
            }
        }
    }
    if (r26 != 0u && param_3 != 0u) {
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
