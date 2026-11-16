#include "tc_rt.h"

void fn_8006d400(s32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0, f12 = 0.0;
    f64 f13 = 0.0;
    TcArgs a = {0};
    r8 = 0xau;
    r6 = 0u;
    r9 = 1u;
    do {
        if (param_2 <= 0x20u) {
            r7 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcb0000u);
            sw_ = r7;
            switch (sw_) {
            case 0x8006d454u:
                fl_ = 2u;
                break;
            case 0x8006d450u:
                r6 = 1u;
                fl_ = 2u;
                break;
            case 0x8006d460u:
                r8 = 5u;
                fl_ = 1u;
                break;
            case 0x8006d45cu:
                r6 = 1u;
                r8 = 5u;
                fl_ = 1u;
                break;
            case 0x8006d438u:
                if (rd32(0x80499178u) != 0u) {
                    r6 = 1u;
                    fl_ = 2u;
                    break;
                }
                r9 = 0u;
                r6 = 1u;
                fl_ = 2u;
                break;
            case 0x8006d488u:
                fl_ = 1u;
                break;
            case 0x8006d46cu:
                r8 = 3u;
                fl_ = 1u;
                break;
            case 0x8006d468u:
                r6 = 1u;
                r8 = 3u;
                fl_ = 1u;
                break;
            case 0x8006d478u:
                fl_ = 3u;
                break;
            case 0x8006d474u:
                r6 = 1u;
                fl_ = 3u;
                break;
            case 0x8006d430u:
                r8 = 0u;
                fl_ = 1u;
                break;
            case 0x8006d42cu:
                r6 = 1u;
                r8 = 0u;
                fl_ = 1u;
                break;
            case 0x8006d484u:
                fl_ = 4u;
                break;
            case 0x8006d480u:
                r6 = 1u;
                fl_ = 4u;
                break;
            default:
                a.r[0] = (u32)param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = 0u;
                a.r[4] = r7;
                a.r[5] = 0xau;
                a.r[6] = 1u;
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
            if (fl_ == 4u) {
                fl_ = 0u;
                r8 = 1u;
            } else if (fl_ == 3u) {
                fl_ = 0u;
                r8 = 4u;
            } else {
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                r8 = 2u;
            }
        }
    } while (0);
    if (r9 == 0u) {
        wr32((u32)param_1 + 0xa08u, 0x21u);
        wr32((u32)param_1 + 0xa0cu, 0x21u);
        wr32((u32)param_1 + 0xa10u, 0x21u);
        wr32((u32)param_1 + 0xa14u, 0u);
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = r8;
    a.r[2] = param_3;
    a.r[3] = r6;
    (void)tc_call(0x8006d64cu, &a);
    return;
}
