#include "tc_rt.h"

void fn_802f3070(u32 param_r3, u32 param_r4)
{
    u32 c1eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r16 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_r3);
    r16 = r3;
    c1eq = r4 == 0u;
    if (!c1eq) {
        do {
            if ((u32)rd8(param_r3 + 0x1cu) == 0u) {
                r3 = 0u;
                if (!c1eq && (u32)rd16(r4 + 0x38u) == 1u) {
                    r3 = 1u;
                }
                if (r3 != 0u) break;
            }
            r19 = (u32)rd16(param_r4 + 2u);
            r12 = (u32)rd16(param_r4 + 4u);
            r11 = (u32)rd16(param_r4 + 6u);
            r10 = (u32)rd16(param_r4 + 8u);
            r9 = (u32)rd16(param_r4 + 0xau);
            r8 = (u32)rd16(param_r4 + 0xcu);
            r7 = (u32)rd16(param_r4 + 0xeu);
            r6 = (u32)rd16(param_r4 + 0x10u);
            r5 = (u32)rd16(param_r4 + 0x12u);
            r4 = (u32)rd16(param_r4 + 0x14u);
            r3 = (u32)rd16(param_r4 + 0x16u);
            wr16(param_r3 + 0x1eu, rd16(param_r4));
            wr16(param_r3 + 0x20u, (u16)r19);
            wr16(param_r3 + 0x22u, (u16)r12);
            wr16(param_r3 + 0x24u, (u16)r11);
            wr16(param_r3 + 0x26u, (u16)r10);
            wr16(param_r3 + 0x28u, (u16)r9);
            wr16(param_r3 + 0x2au, (u16)r8);
            wr16(param_r3 + 0x2cu, (u16)r7);
            wr16(param_r3 + 0x2eu, (u16)r6);
            wr16(param_r3 + 0x30u, (u16)r5);
            wr16(param_r3 + 0x32u, (u16)r4);
            wr16(param_r3 + 0x34u, (u16)r3);
            wr8(param_r3 + 0x1cu, 0u);
        } while (0);
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        (void)tc_call(0x802f2e74u, &a);
        r4 = (u32)rd16(param_r4);
        wr16(0x817fdf88u, rd16(param_r3 + 0x1eu));
        wr16(0x817fdf8cu, rd16(param_r3 + 0x20u));
        wr16(0x817fdfa8u, rd16(param_r3 + 0x22u));
        wr16(0x817fdf90u, rd16(param_r3 + 0x24u));
        wr16(0x817fdf94u, rd16(param_r3 + 0x26u));
        wr16(0x817fdfacu, rd16(param_r3 + 0x28u));
        wr16(0x817fdf98u, rd16(param_r3 + 0x2au));
        wr16(0x817fdf9cu, rd16(param_r3 + 0x2cu));
        wr16(0x817fdfb0u, rd16(param_r3 + 0x2eu));
        wr16(0x817fdfa0u, rd16(param_r3 + 0x30u));
        wr16(0x817fdfa4u, rd16(param_r3 + 0x32u));
        wr16(0x817fdfb4u, rd16(param_r3 + 0x34u));
        r0 = (u32)rd16(param_r3 + 0x1eu);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r31 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r31 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 2u);
        r0 = (u32)rd16(param_r3 + 0x20u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r30 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r30 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 4u);
        r0 = (u32)rd16(param_r3 + 0x22u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r29 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r29 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 6u);
        r0 = (u32)rd16(param_r3 + 0x24u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r28 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r28 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 8u);
        r0 = (u32)rd16(param_r3 + 0x26u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r27 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r27 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0xau);
        r0 = (u32)rd16(param_r3 + 0x28u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r26 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r26 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0xcu);
        r0 = (u32)rd16(param_r3 + 0x2au);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r25 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r25 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0xeu);
        r0 = (u32)rd16(param_r3 + 0x2cu);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r24 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r24 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0x10u);
        r0 = (u32)rd16(param_r3 + 0x2eu);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r23 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r23 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0x12u);
        r0 = (u32)rd16(param_r3 + 0x30u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r22 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r22 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0x14u);
        r0 = (u32)rd16(param_r3 + 0x32u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r21 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r21 = 0u;
        }
        r4 = (u32)rd16(param_r4 + 0x16u);
        r0 = (u32)rd16(param_r3 + 0x34u);
        if (r0 != r4) {
            r0 = r4 - r0;
            r0 = ppc_mulhw(715827883, (s32)r0);
            r0 = (u32)((s32)r0 >> 4);
            r20 = r0 + ((r0 >> 0x1fu) & 1u);
        } else {
            r20 = 0u;
        }
        wr16(0x817fdf8au, (u16)r31);
        wr16(0x817fdf8eu, (u16)r30);
        wr16(0x817fdfaau, (u16)r29);
        wr16(0x817fdf92u, (u16)r28);
        wr16(0x817fdf96u, (u16)r27);
        wr16(0x817fdfaeu, (u16)r26);
        wr16(0x817fdf9au, (u16)r25);
        wr16(0x817fdf9eu, (u16)r24);
        wr16(0x817fdfb2u, (u16)r23);
        wr16(0x817fdfa2u, (u16)r22);
        wr16(0x817fdfa6u, (u16)r21);
        wr16(0x817fdfb6u, (u16)r20);
        a.r[0] = param_r3;
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0u;
        (void)tc_call(0x802f3ff0u, &a);
        r0 = (u32)rd16(param_r4);
        if (r0 == 0u || r31 == 0u) {
            wr16(param_r3 + 0x1eu, (u16)r0);
        } else {
            wr16(param_r3 + 0x1eu, (u16)((u32)rd16(param_r3 + 0x1eu) + (r31 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 2u);
        if (r0 == 0u || r30 == 0u) {
            wr16(param_r3 + 0x20u, (u16)r0);
        } else {
            wr16(param_r3 + 0x20u, (u16)((u32)rd16(param_r3 + 0x20u) + (r30 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 4u);
        if (r0 == 0u || r29 == 0u) {
            wr16(param_r3 + 0x22u, (u16)r0);
        } else {
            wr16(param_r3 + 0x22u, (u16)((u32)rd16(param_r3 + 0x22u) + (r29 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 6u);
        if (r0 == 0u || r28 == 0u) {
            wr16(param_r3 + 0x24u, (u16)r0);
        } else {
            wr16(param_r3 + 0x24u, (u16)((u32)rd16(param_r3 + 0x24u) + (r28 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 8u);
        if (r0 == 0u || r27 == 0u) {
            wr16(param_r3 + 0x26u, (u16)r0);
        } else {
            wr16(param_r3 + 0x26u, (u16)((u32)rd16(param_r3 + 0x26u) + (r27 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0xau);
        if (r0 == 0u || r26 == 0u) {
            wr16(param_r3 + 0x28u, (u16)r0);
        } else {
            wr16(param_r3 + 0x28u, (u16)((u32)rd16(param_r3 + 0x28u) + (r26 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0xcu);
        if (r0 == 0u || r25 == 0u) {
            wr16(param_r3 + 0x2au, (u16)r0);
        } else {
            wr16(param_r3 + 0x2au, (u16)((u32)rd16(param_r3 + 0x2au) + (r25 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0xeu);
        if (r0 == 0u || r24 == 0u) {
            wr16(param_r3 + 0x2cu, (u16)r0);
        } else {
            wr16(param_r3 + 0x2cu, (u16)((u32)rd16(param_r3 + 0x2cu) + (r24 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0x10u);
        if (r0 == 0u || r23 == 0u) {
            wr16(param_r3 + 0x2eu, (u16)r0);
        } else {
            wr16(param_r3 + 0x2eu, (u16)((u32)rd16(param_r3 + 0x2eu) + (r23 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0x12u);
        if (r0 == 0u || r22 == 0u) {
            wr16(param_r3 + 0x30u, (u16)r0);
        } else {
            wr16(param_r3 + 0x30u, (u16)((u32)rd16(param_r3 + 0x30u) + (r22 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0x14u);
        if (r0 == 0u || r21 == 0u) {
            wr16(param_r3 + 0x32u, (u16)r0);
        } else {
            wr16(param_r3 + 0x32u, (u16)((u32)rd16(param_r3 + 0x32u) + (r21 * 0x60u)));
        }
        r0 = (u32)rd16(param_r4 + 0x16u);
        if (r0 == 0u || r20 == 0u) {
            wr16(param_r3 + 0x34u, (u16)r0);
        } else {
            wr16(param_r3 + 0x34u, (u16)((u32)rd16(param_r3 + 0x34u) + (r20 * 0x60u)));
        }
        a.r[0] = r16;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
