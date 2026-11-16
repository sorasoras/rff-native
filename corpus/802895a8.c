#include "tc_rt.h"

void fn_802895a8(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r29 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    if (param_1 <= 0xfu) {
        r5 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fc6d898u);
        sw_ = r5;
        switch (sw_) {
        case 0x802895f4u:
            (void)tc_call(0x80289ba4u, &a);
            wr32(0x8050f840u, rd32(0x8050f840u) | 1u);
            break;
        case 0x80289610u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289620u:
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            if ((u32)rd8(param_2 + 6u) != 0u) {
                (void)tc_call(0x80289ba4u, &a);
                if ((u32)rd8(0x8050f10cu) == 0u) {
                    a.r[0] = param_2;
                    r3 = tc_call(0x80287bc4u, &a);
                    if (r3 == 0u || (u32)rd8(param_2 + 6u) != 0xcu) break;
                    a.r[0] = param_2;
                    r3 = tc_call(0x80287bc4u, &a);
                    if (r3 != 0u) {
                        r0 = (u32)rd8(r3 + 0x5bu);
                        if (r0 == 3u || r0 == 1u) {
                            a.r[0] = r3;
                            (void)tc_call(0x80287e74u, &a);
                        } else {
                            a.r[0] = r3;
                            (void)tc_call(0x802881fcu, &a);
                        }
                    }
                    a.r[0] = param_2;
                    (void)tc_call(0x80287a68u, &a);
                    wr8(0x8050f7e5u, (u8)((u32)rd8(0x8050f7e5u) - 1u));
                    break;
                }
                a.r[0] = param_2;
                a.r[1] = 0x8050fe00u;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 != 0u || (u32)rd8(0x8050fe19u) != 2u) break;
                a.r[0] = param_2;
                r3 = tc_call(0x80287bc4u, &a);
                if (r3 != 0u && (u32)rd8(param_2 + 6u) == 0xcu) {
                    a.r[0] = param_2;
                    (void)tc_call(0x80287a68u, &a);
                    wr8(0x8050f7e5u, (u8)((u32)rd8(0x8050f7e5u) - 1u));
                }
                wr8(0x8050f10cu, 0xffu);
                break;
            }
            r29 = 0x8050fdc0u;
            a.r[0] = 0x8050fe00u;
            a.r[1] = param_2;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 != 0u) {
                a.r[0] = param_2;
                r3 = tc_call(0x80287bc4u, &a);
                r29 = r3;
            }
            r0 = (u32)rd8(r29 + 0x59u);
            c0lt = (s32)r0 < 12;
            if (r0 == 0xcu) {
                wr8(0x8050f10cu, 0x12u);
            } else if (c0lt && r0 == 2u) {
                wr8(0x8050f10cu, 0x17u);
            }
            wr8(r29 + 0x59u, 8u);
            wr8(r29 + 0x56u, rd8(param_2 + 7u));
            wr8(0x8050f7e4u, (u8)((u32)rd8(0x8050f7e4u) + 1u));
            a.r[0] = param_2;
            r3 = tc_call(0x80287bc4u, &a);
            r29 = r3;
            if (r3 == 0u) {
                r29 = 0x8050fdc0u;
            }
            wr32((((u32)rd8(param_2 + 7u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, r29 + 0x40u);
            wr16((((u32)rd8(param_2 + 7u) << 1u) & 0xfffffffeu) - 0x7faeef98u, 0u);
            wr16((((u32)rd8(param_2 + 7u) << 1u) & 0xfffffffeu) - 0x7faeef78u, 0u);
            r0 = (u32)rd8(r29 + 0x5bu);
            if (r0 == 3u || r0 == 1u) {
                a.r[0] = r29;
                (void)tc_call(0x80287d5cu, &a);
            } else {
                a.r[0] = r29;
                (void)tc_call(0x802880e4u, &a);
            }
            a.r[0] = r29 + 0x40u;
            a.r[1] = 8u;
            f1 = tc_callf(0x80286da0u, &a);
            r12 = rd32(0x8050f7f0u);
            if (r12 == 0u) break;
            a.r[0] = r29;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(r12, &a);
            break;
        case 0x80289870u:
            (void)tc_call(0x80289ba4u, &a);
            wr8(0x8050f7e4u, (u8)((u32)rd8(0x8050f7e4u) - 1u));
            (void)tc_call(0x80289ba4u, &a);
            a.r[0] = rd32((((u32)rd8(param_2 + 1u) << 2u) & 0xfffffffcu) - 0x7faf01e0u);
            r3 = tc_call(0x80287bc4u, &a);
            f1 = tc_lastf();
            r29 = r3;
            if (r3 != 0u) {
                r0 = (u32)rd8(r3 + 0x5bu);
                if (r0 == 3u || r0 == 1u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x80287f8cu, &a);
                } else {
                    a.r[0] = r3;
                    f1 = tc_callf(0x80288314u, &a);
                }
            }
            r12 = rd32(0x8050f7f0u);
            wr32((((u32)rd8(param_2 + 1u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, 0u);
            wr16((((u32)rd8(param_2 + 1u) << 1u) & 0xfffffffeu) - 0x7faeef98u, 0u);
            wr16((((u32)rd8(param_2 + 1u) << 1u) & 0xfffffffeu) - 0x7faeef78u, 0u);
            if (r12 == 0u) break;
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x8050fe20u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            (void)tc_call(r12, &a);
            break;
        case 0x80289954u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289944u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289974u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289964u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289994u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289984u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x802899a4u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x802899b4u:
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            a.r[0] = param_2;
            r3 = tc_call(0x80287bc4u, &a);
            wr8(r3 + 0x56u, rd8(param_2 + 7u));
            wr32((((u32)rd8(param_2 + 7u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, r3 + 0x40u);
            wr16((((u32)rd8(param_2 + 7u) << 1u) & 0xfffffffeu) - 0x7faeef98u, 0u);
            wr16((((u32)rd8(param_2 + 7u) << 1u) & 0xfffffffeu) - 0x7faeef78u, 0u);
            break;
        case 0x80289a48u:
            (void)tc_call(0x80289ba4u, &a);
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289a88u:
            (void)tc_call(0x80289ba4u, &a);
            break;
        case 0x80289b24u:
            break;
        case 0x80289a98u:
            r3 = (u32)rd8(0x8050f7e5u);
            wr16(0x8050f844u, rd16(param_2));
            wr16(0x8050f846u, rd16(param_2 + 2u));
            if ((s32)r3 < (s32)rd16(param_2 + 4u)) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0x80392740u;
                a.r[1] = param_2;
                a.r[2] = r5;
                a.r[3] = param_r6;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x80228554u, &a);
                wr8(0x8050f7e5u, (u8)rd16(param_2 + 4u));
            }
            r6 = param_2;
            r7 = 0u;
            for (;;) {
                if ((s32)r7 >= (s32)rd16(param_2 + 4u)) {
                    return;
                }
                r0 = (u32)rd8(r6 + 6u);
                if (r0 < 0x10u) {
                    r0 = (r0 << 1u) & 0x1feu;
                    wr16(r0 - 0x7faeef98u, rd16(r6 + 8u));
                    wr16((((u32)rd8(r6 + 6u) << 1u) & 0xfffffffeu) - 0x7faeef78u, rd16(r6 + 0xau));
                }
                r6 = r6 + 6u;
                r7 = r7 + 1u;
            }
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
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
    return;
}
