#include "tc_rt.h"

u32 fn_800c9a9c(s32 param_1, s32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    c0lt = param_2 < 185;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)param_2 == 0xb9u) {
        wr32((u32)param_1 + 0x49cu, 6u);
    } else {
        if (!c0lt) {
            c0lt = param_2 < 360;
            if ((u32)param_2 == 0x168u) {
                wr32((u32)param_1 + 0x49cu, 0xau);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 542;
                if ((u32)param_2 == 0x21eu) {
                    wr32((u32)param_1 + 0x49cu, 0xbu);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if (param_2 >= 544) {
                        r3 = 2u;
                        return r3;
                    }
                    wr32((u32)param_1 + 0x49cu, 0xbu);
                    wr32((u32)param_1 + 0x4a0u, rd32(param_3));
                    r3 = 0u;
                    return r3;
                }
                if ((u32)param_2 == 0x185u) {
                    wr32((u32)param_1 + 0x49cu, 5u);
                    wr32((u32)param_1 + 0x4a0u, rd32(param_3));
                    r3 = 0u;
                    return r3;
                }
                r3 = 2u;
                return r3;
            }
            c0lt = param_2 < 338;
            if ((u32)param_2 == 0x152u) {
                wr32((u32)param_1 + 0x49cu, 9u);
                r3 = 0u;
                return r3;
            }
            if (c0lt) {
                if ((u32)param_2 == 0xd4u) {
                    wr32((u32)param_1 + 0x49cu, 8u);
                    r3 = 0u;
                    return r3;
                }
                r3 = 2u;
                return r3;
            }
            if ((u32)param_2 != 0x165u) {
                r3 = 2u;
                return r3;
            }
        } else {
            c0lt = param_2 < 92;
            if ((u32)param_2 == 0x5cu) {
                a.r[0] = rd32(param_3);
                r3 = tc_call(0x800a4140u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r3;
                (void)tc_call(0x800c9a44u, &a);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 96;
                if ((u32)param_2 == 0x60u) {
                    wr32((u32)param_1 + 0x49cu, 0u);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if ((u32)param_2 == 0xa4u) {
                        wr32((u32)param_1 + 0x49cu, 5u);
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 2u;
                    return r3;
                }
                c0lt = param_2 < 94;
                if ((u32)param_2 == 0x5eu) {
                    a.f[0] = param_f1;
                    a.f[1] = param_f2;
                    a.f[2] = param_f3;
                    a.f[3] = param_f4;
                    a.f[4] = param_f5;
                    a.f[5] = param_f6;
                    a.f[6] = param_f7;
                    a.f[7] = param_f8;
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = rd32(param_3);
                    a.r[2] = 0x20u;
                    a.r[4] = param_r7;
                    a.r[5] = param_r8;
                    a.r[6] = param_r9;
                    a.r[7] = param_r10;
                    (void)tc_call(0x80079e9cu, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x800c9a44u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    r3 = 2u;
                    return r3;
                }
                a.r[0] = rd32(param_3);
                r3 = tc_call(0x800a41b0u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = r3;
                (void)tc_call(0x800c9a44u, &a);
                r3 = 0u;
                return r3;
            }
            c0lt = param_2 < 3;
            if ((u32)param_2 == 3u) {
                r3 = 2u;
                return r3;
            }
            if (!c0lt) {
                if (param_2 >= 91) {
                    a.r[0] = rd32(param_3);
                    r3 = tc_call(0x800a4050u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r3;
                    (void)tc_call(0x800c9a44u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (param_2 >= 5) {
                    r3 = 2u;
                    return r3;
                }
            } else {
                c0lt = param_2 < -2;
                if ((u32)param_2 != 0xfffffffeu) {
                    if (c0lt) {
                        r3 = 2u;
                        return r3;
                    }
                    if (param_2 >= 2) {
                        wr32((u32)param_1 + 0x49cu, 2u);
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 2u;
                    return r3;
                }
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.r[3] = param_r6;
        (void)tc_call(0x800c9714u, &a);
    }
    r3 = 0u;
    return r3;
}
