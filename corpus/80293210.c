#include "tc_rt.h"

void fn_80293210(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 ctr = 0, fl_ = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r29 = 0x8053d98cu;
    r31 = 0u;
    for (;;) {
        if ((u32)rd8(r29 + 0x119u) != 0u) {
            a.r[0] = r29 + 8u;
            a.r[1] = param_1;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            f1 = tc_lastf();
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if (r3 == 0u) break;
        }
        r31 = r31 + 1u;
        r29 = r29 + 0x11cu;
        if (r31 >= 4u) {
            r29 = 0u;
            break;
        }
    }
    if (r29 == 0u) {
        r4 = 0u;
        r31 = 0x8053d98cu;
        ctr = 4u;
        while ((u32)rd8(r31 + 0x119u) != 0u) {
            r4 = r4 + 1u;
            r31 = r31 + 0x11cu;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return;
            }
        }
        wr8(r31 + 0x119u, 1u);
        wr16(r31, (u16)param_4);
        wr8(r31 + 0x11au, (u8)param_5);
        wr16(r31 + 4u, 0u);
        a.r[0] = r4 & 0xffu;
        (void)tc_call(0x80298eecu, &a);
        a.r[0] = r31 + 8u;
        a.r[1] = param_1;
        a.r[2] = 6u;
        (void)tc_call(0x80004338u, &a);
        if (param_2 != 0u) {
            a.r[0] = r31 + 0xeu;
            a.r[1] = param_2;
            a.r[2] = 3u;
            (void)tc_call(0x80004338u, &a);
        }
        if ((u32)param_3 != 0u) {
            a.r[0] = r31 + 0x11u;
            a.r[1] = (u32)param_3;
            a.r[2] = 0xf8u;
            (void)tc_call(0x80004338u, &a);
        }
        a.r[0] = (u32)rd16(r31);
        (void)tc_call(0x802a0870u, &a);
        a.r[0] = (u32)rd16(r31);
        (void)tc_call(0x802a07f4u, &a);
        a.r[0] = param_4;
        r3 = tc_call(0x802952a8u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)rd16(r31);
            (void)tc_call(0x802a0778u, &a);
        } else {
            r6 = 0u;
            ctr = 8u;
            while ((u32)rd8(r3 + (r6 & 0xffu) + 0x77u) == 0u) {
                r6 = r6 + 1u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    a.r[0] = (u32)rd16(r31);
                    (void)tc_call(0x802a0778u, &a);
                    return;
                }
            }
            a.r[0] = r31 + 0x110u;
            a.r[1] = r3 + 0x77u;
            a.r[2] = 8u;
            f1 = tc_callf(0x80004338u, &a);
            r5 = (u32)rd16(0x8053dfacu);
            r4 = r5 & 0xcc18u;
            r30 = r4 & 0xffffccf9u;
            if ((u32)rd8(0x8053df8eu) >= 3u) {
                r30 = (r4 | (r5 & 0x3306u)) & 0xffffu;
            }
            if ((u32)rd8(0x80540118u) >= 4u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xd0003u;
                a.r[1] = 0x80393670u;
                a.r[2] = r30 & 0xffffu;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc6cu, &a);
            }
            a.r[0] = (u32)rd16(r31);
            a.r[1] = r30 & 0xffffu;
            r3 = tc_call(0x802a0468u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) != 0u) {
                wr16(r31 + 2u, (u16)r30);
            }
            if ((u32)rd16(0x8053de1cu) != 0u) {
                a.r[0] = r31 + 8u;
                a.r[1] = 0x8053de1cu;
                f1 = tc_callf(0x802939d8u, &a);
            }
            r29 = 0u;
            r28 = (u32)rd16(0x8053de1eu);
            r30 = 0x8053d98cu;
            for (;;) {
                if ((u32)rd8(r30 + 0x119u) != 0u) {
                    a.r[0] = r30 + 8u;
                    a.r[1] = r31 + 8u;
                    a.r[2] = 6u;
                    r3 = tc_call(0x802592d8u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        fl_ = 1u;
                        break;
                    }
                }
                r29 = r29 + 1u;
                r30 = r30 + 0x11cu;
                if (r29 >= 4u) {
                    fl_ = 2u;
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
                r30 = 0u;
            } while (0);
            if (r30 != 0u) {
                wr16(r30 + 0x10eu, (u16)r28);
                if ((u32)rd8(r30 + 0x11au) == 0u) {
                    a.r[0] = (u32)rd16(r30);
                    a.r[1] = r28;
                    f1 = tc_callf(0x802a1968u, &a);
                }
            }
            r12 = rd32(0x8053de20u);
            if (r12 != 0u) {
                a.r[0] = r31 + 8u;
                a.r[1] = r31 + 0xeu;
                a.r[2] = r31 + 0x11u;
                a.r[3] = r31 + 0x110u;
                a.r[4] = 1u;
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
            }
        }
    } else {
        wr16(r29, (u16)param_4);
        wr8(r29 + 0x11au, (u8)param_5);
        if ((u32)rd8(0x80540118u) >= 4u) {
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = 0xd0003u;
            a.r[1] = 0x80393630u;
            a.r[2] = (u32)rd8(param_1);
            a.r[3] = (u32)rd8(param_1 + 1u);
            a.r[4] = (u32)rd8(param_1 + 2u);
            a.r[5] = (u32)rd8(param_1 + 3u);
            a.r[6] = (u32)rd8(param_1 + 4u);
            a.r[7] = (u32)rd8(param_1 + 5u);
            (void)tc_call(0x8028cce4u, &a);
        }
    }
    return;
}
