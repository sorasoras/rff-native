#include "tc_rt.h"

u32 fn_8025625c(u32 param_1)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    for (;;) {
        r4 = rd32(param_1 + 8u);
        if (r4 != 0u) {
            r5 = (u32)rd8(r4);
            if ((r5 & 0x80u) == 0u) {
                fl_ = 2u;
                break;
            }
        }
        r3 = (u32)rd16(rd32(param_1));
        r30 = rd32(rd32(param_1 + 0x18u));
        if ((u32)((s32)r3 >> 11) != 0u) {
            r3 = r30 - ((r3 >> 3u) & 0xf8u);
            wr32(param_1 + 0x20u, rd32(r3 - 4u));
        }
        a.r[0] = rd32(r30 + 4u);
        a.r[1] = param_1;
        f1 = tc_callf(0x802560acu, &a);
        if (rd32(param_1) == 0u) {
            f1 = tc_callf(0x8025521cu, &a);
        }
        wr32(param_1 + 0x18u, r30);
        if ((((u32)rd16(rd32(param_1)) >> 4u) & 1u) != 0u) {
            r30 = rd32(param_1 + 0x20u);
        }
        r0 = rd32(param_1 + 8u);
        wr32(param_1 + 0x1cu, r30);
        if (r0 != 0u) {
            fl_ = 1u;
            break;
        }
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        if (r5 > 0x10u) {
            (void)tc_call(0x8025521cu, &a);
        } else {
            r3 = rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fc71820u);
            sw_ = r3;
            switch (sw_) {
            case 0x802563c4u:
                (void)tc_call(0x8025521cu, &a);
                break;
            case 0x8025631cu:
                wr32(param_1 + 8u, r4 + 8u);
                break;
            case 0x80256328u:
                wr32(param_1 + 8u, r4 + 0xcu);
                break;
            case 0x80256334u:
                wr32(param_1 + 8u, r4 + 8u);
                break;
            case 0x80256340u:
                wr32(param_1 + 8u, r4 + 0xcu);
                break;
            case 0x8025634cu:
                wr32(param_1 + 8u, r4 + 0xcu);
                break;
            case 0x80256358u:
                wr32(param_1 + 8u, r4 + 0x10u);
                break;
            case 0x80256364u:
                wr32(param_1 + 8u, r4 + 0x14u);
                break;
            case 0x80256370u:
                wr32(param_1 + 8u, r4 + 8u);
                break;
            case 0x8025637cu:
                wr32(param_1 + 8u, r4 + 0xcu);
                break;
            case 0x80256388u:
                wr32(param_1 + 8u, r4 + 0xcu);
                break;
            case 0x802563a0u:
                wr32(param_1 + 8u, r4 + 4u);
                break;
            case 0x802563acu:
                wr32(param_1 + 8u, (((u32)rd16(r4 + 2u) << 2u) & 0xfffffffcu) + r4 + 0xcu);
                break;
            case 0x80256394u:
                wr32(param_1 + 8u, r4 + 0x10u);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.f[0] = f1;
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
    } while (0);
    r4 = rd32(param_1 + 8u);
    r3 = (u32)rd8(r4) & 0x7fu;
    if (r3 == 1u) {
        r3 = rd32(param_1) + (u32)rd16(r4 + 2u);
        wr32(param_1 + 8u, r3);
        r3 = (u32)rd8(r3) & 0x7fu;
    }
    return r3;
}
