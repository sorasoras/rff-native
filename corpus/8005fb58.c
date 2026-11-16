#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_8005fb58(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    if (rd32((u32)param_1 + 0x28u) == 0u) {
        if (rd32((u32)param_1 + 0x2cu) != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x30u);
            r3 = tc_call(0x800d595cu, &a);
            if (r3 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x30u);
                r3 = tc_call(0x800d595cu, &a);
                if (r3 == 3u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x80u;
                    (void)tc_call(0x8005df48u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x80u;
                    (void)tc_call(0x8005df40u, &a);
                } else {
                    a.r[0] = rd32((u32)param_1 + 0x30u);
                    r3 = tc_call(0x800d50c4u, &a);
                    if (r3 != 0u) {
                        r28 = rd32((u32)param_1 + 0x30u);
                        a.r[0] = r28;
                        r3 = tc_call(0x800d57b4u, &a);
                        wr32((u32)param_1 + 0x34u, r3);
                        if (r3 != 0xffffffffu) {
                            if (r3 != 1u) {
                                if (r3 == 0u) {
                                    a.r[0] = rd32((u32)param_1 + 0x30u);
                                    (void)tc_call(0x800d39e0u, &a);
                                    a.r[0] = 0u;
                                    (void)tc_call(0x80194c2cu, &a);
                                }
                            } else if (rd32((u32)param_1 + 0x38u) == 0u) {
                                a.r[0] = r28;
                                (void)tc_call(0x800d5440u, &a);
                            } else {
                                a.r[0] = rd32(0x804863d8u);
                                r3 = tc_call(0x800c4564u, &a);
                                if (r3 != 0u) {
                                    a.r[0] = rd32((u32)param_1 + 0x30u);
                                    (void)tc_call(0x800d39e0u, &a);
                                } else {
                                    a.r[0] = r28;
                                    (void)tc_call(0x800d5440u, &a);
                                }
                            }
                        } else {
                            a.r[0] = rd32((u32)param_1 + 0x30u);
                            (void)tc_call(0x800d39e0u, &a);
                        }
                    }
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x80u;
                    (void)tc_call(0x8005df48u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0x80u;
                    (void)tc_call(0x8005df40u, &a);
                }
            } else {
                r0 = rd32((u32)param_1 + 0x34u);
                wr32((u32)param_1 + 0x2cu, 0u);
                if (r0 != 0xffffffffu) {
                    if (r0 == 1u) {
                        a.r[0] = rd32(0x804863d8u);
                        (void)tc_call(0x800bfcccu, &a);
                    }
                } else {
                    r3 = rd32((u32)param_1 + 0x38u);
                    wr32((u32)param_1 + 0xcu, 1u);
                    if (r3 == 0u) {
                        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
                    } else {
                        wr32(0x8057118cu, rd32(0x8057118cu) | 0x8000u);
                    }
                    r3 = rd32(0x804863d8u);
                    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
                }
            }
        } else {
            r0 = rd32((u32)param_1 + 0x34u);
            if (r0 != 0u) {
                if (r0 == 1u) {
                    r28 = rd32(0x804863d8u);
                    r29 = rd32(r28 + 0x100u);
                    a.r[0] = r28;
                    (void)tc_call(0x8006d88cu, &a);
                    wr32(0x8057118cu, rd32(0x8057118cu) & 0xfffffeffu);
                    if (r29 != 0x28u) {
                        if (r29 == 0x2au) {
                            if (rd32(r28 + 0x110u) == 0u) {
                                a.r[0] = rd32(0x804863d8u);
                                f1 = tc_callf(0x80064f9cu, &a);
                                f2 = (f64)rdf32(0x80572518u);
                                f5 = (f64)(f32)px_fdiv((f64)(f32)(f1 - (f64)rdf32(rd32(rd32(0x804863d8u) + 0x70u) + 0x54u)), f1);
                                if (f5 > f2) {
                                    f2 = f5;
                                }
                                f3 = (f64)rdf32(0x80572518u);
                                f0 = (f64)rdf32(0x805724a0u);
                                wrf32d(0x817fdfd8u, f2);
                                wrf32d(0x817fdfdcu, f0);
                                if (f5 > f3) {
                                    f3 = f5;
                                }
                                f4 = (f64)rdf32(0x8057251cu);
                                r4 = rd32(0x804863d8u);
                                f1 = (f64)rdf32(0x817fdfdcu);
                                wrf32d(r4 + 0x1cu, (f64)rdf32(0x817fdfd8u));
                                wrf32d(r4 + 0x20u, f1);
                                wrf32d(r4 + 0x24u, (f64)(f32)f3);
                                wrf32d(0x817fdfe0u, f3);
                                r3 = rd32(0x804863d8u);
                                if (!(f4 > f5)) {
                                    f4 = f5;
                                }
                                wrf32d(r3 + 0xd0u, f4);
                                wr32(r3 + 0xccu, 1u);
                            } else {
                                r3 = rd32(0x805706e8u);
                                wr32(0x80571160u, 1u);
                                a.r[0] = r3;
                                r3 = tc_call(0x8007d150u, &a);
                                r0 = rd32(r3 + 0xcu);
                                if (r0 != 1u) {
                                    if (r0 != 2u) {
                                        if (r0 != 3u) {
                                            if (r0 != 4u) {
                                                r0 = 0u;
                                            } else {
                                                r0 = 0x2eu;
                                            }
                                        } else {
                                            r0 = 0x28u;
                                        }
                                    } else {
                                        r0 = 0x24u;
                                    }
                                } else {
                                    r4 = 0u;
                                    r0 = (u32)rd8(0x80492823u);
                                    r3 = (u32)rd8(0x80492824u);
                                    if (r0 != 0u) {
                                        if (r0 == 1u && r3 <= 4u) {
                                            r4 = 1u;
                                        }
                                    } else if (r3 > 4u) {
                                        r4 = 1u;
                                    }
                                    if (r4 == 0u) {
                                        r0 = 0x18u;
                                    } else {
                                        r0 = 0x1bu;
                                    }
                                }
                                wr32(0x80571158u, r0);
                                wr32((u32)param_1 + 0x20u, 1u);
                                wr32(0x80571190u, 1u);
                            }
                        }
                    } else if (rd32(r28 + 0x110u) != 0u) {
                        a.r[0] = r28;
                        a.r[1] = 0x2au;
                        a.r[2] = 0u;
                        a.r[3] = 1u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        a.f[0] = (f64)rdf32(0x805724ccu);
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        f1 = tc_callf(rd32(rd32(r28) + 0x54u), &a);
                        a.r[0] = r28;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
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
                        r3 = tc_call(rd32(rd32(r28) + 0x28u), &a);
                        r7 = rd32(r3);
                        f2 = (f64)rdf32(0x80572514u);
                        wr32(0x817fdfe8u, rd32(r3 + 4u));
                        f1 = (f64)rdf32(0x805724a0u);
                        wr32(0x817fdfe4u, r7);
                        f0 = (f64)rdf32(0x817fdfe8u);
                        wr32(0x817fdfecu, rd32(r3 + 8u));
                        f0 = ppc_fmadds(f2, (f64)rdf32(r28 + 0xb4u), f0);
                        wrf32d(0x817fdfe8u, f0);
                        a.f[0] = f1;
                        a.r[0] = 0x6eu;
                        a.r[1] = 0x817fdfe4u;
                        a.r[2] = 0x804b15c0u;
                        a.r[3] = 0x804890c8u;
                        (void)tc_call(0x800d783cu, &a);
                    }
                    if (rd32(0x80571160u) != 0u) {
                        r0 = (u32)rd8(0x805710c0u);
                        if (r0 < 0xdu) {
                            r0 = 0xdu;
                        }
                        a.f[0] = (f64)rdf32(0x80572434u);
                        a.r[0] = 6u;
                        a.r[1] = r0 & 0xffu;
                        (void)tc_call(0x800523b0u, &a);
                        wr32((u32)param_1 + 0xcu, 8u);
                        wr32(0x80571168u, 0u);
                        r3 = rd32((u32)param_1 + 0x38u);
                        wr32((u32)param_1 + 0x28u, 1u);
                        if (r3 == 0u) {
                            wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
                        } else {
                            wr32(0x8057118cu, rd32(0x8057118cu) | 0x8000u);
                        }
                    }
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0xc1u;
                    (void)tc_call(0x8005df48u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = 0xc1u;
                    (void)tc_call(0x8005df40u, &a);
                }
            } else {
                r3 = tc_call(0x80194c48u, &a);
                if (r3 == 0u) {
                    (void)tc_call(0x80194c3cu, &a);
                    r3 = rd32((u32)param_1 + 0x38u);
                    wr32((u32)param_1 + 0xcu, 1u);
                    if (r3 == 0u) {
                        wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
                    } else {
                        wr32(0x8057118cu, rd32(0x8057118cu) | 0x8000u);
                    }
                    r3 = rd32(0x804863d8u);
                    wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) & 0xbfffffffu);
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 0x80u;
                (void)tc_call(0x8005df48u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = 0x80u;
                (void)tc_call(0x8005df40u, &a);
            }
        }
        if (rd32((u32)param_1 + 0xcu) != 0x11u) {
            a.r[0] = 0x80486da8u;
            (void)tc_call(0x800b872cu, &a);
        }
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        (void)tc_call(0x801e6900u, &a);
    } else {
        if (rd32(rd32(0x804863d8u) + 0x290u) != 0x17u) {
            wr32((u32)param_1 + 0x28u, 0u);
            wr32(0x8057118cu, rd32(0x8057118cu) | 0x100u);
            a.f[0] = param_f1;
            a.f[1] = param_f2;
            a.f[2] = param_f3;
            a.f[3] = param_f4;
            a.f[4] = param_f5;
            a.f[5] = param_f6;
            a.f[6] = param_f7;
            a.f[7] = param_f8;
            a.r[0] = 0x803d29f8u;
            a.r[3] = param_r6;
            a.r[4] = param_r7;
            a.r[5] = param_r8;
            a.r[6] = param_r9;
            a.r[7] = param_r10;
            r3 = tc_call(0x80097c5cu, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0xcu, 4u);
                a.r[0] = rd32(0x804863d8u);
                (void)tc_call(0x800c4b50u, &a);
                return 1u;
            }
            wr32((u32)param_1 + 0xcu, 1u);
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0xc1u;
        (void)tc_call(0x8005df48u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0xc1u;
        (void)tc_call(0x8005df40u, &a);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        (void)tc_call(0x801e6900u, &a);
    }
    return 1u;
}
