#include "tc_rt.h"

u32 fn_8027e064(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    u32 r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr8(0x817fdf88u, (u8)param_2);
    wr32(0x817fdf8cu, param_3);
    wr8(0x817fdf89u, 1u);
    wr32(0x817fdf90u, 0x16u);
    wr16(0x817fdfaau, 0x15u);
    wr32(0x817fdfbcu, param_4);
    a.r[0] = 0x817fdf94u;
    a.r[1] = 0x817fdf8cu;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x817fdf98u;
    a.r[1] = 0x817fdf89u;
    a.r[2] = 1u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x817fdf99u;
    a.r[1] = 0x817fdf88u;
    a.r[2] = 1u;
    (void)tc_call(0x80004338u, &a);
    r12 = rd32(0x817fdf94u);
    r11 = rd32(0x817fdf98u);
    r10 = rd32(0x817fdf9cu);
    r9 = rd32(0x817fdfa0u);
    r8 = rd32(0x817fdfa4u);
    r7 = rd32(0x817fdfa8u);
    r6 = rd32(0x817fdfacu);
    r5 = rd32(0x817fdfb0u);
    r4 = rd32(0x817fdfb4u);
    r3 = rd32(0x817fdfb8u);
    r0 = rd32(0x817fdfbcu);
    wr32(0x817fdfc0u, rd32(0x817fdf90u));
    wr32(0x817fdfc4u, r12);
    wr32(0x817fdfc8u, r11);
    wr32(0x817fdfccu, r10);
    wr32(0x817fdfd0u, r9);
    wr32(0x817fdfd4u, r8);
    wr32(0x817fdfd8u, r7);
    wr32(0x817fdfdcu, r6);
    wr32(0x817fdfe0u, r5);
    wr32(0x817fdfe4u, r4);
    wr32(0x817fdfe8u, r3);
    wr32(0x817fdfecu, r0);
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)(s8)((u32)rd8(param_1 + 1u) - (u32)rd8(param_1));
    if ((s32)r29 < 0) {
        r29 = (u32)(s8)(r29 + rd32(param_1 + 8u));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if ((rd32(param_1 + 8u) - 1u) == r29) {
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    } else {
        a.r[0] = rd32(param_1 + 4u) + ((u32)(s8)rd8(param_1 + 1u) * 0x30u);
        a.r[1] = 0u;
        a.r[2] = 0x30u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = rd32(param_1 + 4u) + ((u32)(s8)rd8(param_1 + 1u) * 0x30u);
        a.r[1] = 0x817fdfc0u;
        a.r[2] = 0x30u;
        (void)tc_call(0x80004338u, &a);
        r6 = (u32)(s8)rd8(param_1 + 1u);
        r4 = rd32(param_1 + 8u) - 1u;
        r5 = r6 - r4;
        r4 = r4 - r6;
        r4 = ~(r5 | r4);
        r4 = (u32)((s32)r4 >> 31);
        wr8(param_1 + 1u, (u8)((r6 + 1u) & ~r4));
        a.r[0] = r30;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    }
    return r3;
}
