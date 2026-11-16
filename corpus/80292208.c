#include "tc_rt.h"

void fn_80292208(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = 0x80392b68u;
    wr32(0x817fdffcu, 0u);
    r31 = 0x1710u;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = (u32)rd8(0x80571b80u);
    wr32(0x817fdfe8u, param_4);
    if (r0 >= 5u) {
        if (param_2 > 8u) {
            r5 = 0x80392fe4u;
        } else {
            r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc6cfc4u);
            sw_ = r3;
            switch (sw_) {
            case 0x8029226cu:
                r5 = 0x80392f14u;
                break;
            case 0x80292274u:
                r5 = 0x80392f28u;
                break;
            case 0x8029227cu:
                r5 = 0x80392f3cu;
                break;
            case 0x80292284u:
                r5 = 0x80392f54u;
                break;
            case 0x8029228cu:
                r5 = 0x80392f6cu;
                break;
            case 0x80292294u:
                r5 = 0x80392f84u;
                break;
            case 0x8029229cu:
                r5 = 0x80392f9cu;
                break;
            case 0x802922a4u:
                r5 = 0x80392fb4u;
                break;
            case 0x802922acu:
                r5 = 0x80392fccu;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                a.r[4] = 0x80392b68u;
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
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x504u;
        a.r[1] = 0x80392ff8u;
        a.r[2] = r5;
        a.r[3] = param_4;
        a.r[4] = 0x80392b68u;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc6cu, &a);
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    if (param_2 <= 8u) {
        r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fc6cfe8u);
        sw_ = r3;
        switch (sw_) {
        case 0x802922e4u:
            r31 = 0x1702u;
            break;
        case 0x802922ecu:
            r31 = 0x1703u;
            break;
        case 0x80292450u:
            break;
        case 0x802922f4u:
            r31 = 0x1704u;
            break;
        case 0x8029230cu:
            a.r[0] = 0x817fdfe8u;
            (void)tc_call(0x8028d9f0u, &a);
            break;
        case 0x80292304u:
            r31 = 0x1705u;
            break;
        case 0x802922fcu:
            r31 = 0x1706u;
            break;
        case 0x80292318u:
            r5 = 0u;
            ctr = 2u;
            for (;;) {
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    wr8(r3 + 0x27u, 1u);
                    fl_ = 1u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    wr8(r3 + 0x27u, 1u);
                    fl_ = 1u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    wr8(r3 + 0x27u, 1u);
                    fl_ = 1u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    fl_ = 6u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    fl_ = 5u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    fl_ = 4u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    fl_ = 3u;
                    break;
                }
                r5 = r5 + 1u;
                r3 = ((r5 << 5u) & 0x1fe0u) - 0x7fac28d8u;
                if (param_1 == (u32)rd8(r3 + 0x26u)) {
                    fl_ = 2u;
                    break;
                }
                r5 = r5 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    fl_ = 1u;
                    break;
                }
            }
            if (fl_ != 6u) {
                if (fl_ != 5u) {
                    if (fl_ != 4u) {
                        if (fl_ != 3u) {
                            if (fl_ == 2u) {
                                fl_ = 0u;
                            } else if (fl_ == 1u) {
                                fl_ = 0u;
                                break;
                            }
                            wr8(r3 + 0x27u, 1u);
                            break;
                        }
                        fl_ = 0u;
                        wr8(r3 + 0x27u, 1u);
                        break;
                    }
                    fl_ = 0u;
                    wr8(r3 + 0x27u, 1u);
                    break;
                }
                fl_ = 0u;
                wr8(r3 + 0x27u, 1u);
                break;
            }
            fl_ = 0u;
            wr8(r3 + 0x27u, 1u);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
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
    if (r31 != 0x1710u) {
        a.r[0] = 0x18u;
        r3 = tc_call(0x8028a0d4u, &a);
        if (r3 != 0u) {
            wr16(r3, (u16)r31);
            wr16(r3 + 6u, (u16)param_1);
            wr32(r3 + 8u, param_3);
            wr32(r3 + 0xcu, rd32(0x817fdfe8u));
            a.r[0] = r3;
            (void)tc_call(0x8028d750u, &a);
        }
    }
    return;
}
