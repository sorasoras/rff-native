#include "tc_rt.h"

void fn_80274cc0(s32 param_1)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r7 = 0x80503780u;
    r0 = (u32)rd8(0x805038d8u);
    if (r0 <= 9u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc706e8u);
        sw_ = r4;
        switch (sw_) {
        case 0x80274d00u:
            if ((u32)param_1 != 0u || (u32)rd8(0x805038d0u) != 1u) {
                fl_ = 2u;
                break;
            }
            wr8(0x805038d8u, 1u);
            a.r[0] = 0x8033dde8u;
            a.r[1] = 0x805038d0u;
            a.r[2] = 0x80274cc0u;
            a.r[3] = 0x80503814u;
            r3 = tc_call(0x802718ccu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r7 = 0u;
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            return;
        case 0x80274d44u:
            if ((u32)param_1 != 0u || (u32)rd8(0x805038d7u) != 0x3fu) {
                fl_ = 2u;
                break;
            }
            fl_ = 3u;
            break;
        case 0x80274d84u:
            wr8(0x805038d8u, 3u);
            a.r[0] = 0x8033ddd8u;
            a.r[1] = 0x805038d0u;
            a.r[2] = 0x80274cc0u;
            a.r[3] = 0x80503814u;
            r3 = tc_call(0x80272ca0u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r7 = 0u;
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            return;
        case 0x80274db4u:
            if ((u32)param_1 != 0u || (u32)rd8(0x805038d0u) != 2u) {
                wr8(0x805038d8u, 4u);
                a.r[0] = 0x8033ddd8u;
                a.r[1] = 0x3fu;
                a.r[2] = 0u;
                a.r[3] = 0x80274cc0u;
                a.r[4] = 0x80503814u;
                r3 = tc_call(0x802714e4u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r7 = 0u;
                if (r3 != 0u) {
                    fl_ = 1u;
                    break;
                }
                return;
            }
            fl_ = 4u;
            break;
        case 0x80274dfcu:
            fl_ = 4u;
            break;
        case 0x80274e30u:
            fl_ = 3u;
            break;
        case 0x80274e64u:
            if ((u32)param_1 != 0u) {
                fl_ = 1u;
                break;
            }
            wr8(0x805038d9u, 1u);
            r5 = rd32(0x8050390cu);
            wr8(0x805038d8u, 7u);
            a.r[0] = 0x80503788u;
            a.r[1] = 0x80507920u;
            a.r[2] = r5;
            a.r[3] = 0x80274cc0u;
            a.r[4] = 0x80503814u;
            r3 = tc_call(0x80271290u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r7 = 0u;
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            return;
        case 0x80274ea8u:
            if ((u32)param_1 != rd32(0x8050390cu)) {
                fl_ = 1u;
                break;
            }
            wr8(0x805038d9u, 0u);
            wr8(0x805038d8u, 8u);
            a.r[0] = 0x80503788u;
            a.r[1] = 0x80274cc0u;
            a.r[2] = 0x80503814u;
            r3 = tc_call(0x80271d50u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r7 = 0u;
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            return;
        case 0x80274ee4u:
            if ((u32)param_1 != 0u) {
                fl_ = 1u;
                break;
            }
            fl_ = 5u;
            break;
        case 0x80274eecu:
            fl_ = 5u;
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0x80503780u;
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
        do {
            if (fl_ == 5u) {
                fl_ = 0u;
                fl_ = 6u;
                break;
            }
            if (fl_ != 4u) {
                if (fl_ == 3u) {
                    fl_ = 0u;
                    break;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    fl_ = 7u;
                    break;
                }
                wr8(0x805038d8u, 2u);
                a.r[0] = 0x8033dde8u;
                a.r[1] = 0x80274cc0u;
                a.r[2] = 0x80503814u;
                r3 = tc_call(0x80271088u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r7 = 0u;
                if (r3 != 0u) {
                    fl_ = 7u;
                    break;
                }
                return;
            }
            fl_ = 0u;
            wr8(0x805038d8u, 5u);
            a.r[0] = 0x8033dde8u;
            a.r[1] = 0x3fu;
            a.r[2] = 0u;
            a.r[3] = 0x80274cc0u;
            a.r[4] = 0x80503814u;
            r3 = tc_call(0x80270ec8u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r7 = 0u;
            if (r3 != 0u) {
                fl_ = 7u;
                break;
            }
            return;
        } while (0);
        do {
            if (fl_ == 7u) {
                fl_ = 0u;
            } else {
                if (fl_ == 6u) {
                    fl_ = 0u;
                    break;
                }
                wr8(0x805038d8u, 6u);
                a.r[0] = 0x8033dde8u;
                a.r[1] = 0x80503788u;
                a.r[2] = 2u;
                a.r[3] = 0x80274cc0u;
                a.r[4] = 0x80503814u;
                r3 = tc_call(0x80271bf4u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r7 = 0u;
                if (r3 == 0u) {
                    return;
                }
            }
            r5 = 0x80503780u;
            r0 = (u32)rd8(0x805038d9u);
            wr32(0x80503908u, 2u);
            if (r0 != 0u) {
                wr8(0x805038d8u, 9u);
                a.r[0] = 0x80503788u;
                a.r[1] = 0x80274cc0u;
                a.r[2] = 0x80503814u;
                r3 = tc_call(0x80271d50u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r5 = 0u;
                r7 = 0u;
                if (r3 == 0u) {
                    return;
                }
            }
            if (rd32(0x80503908u) != 0u) {
                wr8(0x80571ac5u, 1u);
            }
            r12 = rd32(0x80503904u);
            if (r12 != 0u) {
                r3 = rd32(0x80503908u);
                wr32(0x80503904u, 0u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = r7;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                if (rd32(0x80503780u) != 0u) {
                    a.r[0] = 0x80503780u;
                    (void)tc_call(0x802300d0u, &a);
                }
            }
            wr8(0x80571ab0u, (u8)rd32(0x80503908u));
            return;
        } while (0);
        if (rd32(0x80503908u) != 0u) {
            wr8(0x80571ac5u, 1u);
        }
        r12 = rd32(0x80503904u);
        if (r12 != 0u) {
            r3 = rd32(0x80503908u);
            wr32(0x80503904u, 0u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0x80503780u;
            a.f[0] = 0.0;
            (void)tc_call(r12, &a);
            if (rd32(0x80503780u) != 0u) {
                a.r[0] = 0x80503780u;
                (void)tc_call(0x802300d0u, &a);
            }
        }
        wr8(0x80571ab0u, (u8)rd32(0x80503908u));
    }
    return;
}
