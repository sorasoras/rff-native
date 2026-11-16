#include "tc_rt.h"

void fn_8029e2bc(u32 param_1, s32 param_2, s32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = (s32)param_1 < 2050;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (param_1 != 0x802u) {
        if (!c0lt) {
            if ((s32)param_1 < 2055) {
                a.r[0] = (u32)param_2;
                (void)tc_call(0x802994ecu, &a);
                return;
            }
        } else if ((s32)param_1 >= 2049) {
            a.r[0] = (u32)param_2;
            (void)tc_call(0x802994ecu, &a);
            return;
        }
    }
    if ((u32)param_2 != 0u) {
        c0lt = (s32)param_1 < 1049;
        if (param_1 == 0x419u) {
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            a.r[3] = (u32)param_2;
            f1 = tc_callf(0x8029893cu, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[1] = 0u;
            a.r[2] = (u32)param_2;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8029b998u, &a);
        } else {
            if (!c0lt) {
                c0lt = (s32)param_1 < 2059;
                if (param_1 == 0x80bu) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_2;
                    a.r[1] = 0u;
                    a.r[2] = 0xffu;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x80294220u, &a);
                    (void)tc_call(0x802a861cu, &a);
                    return;
                }
                if (c0lt && param_1 == 0x428u) {
                    if ((u32)param_3 == 0u) {
                        return;
                    }
                    r31 = ((u32)rd8((u32)param_3 + 1u) + (((u32)rd8((u32)param_3 + 2u) << 8u) & 0xffffff00u)) & 0xffffu;
                    a.r[0] = r31;
                    r3 = tc_call(0x8029a4a4u, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) == 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = (u32)param_2;
                        a.r[1] = 0u;
                        a.r[2] = r31;
                        a.r[3] = 0x817fdfe0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x80299d50u, &a);
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = (u32)param_2;
                    a.r[1] = r31;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8029a3a0u, &a);
                    return;
                }
            } else {
                c0lt = (s32)param_1 < 1025;
                if (param_1 == 0x401u) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = (u32)param_2;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x802986e8u, &a);
                    return;
                }
                if (!c0lt) {
                    if (param_1 == 0x405u) {
                        if ((u32)param_3 == 0u) {
                            return;
                        }
                        wr8(0x817fdfddu, rd8((u32)param_3 + 1u));
                        wr8(0x817fdfdcu, rd8((u32)param_3 + 2u));
                        wr8(0x817fdfdbu, rd8((u32)param_3 + 3u));
                        wr8(0x817fdfdau, rd8((u32)param_3 + 4u));
                        wr8(0x817fdfd9u, rd8((u32)param_3 + 5u));
                        wr8(0x817fdfd8u, rd8((u32)param_3 + 6u));
                        a.r[0] = 0x817fdfd8u;
                        a.r[1] = 0xffffu;
                        a.r[2] = (u32)param_2;
                        a.r[3] = 0u;
                        (void)tc_call(0x8029c23cu, &a);
                        a.r[0] = (u32)param_2;
                        a.r[1] = 0xffffu;
                        a.r[2] = 0x817fdfd8u;
                        (void)tc_call(0x802a7770u, &a);
                        return;
                    }
                } else if (param_1 == 0xdu) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x80294654u, &a);
                    return;
                }
            }
            if ((param_1 & 0xfc00u) == 0xfc00u) {
                a.r[0] = (u32)param_3;
                a.r[1] = param_1;
                a.r[2] = 1u;
                (void)tc_call(0x802967c8u, &a);
            }
        }
    }
    return;
}
