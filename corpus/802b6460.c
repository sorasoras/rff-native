#include "tc_rt.h"

u32 fn_802b6460(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r3 = param_1;
    wr8(param_1, 9u);
    wr8(param_1 + 1u, (u8)((s32)rd16(param_2 + 8u) >> 8));
    wr8(param_1 + 2u, (u8)rd16(param_2 + 8u));
    r6 = (u32)rd8(param_2 + 0xau);
    c0lt = (s32)r6 < 5;
    do {
        if (r6 != 5u) {
            if (!c0lt) {
                if ((s32)r6 >= 9) break;
            } else if ((s32)r6 < 4) {
                break;
            }
            r0 = (r6 << 3u) & 0x7f8u;
            r6 = param_1 + 5u;
            r0 = r0 | 5u;
            r5 = 0u;
            wr8(param_1 + 3u, (u8)r0);
            wr8(param_1 + 4u, (u8)rd32(param_2));
            while ((s32)r5 < (s32)rd32(param_2)) {
                r0 = (u32)rd8(rd32(param_2 + 4u) + r5);
                r5 = r5 + 1u;
                wr8(r6, (u8)r0);
                r6 = r6 + 1u;
            }
            return r6;
        }
    } while (0);
    r0 = rd32(param_2);
    do {
        if (r0 <= 0x10u) {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r5 = rd32(r0 - 0x7fc68148u);
            sw_ = r5;
            switch (sw_) {
            case 0x802b656cu:
                fl_ = 2u;
                break;
            case 0x802b650cu:
                r0 = (r6 << 3u) & 0xf8u;
                r6 = param_1 + 4u;
                wr8(param_1 + 3u, (u8)r0);
                fl_ = 1u;
                break;
            case 0x802b651cu:
                r0 = (r6 << 3u) & 0x7f8u;
                r6 = param_1 + 4u;
                r0 = r0 | 1u;
                wr8(param_1 + 3u, (u8)r0);
                fl_ = 1u;
                break;
            case 0x802b6530u:
                r0 = (r6 << 3u) & 0x7f8u;
                r6 = param_1 + 4u;
                r0 = r0 | 2u;
                wr8(param_1 + 3u, (u8)r0);
                fl_ = 1u;
                break;
            case 0x802b6544u:
                r0 = (r6 << 3u) & 0x7f8u;
                r6 = param_1 + 4u;
                r0 = r0 | 3u;
                wr8(param_1 + 3u, (u8)r0);
                fl_ = 1u;
                break;
            case 0x802b6558u:
                r0 = (r6 << 3u) & 0x7f8u;
                r6 = param_1 + 4u;
                r0 = r0 | 4u;
                wr8(param_1 + 3u, (u8)r0);
                fl_ = 1u;
                break;
            default:
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = r5;
                a.r[3] = r6;
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
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
        }
        r0 = (r6 << 3u) & 0x7f8u;
        r6 = param_1 + 5u;
        r0 = r0 | 5u;
        wr8(param_1 + 3u, (u8)r0);
        wr8(param_1 + 4u, (u8)rd32(param_2));
    } while (0);
    r5 = 0u;
    while ((s32)r5 < (s32)rd32(param_2)) {
        r0 = (u32)rd8(rd32(param_2 + 4u) + r5);
        r5 = r5 + 1u;
        wr8(r6, (u8)r0);
        r6 = r6 + 1u;
    }
    return r6;
}
