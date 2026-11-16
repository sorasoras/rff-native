#include "tc_rt.h"

void fn_8027a874(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r27 = 0, r30 = 0;
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = rd32(r30 + 0x8bcu);
    r27 = rd32(r30 + 0x8dcu);
    a.r[0] = r3;
    f1 = tc_callf(0x8022c2d8u, &a);
    if (r31 != 0xffffffffu) {
        if (r27 == 0u) {
            r31 = 0xfffffffeu;
        } else {
            wr16(0x817fdfa2u, 1u);
            r10 = rd32(0x817fdf90u);
            wr8(0x817fdf8cu, (u8)((param_2 << 4u) & 0xf0u));
            r9 = rd32(0x817fdf94u);
            r11 = rd32(0x817fdf8cu);
            r8 = rd32(0x817fdf98u);
            r7 = rd32(0x817fdf9cu);
            r6 = rd32(0x817fdfa0u);
            r5 = rd32(0x817fdfa4u);
            r4 = rd32(0x817fdfa8u);
            r3 = rd32(0x817fdfacu);
            r0 = rd32(0x817fdfb0u);
            wr32(0x817fdf88u, 0x11u);
            wr32(0x817fdfb4u, param_3);
            wr32(0x817fdfb8u, 0x11u);
            wr32(0x817fdfbcu, r11);
            wr32(0x817fdfc0u, r10);
            wr32(0x817fdfc4u, r9);
            wr32(0x817fdfc8u, r8);
            wr32(0x817fdfccu, r7);
            wr32(0x817fdfd0u, r6);
            wr32(0x817fdfd4u, r5);
            wr32(0x817fdfd8u, r4);
            wr32(0x817fdfdcu, r3);
            wr32(0x817fdfe0u, r0);
            wr32(0x817fdfe4u, param_3);
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
                r4 = 0u;
            } else {
                a.r[0] = rd32(r30 + 0x164u) + ((u32)(s8)rd8(r30 + 0x161u) * 0x30u);
                a.r[1] = 0u;
                a.r[2] = 0x30u;
                (void)tc_call(0x8000443cu, &a);
                a.r[0] = rd32(r30 + 0x164u) + ((u32)(s8)rd8(r30 + 0x161u) * 0x30u);
                a.r[1] = 0x817fdfb8u;
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
                r4 = 1u;
            }
            r31 = ~(u32)((s32)((0u - r4) | r4) >> 31) & 0xfffffffeu;
        }
    }
    if (r31 != 0u && param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = r31;
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
