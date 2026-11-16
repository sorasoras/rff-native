#include "tc_rt.h"

void fn_802919ac(s32 param_1, s32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r4 = rd32((u32)param_2 + 0xcu);
    r0 = (u32)rd8(0x80571b80u);
    wr32(0x817fdfd8u, r4);
    r30 = r4 + (u32)rd16(r4 + 4u);
    if (r0 >= 5u) {
        r0 = (u32)rd16((u32)param_1 + 0x10u);
        if (r0 > 9u) {
            r5 = 0x80392d68u;
        } else {
            r0 = (r0 << 2u) & 0xfffffffcu;
            r3 = rd32(r0 - 0x7fc6d16cu);
            sw_ = r3;
            switch (sw_) {
            case 0x80291a48u:
                r5 = 0x80392d68u;
                break;
            case 0x80291a40u:
                r5 = 0x80392d58u;
                break;
            case 0x80291a10u:
                r5 = 0x80392cd4u;
                break;
            case 0x80291a18u:
                r5 = 0x80392ce8u;
                break;
            case 0x80291a20u:
                r5 = 0x80392cfcu;
                break;
            case 0x80291a28u:
                r5 = 0x80392d14u;
                break;
            case 0x80291a30u:
                r5 = 0x80392d2cu;
                break;
            case 0x80291a38u:
                r5 = 0x80392d40u;
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
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
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x504u;
        a.r[1] = 0x80392e10u;
        a.r[2] = r5;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        f1 = tc_callf(0x8028cc6cu, &a);
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
    wr8(0x817fdfdcu, 0u);
    wr8(0x817fdfddu, rd8((u32)param_1 + 0x16u));
    r4 = (u32)rd16((u32)param_1 + 0x10u);
    c0lt = (s32)r4 < 7;
    do {
        if (r4 != 7u) {
            if (!c0lt) {
                c0lt = (s32)r4 < 9;
                if (r4 != 9u && c0lt) {
                    wr8(0x817fdfdeu, rd8(r30 + 8u));
                    break;
                }
            } else {
                c0lt = (s32)r4 < 5;
                if (r4 != 5u) {
                    if (!c0lt) {
                        wr8(0x817fdfdeu, rd8(r30 + 8u));
                        break;
                    }
                    if ((s32)r4 >= 4) {
                        a.r[0] = 0x817fdfdeu;
                        a.r[1] = rd32(0x817fdfd8u);
                        a.r[2] = 8u;
                        (void)tc_call(0x80004338u, &a);
                        break;
                    }
                }
            }
        }
        if ((u32)rd8(0x80571b80u) >= 5u) {
            if (r4 > 9u) {
                r5 = 0x80392d68u;
            } else {
                r3 = rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fc6d194u);
                sw_ = r3;
                switch (sw_) {
                case 0x80291b2cu:
                    r5 = 0x80392d68u;
                    break;
                case 0x80291b24u:
                    r5 = 0x80392d58u;
                    break;
                case 0x80291af4u:
                    r5 = 0x80392cd4u;
                    break;
                case 0x80291afcu:
                    r5 = 0x80392ce8u;
                    break;
                case 0x80291b04u:
                    r5 = 0x80392cfcu;
                    break;
                case 0x80291b0cu:
                    r5 = 0x80392d14u;
                    break;
                case 0x80291b14u:
                    r5 = 0x80392d2cu;
                    break;
                case 0x80291b1cu:
                    r5 = 0x80392d40u;
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
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
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0x504u;
            a.r[1] = 0x80392e34u;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            (void)tc_call(0x8028cc6cu, &a);
        }
    } while (0);
    a.r[0] = 0x17u;
    a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
    a.r[2] = (u32)param_1 + 8u;
    (void)tc_call(0x8028d598u, &a);
    a.r[0] = 0x17u;
    a.r[1] = (u32)rd8((u32)param_1 + 0x15u);
    a.r[2] = (u32)param_1 + 8u;
    f1 = tc_callf(0x8028d564u, &a);
    a.r[0] = (u32)rd16((u32)param_1 + 0x10u);
    a.r[1] = 0x817fdfdcu;
    a.r[2] = 0x8053d728u;
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
    (void)tc_call(rd32(0x8053d94cu), &a);
    wr16((u32)param_1 + 0x10u, 0u);
    a.r[0] = 0x817fdfd8u;
    (void)tc_call(0x8028d9f0u, &a);
    return;
}
