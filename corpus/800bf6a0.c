#include "tc_rt.h"

void fn_800bf6a0(u32 param_1)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x25cu;
    f1 = tc_callf(0x80234440u, &a);
    f2 = (f64)(f32)f1;
    f0 = (f64)rdf32(0x80572e8cu);
    wrf32d(param_1 + 0x274u, f1);
    c0gt = f2 > f0;
    r31 = ((((f2 < f0) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f2 == f0)) << 0x1du) | (((f2 != f2) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u;
    a.r[0] = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u);
    r3 = tc_call(0x8007d150u, &a);
    if (r3 == 0u) {
        r3 = 3u;
    } else {
        r3 = rd32(r3 + 4u);
    }
    if (rd32(param_1 + 0xa48u) == 0u) {
        if (r3 != 2u) {
            r4 = 0xbu;
            if (r31 != 0u) {
                r4 = 0xcu;
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80572e78u);
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        } else {
            r3 = rd32(param_1 + 0x5c0u);
            if (r3 != 0x2e8u) {
                r0 = 0u;
                if ((s32)r3 >= 526 && (s32)r3 <= 547) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    r0 = 0u;
                    if ((s32)r3 >= 570 && (s32)r3 <= 591) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        r0 = 0u;
                        if ((s32)r3 >= 592 && (s32)r3 <= 613) {
                            r0 = 1u;
                        }
                        if (r0 == 0u) {
                            r0 = 0u;
                            if ((s32)r3 >= 548 && (s32)r3 <= 569) {
                                r0 = 1u;
                            }
                            if (r0 == 0u) {
                                r0 = 0u;
                                if ((s32)r3 >= 635 && (s32)r3 <= 639) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    if ((s32)r3 >= 640 && (s32)r3 <= 644) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) {
                                        r4 = 0xdu;
                                        if (r31 != 0u) {
                                            r4 = 0x11u;
                                        }
                                        a.r[0] = param_1;
                                        a.r[1] = r4;
                                        a.r[2] = 1u;
                                        a.r[3] = 0u;
                                        a.f[0] = (f64)rdf32(0x80572e78u);
                                        a.f[1] = 0.0;
                                        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                                        return;
                                    }
                                }
                            }
                            r4 = 0x10u;
                            if (r31 != 0u) {
                                r4 = 0x14u;
                            }
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 1u;
                            a.r[3] = 0u;
                            a.f[0] = (f64)rdf32(0x80572e78u);
                            a.f[1] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                            return;
                        }
                    }
                    r4 = 0xfu;
                    if (r31 != 0u) {
                        r4 = 0x13u;
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80572e78u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                } else {
                    r4 = 0xeu;
                    if (r31 != 0u) {
                        r4 = 0x12u;
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80572e78u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                }
            } else {
                r4 = 0xdu;
                if (r31 != 0u) {
                    r4 = 0x11u;
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80572e78u);
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            }
        }
    } else {
        r4 = 0x21u;
        if (r31 != 0u) {
            r4 = 0x22u;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80572e78u);
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
    }
    return;
}
