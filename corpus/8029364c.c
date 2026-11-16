#include "tc_rt.h"

void fn_8029364c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r27 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (((u32)rd8(0x8053df98u) & 0x20u) != 0u) {
        r31 = 0x8053d98cu;
        r27 = 0u;
        for (;;) {
            if ((u32)rd8(r31 + 0x119u) != 0u) {
                a.r[0] = r31 + 8u;
                a.r[1] = param_1;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 == 0u) break;
            }
            r27 = r27 + 1u;
            r31 = r31 + 0x11cu;
            if (r27 >= 4u) {
                r31 = 0u;
                break;
            }
        }
        if (r31 != 0u && (u32)rd8(r31 + 0x11au) != param_2) {
            a.r[0] = param_1;
            r3 = tc_call(0x8029a574u, &a);
            f1 = tc_lastf();
            if ((r3 & 0xffu) != 1u) {
                if ((u32)rd8(r31 + 0x11bu) == 0u) {
                    a.r[0] = 0x8053df7cu;
                    a.r[1] = 0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x8000443cu, &a);
                    a.r[0] = r31 + 8u;
                    a.r[1] = 0x817fdfd8u;
                    r3 = tc_call(0x80298dbcu, &a);
                    if ((r3 & 0xffu) == 0u) {
                        if ((((u32)rd8(0x817fdfd8u) + 0xfeu) & 0xffu) > 1u) {
                            a.r[0] = param_1;
                            r3 = tc_call(0x80295360u, &a);
                            if (r3 == 0u || ((u32)rd8(r3 + 0x76u) & 4u) == 0u) {
                                a.r[0] = param_1;
                                a.r[1] = param_2;
                                r3 = tc_call(0x802a0e6cu, &a);
                                if ((r3 & 0xffu) == 0u) {
                                    return;
                                }
                                wr8(r31 + 0x11bu, 5u);
                            } else {
                                a.r[0] = (u32)rd16(r31);
                                a.r[1] = 0u;
                                r3 = tc_call(0x802a0574u, &a);
                                if ((r3 & 0xffu) == 0u) {
                                    return;
                                }
                                wr8(r31 + 0x11bu, 2u);
                            }
                        } else {
                            wr8(0x817fdfe4u, 0u);
                            a.r[0] = 0x80u;
                            a.r[1] = r31 + 8u;
                            a.r[2] = 0x817fdfdcu;
                            r3 = tc_call(0x80298becu, &a);
                            if ((r3 & 0xffu) != 1u) {
                                return;
                            }
                            wr8(r31 + 0x11bu, 1u);
                        }
                        a.r[0] = 0x8053df7eu;
                        a.r[1] = param_1;
                        a.r[2] = 6u;
                        (void)tc_call(0x80004338u, &a);
                        wr8(0x8053df7du, (u8)param_2);
                        wr32(0x8053df84u, param_3);
                    }
                } else if ((u32)rd8(0x80540118u) >= 5u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0xd0004u;
                    a.r[1] = 0x80393690u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8028cc54u, &a);
                }
            }
        }
    }
    return;
}
