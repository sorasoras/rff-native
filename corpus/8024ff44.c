#include "tc_rt.h"

void fn_8024ff44(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r11 = 0u;
    r12 = 0u;
    r10 = 5u;
    if ((u32)param_3 <= 0x14u) {
        r9 = rd32((((u32)param_3 << 2u) & 0xfffffffcu) - 0x7fc71d58u);
        sw_ = r9;
        switch (sw_) {
        case 0x8024ff70u:
            r10 = 0u;
            r12 = 1u;
            break;
        case 0x8024ff7cu:
            r10 = 1u;
            r12 = 1u;
            break;
        case 0x8024ff88u:
            r10 = 3u;
            r12 = 1u;
            break;
        case 0x8024ff94u:
            r10 = 4u;
            r12 = 1u;
            break;
        case 0x8024ffb0u:
            r10 = 5u;
            break;
        case 0x8024ffb8u:
            r10 = 6u;
            break;
        case 0x8024ffc0u:
            r10 = 7u;
            break;
        case 0x8024ffc8u:
            r10 = 8u;
            break;
        case 0x8024ffd0u:
            r10 = 9u;
            break;
        case 0x8024ffd8u:
            r10 = 0xau;
            break;
        case 0x8024ffe0u:
            r10 = 0xbu;
            break;
        case 0x8024ffe8u:
            r10 = 0xcu;
            break;
        case 0x8024ffecu:
            break;
        case 0x8024ffa0u:
            r10 = 2u;
            break;
        case 0x8024ffa8u:
            r10 = 2u;
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = (u32)param_3;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = (u32)param_6;
            a.r[6] = r9;
            a.r[7] = 5u;
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
    c0lt = param_2 < 1;
    if ((u32)param_2 == 1u) {
        r11 = ((r12 << 2u) & 4u) | ((r10 << 7u) & 0xf80u);
    } else if (!c0lt) {
        c0lt = param_2 < 10;
        if ((u32)param_2 == 0xau) {
            r11 = (r12 << 2u) & 4u;
            if ((u32)param_3 != 0x13u) {
                r11 = (r11 & 0xffffff8fu) | 0x30u;
            } else {
                r11 = (r11 & 0xffffff8fu) | 0x20u;
            }
            r11 = (r11 & 0xfffff07fu) | 0x100u;
        } else if (c0lt) {
            r11 = ((((((((r12 << 2u) & 4u) | 0x10u) & 0xfffff07fu) | ((r10 << 7u) & 0xf80u)) & 0xffff8fffu) | ((((u32)param_3 - 0xcu) << 0xcu) & 0x7000u)) & 0xfffc7fffu) | ((((u32)param_2 - 2u) << 0xfu) & 0x38000u);
        }
    } else if (param_2 >= 0) {
        r11 = ((((r12 << 2u) & 4u) | 2u) & 0xfffff07fu) | ((r10 << 7u) & 0xf80u);
    }
    r10 = rd32(0x80576c88u);
    r9 = ((u32)param_1 << 2u) & 0xfffffffcu;
    r8 = r10 + r9;
    wr32(r8 + 0xc8u, r11);
    r5 = rd32(r10 + 0x5fcu);
    r4 = (((u32)param_6 - 0x40u) & 0x3fu) | ((param_5 << 8u) & 0x100u);
    wr32(r10 + 0x5fcu, r5 | ((((u32)param_1 & 0x20u) != 0u) ? 0u : (0x10000u << ((u32)param_1 & 0x1fu))));
    wr32(r8 + 0xe8u, r4);
    if ((u32)param_1 > 6u) {
        wr32(r10 + 0x84u, (rd32(r10 + 0x84u) & 0xff03ffffu) | ((param_4 << 0x12u) & 0xfc0000u));
    } else {
        r3 = rd32(r9 - 0x7fc71d74u);
        sw_ = r3;
        switch (sw_) {
        case 0x802500e0u:
            wr32(r10 + 0x80u, (rd32(r10 + 0x80u) & 0xfffff03fu) | ((param_4 << 6u) & 0xfc0u));
            break;
        case 0x802500f0u:
            wr32(r10 + 0x80u, (rd32(r10 + 0x80u) & 0xfffc0fffu) | ((param_4 << 0xcu) & 0x3f000u));
            break;
        case 0x80250100u:
            wr32(r10 + 0x80u, (rd32(r10 + 0x80u) & 0xff03ffffu) | ((param_4 << 0x12u) & 0xfc0000u));
            break;
        case 0x80250110u:
            wr32(r10 + 0x80u, (rd32(r10 + 0x80u) & 0xc0ffffffu) | ((param_4 << 0x18u) & 0x3f000000u));
            break;
        case 0x80250120u:
            wr32(r10 + 0x84u, (rd32(r10 + 0x84u) & 0xffffffc0u) | (param_4 & 0x3fu));
            break;
        case 0x80250130u:
            wr32(r10 + 0x84u, (rd32(r10 + 0x84u) & 0xfffff03fu) | ((param_4 << 6u) & 0xfc0u));
            break;
        case 0x80250140u:
            wr32(r10 + 0x84u, (rd32(r10 + 0x84u) & 0xfffc0fffu) | ((param_4 << 0xcu) & 0x3f000u));
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = param_5;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
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
    wr32(r10 + 0x5fcu, rd32(r10 + 0x5fcu) | 0x4000000u);
    return;
}
