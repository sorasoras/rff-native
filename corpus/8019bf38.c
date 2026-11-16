#include "tc_rt.h"

void fn_8019bf38(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfb0u, 0x43300000u);
    wr32(0x817fdfb8u, 0x43300000u);
    if (param_2 == 0u) {
        a.r[0] = param_1 + 0x54cu;
        a.r[1] = 0u;
        (void)tc_call(0x8007da30u, &a);
        if (rd32(param_1 + 0x6e8u) > 0u) {
            r3 = param_1 + 0x5f8u;
        } else {
            r3 = 0u;
        }
        if (r3 != 0u) {
            wr32(r3 + 0x30u, 0x1au);
        }
    } else {
        r4 = rd32(param_1 + 0x5bcu);
        if (((((0u - r4) | r4) >> 0x1fu) & 1u) != 0u && rd32(param_1 + 0x5d0u) != 0u) {
            a.r[0] = param_1 + 0x54cu;
            a.r[1] = 1u;
            (void)tc_call(0x8007da30u, &a);
            if ((u32)param_3 == 0u) {
                r30 = 0u;
            } else {
                r30 = 0x200u;
            }
            if (rd32(param_1 + 0x5c0u) == 0x285u) {
                r30 = 0x100u;
            }
            r0 = (u32)rd8(0x80499099u) + rd32(0x8049e140u);
            if ((s32)r0 <= 0) {
                r0 = 0u;
            }
            if ((s32)r0 >= 999) {
                r0 = 0x3e7u;
            }
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r4 = rd32(param_1 + 0x5c0u);
            r0 = r0 & 0xffffu;
            wr32(0x817fdfb4u, r0);
            f1 = rdf64(0x80575760u);
            f30 = (f64)(f32)(rdf64(0x817fdfb0u) - f1);
            r31 = (u32)rd8(((r4 - 0x1f8u) * 0x14u) - 0x7fb60831u);
            if ((u32)param_3 != 0u) {
                r0 = rd32(param_1 + 0xa08u);
                if (r0 != 0x1fu && r0 != 0x20u) {
                    c0lt = (s32)r31 < 3;
                    if (r31 == 3u) {
                        r0 = r0 * 0x58u;
                        r0 = (u32)rd16(r0 - 0x7fb97208u);
                        wr32(0x817fdfbcu, r0);
                        f30 = (f64)(f32)(f30 + (f64)(f32)(rdf64(0x817fdfb8u) - f1));
                    } else if (!c0lt) {
                        if ((s32)r31 < 5) {
                            r0 = r0 * 0x58u;
                            r0 = (u32)rd16(r0 - 0x7fb97206u);
                            wr32(0x817fdfb4u, r0);
                            f30 = (f64)(f32)(f30 + (f64)(f32)(rdf64(0x817fdfb0u) - f1));
                        }
                    } else {
                        c0lt = (s32)r31 < 1;
                        if (r31 == 1u) {
                            r0 = r0 * 0x58u;
                            r0 = (u32)rd16(r0 - 0x7fb9720cu);
                            wr32(0x817fdfbcu, r0);
                            f30 = (f64)(f32)(f30 + (f64)(f32)(rdf64(0x817fdfb8u) - f1));
                        } else if (!c0lt) {
                            r0 = r0 * 0x58u;
                            r0 = (u32)rd16(r0 - 0x7fb9720au);
                            wr32(0x817fdfb4u, r0);
                            f30 = (f64)(f32)(f30 + (f64)(f32)(rdf64(0x817fdfb0u) - f1));
                        }
                    }
                }
            }
            if ((u32)param_3 == 0u) {
                r27 = rd32(0x8049e19cu);
                if ((s32)r27 < 0) {
                    r27 = 0u;
                }
            } else {
                r27 = (u32)rd8((rd32(param_1 + 0xa08u) * 0x58u) - 0x7fb97210u + r31 + 0xcu) + rd32(0x8049e19cu);
                if ((s32)r27 < 0) {
                    r27 = 0u;
                }
            }
            r3 = tc_call(0x80040b64u, &a);
            r4 = ppc_mulhwu(0x446f8657u, r3);
            if ((r3 - (((((((r3 - r4) >> 1u) & 0x7fffffffu) + r4) >> 6u) & 0x3ffffffu) * 0x65u)) < r27) {
                r30 = r30 | 0x20000u;
            }
            r27 = 0u;
            if ((u32)param_3 != 0u) {
                r27 = (u32)rd8(r31 + ((rd32(param_1 + 0xa08u) * 0x58u) - 0x7fb97210u) + 0xfu);
            }
            r3 = tc_call(0x80040b64u, &a);
            r4 = ppc_mulhwu(0x446f8657u, r3);
            if ((r3 - (((((((r3 - r4) >> 1u) & 0x7fffffffu) + r4) >> 6u) & 0x3ffffffu) * 0x65u)) < r27) {
                r30 = r30 | 0x8000000u;
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x80000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x80000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r30 = r30 | 0x80u;
            } else {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x80000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 != 0u) {
                    r30 = r30 | 0x80u;
                }
            }
            if (((u32)rd8(0x8049e1a1u) & 1u) != 0u) {
                r30 = r30 | 0x100000u;
            }
            if (((u32)rd8(0x8049e1a1u) & 2u) != 0u) {
                r30 = r30 | 0x200000u;
            }
            if (((u32)rd8(0x8049e1a1u) & 4u) != 0u) {
                r30 = r30 | 0x400000u;
            }
            if (((u32)rd8(0x8049e1a1u) & 8u) != 0u) {
                r30 = r30 | 0x800000u;
            }
            r0 = rd32(param_1 + 0x5c0u);
            r3 = 1u;
            r4 = 0u;
            if ((s32)r0 >= 504 && (s32)r0 <= 525) {
                r4 = 1u;
            }
            if (r4 == 0u) {
                r4 = 0u;
                if ((s32)r0 >= 625 && (s32)r0 <= 629) {
                    r4 = 1u;
                }
                if (r4 == 0u) {
                    r3 = 0u;
                }
            }
            if (r3 == 0u) {
                r3 = 1u;
                r4 = 0u;
                if ((s32)r0 >= 526 && (s32)r0 <= 547) {
                    r4 = 1u;
                }
                if (r4 == 0u) {
                    r4 = 0u;
                    if ((s32)r0 >= 592 && (s32)r0 <= 613) {
                        r4 = 1u;
                    }
                    if (r4 == 0u) {
                        r3 = 0u;
                    }
                }
                if (r3 == 0u) {
                    r3 = 0u;
                    if ((s32)r0 >= 548 && (s32)r0 <= 569) {
                        r3 = 1u;
                    }
                    if (r3 == 0u) {
                        r3 = 1u;
                        r4 = 1u;
                        r5 = 1u;
                        r6 = 1u;
                        r7 = 1u;
                        r8 = 0u;
                        if ((s32)r0 >= 570 && (s32)r0 <= 591) {
                            r8 = 1u;
                        }
                        if (r8 == 0u) {
                            r8 = 0u;
                            if ((s32)r0 >= 614 && (s32)r0 <= 624) {
                                r8 = 1u;
                            }
                            if (r8 == 0u) {
                                r7 = 0u;
                            }
                        }
                        if (r7 == 0u) {
                            r7 = 0u;
                            if ((s32)r0 >= 630 && (s32)r0 <= 634) {
                                r7 = 1u;
                            }
                            if (r7 == 0u) {
                                r6 = 0u;
                            }
                        }
                        if (r6 == 0u) {
                            r6 = 0u;
                            if ((s32)r0 >= 635 && (s32)r0 <= 639) {
                                r6 = 1u;
                            }
                            if (r6 == 0u) {
                                r5 = 0u;
                            }
                        }
                        if (r5 == 0u) {
                            r5 = 0u;
                            if ((s32)r0 >= 625 && (s32)r0 <= 629) {
                                r5 = 1u;
                            }
                            if (r5 == 0u) {
                                r4 = 0u;
                            }
                        }
                        if (r4 == 0u) {
                            r4 = 0u;
                            if ((s32)r0 >= 640 && (s32)r0 <= 644) {
                                r4 = 1u;
                            }
                            if (r4 == 0u) {
                                r3 = 0u;
                            }
                        }
                        if (r3 != 0u) {
                            r30 = r30 | 0x2000u;
                        }
                    } else {
                        r30 = r30 | 0x1000u;
                    }
                } else {
                    r30 = r30 | 0x800u;
                }
            } else {
                r30 = r30 | 0x400u;
            }
            r0 = rd32(param_1 + 0xa08u);
            if (r0 == 0x1cu || r0 == 0x1du) {
                r4 = rd32(0x8033ae3cu);
                r3 = rd32(0x8033ae40u);
                r0 = rd32(0x8033ae44u);
                wr32(0x817fdfa0u, rd32(0x8033ae38u));
                wr32(0x817fdfa4u, r4);
                wr32(0x817fdfa8u, r3);
                wr32(0x817fdfacu, r0);
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if (rd32(((r31 << 2u) & 0x3fcu) - 0x7e802060u) > r3) {
                    r30 = r30 | 0x2000000u;
                }
                r30 = r30 | 0x80u;
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x40000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x40000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r30 = r30 | 0x4000u;
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x2000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x2000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd32(0x8049e1a8u)) {
                    r30 = r30 | 0x1000000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x4000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x4000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd32(0x8049e1acu)) {
                    r30 = r30 | 0x2000000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x8000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x8000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd32(0x8049e1b0u)) {
                    r30 = r30 | 0x4000000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x10000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x10000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd32(0x8049e1b4u)) {
                    r30 = r30 | 0x10000000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x1000000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x1000000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd32(0x8049e1a4u)) {
                    r30 = r30 | 0x8000000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x400000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x400000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r30 = r30 | 0x10000u;
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x100000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x100000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r3 = tc_call(0x80040b64u, &a);
                r5 = ppc_mulhwu(0x446f8657u, r3);
                r3 = r3 - (((((((r3 - r5) >> 1u) & 0x7fffffffu) + r5) >> 6u) & 0x3ffffffu) * 0x65u);
                if ((s32)r3 < (s32)rd8(0x8049e18eu)) {
                    r30 = r30 | 0x40000u;
                }
            }
            r29 = 1u;
            if ((rd32(0x80499094u) & 0x20000u) == 0u) {
                a.r[0] = 0x8049e140u;
                a.r[1] = 0x20000u;
                r3 = tc_call(0x801a8f18u, &a);
                if (r3 == 0u) {
                    r29 = 0u;
                }
            }
            if (r29 != 0u) {
                r4 = rd32(0x8033ae4cu);
                r3 = rd32(0x8033ae50u);
                r0 = rd32(0x8033ae54u);
                wr32(0x817fdf90u, rd32(0x8033ae48u));
                wr32(0x817fdf94u, r4);
                wr32(0x817fdf98u, r3);
                wr32(0x817fdf9cu, r0);
                r3 = tc_call(0x80040b64u, &a);
                r30 = r30 | rd32(((r3 << 2u) & 0xcu) - 0x7e802070u);
            }
            r0 = rd32(0x8049e198u);
            if ((s32)r0 < 0) {
                r0 = 0u;
            }
            r0 = r0 ^ 0x80000000u;
            f1 = rdf64(0x80575768u);
            wr32(0x817fdfbcu, r0);
            f2 = (f64)rdf32(0x80575758u);
            f0 = (f64)(f32)(rdf64(0x817fdfb8u) - f1);
            if (!(f2 < f0)) {
                f2 = f0;
            }
            f0 = (f64)(f32)((f64)rdf32(0x80575758u) - f2);
            f31 = (f64)rdf32(0x8057575cu);
            if (rd32(param_1 + 0x6e8u) > 0u) {
                r29 = param_1 + 0x5f8u;
            } else {
                r29 = 0u;
            }
            if (r29 != 0u) {
                wr32(r29 + 0x30u, rd32(r29 + 0x30u) | r30);
                wrf32d(r29 + 0x24u, f30);
                wrf32d(r29 + 0xa4u, f0);
                wr32(r29 + 0x44u, 0u);
                a.r[0] = rd32(param_1 + 0x5c0u);
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0x817fdf88u;
                r3 = tc_call(0x800bef64u, &a);
                if (r3 == 0u) {
                    wrf32d(r29 + 0x20u, f31);
                } else {
                    wrf32d(r29 + 0x20u, (f64)rdf32(0x817fdf88u));
                }
            }
        }
    }
    return;
}
