#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800aceb8(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    c0lt = param_2 < 230;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfd8u, 0x43300000u);
    wr32(0x817fdfe0u, 0x43300000u);
    if ((u32)param_2 != 0xe6u) {
        if (!c0lt) {
            c0lt = param_2 < 334;
            if ((u32)param_2 == 0x14eu) {
                a.r[0] = 0u;
                (void)tc_call(0x80194c2cu, &a);
                wr32((u32)param_1 + 0x7cu, 1u);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 370;
                if ((u32)param_2 == 0x172u) {
                    r0 = rd32(param_3);
                    r3 = rd32((u32)param_1 + 0xcu);
                    if ((s32)r0 < 0 || (s32)r0 >= 3) {
                        r3 = 0u;
                        return r3;
                    }
                    wr32(r3, r0);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 544;
                    if ((u32)param_2 == 0x220u) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        a.r[0] = r3;
                        a.r[1] = rd32(param_3);
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x800ac680u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt) {
                        c0lt = param_2 < 372;
                        if ((u32)param_2 == 0x174u) {
                            r4 = rd32(param_3);
                            r0 = rd32((u32)param_1 + 0xcu);
                            if ((s32)r4 < 0 || (s32)r4 >= 32) {
                                r3 = 0u;
                            } else {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                r3 = 0x21u;
                            } else {
                                r3 = (u32)(s8)rd8(r0 + r4 + 0x24u);
                            }
                            a.r[0] = r3;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                            r3 = 0u;
                            return r3;
                        }
                        if (c0lt) {
                            r6 = 0x817fdf98u;
                            r31 = rd32((u32)param_1 + 0xcu);
                            r4 = 0u;
                            ctr = 8u;
                            do {
                                r5 = 0x21u;
                                if ((u32)(s8)rd8(r31 + r4 + 4u) != 0u) {
                                    r5 = (u32)(s8)r4;
                                }
                                wr8(r6, (u8)r5);
                                r4 = r4 + 1u;
                                r5 = 0x21u;
                                if ((u32)(s8)rd8(r31 + r4 + 4u) != 0u) {
                                    r5 = (u32)(s8)r4;
                                }
                                wr8(r6 + 1u, (u8)r5);
                                r4 = r4 + 1u;
                                r5 = 0x21u;
                                if ((u32)(s8)rd8(r31 + r4 + 4u) != 0u) {
                                    r5 = (u32)(s8)r4;
                                }
                                wr8(r6 + 2u, (u8)r5);
                                r4 = r4 + 1u;
                                r5 = 0x21u;
                                if ((u32)(s8)rd8(r31 + r4 + 4u) != 0u) {
                                    r5 = (u32)(s8)r4;
                                }
                                wr8(r6 + 3u, (u8)r5);
                                r6 = r6 + 4u;
                                r4 = r4 + 1u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                            r0 = rd32(r31);
                            c0lt = (s32)r0 < 1;
                            if (r0 == 1u) {
                                a.r[0] = 0x817fdf98u;
                                a.r[1] = 0x20u;
                                a.r[2] = 1u;
                                a.r[3] = 0x800ad7c0u;
                                (void)tc_call(0x8025ba64u, &a);
                            } else if (!c0lt) {
                                if ((s32)r0 < 3) {
                                    a.r[0] = 0x817fdf98u;
                                    a.r[1] = 0x20u;
                                    a.r[2] = 1u;
                                    a.r[3] = 0x800ad830u;
                                    (void)tc_call(0x8025ba64u, &a);
                                }
                            } else if ((s32)r0 >= 0) {
                                r29 = 0u;
                                do {
                                    r3 = tc_call(0x80040b64u, &a);
                                    r30 = r3 & 0x1fu;
                                    r3 = tc_call(0x80040b64u, &a);
                                    r3 = r3 & 0x1fu;
                                    r29 = r29 + 1u;
                                    r4 = (u32)rd8(r30 - 0x7e802068u);
                                    wr8(r30 - 0x7e802068u, rd8(r3 - 0x7e802068u));
                                    wr8(r3 - 0x7e802068u, (u8)r4);
                                } while ((s32)r29 < 64);
                            }
                            r30 = 0x817fdf98u;
                            a.r[0] = 0x817fdfb8u;
                            a.r[1] = 0x21u;
                            a.r[2] = 0x20u;
                            (void)tc_call(0x8000443cu, &a);
                            r4 = 0x817fdfb8u;
                            r3 = 0u;
                            ctr = 4u;
                            do {
                                r5 = (u32)rd8(r30);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 1u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 2u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 3u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 4u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 5u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 6u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r5 = (u32)rd8(r30 + 7u);
                                if (r5 != 0x21u) {
                                    wr8(r4, (u8)r5);
                                    r4 = r4 + 1u;
                                }
                                r3 = r3 + 7u;
                                r30 = r30 + 8u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                            a.r[0] = 0x817fdf98u;
                            a.r[1] = 0x817fdfb8u;
                            a.r[2] = 0x20u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r31 + 0x24u;
                            a.r[1] = 0x817fdf98u;
                            a.r[2] = 0x20u;
                            (void)tc_call(0x80004338u, &a);
                            r3 = 0u;
                            return r3;
                        }
                    }
                } else {
                    c0lt = param_2 < 367;
                    if ((u32)param_2 == 0x16fu) {
                        r5 = rd32(param_3);
                        r4 = rd32((u32)param_1 + 0xcu);
                        r6 = 0u;
                        ctr = 8u;
                        do {
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        r3 = 0u;
                        return r3;
                    }
                    if (!c0lt) {
                        if (param_2 >= 369) {
                            r4 = rd32(param_3);
                            r5 = rd32(param_3 + 4u);
                            r0 = rd32((u32)param_1 + 0xcu);
                            if ((s32)r4 < 0 || (s32)r4 >= 32) {
                                r3 = 0u;
                            } else {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                r3 = 0u;
                                return r3;
                            }
                            wr8(r0 + r4 + 4u, (u8)r5);
                            r3 = 0u;
                            return r3;
                        }
                        r5 = rd32(param_3);
                        r4 = rd32((u32)param_1 + 0xcu);
                        r6 = 1u;
                        ctr = 3u;
                        do {
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            if ((s32)r6 < 0 || (s32)r6 >= 32) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                            if (r0 != 0u) {
                                wr8(r4 + r6 + 4u, (u8)r5);
                            }
                            r6 = r6 + 1u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        r3 = 0u;
                        return r3;
                    }
                    if (param_2 >= 366) {
                        r5 = rd32((u32)param_1 + 0xcu);
                        r6 = 0u;
                        ctr = 2u;
                        do {
                            r7 = r5 + r6;
                            r6 = r6 + 8u;
                            wr8(r7 + 4u, 0u);
                            wr8(r7 + 0x24u, 0x21u);
                            wr8(r7 + 5u, 0u);
                            wr8(r7 + 0x25u, 0x21u);
                            wr8(r7 + 6u, 0u);
                            wr8(r7 + 0x26u, 0x21u);
                            wr8(r7 + 7u, 0u);
                            wr8(r7 + 0x27u, 0x21u);
                            wr8(r7 + 8u, 0u);
                            wr8(r7 + 0x28u, 0x21u);
                            wr8(r7 + 9u, 0u);
                            wr8(r7 + 0x29u, 0x21u);
                            wr8(r7 + 0xau, 0u);
                            wr8(r7 + 0x2au, 0x21u);
                            wr8(r7 + 0xbu, 0u);
                            wr8(r7 + 0x2bu, 0x21u);
                            r7 = r5 + r6;
                            r6 = r6 + 8u;
                            wr8(r7 + 4u, 0u);
                            wr8(r7 + 0x24u, 0x21u);
                            wr8(r7 + 5u, 0u);
                            wr8(r7 + 0x25u, 0x21u);
                            wr8(r7 + 6u, 0u);
                            wr8(r7 + 0x26u, 0x21u);
                            wr8(r7 + 7u, 0u);
                            wr8(r7 + 0x27u, 0x21u);
                            wr8(r7 + 8u, 0u);
                            wr8(r7 + 0x28u, 0x21u);
                            wr8(r7 + 9u, 0u);
                            wr8(r7 + 0x29u, 0x21u);
                            wr8(r7 + 0xau, 0u);
                            wr8(r7 + 0x2au, 0x21u);
                            wr8(r7 + 0xbu, 0u);
                            wr8(r7 + 0x2bu, 0x21u);
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                        wr32(r5, 0u);
                        r3 = 0u;
                        return r3;
                    }
                }
            } else {
                c0lt = param_2 < 288;
                if ((u32)param_2 == 0x120u) {
                    (void)tc_call(0x801e89a4u, &a);
                    wr32((u32)param_1 + 0x78u, 1u);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 332;
                    if ((u32)param_2 == 0x14cu) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = param_3;
                        a.r[2] = param_4;
                        (void)tc_call(0x800acdacu, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (!c0lt) {
                        a.r[0] = (u32)param_1;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x800ace98u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if ((u32)param_2 == 0x142u) {
                        f1 = (f64)rdf32(0x80572be4u);
                        if (rd32(param_3) == 0u) {
                            f1 = (f64)(f32)(f1 * (f64)rdf32(0x80572bc4u));
                        }
                        wrf32d((u32)param_1 + 0x84u, f1);
                        r3 = 0u;
                        return r3;
                    }
                } else {
                    c0lt = param_2 < 278;
                    if ((u32)param_2 == 0x116u) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        a.r[0] = r3;
                        (void)tc_call(0x800ac390u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    if (c0lt && param_2 >= 277) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        a.r[0] = r3;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x800ac2e0u, &a);
                        r3 = 0u;
                        return r3;
                    }
                }
            }
        } else if (param_2 >= 137) {
            c0lt = param_2 < 166;
            if ((u32)param_2 == 0xa6u) {
                a.r[0] = rd32(param_3 + 4u);
                r3 = tc_call(0x800a4050u, &a);
                a.r[0] = (u32)param_1 + 0x18u;
                a.r[1] = rd32(param_3);
                a.r[2] = r3;
                (void)tc_call(0x800ae430u, &a);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 169;
                if ((u32)param_2 == 0xa9u) {
                    a.r[0] = rd32(param_3);
                    r3 = tc_call(0x800a4500u, &a);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    r3 = r3 + 0x78u;
                    a.r[0] = r3;
                    r3 = tc_call(0x800a64acu, &a);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x800a796cu, &a);
                    r3 = 0u;
                    return r3;
                }
                if (c0lt) {
                    if (param_2 >= 168) {
                        a.r[0] = (u32)param_1 + 0x18u;
                        r3 = tc_call(0x800ae44cu, &a);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x800a796cu, &a);
                        r3 = 0u;
                        return r3;
                    }
                    a.r[0] = (u32)param_1 + 0x18u;
                    a.r[1] = rd32(param_3);
                    a.r[2] = 0x804990e6u;
                    (void)tc_call(0x800ae430u, &a);
                    r3 = 0u;
                    return r3;
                }
            } else {
                c0lt = param_2 < 151;
                if ((u32)param_2 == 0x97u) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x4cu);
                    a.r[0] = r3;
                    (void)tc_call(0x800ac03cu, &a);
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x4cu);
                    if (rd32(r3 + 0xcu) == 2u) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800ae1c0u, &a);
                        r3 = 0u;
                        return r3;
                    }
                    r3 = 1u;
                    return r3;
                }
                if (!c0lt) {
                    if (param_2 < 153) {
                        a.r[0] = (u32)param_1;
                        (void)tc_call(0x800ae1c8u, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else if (param_2 < 139) {
                    a.r[0] = (u32)param_2;
                    (void)tc_call(0x800acd2cu, &a);
                    r3 = 0u;
                    return r3;
                }
            }
        } else {
            c0lt = param_2 < 73;
            if ((u32)param_2 == 0x49u) {
                a.r[0] = (u32)param_1;
                a.r[1] = rd32(param_3);
                a.r[2] = rd32(param_3 + 4u);
                a.r[3] = rd32(param_3 + 8u);
                a.r[4] = 0xffffffffu;
                (void)tc_call(0x800ad8a0u, &a);
                r3 = 0u;
                return r3;
            }
            if (!c0lt) {
                c0lt = param_2 < 129;
                if ((u32)param_2 == 0x81u) {
                    r4 = rd32(param_3 + 4u);
                    r0 = rd32(param_3 + 8u);
                    wr32(0x817fdfdcu, rd32(param_3) ^ 0x80000000u);
                    r4 = r4 ^ 0x80000000u;
                    r3 = r0 ^ 0x80000000u;
                    f0 = rdf64(0x817fdfd8u);
                    f5 = rdf64(0x80572bd8u);
                    r0 = rd32(param_3 + 0xcu) ^ 0x80000000u;
                    wr32(0x817fdfdcu, r3);
                    f1 = (f64)(f32)(f0 - f5);
                    r3 = rd32(0x805710e0u);
                    f0 = rdf64(0x817fdfd8u);
                    wr32(0x817fdfe4u, r4);
                    r3 = r3 * 0x6d0u;
                    f4 = rdf64(0x817fdfe0u);
                    r3 = r3 - 0x7fc2e738u;
                    f3 = (f64)(f32)px_fdiv((f64)(f32)(f0 - f5), (f64)rdf32(0x80572bd4u));
                    wr32(0x817fdfe4u, r0);
                    a.f[0] = f1;
                    a.f[1] = (f64)(f32)(f4 - f5);
                    a.f[2] = f3;
                    a.f[3] = (f64)(f32)(rdf64(0x817fdfe0u) - f5);
                    a.r[0] = r3;
                    (void)tc_call(0x80056b18u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    if (param_2 >= 133) {
                        a.r[0] = (u32)param_2;
                        a.r[1] = rd32(param_3);
                        (void)tc_call(0x800acb20u, &a);
                        r3 = 0u;
                        return r3;
                    }
                } else if (param_2 < 75) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(param_3);
                    a.r[2] = rd32(param_3 + 8u);
                    a.r[3] = rd32(param_3 + 0xcu);
                    a.r[4] = rd32(param_3 + 4u);
                    (void)tc_call(0x800ad8a0u, &a);
                    r3 = 0u;
                    return r3;
                }
            } else {
                c0lt = param_2 < 71;
                if ((u32)param_2 == 0x47u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(param_3);
                    a.r[2] = 0xffffffffu;
                    (void)tc_call(0x800ad914u, &a);
                    r3 = 0u;
                    return r3;
                }
                if (!c0lt) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = rd32(param_3);
                    a.r[2] = rd32(param_3 + 4u);
                    (void)tc_call(0x800ad914u, &a);
                    r3 = 0u;
                    return r3;
                }
                if ((u32)param_2 == 7u) {
                    wr32((u32)param_1 + 0x6cu, rd32(param_3));
                    r3 = 0u;
                    return r3;
                }
            }
        }
        r3 = 2u;
        return r3;
    }
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x4cu);
    a.r[0] = r3;
    a.r[1] = rd32(param_3);
    (void)tc_call(0x800ac284u, &a);
    r3 = 0u;
    return r3;
}
