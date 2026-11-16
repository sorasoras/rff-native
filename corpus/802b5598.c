#include "tc_rt.h"

void fn_802b5598(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r14 = 0;
    u32 r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r24 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr8(0x817fdfacu, 0u);
    r19 = 0u;
    a.r[0] = param_4;
    a.r[1] = param_3;
    a.r[2] = 0x817fde88u;
    r3 = tc_call(0x802b66f0u, &a);
    f1 = tc_lastf();
    r15 = r3;
    if (r3 == 0u || (u32)rd16(0x817fde88u) == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 3u;
        a.r[3] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b65b4u, &a);
    } else {
        r0 = (u32)rd8(r3 + 1u);
        r3 = ((u32)rd8(r3) << 8u) & 0xffffff00u;
        r0 = r3 + r0;
        r18 = r0 & 0xffffu;
        if (r18 > 0x14u) {
            r18 = 0x14u;
        }
        r16 = 0u;
        while ((r16 & 0xffffu) < r18) {
            a.r[0] = r19;
            a.r[1] = 0x817fde88u;
            r3 = tc_call(0x802b2994u, &a);
            f1 = tc_lastf();
            r19 = r3;
            if (r3 == 0u) break;
            r3 = rd32(r3);
            r0 = (r16 << 2u) & 0x3fffcu;
            r16 = r16 + 1u;
            wr32(r0 - 0x7e8021c8u, r3);
        }
        r0 = (u32)rd8(r15 + 2u);
        if (r0 == 0u) {
            r4 = r16;
            r31 = 0u;
        } else {
            r3 = r15 + 3u;
            if (r0 != 2u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 5u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b65b4u, &a);
                return;
            }
            r0 = (u32)rd8(r3);
            r3 = (u32)rd8(r3 + 1u);
            r3 = ((r0 << 8u) & 0xffffff00u) + r3;
            r31 = r3 & 0xffffu;
            if (r31 != (u32)rd16(param_1 + 0x476u)) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = 5u;
                a.r[3] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b65b4u, &a);
                return;
            }
            r4 = (r16 - r31) & 0xffffu;
        }
        r3 = (u32)rd16(param_1 + 0x20u) - 0xcu;
        ca = ((s32)r3 < 0) && ((r3 & 3u) != 0u);
        r3 = (u32)((s32)r3 >> 2);
        r15 = (u32)((u64)r3 + (u64)ca) & 0xffffu;
        if ((r4 & 0xffffu) > r15) {
            r3 = (u32)rd16(param_1 + 0x476u);
            wr8(0x817fdfacu, 1u);
            wr16(param_1 + 0x476u, (u16)(r3 + r15));
        } else {
            r15 = r4;
        }
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        f1 = tc_lastf();
        r8 = 0u;
        r9 = 0u;
        if (r3 != 0u) {
            r14 = r3 + 0x11u;
            wr16(r3 + 4u, 9u);
            r11 = r14 + 3u;
            wr8(r3 + 0x11u, 3u);
            r10 = r31 + (r15 & 0xffffu);
            wr8(r3 + 0x12u, (u8)((s32)param_2 >> 8));
            wr8(r3 + 0x13u, (u8)param_2);
            wr8(r3 + 0x16u, (u8)((r16 >> 8u) & 0xffu));
            wr8(r3 + 0x17u, (u8)r16);
            wr8(r3 + 0x18u, (u8)((r15 >> 8u) & 0xffu));
            wr32(0x817fdfb0u, r11);
            r11 = r11 + 6u;
            wr8(r3 + 0x19u, (u8)r15);
            if ((s32)r31 < (s32)r10) {
                r5 = r10 & 0xffffu;
                r0 = r10 - 8u;
                if (((r5 - r31) & 0xffffu) > 8u && r31 <= r5) {
                    while ((s32)(r31 & 0xffffu) < (s32)r0) {
                        r17 = ((r31 << 2u) & 0x3fffcu) - 0x7e8021c8u;
                        r8 = rd32(r17);
                        r31 = r31 + 8u;
                        r24 = rd32(r17 + 4u);
                        wr8(r11, (u8)((r8 >> 0x18u) & 0xffu));
                        r4 = rd32(r17 + 8u);
                        wr8(r11 + 1u, (u8)((r8 >> 0x10u) & 0xffu));
                        r6 = rd32(r17 + 0x10u);
                        wr8(r11 + 2u, (u8)((r8 >> 8u) & 0xffu));
                        r7 = rd32(r17 + 0x14u);
                        wr8(r11 + 3u, (u8)r8);
                        r8 = rd32(r17 + 0x18u);
                        wr8(r11 + 4u, (u8)((r24 >> 0x18u) & 0xffu));
                        r9 = rd32(r17 + 0x1cu);
                        wr8(r11 + 5u, (u8)((r24 >> 0x10u) & 0xffu));
                        r5 = rd32(r17 + 0xcu);
                        wr8(r11 + 6u, (u8)((r24 >> 8u) & 0xffu));
                        wr8(r11 + 7u, (u8)r24);
                        wr8(r11 + 8u, (u8)((r4 >> 0x18u) & 0xffu));
                        wr8(r11 + 9u, (u8)((r4 >> 0x10u) & 0xffu));
                        wr8(r11 + 0xau, (u8)((r4 >> 8u) & 0xffu));
                        wr8(r11 + 0xbu, (u8)r4);
                        wr8(r11 + 0xcu, (u8)((r5 >> 0x18u) & 0xffu));
                        wr8(r11 + 0xdu, (u8)((r5 >> 0x10u) & 0xffu));
                        wr8(r11 + 0xeu, (u8)((r5 >> 8u) & 0xffu));
                        wr8(r11 + 0xfu, (u8)r5);
                        wr8(r11 + 0x10u, (u8)((r6 >> 0x18u) & 0xffu));
                        wr8(r11 + 0x11u, (u8)((r6 >> 0x10u) & 0xffu));
                        wr8(r11 + 0x12u, (u8)((r6 >> 8u) & 0xffu));
                        wr8(r11 + 0x13u, (u8)r6);
                        wr8(r11 + 0x14u, (u8)((r7 >> 0x18u) & 0xffu));
                        wr8(r11 + 0x15u, (u8)((r7 >> 0x10u) & 0xffu));
                        wr8(r11 + 0x16u, (u8)((r7 >> 8u) & 0xffu));
                        wr8(r11 + 0x17u, (u8)r7);
                        wr8(r11 + 0x18u, (u8)((r8 >> 0x18u) & 0xffu));
                        wr8(r11 + 0x19u, (u8)((r8 >> 0x10u) & 0xffu));
                        wr8(r11 + 0x1au, (u8)((r8 >> 8u) & 0xffu));
                        wr8(r11 + 0x1bu, (u8)r8);
                        wr8(r11 + 0x1cu, (u8)((r9 >> 0x18u) & 0xffu));
                        wr8(r11 + 0x1du, (u8)((r9 >> 0x10u) & 0xffu));
                        wr8(r11 + 0x1eu, (u8)((r9 >> 8u) & 0xffu));
                        wr8(r11 + 0x1fu, (u8)r9);
                        r11 = r11 + 0x20u;
                    }
                }
                while ((s32)(r31 & 0xffffu) < (s32)r10) {
                    r0 = (r31 << 2u) & 0x3fffcu;
                    r31 = r31 + 1u;
                    r6 = rd32(r0 - 0x7e8021c8u);
                    wr8(r11, (u8)((r6 >> 0x18u) & 0xffu));
                    wr8(r11 + 1u, (u8)((r6 >> 0x10u) & 0xffu));
                    wr8(r11 + 2u, (u8)((r6 >> 8u) & 0xffu));
                    wr8(r11 + 3u, (u8)r6);
                    r11 = r11 + 4u;
                }
            }
            if ((u32)rd8(0x817fdfacu) == 0u) {
                wr8(r11, 0u);
                r11 = r11 + 1u;
            } else {
                wr8(r11, 2u);
                wr8(r11 + 1u, (u8)((s32)rd16(param_1 + 0x476u) >> 8));
                wr8(r11 + 2u, (u8)rd16(param_1 + 0x476u));
                r11 = r11 + 3u;
            }
            r5 = rd32(0x817fdfb0u);
            r7 = r11 - rd32(0x817fdfb0u) - 2u;
            wr8(r5, (u8)((r7 >> 8u) & 0xffu));
            wr8(r5 + 1u, (u8)r7);
            wr16(r3 + 2u, (u16)(r11 - r14));
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)rd16(param_1 + 0x22u);
            a.r[1] = r3;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x802a5e34u, &a);
        } else if ((u32)rd8(0x80545c50u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0xa0000u;
            a.r[1] = 0x80397e9cu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
    }
    return;
}
