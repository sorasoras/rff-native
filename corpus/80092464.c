#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80092464(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r9 = 0u;
    if ((f64)rdf32(param_4) < (f64)rdf32(param_1)) {
        r9 = 1u;
    }
    if ((f64)rdf32(param_4) > (f64)rdf32(param_1 + 0xcu)) {
        r9 = r9 | 2u;
    }
    if ((f64)rdf32(param_4 + 4u) < (f64)rdf32(param_1 + 4u)) {
        r9 = r9 | 4u;
    }
    if ((f64)rdf32(param_4 + 4u) > (f64)rdf32(param_1 + 0x10u)) {
        r9 = r9 | 8u;
    }
    if ((f64)rdf32(param_4 + 8u) < (f64)rdf32(param_1 + 8u)) {
        r9 = r9 | 0x10u;
    }
    if ((f64)rdf32(param_4 + 8u) > (f64)rdf32(param_1 + 0x14u)) {
        r9 = r9 | 0x20u;
    }
    wr32(0x817fdfccu, r9);
    if (r9 != 0u) {
        r5 = 0u;
        if ((f64)rdf32(param_5) < (f64)rdf32(param_1)) {
            r5 = 1u;
        }
        if ((f64)rdf32(param_5) > (f64)rdf32(param_1 + 0xcu)) {
            r5 = r5 | 2u;
        }
        if ((f64)rdf32(param_5 + 4u) < (f64)rdf32(param_1 + 4u)) {
            r5 = r5 | 4u;
        }
        if ((f64)rdf32(param_5 + 4u) > (f64)rdf32(param_1 + 0x10u)) {
            r5 = r5 | 8u;
        }
        if ((f64)rdf32(param_5 + 8u) < (f64)rdf32(param_1 + 8u)) {
            r5 = r5 | 0x10u;
        }
        if ((f64)rdf32(param_5 + 8u) > (f64)rdf32(param_1 + 0x14u)) {
            r5 = r5 | 0x20u;
        }
        wr32(0x817fdfc8u, r5);
        r0 = (ppc_cntlzw(r9 & r5) >> 5u) & 0x7ffffffu;
    } else {
        r0 = 1u;
    }
    if (r0 != 0u) {
        if (rd32(0x817fdfccu) != 0u) {
            if (param_6 != 0u) {
                wr32(param_6, 0u);
            }
            if ((rd32(0x817fdfccu) & 1u) != 0u) {
                a.f[0] = (f64)rdf32(param_1);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x80092278u, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4) > (f64)rdf32(param_5))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3, f1);
                    wrf32d(param_3 + 8u, f0);
                    wrf32d(param_3 + 4u, f0);
                    return;
                }
            }
            if ((rd32(0x817fdfccu) & 2u) != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 0xcu);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x80092278u, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4) > (f64)rdf32(param_5))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3, f1);
                    wrf32d(param_3 + 8u, f0);
                    wrf32d(param_3 + 4u, f0);
                    return;
                }
            }
            if ((rd32(0x817fdfccu) & 4u) != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 4u);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x8009231cu, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4 + 4u) > (f64)rdf32(param_5 + 4u))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3 + 4u, f1);
                    wrf32d(param_3 + 8u, f0);
                    wrf32d(param_3, f0);
                    return;
                }
            }
            if ((rd32(0x817fdfccu) & 8u) != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 0x10u);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x8009231cu, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4 + 4u) > (f64)rdf32(param_5 + 4u))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3 + 4u, f1);
                    wrf32d(param_3 + 8u, f0);
                    wrf32d(param_3, f0);
                    return;
                }
            }
            if ((rd32(0x817fdfccu) & 0x10u) != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 8u);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x800923c0u, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4 + 8u) > (f64)rdf32(param_5 + 8u))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3 + 8u, f1);
                    wrf32d(param_3 + 4u, f0);
                    wrf32d(param_3, f0);
                    return;
                }
            }
            if ((rd32(0x817fdfccu) & 0x20u) != 0u) {
                a.f[0] = (f64)rdf32(param_1 + 0x14u);
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_4;
                a.r[3] = param_5;
                r3 = tc_call(0x800923c0u, &a);
                if (r3 != 0u) {
                    if (!((f64)rdf32(param_4 + 8u) > (f64)rdf32(param_5 + 8u))) {
                        f1 = (f64)rdf32(0x805729f4u);
                    } else {
                        f1 = (f64)rdf32(0x805729e8u);
                    }
                    f0 = (f64)rdf32(0x805729c8u);
                    wrf32d(param_3 + 8u, f1);
                    wrf32d(param_3 + 4u, f0);
                    wrf32d(param_3, f0);
                    return;
                }
            }
            if (rd32(0x817fdfc8u) == 0u) {
                if ((rd32(0x817fdfccu) & 1u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x80092278u, &a);
                    f1 = (f64)rdf32(param_1 + 4u);
                    f0 = (f64)rdf32(param_2 + 4u);
                    f2 = (f64)rdf32(param_1 + 0x10u);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 8u);
                        f0 = (f64)rdf32(param_2 + 8u);
                        f2 = (f64)rdf32(param_1 + 0x14u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1 + 4u);
                            f0 = (f64)rdf32(param_2 + 4u);
                            f2 = (f64)rdf32(param_1 + 0x10u);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 8u);
                            f0 = (f64)rdf32(param_2 + 8u);
                            wrf32d(param_2 + 4u, f1);
                            f1 = (f64)rdf32(param_1 + 0x14u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4);
                            f0 = (f64)rdf32(param_5);
                            wrf32d(param_2 + 8u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3, f1);
                            wrf32d(param_3 + 8u, f0);
                            wrf32d(param_3 + 4u, f0);
                            return;
                        }
                    }
                }
                if ((rd32(0x817fdfccu) & 2u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1 + 0xcu);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x80092278u, &a);
                    f1 = (f64)rdf32(param_1 + 4u);
                    f0 = (f64)rdf32(param_2 + 4u);
                    f2 = (f64)rdf32(param_1 + 0x10u);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 8u);
                        f0 = (f64)rdf32(param_2 + 8u);
                        f2 = (f64)rdf32(param_1 + 0x14u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1 + 4u);
                            f0 = (f64)rdf32(param_2 + 4u);
                            f2 = (f64)rdf32(param_1 + 0x10u);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 8u);
                            f0 = (f64)rdf32(param_2 + 8u);
                            wrf32d(param_2 + 4u, f1);
                            f1 = (f64)rdf32(param_1 + 0x14u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4);
                            f0 = (f64)rdf32(param_5);
                            wrf32d(param_2 + 8u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3, f1);
                            wrf32d(param_3 + 8u, f0);
                            wrf32d(param_3 + 4u, f0);
                            return;
                        }
                    }
                }
                if ((rd32(0x817fdfccu) & 4u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1 + 4u);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x8009231cu, &a);
                    f1 = (f64)rdf32(param_1);
                    f0 = (f64)rdf32(param_2);
                    f2 = (f64)rdf32(param_1 + 0xcu);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 8u);
                        f0 = (f64)rdf32(param_2 + 8u);
                        f2 = (f64)rdf32(param_1 + 0x14u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1);
                            f0 = (f64)rdf32(param_2);
                            f2 = (f64)rdf32(param_1 + 0xcu);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 8u);
                            f0 = (f64)rdf32(param_2 + 8u);
                            wrf32d(param_2, f1);
                            f1 = (f64)rdf32(param_1 + 0x14u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4 + 4u);
                            f0 = (f64)rdf32(param_5 + 4u);
                            wrf32d(param_2 + 8u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3 + 4u, f1);
                            wrf32d(param_3 + 8u, f0);
                            wrf32d(param_3, f0);
                            return;
                        }
                    }
                }
                if ((rd32(0x817fdfccu) & 8u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1 + 0x10u);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x8009231cu, &a);
                    f1 = (f64)rdf32(param_1);
                    f0 = (f64)rdf32(param_2);
                    f2 = (f64)rdf32(param_1 + 0xcu);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 8u);
                        f0 = (f64)rdf32(param_2 + 8u);
                        f2 = (f64)rdf32(param_1 + 0x14u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1);
                            f0 = (f64)rdf32(param_2);
                            f2 = (f64)rdf32(param_1 + 0xcu);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 8u);
                            f0 = (f64)rdf32(param_2 + 8u);
                            wrf32d(param_2, f1);
                            f1 = (f64)rdf32(param_1 + 0x14u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4 + 4u);
                            f0 = (f64)rdf32(param_5 + 4u);
                            wrf32d(param_2 + 8u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3 + 4u, f1);
                            wrf32d(param_3 + 8u, f0);
                            wrf32d(param_3, f0);
                            return;
                        }
                    }
                }
                if ((rd32(0x817fdfccu) & 0x10u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1 + 8u);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x800923c0u, &a);
                    f1 = (f64)rdf32(param_1);
                    f0 = (f64)rdf32(param_2);
                    f2 = (f64)rdf32(param_1 + 0xcu);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 4u);
                        f0 = (f64)rdf32(param_2 + 4u);
                        f2 = (f64)rdf32(param_1 + 0x10u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1);
                            f0 = (f64)rdf32(param_2);
                            f2 = (f64)rdf32(param_1 + 0xcu);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 4u);
                            f0 = (f64)rdf32(param_2 + 4u);
                            wrf32d(param_2, f1);
                            f1 = (f64)rdf32(param_1 + 0x10u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4 + 8u);
                            f0 = (f64)rdf32(param_5 + 8u);
                            wrf32d(param_2 + 4u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3 + 8u, f1);
                            wrf32d(param_3 + 4u, f0);
                            wrf32d(param_3, f0);
                            return;
                        }
                    }
                }
                if ((rd32(0x817fdfccu) & 0x20u) != 0u) {
                    a.f[0] = (f64)rdf32(param_1 + 0x14u);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_4;
                    a.r[3] = param_5;
                    (void)tc_call(0x800923c0u, &a);
                    f1 = (f64)rdf32(param_1);
                    f0 = (f64)rdf32(param_2);
                    f2 = (f64)rdf32(param_1 + 0xcu);
                    if (!(f0 < f1)) {
                        if (!(f2 < f0)) {
                            r0 = 1u;
                        } else {
                            f1 = (f64)(f32)(f0 - f2);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                    } else {
                        f1 = (f64)(f32)(f1 - f0);
                        f0 = rdf64(0x805729f8u);
                        r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                    }
                    if (r0 != 0u) {
                        f1 = (f64)rdf32(param_1 + 4u);
                        f0 = (f64)rdf32(param_2 + 4u);
                        f2 = (f64)rdf32(param_1 + 0x10u);
                        if (!(f0 < f1)) {
                            if (!(f2 < f0)) {
                                r0 = 1u;
                            } else {
                                f1 = (f64)(f32)(f0 - f2);
                                f0 = rdf64(0x805729f8u);
                                r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                            }
                        } else {
                            f1 = (f64)(f32)(f1 - f0);
                            f0 = rdf64(0x805729f8u);
                            r0 = ((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f1 = (f64)rdf32(param_1);
                            f0 = (f64)rdf32(param_2);
                            f2 = (f64)rdf32(param_1 + 0xcu);
                            if (!(f0 < f1)) {
                                if (!(f2 < f0)) {
                                    f2 = f0;
                                }
                                f1 = f2;
                            }
                            f2 = (f64)rdf32(param_1 + 4u);
                            f0 = (f64)rdf32(param_2 + 4u);
                            wrf32d(param_2, f1);
                            f1 = (f64)rdf32(param_1 + 0x10u);
                            if (!(f0 < f2)) {
                                if (!(f1 < f0)) {
                                    f1 = f0;
                                }
                                f2 = f1;
                            }
                            f1 = (f64)rdf32(param_4 + 8u);
                            f0 = (f64)rdf32(param_5 + 8u);
                            wrf32d(param_2 + 4u, f2);
                            if (!(f1 > f0)) {
                                f1 = (f64)rdf32(0x805729f4u);
                            } else {
                                f1 = (f64)rdf32(0x805729e8u);
                            }
                            f0 = (f64)rdf32(0x805729c8u);
                            wrf32d(param_3 + 8u, f1);
                            wrf32d(param_3 + 4u, f0);
                            wrf32d(param_3, f0);
                        }
                    }
                }
            }
        } else {
            f1 = (f64)rdf32(param_4 + 4u);
            f0 = (f64)rdf32(param_4 + 8u);
            wrf32d(param_2, (f64)rdf32(param_4));
            r8 = rd32(param_5);
            wrf32d(param_2 + 4u, f1);
            r6 = rd32(param_5 + 4u);
            wrf32d(param_2 + 8u, f0);
            r0 = rd32(param_5 + 8u);
            wr32(0x817fdfd0u, r8);
            wr32(0x817fdfd4u, r6);
            wr32(0x817fdfd8u, r0);
            a.r[0] = 0x817fdfd0u;
            a.r[1] = param_4;
            a.r[2] = 0x817fdfd0u;
            (void)tc_call(0x802343a4u, &a);
            f0 = (f64)rdf32(0x805729c8u);
            wrf32d(param_3, (f64)rdf32(0x817fdfd0u));
            wrf32d(param_3 + 4u, (f64)rdf32(0x817fdfd4u));
            wrf32d(param_3 + 8u, (f64)rdf32(0x817fdfd8u));
            wrf32d(param_3 + 4u, f0);
            a.r[0] = param_3;
            f1 = tc_callf(0x80234440u, &a);
            if (f1 < (f64)rdf32(0x805729ccu)) {
                wrf32d(param_3, (f64)rdf32(0x804890d4u));
                wrf32d(param_3 + 4u, (f64)rdf32(0x804890d8u));
                wrf32d(param_3 + 8u, (f64)rdf32(0x804890dcu));
            }
            f1 = (f64)rdf32(0x805729c8u);
            r0 = 0u;
            if (f1 == (f64)rdf32(param_3) && f1 == (f64)rdf32(param_3 + 4u) && f1 == (f64)rdf32(param_3 + 8u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = param_3;
                a.r[1] = param_3;
                (void)tc_call(0x802343e4u, &a);
            }
            a.f[0] = (f64)rdf32(param_3);
            a.f[1] = (f64)rdf32(param_3 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if (!((f64)rdf32(0x805729d0u) < f1)) {
                a.f[0] = (f64)rdf32(param_3);
                a.f[1] = (f64)rdf32(param_3 + 8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x805729d8u);
                if (!((f0 > f1) || (f0 == f1))) {
                    a.f[0] = (f64)rdf32(param_3);
                    a.f[1] = (f64)rdf32(param_3 + 8u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f2 = (f64)(f32)f1;
                } else {
                    a.f[0] = (f64)rdf32(param_3);
                    a.f[1] = (f64)rdf32(param_3 + 8u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f2 = (f64)(f32)((f64)rdf32(0x805729d4u) + f1);
                }
            } else {
                a.f[0] = (f64)rdf32(param_3);
                a.f[1] = (f64)rdf32(param_3 + 8u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f2 = (f64)(f32)(f1 - (f64)rdf32(0x805729d4u));
            }
            f2 = (f64)(f32)((f64)rdf32(0x805729dcu) * f2);
            f0 = (f64)rdf32(0x805729e0u);
            f1 = (f64)(f32)px_fdiv(f2, (f64)rdf32(0x805729d0u));
            do {
                if ((f1 < f0) || (f1 == f0)) {
                    f0 = (f64)rdf32(0x805729e4u);
                    if ((f1 > f0) || (f1 == f0)) {
                        f0 = (f64)rdf32(0x805729c8u);
                        f1 = (f64)rdf32(0x805729e8u);
                        wrf32d(param_3, f0);
                        wrf32d(param_3 + 8u, f1);
                        wrf32d(param_3 + 4u, f0);
                        break;
                    }
                }
                if (f1 > (f64)rdf32(0x805729e0u)) {
                    f0 = (f64)rdf32(0x805729ecu);
                    if ((f1 < f0) || (f1 == f0)) {
                        f0 = (f64)rdf32(0x805729c8u);
                        f1 = (f64)rdf32(0x805729e8u);
                        wrf32d(param_3 + 8u, f0);
                        wrf32d(param_3, f1);
                        wrf32d(param_3 + 4u, f0);
                        break;
                    }
                }
                if (f1 < (f64)rdf32(0x805729e4u)) {
                    f0 = (f64)rdf32(0x805729f0u);
                    if ((f1 > f0) || (f1 == f0)) {
                        f0 = (f64)rdf32(0x805729c8u);
                        f1 = (f64)rdf32(0x805729f4u);
                        wrf32d(param_3 + 8u, f0);
                        wrf32d(param_3, f1);
                        wrf32d(param_3 + 4u, f0);
                        break;
                    }
                }
                f0 = (f64)rdf32(0x805729c8u);
                f1 = (f64)rdf32(0x805729f4u);
                wrf32d(param_3, f0);
                wrf32d(param_3 + 8u, f1);
                wrf32d(param_3 + 4u, f0);
            } while (0);
            if (param_6 != 0u) {
                wr32(param_6, 1u);
            }
        }
    }
    return;
}
