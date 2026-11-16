#include "tc_rt.h"

u32 fn_8027de44(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = (u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfb8u, 0x12u);
    wr16(0x817fdfd2u, 2u);
    wr8(0x817fdfbcu, (u8)(~r5 & 4u));
    wr32(0x817fdfe4u, param_4);
    if (param_2 <= 9u) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc702a0u);
        sw_ = r3;
        switch (sw_) {
        case 0x8027deacu:
            wr8(0x817fdfbdu, 0x30u);
            break;
        case 0x8027deb8u:
            wr8(0x817fdfbdu, 0x31u);
            break;
        case 0x8027dec4u:
            wr8(0x817fdfbdu, 0x33u);
            break;
        case 0x8027ded0u:
            wr8(0x817fdfbdu, 0x32u);
            break;
        case 0x8027dedcu:
            wr8(0x817fdfbdu, 0x35u);
            break;
        case 0x8027dee8u:
            wr8(0x817fdfbdu, 0x37u);
            break;
        case 0x8027def4u:
            wr8(0x817fdfbdu, 0x32u);
            break;
        case 0x8027df00u:
            wr8(0x817fdfbdu, 0x35u);
            break;
        case 0x8027df0cu:
            wr8(0x817fdfbdu, 0x37u);
            break;
        case 0x8027df18u:
            wr8(0x817fdfbdu, 0x3eu);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = 2u;
            a.r[5] = 0x12u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return r3;
        }
    }
    r12 = rd32(0x817fdfbcu);
    r11 = rd32(0x817fdfc0u);
    r10 = rd32(0x817fdfc4u);
    r9 = rd32(0x817fdfc8u);
    r8 = rd32(0x817fdfccu);
    r7 = rd32(0x817fdfd0u);
    r6 = rd32(0x817fdfd4u);
    r5 = rd32(0x817fdfd8u);
    r4 = rd32(0x817fdfdcu);
    r3 = rd32(0x817fdfe0u);
    r0 = rd32(0x817fdfe4u);
    wr32(0x817fdf88u, rd32(0x817fdfb8u));
    wr32(0x817fdf8cu, r12);
    wr32(0x817fdf90u, r11);
    wr32(0x817fdf94u, r10);
    wr32(0x817fdf98u, r9);
    wr32(0x817fdf9cu, r8);
    wr32(0x817fdfa0u, r7);
    wr32(0x817fdfa4u, r6);
    wr32(0x817fdfa8u, r5);
    wr32(0x817fdfacu, r4);
    wr32(0x817fdfb0u, r3);
    wr32(0x817fdfb4u, r0);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)(s8)((u32)rd8(param_1 + 1u) - (u32)rd8(param_1));
    if ((s32)r29 < 0) {
        r29 = (u32)(s8)(r29 + rd32(param_1 + 8u));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if ((rd32(param_1 + 8u) - 1u) != r29) {
        a.r[0] = rd32(param_1 + 4u) + ((u32)(s8)rd8(param_1 + 1u) * 0x30u);
        a.r[1] = 0u;
        a.r[2] = 0x30u;
        (void)tc_call(0x8000443cu, &a);
        a.r[0] = rd32(param_1 + 4u) + ((u32)(s8)rd8(param_1 + 1u) * 0x30u);
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0x30u;
        (void)tc_call(0x80004338u, &a);
        r6 = (u32)(s8)rd8(param_1 + 1u);
        r4 = rd32(param_1 + 8u) - 1u;
        r5 = r6 - r4;
        r4 = r4 - r6;
        r4 = ~(r5 | r4);
        r4 = (u32)((s32)r4 >> 31);
        wr8(param_1 + 1u, (u8)((r6 + 1u) & ~r4));
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 1u;
    } else {
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = 0u;
    }
    return r3;
}
