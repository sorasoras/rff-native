#include "tc_rt.h"

void fn_8024f8a4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r0 = param_2 - 9u;
    r8 = rd32(0x80576c88u) + ((param_1 << 2u) & 0xfffffffcu);
    if (r0 <= 0x10u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc71e40u);
        sw_ = r4;
        switch (sw_) {
        case 0x8024f8d4u:
            wr32(r8 + 0x1cu, (((((rd32(r8 + 0x1cu) & 0xfffffffeu) | (param_3 & 1u)) & 0xfffffff1u) | ((param_4 << 1u) & 0xeu)) & 0xfffffe0fu) | ((param_5 << 4u) & 0x1f0u));
            break;
        case 0x8024f8ecu:
            wr32(r8 + 0x1cu, (rd32(r8 + 0x1cu) & 0xffffe3ffu) | ((param_4 << 0xau) & 0x1c00u));
            if (param_3 != 2u) {
                wr32(r8 + 0x1cu, ((rd32(r8 + 0x1cu) & 0xfffffdffu) | ((param_3 << 9u) & 0x200u)) & 0x7fffffffu);
                break;
            }
            wr32(r8 + 0x1cu, rd32(r8 + 0x1cu) | 0x80000200u);
            break;
        case 0x8024f928u:
            wr32(r8 + 0x1cu, (((rd32(r8 + 0x1cu) & 0xffffdfffu) | ((param_3 << 0xdu) & 0x2000u)) & 0xfffe3fffu) | ((param_4 << 0xeu) & 0x1c000u));
            break;
        case 0x8024f93cu:
            wr32(r8 + 0x1cu, (((rd32(r8 + 0x1cu) & 0xfffdffffu) | ((param_3 << 0x11u) & 0x20000u)) & 0xffe3ffffu) | ((param_4 << 0x12u) & 0x1c0000u));
            break;
        case 0x8024f950u:
            wr32(r8 + 0x1cu, (((((rd32(r8 + 0x1cu) & 0xffdfffffu) | ((param_3 << 0x15u) & 0x200000u)) & 0xfe3fffffu) | ((param_4 << 0x16u) & 0x1c00000u)) & 0xc1ffffffu) | ((param_5 << 0x19u) & 0x3e000000u));
            break;
        case 0x8024f968u:
            wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffffffeu) | (param_3 & 1u)) & 0xfffffff1u) | ((param_4 << 1u) & 0xeu)) & 0xfffffe0fu) | ((param_5 << 4u) & 0x1f0u));
            break;
        case 0x8024f980u:
            wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffffdffu) | ((param_3 << 9u) & 0x200u)) & 0xffffe3ffu) | ((param_4 << 0xau) & 0x1c00u)) & 0xfffc1fffu) | ((param_5 << 0xdu) & 0x3e000u));
            break;
        case 0x8024f998u:
            wr32(r8 + 0x3cu, (((((rd32(r8 + 0x3cu) & 0xfffbffffu) | ((param_3 << 0x12u) & 0x40000u)) & 0xffc7ffffu) | ((param_4 << 0x13u) & 0x380000u)) & 0xf83fffffu) | ((param_5 << 0x16u) & 0x7c00000u));
            break;
        case 0x8024f9b0u:
            wr32(r8 + 0x3cu, (((rd32(r8 + 0x3cu) & 0xf7ffffffu) | ((param_3 << 0x1bu) & 0x8000000u)) & 0x8fffffffu) | ((param_4 << 0x1cu) & 0x70000000u));
            wr32(r8 + 0x5cu, (rd32(r8 + 0x5cu) & 0xffffffe0u) | (param_5 & 0x1fu));
            break;
        case 0x8024f9d0u:
            wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xffffffdfu) | ((param_3 << 5u) & 0x20u)) & 0xfffffe3fu) | ((param_4 << 6u) & 0x1c0u)) & 0xffffc1ffu) | ((param_5 << 9u) & 0x3e00u));
            break;
        case 0x8024f9e8u:
            wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xffffbfffu) | ((param_3 << 0xeu) & 0x4000u)) & 0xfffc7fffu) | ((param_4 << 0xfu) & 0x38000u)) & 0xff83ffffu) | ((param_5 << 0x12u) & 0x7c0000u));
            break;
        case 0x8024fa00u:
            wr32(r8 + 0x5cu, (((((rd32(r8 + 0x5cu) & 0xff7fffffu) | ((param_3 << 0x17u) & 0x800000u)) & 0xf8ffffffu) | ((param_4 << 0x18u) & 0x7000000u)) & 0x7ffffffu) | ((param_5 << 0x1bu) & 0xf8000000u));
            break;
        case 0x8024fa14u:
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = r8;
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
    r5 = rd32(0x80576c88u);
    r0 = param_1 & 0xffu;
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
    r0 = r0 & 0xffu;
    wr32(r5 + 0x5fcu, rd32(r5 + 0x5fcu) | 0x10u);
    r0 = (u32)rd8(r5 + 0x5fbu) | r0;
    wr8(r5 + 0x5fbu, (u8)r0);
    return;
}
