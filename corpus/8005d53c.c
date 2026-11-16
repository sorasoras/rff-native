#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

s32 fn_8005d53c(s32 param_1)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0xcu);
    if ((u32)rd16(0x8049908au) != 0u && rd32(0x805711ecu) == 0u) {
        r30 = 0u;
        if (rd32(0x803541bcu) != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r5 = 0u;
                } else {
                    r5 = rd32(0x80354180u);
                }
            } else {
                r5 = rd32(0x8035414cu);
            }
        } else {
            r5 = 0u;
        }
        if (rd32(0x803541bcu) != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r0 = 0u;
                } else {
                    r0 = r5 & rd32(rd32(0x803541a8u));
                }
            } else {
                r0 = r5 & rd32(rd32(0x80354198u));
            }
        } else {
            r0 = 0u;
        }
        do {
            if (r0 == 0u) {
                if (rd32(0x803541bcu) != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354184u);
                        }
                    } else {
                        r5 = rd32(0x80354150u);
                    }
                } else {
                    r5 = 0u;
                }
                if (rd32(0x803541bcu) != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r5 = 0u;
                            } else {
                                r5 = rd32(0x8035417cu);
                            }
                        } else {
                            r5 = rd32(0x80354148u);
                        }
                    } else {
                        r5 = 0u;
                    }
                    if (rd32(0x803541bcu) != 0u) {
                        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                        if (r0 != 1u) {
                            if (r0 != 2u) {
                                r0 = 0u;
                            } else {
                                r0 = r5 & rd32(rd32(0x803541a8u));
                            }
                        } else {
                            r0 = r5 & rd32(rd32(0x80354198u));
                        }
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        if (rd32(0x803541bcu) != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r5 = 0u;
                                } else {
                                    r5 = rd32(0x80354188u);
                                }
                            } else {
                                r5 = rd32(0x80354154u);
                            }
                        } else {
                            r5 = 0u;
                        }
                        if (rd32(0x803541bcu) != 0u) {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 != 1u) {
                                if (r0 != 2u) {
                                    r0 = 0u;
                                } else {
                                    r0 = r5 & rd32(rd32(0x803541a8u));
                                }
                            } else {
                                r0 = r5 & rd32(rd32(0x80354198u));
                            }
                        } else {
                            r0 = 0u;
                        }
                        if (r0 == 0u) {
                            a.r[0] = rd32(0x804863d8u);
                            r3 = tc_call(0x800c471cu, &a);
                            if (r3 != 0u) {
                                r3 = tc_call(0x800a8674u, &a);
                                if (r3 != 0u) {
                                    a.r[0] = 0x803d29f8u;
                                    (void)tc_call(0x80097c0cu, &a);
                                    break;
                                }
                            }
                            r29 = rd32(0x804863d8u);
                            if (rd32(0x805711e8u) != 0u) {
                                r0 = 1u;
                            } else {
                                r0 = 0u;
                            }
                            if (r0 != 0u) {
                                r3 = tc_call(0x800cf66cu, &a);
                                c0lt = (s32)r3 < 2;
                                do {
                                    if (r3 == 2u) {
                                        a.r[0] = r29;
                                        r3 = tc_call(0x800c38bcu, &a);
                                        if (r3 != 0u) {
                                            r3 = tc_call(0x800c77b4u, &a);
                                            if (r3 != 0u) {
                                                r31 = 5u;
                                                wr32((u32)param_1 + 0x18u, 1u);
                                            }
                                        }
                                    } else if (!c0lt) {
                                        c0lt = (s32)r3 < 4;
                                        if (r3 == 4u) {
                                            a.r[0] = r29;
                                            r3 = tc_call(0x800c3728u, &a);
                                            if (r3 != 0u) {
                                                r3 = tc_call(0x800c74dcu, &a);
                                                if (r3 != 0u) {
                                                    f1 = (f64)rdf32(0x805724ccu);
                                                    r6 = rd32(0x804863d8u);
                                                    r31 = 5u;
                                                    wr32(r6 + 0x9cu, rd32(r6 + 0x9cu) | 0x40000000u);
                                                    a.f[0] = f1;
                                                    a.r[0] = rd32(0x804863d8u);
                                                    a.r[1] = 1u;
                                                    a.r[2] = 0u;
                                                    (void)tc_call(0x800bf1d4u, &a);
                                                    wr32((u32)param_1 + 0x18u, 1u);
                                                    a.r[0] = 0x80486da8u;
                                                    (void)tc_call(0x800b8708u, &a);
                                                    (void)tc_call(0x80052eccu, &a);
                                                }
                                            }
                                        } else if (c0lt) {
                                            r0 = rd32(rd32(0x805711e8u) + 0x48u);
                                            c0lt = (s32)r0 < 7;
                                            if (r0 == 7u) {
                                                a.r[0] = r29;
                                                r3 = tc_call(0x800c423cu, &a);
                                                if (r3 != 0u) {
                                                    r3 = tc_call(0x800c7d28u, &a);
                                                    if (r3 != 0u) {
                                                        r4 = rd32(0x804863d8u);
                                                        r31 = 5u;
                                                        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
                                                        wr32((u32)param_1 + 0x18u, 1u);
                                                    }
                                                }
                                            } else {
                                                if (!c0lt) {
                                                    if ((s32)r0 < 9) {
                                                        a.r[0] = r29;
                                                        r3 = tc_call(0x800c43b4u, &a);
                                                        if (r3 == 0u) break;
                                                        r3 = tc_call(0x800c7d28u, &a);
                                                        if (r3 == 0u) break;
                                                        r31 = 5u;
                                                        wr32((u32)param_1 + 0x18u, 1u);
                                                        break;
                                                    }
                                                } else if (r0 == 3u) {
                                                    a.r[0] = r29;
                                                    r3 = tc_call(0x800c3668u, &a);
                                                    if (r3 == 0u) break;
                                                    r3 = tc_call(0x800c7d28u, &a);
                                                    if (r3 == 0u) break;
                                                    a.r[0] = rd32(0x804863d8u);
                                                    (void)tc_call(0x800c4b50u, &a);
                                                    r4 = rd32(0x804863d8u);
                                                    r31 = 5u;
                                                    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
                                                    wr32((u32)param_1 + 0x18u, 1u);
                                                    break;
                                                }
                                                a.r[0] = r29;
                                                r3 = tc_call(0x800c3e14u, &a);
                                                if (r3 != 0u) {
                                                    r3 = tc_call(0x800c7d28u, &a);
                                                    if (r3 != 0u) {
                                                        r4 = rd32(0x804863d8u);
                                                        r31 = 5u;
                                                        wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
                                                        wr32((u32)param_1 + 0x18u, 1u);
                                                    }
                                                }
                                            }
                                        }
                                    } else if (r3 == 0u) {
                                        a.r[0] = r29;
                                        r3 = tc_call(0x800c3728u, &a);
                                        do {
                                            if (r3 != 0u) {
                                                r3 = tc_call(0x800c74dcu, &a);
                                                if (r3 != 0u) break;
                                            }
                                            a.r[0] = r29;
                                            r3 = tc_call(0x800c37fcu, &a);
                                            if (r3 == 0u) {
                                                fl_ = 1u;
                                                break;
                                            }
                                            r3 = tc_call(0x800c7648u, &a);
                                            if (r3 == 0u) {
                                                fl_ = 1u;
                                                break;
                                            }
                                        } while (0);
                                        if (fl_ == 1u) {
                                            fl_ = 0u;
                                        } else {
                                            f1 = (f64)rdf32(0x805724ccu);
                                            r6 = rd32(0x804863d8u);
                                            r31 = 5u;
                                            wr32(r6 + 0x9cu, rd32(r6 + 0x9cu) | 0x40000000u);
                                            a.f[0] = f1;
                                            a.r[0] = rd32(0x804863d8u);
                                            a.r[1] = 1u;
                                            a.r[2] = 0u;
                                            (void)tc_call(0x800bf1d4u, &a);
                                            wr32((u32)param_1 + 0x18u, 1u);
                                            a.r[0] = 0x80486da8u;
                                            (void)tc_call(0x800b8708u, &a);
                                            (void)tc_call(0x80052eccu, &a);
                                        }
                                    }
                                } while (0);
                                if (rd32((u32)param_1 + 0x18u) != 0u) {
                                    r30 = 1u;
                                    break;
                                }
                            }
                            a.r[0] = r29;
                            r3 = tc_call(0x800c3668u, &a);
                            if (r3 != 0u) {
                                r3 = tc_call(0x800c7d28u, &a);
                                if (r3 != 0u) {
                                    a.r[0] = 0x803d29f8u;
                                    f1 = tc_callf(0x800975d8u, &a);
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = 0x803d29f8u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    r3 = tc_call(0x80097c5cu, &a);
                                    if (r3 == 0u) break;
                                    if (rd32(0x80571180u) == 8u) {
                                        r31 = rd32((u32)param_1 + 0xcu);
                                        break;
                                    }
                                    r31 = 4u;
                                    break;
                                }
                            }
                            a.r[0] = r29;
                            r3 = tc_call(0x800c37fcu, &a);
                            if (r3 != 0u) {
                                r3 = tc_call(0x800c7d28u, &a);
                                if (r3 != 0u) {
                                    a.r[0] = 0x803d29f8u;
                                    f1 = tc_callf(0x800975f4u, &a);
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    a.f[4] = 0.0;
                                    a.f[5] = 0.0;
                                    a.f[6] = 0.0;
                                    a.f[7] = 0.0;
                                    a.r[0] = 0x803d29f8u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.r[5] = 0u;
                                    a.r[6] = 0u;
                                    a.r[7] = 0u;
                                    r3 = tc_call(0x80097c5cu, &a);
                                    if (r3 != 0u) {
                                        if (rd32(0x80571180u) == 8u) {
                                            r31 = rd32((u32)param_1 + 0xcu);
                                        } else {
                                            r31 = 4u;
                                        }
                                    }
                                }
                            }
                        } else {
                            a.r[0] = rd32(0x804863d8u);
                            r3 = tc_call(0x800c4478u, &a);
                            if (r3 == 0u) {
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = 4u;
                                (void)tc_call(0x8010a75cu, &a);
                            } else {
                                r30 = 1u;
                                r31 = 0xfu;
                                (void)tc_call(0x801733ecu, &a);
                                r4 = rd32(0x804863d8u);
                                wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
                                a.r[0] = 0x80486da8u;
                                (void)tc_call(0x800b8708u, &a);
                                a.r[0] = rd32(0x804863d8u);
                                (void)tc_call(0x8006c388u, &a);
                                (void)tc_call(0x8008c0c0u, &a);
                            }
                        }
                    } else {
                        r3 = tc_call(0x800602c0u, &a);
                        if (r3 == 0u) {
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 4u;
                            (void)tc_call(0x8010a75cu, &a);
                        } else {
                            f1 = (f64)rdf32(0x80572434u);
                            wr32((u32)param_1 + 0x10u, 0xdu);
                            r30 = 1u;
                            r31 = 2u;
                            a.f[0] = f1;
                            a.r[0] = 3u;
                            a.r[1] = 0x12u;
                            (void)tc_call(0x800523b0u, &a);
                            a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
                            a.r[1] = 5u;
                            f1 = tc_callf(0x800564f8u, &a);
                            r3 = rd32(0x804863d8u);
                            a.r[0] = r3;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                            r7 = rd32(0x804863d8u);
                            r6 = rd32(r3);
                            r0 = rd32(0x805710e0u);
                            wr32(0x817fdfdcu, rd32(r3 + 4u));
                            r0 = r0 * 0x6d0u;
                            r5 = rd32(r3 + 8u);
                            r4 = r0 - 0x7fc2e738u;
                            f1 = (f64)(f32)((f64)rdf32(0x817fdfdcu) + (f64)(f32)((f64)rdf32(0x805724c8u) + (f64)rdf32(r7 + 0xb4u)));
                            wrf32d(r4 + 0x1b8u, (f64)px_w2f(r6));
                            wrf32d(r4 + 0x1bcu, f1);
                            wrf32d(r4 + 0x1c0u, (f64)px_w2f(r5));
                            f0 = (f64)rdf32(r4 + 0x134u);
                            wrf32d(0x817fdfdcu, f1);
                            wrf32d(r4 + 0x1c4u, f0);
                            wrf32d(r4 + 0x1c8u, (f64)rdf32(r4 + 0x138u));
                            wrf32d(r4 + 0x1ccu, (f64)rdf32(r4 + 0x13cu));
                            wr32(r7 + 0x9cu, rd32(r7 + 0x9cu) | 0x40000000u);
                            (void)tc_call(0x8008c0c0u, &a);
                            a.r[0] = rd32(0x803d2a30u);
                            a.r[1] = 0u;
                            (void)tc_call(0x80141d6cu, &a);
                        }
                    }
                } else {
                    a.r[0] = rd32(0x804863d8u);
                    r3 = tc_call(0x800c463cu, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                    } else {
                        r30 = 1u;
                        a.r[0] = (u32)param_1;
                        a.r[1] = 0u;
                        a.r[2] = 0u;
                        (void)tc_call(0x8005d3f8u, &a);
                        r31 = 2u;
                        a.r[0] = rd32(0x804863d8u);
                        (void)tc_call(0x8006c388u, &a);
                    }
                }
            } else {
                a.r[0] = rd32(0x804863d8u);
                r3 = tc_call(0x800c4564u, &a);
                if (r3 == 0u || (rd32(0x8057118cu) & 0x40000u) == 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    wr8(0x80488d68u, 0u);
                    r29 = rd32((u32)param_1 + 0x30u);
                    wr32((u32)param_1 + 0x2cu, 1u);
                    a.r[0] = r29;
                    (void)tc_call(0x800d3704u, &a);
                    a.r[0] = 0xbu;
                    a.r[1] = 0x11u;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    r30 = r3;
                    a.r[0] = r29;
                    a.r[1] = r3;
                    (void)tc_call(0x800d5450u, &a);
                    a.r[0] = r29;
                    a.r[1] = 1u;
                    (void)tc_call(0x800d5940u, &a);
                    a.r[0] = rd32((u32)param_1 + 0x30u);
                    a.r[1] = r30;
                    (void)tc_call(0x800d3858u, &a);
                    a.f[0] = (f64)rdf32(0x805724c0u);
                    a.f[1] = (f64)rdf32(0x805724c4u);
                    a.r[0] = rd32((u32)param_1 + 0x30u);
                    (void)tc_call(0x800d3824u, &a);
                    r3 = 0u;
                    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
                        r3 = 1u;
                    }
                    do {
                        if (r3 != 0u) {
                            a.r[0] = rd32(0x805706e8u);
                            r3 = tc_call(0x8007d150u, &a);
                            if (rd32(r3 + 4u) != 1u && ((ppc_cntlzw(rd32(0x80571188u) & 8u) >> 5u) & 0x7ffffffu) != 0u) {
                                a.r[0] = r29;
                                a.r[1] = 1u;
                                a.r[2] = 1u;
                                (void)tc_call(0x800d585cu, &a);
                                break;
                            }
                        }
                        a.r[0] = r29;
                        a.r[1] = 1u;
                        a.r[2] = 0u;
                        (void)tc_call(0x800d585cu, &a);
                    } while (0);
                    a.r[0] = rd32((u32)param_1 + 0x30u);
                    (void)tc_call(0x800d395cu, &a);
                    a.r[0] = rd32((u32)param_1 + 0x30u);
                    (void)tc_call(0x800d48d4u, &a);
                    r4 = rd32(0x804863d8u);
                    r31 = 0x11u;
                    wr32(r4 + 0x9cu, rd32(r4 + 0x9cu) | 0x40000000u);
                    wr32((u32)param_1 + 0x38u, rd32(0x8057118cu) & 0x8000u);
                    wr32(0x8057118cu, rd32(0x8057118cu) & 0xffff7fffu);
                    a.r[0] = 0x80486da8u;
                    (void)tc_call(0x800b8708u, &a);
                    r30 = 1u;
                }
            }
        } while (0);
        if (r31 == 5u) {
            a.r[0] = 1u;
            (void)tc_call(0x80077b70u, &a);
            wr32(0x80571170u, 0u);
        }
        if (r30 != 0u) {
            (void)tc_call(0x80072f78u, &a);
        }
    }
    return (s32)r31;
}
