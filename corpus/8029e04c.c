#include "tc_rt.h"

void fn_8029e04c(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0;
    TcArgs a = {0};
    c0lt = (s32)param_1 < 3092;
    if (param_1 == 0xc14u) {
        a.r[0] = param_2;
        (void)tc_call(0x802964b4u, &a);
        return;
    }
    if (!c0lt) {
        c0lt = (s32)param_1 < 4105;
        if (param_1 == 0x1009u) {
            a.r[0] = param_2;
            (void)tc_call(0x80296580u, &a);
            return;
        }
        if (!c0lt) {
            c0lt = (s32)param_1 < 5124;
            if (param_1 != 0x1404u) {
                if (!c0lt) {
                    if ((s32)param_1 < 5126) {
                        a.r[0] = param_2;
                        (void)tc_call(0x802949a4u, &a);
                        return;
                    }
                } else if ((s32)param_1 >= 5123) {
                    a.r[0] = param_2;
                    (void)tc_call(0x80294ac0u, &a);
                    return;
                }
            }
        } else {
            c0lt = (s32)param_1 < 4099;
            if (param_1 == 0x1003u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = param_2;
                a.r[3] = param_1;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x80295f00u, &a);
                return;
            }
            if (!c0lt) {
                if (param_1 == 0x1005u) {
                    a.r[0] = param_2;
                    (void)tc_call(0x80295d7cu, &a);
                    return;
                }
            } else if (param_1 == 0x1001u) {
                a.r[0] = param_2;
                (void)tc_call(0x80295e44u, &a);
                return;
            }
        }
    } else {
        c0lt = (s32)param_1 < 3077;
        if (param_1 == 0xc05u) {
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = param_2;
            a.r[3] = param_1;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            (void)tc_call(0x80298250u, &a);
            return;
        }
        if (!c0lt) {
            c0lt = (s32)param_1 < 3089;
            if (param_1 == 0xc11u) {
                a.r[0] = param_2;
                (void)tc_call(0x80296c98u, &a);
                return;
            }
            if (!c0lt) {
                if ((s32)param_1 < 3091) {
                    a.r[0] = param_2;
                    (void)tc_call(0x80296cf4u, &a);
                    return;
                }
            } else if (param_1 == 0xc0du) {
                a.r[0] = param_2;
                (void)tc_call(0x80296c1cu, &a);
                return;
            }
        } else {
            c0lt = (s32)param_1 < 2060;
            if (param_1 == 0x80cu) {
                a.r[0] = param_2;
                (void)tc_call(0x80293bd8u, &a);
                return;
            }
            if (!c0lt) {
                if (param_1 == 0xc03u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[2] = param_3;
                    a.r[3] = param_1;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x80295bb8u, &a);
                    return;
                }
            } else if (param_1 == 0x402u) {
                a.f[0] = param_f1;
                a.f[1] = param_f2;
                a.f[2] = param_f3;
                a.f[3] = param_f4;
                a.f[4] = param_f5;
                a.f[5] = param_f6;
                a.f[6] = param_f7;
                a.f[7] = param_f8;
                a.r[0] = 0u;
                a.r[4] = param_r7;
                a.r[5] = param_r8;
                a.r[6] = param_r9;
                a.r[7] = param_r10;
                (void)tc_call(0x802986e8u, &a);
                return;
            }
        }
    }
    if ((param_1 & 0xfc00u) != 0xfc00u) {
        return;
    }
    a.r[0] = param_2;
    a.r[1] = param_1;
    a.r[2] = param_3;
    (void)tc_call(0x802967c8u, &a);
    return;
}
