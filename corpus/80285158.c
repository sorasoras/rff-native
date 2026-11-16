#include "tc_rt.h"

void fn_80285158(void)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r0 = (u32)rd8(0x8050f10cu);
    c0lt = (s32)r0 < 16;
    if (r0 == 0x10u) {
        r0 = (u32)rd8(0x8050fe1bu);
        wr8(0x8050fe19u, 1u);
        c0lt = (s32)r0 < 2;
        do {
            if (r0 != 2u) {
                if (!c0lt) {
                    if ((s32)r0 >= 6) {
                        r0 = 0xfu;
                        fl_ = 1u;
                        break;
                    }
                    if ((s32)r0 >= 4) break;
                } else {
                    c0lt = (s32)r0 < 0;
                    if (r0 == 0u) break;
                    if (c0lt) {
                        r0 = 0xfu;
                        fl_ = 1u;
                        break;
                    }
                }
                a.r[0] = 0x8050fdc0u;
                (void)tc_call(0x80287e74u, &a);
                a.r[0] = rd32(rd32(0x8050f118u)) + 0x40u;
                (void)tc_call(0x80287a68u, &a);
                r0 = 0x11u;
                fl_ = 1u;
                break;
            }
        } while (0);
        if (fl_ == 1u) {
            fl_ = 0u;
        } else if ((u32)rd8(0x8050f7e9u) != 0u) {
            wr8(0x8050fe1bu, 4u);
            r0 = 0xfu;
        } else {
            a.r[0] = 0x8050fdc0u;
            (void)tc_call(0x802881fcu, &a);
            a.r[0] = 0x8050fe00u;
            (void)tc_call(0x80287a68u, &a);
            r0 = 0x11u;
        }
        wr8(0x8050f10cu, (u8)r0);
    } else {
        if (!c0lt) {
            c0lt = (s32)r0 < 24;
            if (r0 == 0x18u) {
                r30 = 0x18u;
                r3 = tc_call(0x8022c2b0u, &a);
                r28 = (u32)rd8(0x8050f7e5u);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                if (r28 == 4u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r28 = (u32)rd8(0x8050f7e4u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r28 == 4u) {
                        r30 = 0xeu;
                    }
                }
                r3 = (u32)(s16)rd16(0x8050f84au) - 1u;
                wr16(0x8050f84au, (u16)r3);
                if ((s32)(s16)r3 < 0) {
                    r30 = 1u;
                }
                wr8(0x8050f10cu, (u8)r30);
                return;
            }
            if (c0lt) {
                c0lt = (s32)r0 < 20;
                if (r0 == 0x14u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r28 = (u32)rd8(0x8050f112u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r28 == 0xau) {
                        a.r[0] = rd32(rd32(0x8050f168u)) + 0x40u;
                        (void)tc_call(0x80287a68u, &a);
                    }
                    r3 = tc_call(0x80287c9cu, &a);
                    r28 = r3;
                    if (r3 != 0u) {
                        if ((u32)rd8(r3 + 0x59u) == 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0x8050fdc0u;
                            a.r[2] = 0x60u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r28 + 0x40u;
                            (void)tc_call(0x80287938u, &a);
                            a.r[0] = r28;
                            (void)tc_call(0x802880e4u, &a);
                            r5 = 7u;
                            wr32((((u32)rd8(r28 + 0x56u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, r28 + 0x40u);
                        } else {
                            r5 = 0xffu;
                        }
                    } else {
                        r5 = 0xffu;
                    }
                    wr8(0x8050f10cu, (u8)r5);
                    return;
                }
                if (!c0lt) {
                    c0lt = (s32)r0 < 22;
                    if (r0 == 0x16u) {
                        r3 = tc_call(0x80284edcu, &a);
                        wr8(0x8050f10cu, (u8)r3);
                        return;
                    }
                    if (!c0lt) {
                        wr8(0x8050f7e6u, (u8)((u32)rd8(0x8050f7e6u) + 1u));
                        a.r[0] = 0x8050fdc0u;
                        a.r[1] = 0u;
                        a.r[2] = 0x60u;
                        (void)tc_call(0x8000443cu, &a);
                        r3 = 1u;
                        if ((u32)rd8(0x8050f7e9u) == 0u) {
                            r3 = 0xeu;
                        }
                        wr8(0x8050f10cu, (u8)r3);
                        return;
                    }
                    a.r[0] = 0x8050fdc0u;
                    (void)tc_call(0x80287e74u, &a);
                    a.r[0] = rd32(rd32(0x8050f118u)) + 0x40u;
                    (void)tc_call(0x80287a68u, &a);
                    r3 = tc_call(0x8022c2b0u, &a);
                    r28 = (u32)rd8(0x8050f112u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r28 == 0xau) {
                        a.r[0] = rd32(rd32(0x8050f168u)) + 0x40u;
                        (void)tc_call(0x80287a68u, &a);
                    }
                    r3 = tc_call(0x80287c9cu, &a);
                    r28 = r3;
                    if (r3 != 0u) {
                        if ((u32)rd8(r3 + 0x59u) == 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0x8050fdc0u;
                            a.r[2] = 0x60u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r28 + 0x40u;
                            (void)tc_call(0x80287938u, &a);
                            a.r[0] = r28;
                            (void)tc_call(0x802880e4u, &a);
                            r5 = 7u;
                            wr32((((u32)rd8(r28 + 0x56u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, r28 + 0x40u);
                        } else {
                            r5 = 0xffu;
                        }
                    } else {
                        r5 = 0xffu;
                    }
                    wr8(0x8050f10cu, (u8)r5);
                    return;
                }
                c0lt = (s32)r0 < 18;
                if (r0 == 0x12u) {
                    r0 = (u32)rd8(0x8050fe1bu);
                    c0lt = (s32)r0 < 3;
                    if (r0 == 3u) {
                        r0 = 0x17u;
                    } else if (!c0lt) {
                        c0lt = (s32)r0 < 5;
                        if (r0 == 5u) {
                            r0 = 0x15u;
                        } else if (c0lt) {
                            r0 = 7u;
                        }
                    } else {
                        c0lt = (s32)r0 < 1;
                        if (r0 == 1u) {
                            r0 = 0x13u;
                        } else if (!c0lt) {
                            r0 = 7u;
                        } else if ((s32)r0 >= 0) {
                            r0 = 0x14u;
                        }
                    }
                    wr8(0x8050f10cu, (u8)r0);
                    return;
                }
                if (!c0lt) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r28 = (u32)rd8(0x8050f113u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r28 == 6u) {
                        a.r[0] = rd32(rd32(0x8050f118u)) + 0x40u;
                        (void)tc_call(0x80287a68u, &a);
                    }
                    r3 = tc_call(0x80287c9cu, &a);
                    r28 = r3;
                    if (r3 != 0u) {
                        if ((u32)rd8(r3 + 0x59u) == 0u) {
                            a.r[0] = r3;
                            a.r[1] = 0x8050fdc0u;
                            a.r[2] = 0x60u;
                            (void)tc_call(0x80004338u, &a);
                            a.r[0] = r28 + 0x40u;
                            (void)tc_call(0x80287938u, &a);
                            a.r[0] = r28;
                            (void)tc_call(0x80287d5cu, &a);
                            r5 = 0x17u;
                            wr32((((u32)rd8(r28 + 0x56u) << 2u) & 0xfffffffcu) - 0x7faf01e0u, r28 + 0x40u);
                        } else {
                            r5 = 0xffu;
                        }
                    } else {
                        r5 = 0xffu;
                    }
                    wr8(0x8050f10cu, (u8)r5);
                    return;
                }
                r3 = (u32)rd8(0x8050f7e9u);
                wr8(0x8050fe19u, 1u);
                wr8(0x8050fe1bu, (u8)((((0u - r3) | r3) >> 0x1fu) & 1u));
                a.r[0] = 0x8050fe00u;
                a.r[1] = 0x8050fcb8u;
                a.r[2] = 6u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = 0x8050fdc0u;
                a.r[1] = 0x8050fcbeu;
                a.r[2] = 0x40u;
                (void)tc_call(0x80004338u, &a);
                a.r[0] = 0x8050fe06u;
                a.r[1] = 0u;
                a.r[2] = 0x10u;
                (void)tc_call(0x8000443cu, &a);
                wr8(0x8050f10cu, 0xfu);
                return;
            }
            c0lt = (s32)r0 < 29;
            if (r0 == 0x1du) {
                do {
                    if ((u32)(s8)rd8(0x8050f7e8u) != 0u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r28 = (u32)rd8(0x8050f7e5u);
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if (r28 == 4u) {
                            r3 = tc_call(0x8022c2b0u, &a);
                            r28 = (u32)rd8(0x8050f7e4u);
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            if (r28 == 4u) {
                                r4 = 0xeu;
                                break;
                            }
                        }
                        r4 = 0x1du;
                        r3 = (u32)(s16)rd16(0x8050f848u) - 1u;
                        wr16(0x8050f848u, (u16)r3);
                        if ((s32)(s16)r3 < 0) {
                            r4 = 2u;
                        }
                    } else {
                        r4 = 0xeu;
                    }
                } while (0);
                wr8(0x8050f10cu, (u8)r4);
                return;
            }
            if (!c0lt) {
                if (r0 == 0xffu) {
                    a.r[0] = 0x8050fdc0u;
                    a.r[1] = 0u;
                    a.r[2] = 0x60u;
                    (void)tc_call(0x8000443cu, &a);
                    r3 = 1u;
                    if ((u32)rd8(0x8050f7e9u) == 0u) {
                        r3 = 0xeu;
                    }
                    wr8(0x8050f10cu, (u8)r3);
                    return;
                }
            } else {
                c0lt = (s32)r0 < 26;
                if (r0 == 0x1au) {
                    return;
                }
                if (c0lt) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    wr8(0x8050f10cu, 0xdu);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    a.r[0] = 0x80284c14u;
                    (void)tc_call(0x80274aa4u, &a);
                    return;
                }
            }
        } else {
            c0lt = (s32)r0 < 7;
            if (r0 == 7u) {
                if ((u32)rd8(0x8050f10eu) == 0u) {
                    a.r[0] = 0x8050fe00u;
                    r3 = tc_call(0x80287bc4u, &a);
                    r30 = r3;
                    (void)tc_call(0x80289ba4u, &a);
                    (void)tc_call(0x80289ba4u, &a);
                    wr32(0x817fdfb8u, (u32)rd8(r30 + 0x4du));
                    wr32(0x817fdfbcu, (u32)rd8(r30 + 0x4eu));
                    wr32(0x817fdfc0u, (u32)rd8(r30 + 0x4fu));
                    wr32(0x817fdfc4u, (u32)rd8(r30 + 0x50u));
                    wr32(0x817fdfc8u, (u32)rd8(r30 + 0x51u));
                    wr32(0x817fdfccu, (u32)rd8(r30 + 0x52u));
                    wr32(0x817fdfd0u, (u32)rd8(r30 + 0x53u));
                    wr32(0x817fdfd4u, (u32)rd8(r30 + 0x54u));
                    wr32(0x817fdfd8u, (u32)rd8(r30 + 0x55u));
                    f1 = tc_callf(0x80289ba4u, &a);
                    wr8(0x8050f10eu, 2u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 1u;
                    a.r[1] = r30 + 0x40u;
                    a.r[2] = r30 + 0x46u;
                    a.r[3] = 0x80288fb8u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80296a7cu, &a);
                    r0 = 8u;
                } else {
                    r0 = 7u;
                }
                wr8(0x8050f10cu, (u8)r0);
                return;
            }
            if (!c0lt) {
                c0lt = (s32)r0 < 13;
                if (r0 == 0xdu) {
                    return;
                }
                if (!c0lt) {
                    if ((s32)r0 >= 15) {
                        r28 = 0xffu;
                        a.r[0] = 0x8050fcbeu;
                        a.r[1] = 0x80391814u;
                        a.r[2] = 0x10u;
                        r3 = tc_call(0x802592d8u, &a);
                        if (r3 == 0u) {
                            wr8(0x8050fe19u, 2u);
                            a.r[0] = 0x8050fe00u;
                            a.r[1] = 0u;
                            a.r[2] = 0x12u;
                            (void)tc_call(0x802925c4u, &a);
                            r28 = 6u;
                        }
                        wr8(0x8050f10cu, (u8)r28);
                        return;
                    }
                    r3 = tc_call(0x80284fe8u, &a);
                    wr8(0x8050f10cu, (u8)r3);
                    return;
                }
                c0lt = (s32)r0 < 10;
                if (r0 == 0xau) {
                    r28 = 0xau;
                    if ((u32)rd8(0x8050f10eu) == 0u) {
                        r28 = 0x14u;
                        a.r[0] = 0x8050f7fcu;
                        (void)tc_call(0x80287a68u, &a);
                    }
                    wr8(0x8050f10cu, (u8)r28);
                    return;
                }
                if (c0lt && (s32)r0 < 9) {
                    r3 = 8u;
                    if ((u32)rd8(0x8050f10eu) == 0u) {
                        r3 = 0x16u;
                    }
                    wr8(0x8050f10cu, (u8)r3);
                    return;
                }
            } else {
                c0lt = (s32)r0 < 3;
                if (r0 == 3u) {
                    r3 = tc_call(0x8022c2b0u, &a);
                    r30 = (u32)rd8(0x8050f7e5u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r30 == 4u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r30 = (u32)rd8(0x8050f7e4u);
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        if (r30 == 4u) {
                            (void)tc_call(0x80289ba4u, &a);
                            (void)tc_call(0x8028ffa8u, &a);
                            r0 = 0x1au;
                            wr8(0x8050f10cu, (u8)r0);
                            return;
                        }
                    }
                    r0 = 3u;
                    wr8(0x8050f10cu, (u8)r0);
                    return;
                }
                if (!c0lt) {
                    c0lt = (s32)r0 < 5;
                    if (r0 == 5u) {
                        r28 = 0x11u;
                        a.r[0] = 0x8050fcb8u;
                        r3 = tc_call(0x80287bc4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = 0x8050fdc0u;
                            a.r[1] = r3;
                            a.r[2] = 0x60u;
                            (void)tc_call(0x80004338u, &a);
                            r28 = 0x10u;
                        }
                        wr8(0x8050f10cu, (u8)r28);
                        return;
                    }
                    if (!c0lt) {
                        return;
                    }
                    r30 = 1u;
                    if ((u32)rd8(0x80571b4au) != 0u) {
                        if ((u32)rd8(0x80571b48u) == 0u) {
                            a.r[0] = 0x8050fcbeu;
                            a.r[1] = 0x80391814u;
                            a.r[2] = 0x10u;
                            r3 = tc_call(0x802592d8u, &a);
                            if (r3 == 0u) {
                                r30 = 5u;
                            }
                        }
                        if ((s32)(s8)rd8(0x80571b49u) < (s32)(s8)rd8(0x8050f80bu)) {
                            r30 = 1u;
                        }
                    }
                    if ((u32)rd8(0x8050f7e9u) == 0u && r30 == 1u) {
                        r30 = 0x18u;
                        r3 = tc_call(0x8022c2b0u, &a);
                        r28 = (u32)rd8(0x8050f7e5u);
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        r0 = 0x64u;
                        if (r28 == 3u) {
                            r0 = 0xc8u;
                        }
                        wr16(0x8050f84au, (u16)r0);
                        r3 = tc_call(0x8022c2b0u, &a);
                        wr8(0x8050f7ebu, 0u);
                        wr8(0x8050f7eau, 1u);
                        a.r[0] = r3;
                        (void)tc_call(0x8022c2d8u, &a);
                        a.r[0] = 0u;
                        a.r[1] = 1u;
                        (void)tc_call(0x8028feccu, &a);
                    }
                    wr8(0x8050f10cu, (u8)r30);
                    return;
                }
                c0lt = (s32)r0 < 1;
                if (r0 == 1u) {
                    r3 = tc_call(0x80284d7cu, &a);
                    wr8(0x8050f10cu, (u8)r3);
                    return;
                }
                if (!c0lt) {
                    r0 = (u32)rd8(0x8050f7e7u);
                    wr8(0x817fdfe0u, 1u);
                    wr8(0x817fdfe2u, 1u);
                    wr8(0x817fdfe3u, 0u);
                    if (r0 == 0u) {
                        if ((u32)rd8(0x8050f7e9u) != 0u) {
                            r3 = tc_call(0x8022c2b0u, &a);
                            r28 = (u32)rd8(0x8050f7e5u);
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            r0 = 3u;
                            if (r28 == 3u) {
                                r0 = 8u;
                            }
                            wr8(0x817fdfe1u, (u8)r0);
                        } else {
                            r3 = tc_call(0x8022c2b0u, &a);
                            r28 = (u32)rd8(0x8050f7e5u);
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            r3 = 5u;
                            if (r28 == 3u) {
                                r3 = 0xau;
                            }
                            wr8(0x817fdfe1u, (u8)(r3 - (u32)rd8(0x8050f7e8u)));
                        }
                    } else {
                        wr8(0x817fdfe1u, 3u);
                    }
                    wr8(0x80571b4au, 0u);
                    a.r[0] = 0x8050fcb8u;
                    a.r[1] = 0u;
                    a.r[2] = 0x108u;
                    (void)tc_call(0x8000443cu, &a);
                    a.r[0] = 0x817fdfe0u;
                    a.r[1] = 0u;
                    a.r[2] = 0x80288a68u;
                    (void)tc_call(0x8028ff24u, &a);
                    wr8(0x8050f10cu, 3u);
                    return;
                }
            }
        }
        (void)tc_call(0x80289ba4u, &a);
    }
    return;
}
