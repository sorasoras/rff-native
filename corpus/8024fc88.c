#include "tc_rt.h"

void fn_8024fc88(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = param_2 - 9u;
    r3 = rd32(0x80576c88u) + (((u32)param_1 << 2u) & 0xfffffffcu);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc71db8u);
        sw_ = r4;
        switch (sw_) {
        case 0x8024fcb8u:
            wr32(param_3, rd32(r3 + 0x1cu) & 1u);
            wr32(param_4, (rd32(r3 + 0x1cu) >> 1u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x1cu) >> 4u) & 0x1fu));
            return;
        case 0x8024fce0u:
            r0 = (rd32(r3 + 0x1cu) >> 9u) & 1u;
            wr32(param_3, r0);
            if (r0 == 1u && ((rd32(r3 + 0x1cu) >> 0x1fu) & 1u) != 0u) {
                wr32(param_3, 2u);
            }
            r0 = (rd32(r3 + 0x1cu) >> 0xau) & 7u;
            c0lt = (s32)r0 < 2;
            wr32(param_4, r0);
            if (r0 != 2u) {
                if (!c0lt) {
                    if ((s32)r0 < 4) {
                        r0 = 0xeu;
                        wr8(param_5, (u8)r0);
                        return;
                    }
                } else if ((s32)r0 >= 1) {
                    r0 = 6u;
                    wr8(param_5, (u8)r0);
                    return;
                }
            }
            r0 = 0u;
            wr8(param_5, (u8)r0);
            return;
        case 0x8024fd54u:
            wr32(param_3, (rd32(r3 + 0x1cu) >> 0xdu) & 1u);
            r3 = rd32(r3 + 0x1cu);
            r3 = (r3 >> 0xeu) & 7u;
            wr32(param_4, r3);
            wr8(param_5, 0u);
            return;
        case 0x8024fd78u:
            wr32(param_3, (rd32(r3 + 0x1cu) >> 0x11u) & 1u);
            r3 = rd32(r3 + 0x1cu);
            r3 = (r3 >> 0x12u) & 7u;
            wr32(param_4, r3);
            wr8(param_5, 0u);
            return;
        case 0x8024fd9cu:
            wr32(param_3, (rd32(r3 + 0x1cu) >> 0x15u) & 1u);
            wr32(param_4, (rd32(r3 + 0x1cu) >> 0x16u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x1cu) >> 0x19u) & 0x1fu));
            return;
        case 0x8024fdc4u:
            wr32(param_3, rd32(r3 + 0x3cu) & 1u);
            wr32(param_4, (rd32(r3 + 0x3cu) >> 1u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x3cu) >> 4u) & 0x1fu));
            return;
        case 0x8024fdecu:
            wr32(param_3, (rd32(r3 + 0x3cu) >> 9u) & 1u);
            wr32(param_4, (rd32(r3 + 0x3cu) >> 0xau) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x3cu) >> 0xdu) & 0x1fu));
            return;
        case 0x8024fe14u:
            wr32(param_3, (rd32(r3 + 0x3cu) >> 0x12u) & 1u);
            wr32(param_4, (rd32(r3 + 0x3cu) >> 0x13u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x3cu) >> 0x16u) & 0x1fu));
            return;
        case 0x8024fe3cu:
            wr32(param_3, (rd32(r3 + 0x3cu) >> 0x1bu) & 1u);
            wr32(param_4, (rd32(r3 + 0x3cu) >> 0x1cu) & 7u);
            wr8(param_5, (u8)(rd32(r3 + 0x5cu) & 0x1fu));
            return;
        case 0x8024fe64u:
            wr32(param_3, (rd32(r3 + 0x5cu) >> 5u) & 1u);
            wr32(param_4, (rd32(r3 + 0x5cu) >> 6u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x5cu) >> 9u) & 0x1fu));
            return;
        case 0x8024fe8cu:
            wr32(param_3, (rd32(r3 + 0x5cu) >> 0xeu) & 1u);
            wr32(param_4, (rd32(r3 + 0x5cu) >> 0xfu) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x5cu) >> 0x12u) & 0x1fu));
            return;
        case 0x8024feb4u:
            wr32(param_3, (rd32(r3 + 0x5cu) >> 0x17u) & 1u);
            wr32(param_4, (rd32(r3 + 0x5cu) >> 0x18u) & 7u);
            wr8(param_5, (u8)((rd32(r3 + 0x5cu) >> 0x1bu) & 0x1fu));
            return;
        case 0x8024fedcu:
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
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
            return;
        }
    }
    wr32(param_3, 1u);
    wr32(param_4, 0u);
    wr8(param_5, 0u);
    return;
}
