#include "tc_rt.h"

void fn_8027c908(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = rd32(r31 + 0x8bcu);
    r29 = rd32(r31 + 0x8dcu);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r30 == 0xffffffffu) {
        return;
    }
    if (r29 == 0u) {
        return;
    }
    a.r[0] = param_1;
    r3 = tc_call(0x8027c74cu, &a);
    if (r3 != 0u) {
        return;
    }
    wr32(0x817fdf88u, 0x18u);
    wr16(0x817fdfa2u, 0x15u);
    wr8(0x817fdf8cu, (u8)(((u32)param_3 << 3u) & 0xf8u));
    wr32(0x817fdfb4u, 0u);
    a.r[0] = 0x817fdf8du;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x80004338u, &a);
    r12 = rd32(0x817fdf8cu);
    r11 = rd32(0x817fdf90u);
    r10 = rd32(0x817fdf94u);
    r9 = rd32(0x817fdf98u);
    r8 = rd32(0x817fdf9cu);
    r7 = rd32(0x817fdfa0u);
    r6 = rd32(0x817fdfa4u);
    r5 = rd32(0x817fdfa8u);
    r4 = rd32(0x817fdfacu);
    r3 = rd32(0x817fdfb0u);
    r0 = rd32(0x817fdfb4u);
    wr32(0x817fdfb8u, rd32(0x817fdf88u));
    wr32(0x817fdfbcu, r12);
    wr32(0x817fdfc0u, r11);
    wr32(0x817fdfc4u, r10);
    wr32(0x817fdfc8u, r9);
    wr32(0x817fdfccu, r8);
    wr32(0x817fdfd0u, r7);
    wr32(0x817fdfd4u, r6);
    wr32(0x817fdfd8u, r5);
    wr32(0x817fdfdcu, r4);
    wr32(0x817fdfe0u, r3);
    wr32(0x817fdfe4u, r0);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)(s8)((u32)rd8(r31 + 0x161u) - (u32)rd8(r31 + 0x160u));
    if ((s32)r29 < 0) {
        r29 = (u32)(s8)(r29 + rd32(r31 + 0x168u));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if ((rd32(r31 + 0x168u) - 1u) == r29) {
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r0 = 0u;
    } else {
        a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
        a.r[1] = 0u;
        a.r[2] = 0x30u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = rd32(r31 + 0x164u) + ((u32)(s8)rd8(r31 + 0x161u) * 0x30u);
        a.r[1] = 0x817fdfb8u;
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
        r0 = 1u;
    }
    if (r0 == 0u) {
        return;
    }
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(r31 + 0x8cfu, (u8)((u32)rd8(r31 + 0x8cfu) + 1u));
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
