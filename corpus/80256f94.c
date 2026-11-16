#include "tc_rt.h"

void fn_80256f94(s32 param_1)
{
    u32 c0lt = 0, ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    u32 r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x290u);
    a.r[1] = 0x817fdfa0u;
    f1 = tc_callf(0x802560acu, &a);
    if (rd32(0x817fdfa0u) == 0u) {
        f1 = tc_callf(0x8025521cu, &a);
    }
    if ((((u32)rd16(rd32(0x817fdfa0u)) >> 4u) & 1u) == 0u) {
        r3 = rd32((u32)param_1 + 0x284u);
    } else {
        r3 = rd32((u32)param_1 + 0x27cu);
    }
    r0 = rd32((u32)param_1 + 0x294u);
    wr32((u32)param_1 + 0x288u, r3);
    if (r0 != 0u) {
        wr32((u32)param_1 + 0x2a0u, 0u);
    } else {
        r5 = rd32(0x817fdfa8u);
        r6 = rd32(0x817fdfa4u);
        r4 = rd32(0x817fdfacu);
        r3 = rd32(0x817fdfb0u);
        r0 = rd32(0x817fdfb4u);
        wr32(0x817fdfb8u, rd32(0x817fdfa0u));
        wr32(0x817fdfbcu, r6);
        wr32(0x817fdfc0u, r5);
        wr32(0x817fdfc4u, r4);
        wr32(0x817fdfc8u, r3);
        wr32(0x817fdfccu, r0);
        wr32(0x817fdfd0u, rd32((u32)param_1 + 0x284u));
        wr32(0x817fdfd4u, rd32((u32)param_1 + 0x288u));
        wr32(0x817fdfd8u, rd32((u32)param_1 + 0x27cu));
        if (r5 != 0u) {
            r3 = (u32)rd8(r5) & 0x7fu;
        } else {
            r3 = 0u;
        }
        for (;;) {
            r0 = r3 & 0xffu;
            c0lt = (s32)r0 < 13;
            if (r0 == 0xdu) {
                fl_ = 1u;
                break;
            }
            if (!c0lt) {
                if ((s32)r0 >= 17 || (s32)r0 < 15) {
                    fl_ = 2u;
                    break;
                }
            } else {
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    fl_ = 2u;
                    break;
                }
                if (c0lt && (s32)r0 < 0) {
                    fl_ = 2u;
                    break;
                }
            }
            a.r[0] = 0x817fdfb8u;
            r3 = tc_call(0x8025625cu, &a);
            f1 = tc_lastf();
        }
        do {
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
            f1 = tc_callf(0x8025521cu, &a);
        } while (0);
        r4 = rd32(0x817fdfd4u) + (u32)(s16)rd16(rd32(0x817fdfc0u) + 2u);
        wr32((u32)param_1 + 0x294u, rd32(r4 + 4u));
        wr32((u32)param_1 + 0x298u, rd32(r4));
        wr32((u32)param_1 + 0x29cu, 0u);
        wr32((u32)param_1 + 0x2a0u, r4);
    }
    r5 = rd32(0x817fdfa8u);
    r7 = rd32(0x817fdfa0u);
    r6 = rd32(0x817fdfa4u);
    r4 = rd32(0x817fdfacu);
    r3 = rd32(0x817fdfb0u);
    r0 = rd32(0x817fdfb4u);
    wr32(0x817fdfb8u, r7);
    wr32(0x817fdfbcu, r6);
    wr32(0x817fdfc0u, r5);
    wr32(0x817fdfc4u, r4);
    wr32(0x817fdfc8u, r3);
    wr32(0x817fdfccu, r0);
    wr32(0x817fdfd0u, rd32((u32)param_1 + 0x284u));
    wr32(0x817fdfd4u, rd32((u32)param_1 + 0x288u));
    wr32(0x817fdfd8u, rd32((u32)param_1 + 0x27cu));
    if (r5 != 0u) {
        r26 = (u32)rd8(r5) & 0x7fu;
    } else {
        r26 = 0u;
    }
    for (;;) {
        r0 = r26 & 0xffu;
        if (r0 > 0x10u) {
            (void)tc_call(0x8025521cu, &a);
            break;
        }
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc71798u);
        sw_ = r3;
        switch (sw_) {
        case 0x80257248u:
            fl_ = 4u;
            break;
        case 0x80257240u:
            (void)tc_call(0x8025521cu, &a);
            fl_ = 3u;
            break;
        case 0x80257178u:
            a.r[0] = rd32((u32)param_1 + 0x294u);
            a.r[1] = rd32(rd32(0x817fdfc0u) + 4u);
            a.r[2] = 0x817fdf9cu;
            r3 = tc_call(0x80255228u, &a);
            if ((u32)(s8)r3 != 0u) {
                fl_ = 3u;
                break;
            }
            fl_ = 4u;
            break;
        case 0x80257198u:
            r28 = rd32(0x817fdfc0u);
            r27 = 0u;
            r29 = rd32((u32)param_1 + 0x294u);
            r26 = r28;
            for (;;) {
                if ((s32)r27 >= (s32)rd16(r28 + 2u)) {
                    fl_ = 5u;
                    break;
                }
                a.r[0] = r29;
                a.r[1] = rd32(r26 + 0xcu);
                a.r[2] = 0x817fdf98u;
                r3 = tc_call(0x80255228u, &a);
                if ((u32)(s8)r3 != 0u) {
                    fl_ = 6u;
                    break;
                }
                r26 = r26 + 4u;
                r27 = r27 + 1u;
            }
            do {
                if (fl_ == 6u) {
                    fl_ = 0u;
                } else if (fl_ == 5u) {
                    fl_ = 0u;
                    break;
                }
                r0 = 1u;
                fl_ = 7u;
                break;
            } while (0);
            if (fl_ == 7u) {
                fl_ = 0u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                fl_ = 4u;
                break;
            }
            r27 = rd32(0x817fdfc0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfa0u;
            a.r[2] = r27;
            (void)tc_call(0x80256984u, &a);
            r5 = rd32((u32)param_1 + 0x288u);
            r4 = rd32(r27 + 8u);
            wr32(r4 + r5, rd32((u32)param_1 + 0x298u));
            r4 = r4 + r5;
            wr32(r4 + 4u, rd32((u32)param_1 + 0x294u));
            wr32(r4 + 8u, rd32((u32)param_1 + 0x29cu));
            wr32(r4 + 0x14u, r27);
            a.r[0] = (u32)param_1;
            a.r[1] = rd32(0x817fdfb4u);
            a.r[2] = rd32(0x817fdfa4u) + rd32(r27 + 4u);
            (void)tc_call(0x80256e90u, &a);
            fl_ = 4u;
            break;
        case 0x80257158u:
            a.r[0] = rd32((u32)param_1 + 0x294u);
            a.r[1] = rd32(rd32(0x817fdfc0u) + 4u);
            a.r[2] = 0x817fdf9cu;
            r3 = tc_call(0x80255228u, &a);
            if ((u32)(s8)r3 != 0u) {
                fl_ = 3u;
                break;
            }
            fl_ = 4u;
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
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
            return;
        }
        if (fl_ == 4u) {
            fl_ = 0u;
        } else if (fl_ == 3u) {
            fl_ = 0u;
            break;
        }
        a.r[0] = 0x817fdfb8u;
        r3 = tc_call(0x8025625cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r26 = r3;
    }
    if ((r26 & 0xffu) != 0x10u) {
        r31 = rd32(0x817fdfc0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = r31;
        (void)tc_call(0x80256984u, &a);
        r4 = rd32((u32)param_1 + 0x288u);
        r3 = (u32)(s16)rd16(r31 + 0xau);
        wr32(r4 + r3, rd32((u32)param_1 + 0x298u));
        r4 = r4 + r3;
        wr32(r4 + 4u, rd32((u32)param_1 + 0x294u));
        wr32(r4 + 8u, rd32((u32)param_1 + 0x29cu));
        if ((u32)rd8(rd32((u32)param_1 + 0x294u)) != 0x2au) {
            wr32(r4 + 0xcu, rd32((u32)param_1 + 0x298u) + rd32(0x817fdf9cu));
        } else {
            wr32(r4 + 0xcu, r4 + 0x10u);
            wr32(r4 + 0x10u, rd32(rd32((u32)param_1 + 0x298u)) + rd32(0x817fdf9cu));
        }
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfb4u);
        a.r[2] = rd32(0x817fdfa4u) + (u32)rd16(r31 + 8u);
        (void)tc_call(0x80256e90u, &a);
    } else {
        r31 = rd32(0x817fdfc0u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = r31;
        (void)tc_call(0x80256984u, &a);
        r4 = rd32((u32)param_1 + 0x288u);
        r3 = rd32(r31 + 0xcu);
        wr32(r4 + r3, rd32((u32)param_1 + 0x298u));
        r4 = r4 + r3;
        wr32(r4 + 4u, rd32((u32)param_1 + 0x294u));
        wr32(r4 + 8u, rd32((u32)param_1 + 0x29cu));
        if ((u32)rd8(rd32((u32)param_1 + 0x294u)) != 0x2au) {
            wr32(r4 + 0xcu, rd32((u32)param_1 + 0x298u) + rd32(0x817fdf9cu));
        } else {
            wr32(r4 + 0xcu, r4 + 0x10u);
            wr32(r4 + 0x10u, rd32(rd32((u32)param_1 + 0x298u)) + rd32(0x817fdf9cu));
        }
        a.r[0] = (u32)param_1;
        a.r[1] = rd32(0x817fdfb4u);
        a.r[2] = rd32(0x817fdfa4u) + rd32(r31 + 8u);
        (void)tc_call(0x80256e90u, &a);
    }
    return;
}
