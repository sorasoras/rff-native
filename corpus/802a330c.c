#include "tc_rt.h"

u32 fn_802a330c(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0u;
    a.r[1] = param_1;
    a.r[2] = 0x20u;
    a.r[3] = param_2;
    a.r[4] = 0x11u;
    a.r[5] = 6u;
    a.r[6] = 1u;
    r3 = tc_call(0x8029a7c8u, &a);
    f1 = tc_lastf();
    if ((r3 & 0xffu) == 0u) {
        if ((u32)rd8(0x80540a19u) >= 1u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x1e0000u;
            a.r[1] = 0x80395104u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x8028cc54u, &a);
        }
        r3 = 3u;
    } else {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 1u;
        a.r[1] = param_1;
        a.r[2] = 0x20u;
        a.r[3] = param_2;
        a.r[4] = 0x11u;
        a.r[5] = 6u;
        a.r[6] = 1u;
        r3 = tc_call(0x8029a7c8u, &a);
        f1 = tc_lastf();
        if ((r3 & 0xffu) == 0u) {
            if ((u32)rd8(0x80540a19u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1e0000u;
                a.r[1] = 0x80395124u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
            r3 = 3u;
        } else {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0u;
            a.r[1] = param_1;
            a.r[2] = 0x21u;
            a.r[3] = 0u;
            a.r[4] = 0x11u;
            a.r[5] = 6u;
            a.r[6] = 2u;
            r3 = tc_call(0x8029a7c8u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) == 0u) {
                if ((u32)rd8(0x80540a19u) >= 1u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x1e0000u;
                    a.r[1] = 0x80395144u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
                r3 = 3u;
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 1u;
                a.r[1] = param_1;
                a.r[2] = 0x21u;
                a.r[3] = 0u;
                a.r[4] = 0x11u;
                a.r[5] = 6u;
                a.r[6] = 2u;
                r3 = tc_call(0x8029a7c8u, &a);
                f1 = tc_lastf();
                if ((r3 & 0xffu) == 0u) {
                    if ((u32)rd8(0x80540a19u) >= 1u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0x1e0000u;
                        a.r[1] = 0x80395164u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        (void)tc_call(0x8028cc54u, &a);
                    }
                    r3 = 3u;
                } else {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 1u;
                    a.r[1] = param_1;
                    a.r[2] = 0x22u;
                    a.r[3] = 0u;
                    a.r[4] = 0x13u;
                    a.r[5] = 6u;
                    a.r[6] = 0u;
                    r3 = tc_call(0x8029a7c8u, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) == 0u) {
                        if ((u32)rd8(0x80540a19u) >= 1u) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x1e0000u;
                            a.r[1] = 0x80395184u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            (void)tc_call(0x8028cc54u, &a);
                        }
                        r3 = 3u;
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0u;
                        a.r[1] = param_1;
                        a.r[2] = 0x22u;
                        a.r[3] = 0u;
                        a.r[4] = 0x13u;
                        a.r[5] = 6u;
                        a.r[6] = 0u;
                        r3 = tc_call(0x8029a7c8u, &a);
                        f1 = tc_lastf();
                        if ((r3 & 0xffu) == 0u) {
                            if ((u32)rd8(0x80540a19u) >= 1u) {
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                a.f[4] = 0.0;
                                a.f[5] = 0.0;
                                a.f[6] = 0.0;
                                a.f[7] = 0.0;
                                a.r[0] = 0x1e0000u;
                                a.r[1] = 0x803951a4u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                (void)tc_call(0x8028cc54u, &a);
                            }
                            r3 = 3u;
                        } else {
                            r3 = 0u;
                        }
                    }
                }
            }
        }
    }
    return r3;
}
