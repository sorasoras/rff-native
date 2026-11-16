#include "tc_rt.h"

void fn_80146794(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d595cu, &a);
    r31 = r3;
    if (rd32((u32)param_1 + 0xe20u) == 0u) {
        if (rd32((u32)param_1 + 0xe24u) != 0u) {
            if (rd32((u32)param_1 + 0xd8cu) != 0u) {
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)param_1 + 0xd98u;
                (void)tc_call(0x800d3858u, &a);
                r4 = rd32((u32)param_1 + 0xe28u);
                if (r4 == 0xffffffffu) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800d5bacu, &a);
                } else {
                    if ((s32)r4 >= 0) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = r4;
                        (void)tc_call(0x8010a75cu, &a);
                    }
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x800d5bacu, &a);
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d395cu, &a);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d48d4u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = (u32)rd8((u32)param_1 + 0xe2du);
                (void)tc_call(0x800d3830u, &a);
                a.f[0] = (f64)rdf32(0x805745e8u);
                a.f[1] = (f64)rdf32(0x805745ecu);
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d3824u, &a);
                r0 = (u32)rd8((u32)param_1 + 0xe2cu);
                if (r0 == 0u || r0 == 2u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 1u;
                    (void)tc_call(0x800d5c24u, &a);
                    wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) & 0xf7ffffffu);
                } else {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0u;
                    (void)tc_call(0x800d5c24u, &a);
                    wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) | 0x8000000u);
                }
            }
            wr32((u32)param_1 + 0xe24u, 0u);
        }
        r3 = rd32((u32)param_1 + 0xd8cu);
        if (r3 == 0u) {
            if ((u32)rd8((u32)param_1 + 0xe2cu) == 1u && r31 != 0u && r31 != 3u) {
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354174u);
                        }
                    } else {
                        r4 = rd32(0x80354140u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d3a7cu, &a);
                    return;
                }
            }
            r0 = rd32((u32)param_1 + 0xd90u);
            if (r0 != 0u) {
                r4 = 1u;
                if (r0 < 1u) {
                    r4 = r0;
                }
                wr32((u32)param_1 + 0xd90u, rd32((u32)param_1 + 0xd90u) - r4);
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80146e44u, &a);
                wr32((u32)param_1 + 0xd94u, r3);
                if (r3 < 0xau) {
                    r5 = (u32)param_1 + (r3 * 0x94u);
                    r0 = rd32(r5 + 0x73cu);
                    wr32((u32)param_1 + 0xd8cu, r0);
                    wr32((u32)param_1 + 0xd88u, r0);
                    wr8((u32)param_1 + 0xe2cu, rd8(r5 + 0x7cbu));
                    wr8((u32)param_1 + 0xe2du, rd8(r5 + 0x7ccu));
                    a.r[0] = (u32)param_1 + 0xd98u;
                    a.r[1] = r5 + 0x748u;
                    (void)tc_call(0x8025e7c0u, &a);
                    wr32((u32)param_1 + 0xe28u, rd32((u32)param_1 + (rd32((u32)param_1 + 0xd94u) * 0x94u) + 0x740u));
                    a.r[0] = (u32)param_1;
                    a.r[1] = (u32)param_1 + 0xd98u;
                    (void)tc_call(0x800d3858u, &a);
                    if (r31 == 0u || r31 == 3u) {
                        r4 = rd32((u32)param_1 + 0xe28u);
                        if (r4 == 0xffffffffu) {
                            a.r[0] = (u32)param_1;
                            a.r[1] = 1u;
                            (void)tc_call(0x800d5bacu, &a);
                        } else {
                            if ((s32)r4 >= 0) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = r4;
                                (void)tc_call(0x8010a75cu, &a);
                            }
                            a.r[0] = (u32)param_1;
                            a.r[1] = 0u;
                            (void)tc_call(0x800d5bacu, &a);
                        }
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800d395cu, &a);
                        a.r[0] = (u32)param_1;
                        a.r[1] = (u32)rd8((u32)param_1 + 0xe2du);
                        (void)tc_call(0x800d3830u, &a);
                        a.f[0] = (f64)rdf32(0x805745e8u);
                        a.f[1] = (f64)rdf32(0x805745ecu);
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800d3824u, &a);
                    }
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32((u32)param_1 + 0xd94u);
                    (void)tc_call(0x80146d8cu, &a);
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d48d4u, &a);
                    r0 = (u32)rd8((u32)param_1 + 0xe2cu);
                    if (r0 == 0u || r0 == 2u) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 1u;
                        (void)tc_call(0x800d5c24u, &a);
                        wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) & 0xf7ffffffu);
                    } else {
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        (void)tc_call(0x800d5c24u, &a);
                        wr32((u32)param_1 + 0x72cu, rd32((u32)param_1 + 0x72cu) | 0x8000000u);
                    }
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d3a7cu, &a);
                } else {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d3a7cu, &a);
                }
            } else {
                wr32((u32)param_1 + 0xd8cu, 0u);
                wr32((u32)param_1 + 0xd94u, 9u);
                wr16((u32)param_1 + 0xd98u, 0u);
                if (r31 != 0u && r31 != 3u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x800d39e0u, &a);
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x800d3a7cu, &a);
            }
        } else {
            wr32((u32)param_1 + 0xd8cu, r3 - 1u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d3a7cu, &a);
        }
    } else {
        if (r3 != 0u && r3 != 3u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800d39e0u, &a);
            r0 = (u32)rd8((u32)param_1 + 0xe2cu);
            if (r0 != 1u) {
                if (r0 != 0u) {
                    if (r0 == 2u) {
                        wr32((u32)param_1 + 0xd8cu, 0u);
                    }
                } else {
                    r4 = rd32((u32)param_1 + 0xd88u);
                    if (((r4 >> 1u) & 0x7fffffffu) <= rd32((u32)param_1 + 0xd8cu)) {
                        wr32((u32)param_1 + 0xd8cu, r4);
                    } else {
                        wr32((u32)param_1 + 0xd8cu, 0u);
                    }
                }
            } else {
                wr32((u32)param_1 + 0xd8cu, rd32((u32)param_1 + 0xd88u));
            }
        }
        wr32((u32)param_1 + 0xe24u, 1u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800d3a7cu, &a);
    }
    return;
}
