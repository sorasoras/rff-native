#include "tc_rt.h"

void fn_800bf1d4(f64 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r28 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = param_1;
    if ((f64)rdf32(0x80572e78u) == param_1) {
        f31 = (f64)(f32)((f64)rdf32(0x80572e7cu) + (f64)rdf32(param_2 + 0x108u));
    }
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 == 0u) {
        r0 = 3u;
    } else {
        r0 = rd32(r3 + 4u);
    }
    do {
        if (rd32(param_2 + 0xa48u) == 0u) {
            if (r0 != 2u) {
                if ((u32)param_4 == 0u) {
                    if (((ppc_cntlzw(rd32(0x80571188u) & 0x80u) >> 5u) & 0x7ffffffu) != 0u) {
                        r28 = 1u;
                        if ((rd32(0x80499094u) & 0x3fu) == 0u) {
                            a.r[0] = 0x8049e140u;
                            a.r[1] = 0x3fu;
                            r3 = tc_call(0x801a8f18u, &a);
                            if (r3 == 0u) {
                                r28 = 0u;
                            }
                        }
                        if (r28 == 0u) {
                            r3 = rd32(param_2 + 0xa18u);
                            if ((s32)r3 <= 0) break;
                            r0 = r3 - 1u;
                            wr32(param_2 + 0xa18u, r0);
                            if ((s32)r0 > 0) {
                                if ((u32)rd16(0x8049908cu) >= 0x32u) {
                                    a.r[0] = param_2;
                                    a.r[1] = 0u;
                                    a.r[2] = param_3;
                                    a.r[3] = (u32)param_4;
                                    a.f[0] = f31;
                                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                    break;
                                }
                                a.r[0] = param_2;
                                a.r[1] = 2u;
                                a.r[2] = 1u;
                                a.r[3] = 0u;
                                a.f[0] = (f64)rdf32(0x80572e88u);
                                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                break;
                            }
                            f1 = tc_callf(0x80040a00u, &a);
                            if (!(f1 < (f64)rdf32(0x80572e80u))) {
                                wr32(param_2 + 0xa18u, 0x78u);
                                if ((u32)rd16(0x8049908cu) >= 0x32u) {
                                    a.r[0] = param_2;
                                    a.r[1] = 0u;
                                    a.r[2] = param_3;
                                    a.r[3] = (u32)param_4;
                                    a.f[0] = f31;
                                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                    break;
                                }
                                a.r[0] = param_2;
                                a.r[1] = 2u;
                                a.r[2] = 1u;
                                a.r[3] = 0u;
                                a.f[0] = (f64)rdf32(0x80572e84u);
                                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                break;
                            }
                            if ((u32)rd16(0x8049908cu) >= 0x32u) {
                                r0 = (u32)rd8(0x80492824u);
                                if (r0 < 1u || r0 > 4u) {
                                    a.r[0] = param_2;
                                    a.r[1] = 1u;
                                    a.r[2] = 1u;
                                    a.r[3] = 0u;
                                    a.f[0] = f31;
                                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                    break;
                                }
                                a.r[0] = param_2;
                                a.r[1] = 3u;
                                a.r[2] = 1u;
                                a.r[3] = 0u;
                                a.f[0] = f31;
                                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                break;
                            }
                            a.r[0] = param_2;
                            a.r[1] = 2u;
                            a.r[2] = 1u;
                            a.r[3] = 0u;
                            a.f[0] = (f64)rdf32(0x80572e84u);
                            (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                            break;
                        }
                    }
                    a.r[0] = param_2;
                    a.r[1] = 0u;
                    a.r[2] = param_3;
                    a.r[3] = (u32)param_4;
                    a.f[0] = f31;
                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                } else {
                    wr32(param_2 + 0xa18u, 0x78u);
                    a.r[0] = param_2;
                    a.r[1] = 0u;
                    a.r[2] = param_3;
                    a.r[3] = (u32)param_4;
                    a.f[0] = f31;
                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                }
            } else {
                r0 = rd32(param_2 + 0x5c0u);
                if (r0 != 0x2e8u) {
                    r3 = 0u;
                    if ((s32)r0 >= 526 && (s32)r0 <= 547) {
                        r3 = 1u;
                    }
                    if (r3 == 0u) {
                        r3 = 0u;
                        if ((s32)r0 >= 570 && (s32)r0 <= 591) {
                            r3 = 1u;
                        }
                        if (r3 == 0u) {
                            r3 = 0u;
                            if ((s32)r0 >= 592 && (s32)r0 <= 613) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                r3 = 0u;
                                if ((s32)r0 >= 548 && (s32)r0 <= 569) {
                                    r3 = 1u;
                                }
                                if (r3 == 0u) {
                                    r3 = 0u;
                                    if ((s32)r0 >= 635 && (s32)r0 <= 639) {
                                        r3 = 1u;
                                    }
                                    if (r3 == 0u) {
                                        r3 = 0u;
                                        if ((s32)r0 >= 640 && (s32)r0 <= 644) {
                                            r3 = 1u;
                                        }
                                        if (r3 == 0u) {
                                            a.r[0] = param_2;
                                            a.r[1] = 4u;
                                            a.r[2] = param_3;
                                            a.r[3] = (u32)param_4;
                                            a.f[0] = f31;
                                            (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                            break;
                                        }
                                    }
                                }
                                a.r[0] = param_2;
                                a.r[1] = 7u;
                                a.r[2] = param_3;
                                a.r[3] = (u32)param_4;
                                a.f[0] = f31;
                                (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                                break;
                            }
                        }
                        a.r[0] = param_2;
                        a.r[1] = 6u;
                        a.r[2] = param_3;
                        a.r[3] = (u32)param_4;
                        a.f[0] = f31;
                        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                    } else {
                        a.r[0] = param_2;
                        a.r[1] = 5u;
                        a.r[2] = param_3;
                        a.r[3] = (u32)param_4;
                        a.f[0] = f31;
                        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                    }
                } else {
                    a.r[0] = param_2;
                    a.r[1] = 4u;
                    a.r[2] = param_3;
                    a.r[3] = (u32)param_4;
                    a.f[0] = f31;
                    (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
                }
            }
        } else {
            a.r[0] = param_2;
            a.r[1] = 0x1du;
            a.r[2] = param_3;
            a.r[3] = (u32)param_4;
            a.f[0] = f31;
            (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        }
    } while (0);
    a.r[0] = param_2;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8019bf38u, &a);
    return;
}
