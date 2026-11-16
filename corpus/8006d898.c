#include "tc_rt.h"

void fn_8006d898(u32 param_1)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    do {
        if (rd32(0x805706e8u) == 0u) {
            r0 = rd32(param_1 + 0x290u);
            if (r0 != 0x11u && r0 != 0x12u) {
                if (r0 != 0x19u) {
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    r5 = 0x80471ed0u;
                    r4 = 0u;
                    ctr = 0xau;
                    for (;;) {
                        r6 = rd32(r5 + 0xbf8u);
                        if (r6 != 0u) {
                            f0 = (f64)rdf32(r6 + 0x18u);
                            r0 = 0u;
                            f1 = (f64)rdf32(r3);
                            if ((f0 < f1) || (f0 == f1)) {
                                f0 = (f64)rdf32(r6 + 0x24u);
                                if ((f0 > f1) || (f0 == f1)) {
                                    f0 = (f64)rdf32(r6 + 0x20u);
                                    f1 = (f64)rdf32(r3 + 8u);
                                    if ((f0 < f1) || (f0 == f1)) {
                                        f0 = (f64)rdf32(r6 + 0x2cu);
                                        if ((f0 > f1) || (f0 == f1)) {
                                            r0 = 1u;
                                        }
                                    }
                                }
                            }
                            if (r0 != 0u) {
                                r0 = 1u;
                                break;
                            }
                        }
                        r6 = rd32(r5 + 0xbfcu);
                        if (r6 != 0u) {
                            f0 = (f64)rdf32(r6 + 0x18u);
                            r0 = 0u;
                            f1 = (f64)rdf32(r3);
                            if ((f0 < f1) || (f0 == f1)) {
                                f0 = (f64)rdf32(r6 + 0x24u);
                                if ((f0 > f1) || (f0 == f1)) {
                                    f0 = (f64)rdf32(r6 + 0x20u);
                                    f1 = (f64)rdf32(r3 + 8u);
                                    if ((f0 < f1) || (f0 == f1)) {
                                        f0 = (f64)rdf32(r6 + 0x2cu);
                                        if ((f0 > f1) || (f0 == f1)) {
                                            r0 = 1u;
                                        }
                                    }
                                }
                            }
                            if (r0 != 0u) {
                                r0 = 1u;
                                break;
                            }
                        }
                        r5 = r5 + 8u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r0 = 0u;
                            break;
                        }
                    }
                    if (r0 != 0u) {
                        r3 = rd32(param_1 + 0x5c0u);
                        r0 = 0u;
                        if ((s32)r3 >= 625 && (s32)r3 <= 629) {
                            r0 = 1u;
                        }
                        do {
                            if (r0 == 0u) {
                                r0 = 0u;
                                if ((s32)r3 >= 630 && (s32)r3 <= 634) {
                                    r0 = 1u;
                                }
                                if (r0 == 0u) {
                                    r0 = 0u;
                                    if ((s32)r3 >= 635 && (s32)r3 <= 639) {
                                        r0 = 1u;
                                    }
                                    if (r0 == 0u) break;
                                }
                            }
                            if (rd32(param_1 + 0xa48u) == 0u) {
                                r3 = ((r3 - 0x1f8u) * 0x14u) - 0x7fb60e50u;
                                if ((u32)rd8(r3 + 0x61fu) == 0u) {
                                    r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                                    if (rd32(r3 + 0x194u) == 0u) {
                                        fl_ = 1u;
                                        break;
                                    }
                                    a.r[0] = r3;
                                    a.r[1] = 0u;
                                    (void)tc_call(0x800564f8u, &a);
                                    fl_ = 1u;
                                    break;
                                }
                                r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                                if (rd32(r3 + 0x194u) == 1u) {
                                    fl_ = 1u;
                                    break;
                                }
                                a.r[0] = r3;
                                a.r[1] = 1u;
                                (void)tc_call(0x800564f8u, &a);
                                fl_ = 1u;
                                break;
                            }
                        } while (0);
                        if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                        if (rd32(r3 + 0x194u) == 0u) break;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800564f8u, &a);
                        break;
                    }
                }
                r3 = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                if (rd32(r3 + 0x194u) != 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x800564f8u, &a);
                }
            }
        }
    } while (0);
    r0 = rd32(param_1 + 0x254u);
    r3 = rd32((rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e5a4u);
    if (r0 != r3) {
        wr32(param_1 + 0x258u, r0);
        wr32(param_1 + 0x254u, r3);
    }
    return;
}
