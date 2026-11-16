#include "tc_rt.h"

void fn_802faf94(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r23 = 0, r24 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r0 = 0x817ff000u;
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r7 = rd32(param_2 + 0x54u);
    r31 = rd32(param_2 + 0xecu);
    r6 = r7 + 1u;
    wr32(param_2 + 0x54u, r6);
    r30 = 0u;
    r3 = 0u;
    r29 = 1u;
    r28 = (u32)rd8(r7);
    if (r28 == 0xa2u) {
        r5 = (u32)rd8(param_2 + 0x58u);
        wr32(param_2 + 0x54u, r6 + 1u);
        r0 = (0u - r5) | r5;
        r28 = (u32)rd8(r6);
        r29 = (r0 >> 0x1fu) & 1u;
    }
    if (r28 != 0xa3u) {
        if (r28 != 0xa4u) {
            if (r28 == 0xa5u) {
                r6 = rd32(param_2 + 0x54u);
                r30 = 5u;
                wr32(param_2 + 0x54u, r6 + 1u);
                r28 = (u32)rd8(r6);
            }
        } else {
            r6 = rd32(param_2 + 0x54u);
            r30 = 4u;
            wr32(param_2 + 0x54u, r6 + 1u);
            r28 = (u32)rd8(r6);
        }
    } else {
        r6 = rd32(param_2 + 0x54u);
        r30 = 2u;
        wr32(param_2 + 0x54u, r6 + 1u);
        r28 = (u32)rd8(r6);
    }
    if (r28 != 0xa0u) {
        if (r28 == 0xa1u) {
            r6 = rd32(param_2 + 0x54u);
            r0 = 5u;
            r3 = 1u;
            wr32(param_2 + 0x54u, r6 + 1u);
            r28 = (u32)rd8(r6);
        }
    } else {
        r6 = rd32(param_2 + 0x54u);
        r0 = 4u;
        r3 = 1u;
        wr32(param_2 + 0x54u, r6 + 1u);
        r28 = (u32)rd8(r6);
    }
    if ((r28 & 0x80u) != 0u) {
        r5 = r28 & 0xf0u;
        r23 = 0u;
        c0lt = (s32)r5 < 192;
        r27 = 0u;
        if (r5 != 0xc0u) {
            if (!c0lt) {
                c0lt = (s32)r5 < 224;
                if (r5 == 0xe0u) {
                    r7 = 2u;
                    r4 = param_2 + 0x54u;
                    if (r3 != 0u) {
                        r7 = r0;
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r31;
                    a.r[3] = param_2;
                    a.r[4] = r7;
                    r3 = tc_call(0x802fbf34u, &a);
                    f1 = tc_lastf();
                    r6 = (u32)(s16)r3;
                    if (r29 == 0u) {
                        return;
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = r28;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                    return;
                }
                if (!c0lt) {
                    if (r5 == 0xf0u) {
                        c0lt = (s32)r28 < 254;
                        if (r28 == 0xfeu) {
                            wr32(param_2 + 0x54u, rd32(param_2 + 0x54u) + 2u);
                            return;
                        }
                        do {
                            if (!c0lt) {
                                if ((s32)r28 < 256) {
                                    if (r29 == 0u) {
                                        return;
                                    }
                                    return;
                                }
                            } else if (r28 == 0xf0u) {
                                r6 = rd32(param_2 + 0x54u);
                                wr32(param_2 + 0x54u, r6 + 1u);
                                r24 = (u32)rd8(r6);
                                r5 = r24 & 0xf0u;
                                c0lt = (s32)r5 < 144;
                                if (r5 != 0x90u) {
                                    if (!c0lt) {
                                        if (r5 == 0xe0u) {
                                            r7 = 2u;
                                            r4 = param_2 + 0x54u;
                                            if (r3 != 0u) {
                                                r7 = r0;
                                            }
                                            a.r[0] = param_1;
                                            a.r[1] = r4;
                                            a.r[2] = r31;
                                            a.r[3] = param_2;
                                            a.r[4] = r7;
                                            r3 = tc_call(0x802fbf34u, &a);
                                            f1 = tc_lastf();
                                            r23 = r3 & 0xffffu;
                                            if (r29 == 0u) break;
                                            a.r[0] = param_1;
                                            a.r[1] = param_2;
                                            a.r[2] = ((r28 << 8u) & 0xffffff00u) + r24;
                                            a.r[3] = r23;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.f[0] = f1;
                                            f1 = tc_callf(rd32(rd32(param_1) + 8u), &a);
                                            break;
                                        }
                                        break;
                                    }
                                    if (r5 != 0x80u) break;
                                }
                                r8 = rd32(param_2 + 0x54u);
                                wr32(param_2 + 0x54u, r8 + 1u);
                                r4 = param_2 + 0x54u;
                                r7 = 2u;
                                r23 = (u32)rd8(r8);
                                if (r3 != 0u) {
                                    r7 = r0;
                                }
                                a.r[0] = param_1;
                                a.r[1] = r4;
                                a.r[2] = r31;
                                a.r[3] = param_2;
                                a.r[4] = r7;
                                r3 = tc_call(0x802fbf34u, &a);
                                f1 = tc_lastf();
                                r27 = (u32)(s16)r3;
                                if (r29 != 0u) {
                                    a.r[0] = param_1;
                                    a.r[1] = param_2;
                                    a.r[2] = ((r28 << 8u) & 0xffffff00u) + r24;
                                    a.r[3] = r23;
                                    a.r[4] = r27;
                                    a.r[5] = 0u;
                                    a.f[0] = f1;
                                    f1 = tc_callf(rd32(rd32(param_1) + 8u), &a);
                                }
                            }
                        } while (0);
                        if (r29 == 0u) {
                            return;
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = r28;
                        a.r[3] = r23;
                        a.r[4] = r27;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                        return;
                    }
                    return;
                }
                if (r5 != 0xd0u) {
                    return;
                }
            } else {
                c0lt = (s32)r5 < 160;
                if (r5 == 0xa0u) {
                    return;
                }
                if (c0lt) {
                    c0lt = (s32)r5 < 144;
                    if (r5 == 0x90u) {
                        if (r29 == 0u) {
                            return;
                        }
                        a.r[0] = param_1;
                        a.r[1] = param_2;
                        a.r[2] = r28;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = 0.0;
                        (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                        return;
                    }
                    if (!c0lt) {
                        return;
                    }
                    if (r5 == 0x80u) {
                        c0lt = (s32)r28 < 136;
                        if (r28 == 0x88u) {
                            r6 = rd32(param_2 + 0x54u);
                            r5 = r6 + 1u;
                            wr32(param_2 + 0x54u, r5);
                            r7 = r5 + 1u;
                            r3 = r7 + 1u;
                            r6 = (u32)rd8(r6);
                            wr32(param_2 + 0x54u, r7);
                            r5 = (u32)rd8(r5);
                            wr32(param_2 + 0x54u, r3);
                            r7 = (u32)rd8(r7);
                            r7 = (r7 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
                            wr32(param_2 + 0x54u, r3 + 1u);
                            r7 = (r7 << 8u) & 0xffffff00u;
                            r7 = r7 | (u32)rd8(r3);
                            if (r29 == 0u) {
                                return;
                            }
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            a.r[2] = r28;
                            a.r[3] = r6;
                            a.r[4] = r7;
                            a.r[5] = 0u;
                            a.f[0] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                            return;
                        }
                        if (!c0lt) {
                            c0lt = (s32)r28 < 138;
                            if (r28 == 0x8au) {
                                r5 = rd32(param_2 + 0x54u);
                                r6 = r5 + 1u;
                                wr32(param_2 + 0x54u, r6);
                                r3 = r6 + 1u;
                                r5 = (u32)rd8(r5);
                                wr32(param_2 + 0x54u, r3);
                                r6 = (u32)rd8(r6);
                                r6 = (r6 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
                                wr32(param_2 + 0x54u, r3 + 1u);
                                r6 = (r6 << 8u) & 0xffffff00u;
                                r6 = r6 | (u32)rd8(r3);
                                if (r29 == 0u) {
                                    return;
                                }
                                a.r[0] = param_1;
                                a.r[1] = param_2;
                                a.r[2] = r28;
                                a.r[3] = r6;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = 0.0;
                                (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                                return;
                            }
                            if (!c0lt) {
                                return;
                            }
                            r5 = rd32(param_2 + 0x54u);
                            r6 = r5 + 1u;
                            wr32(param_2 + 0x54u, r6);
                            r3 = r6 + 1u;
                            r5 = (u32)rd8(r5);
                            wr32(param_2 + 0x54u, r3);
                            r6 = (u32)rd8(r6);
                            r6 = (r6 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
                            wr32(param_2 + 0x54u, r3 + 1u);
                            r6 = (r6 << 8u) & 0xffffff00u;
                            r6 = r6 | (u32)rd8(r3);
                            if (r29 == 0u) {
                                return;
                            }
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            a.r[2] = r28;
                            a.r[3] = r6;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = 0.0;
                            (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                            return;
                        }
                        c0lt = (s32)r28 < 129;
                        if (r28 == 0x81u) {
                            r7 = 3u;
                            r4 = param_2 + 0x54u;
                            if (r3 != 0u) {
                                r7 = r0;
                            }
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = r31;
                            a.r[3] = param_2;
                            a.r[4] = r7;
                            r3 = tc_call(0x802fbf34u, &a);
                            f1 = tc_lastf();
                            if (r29 == 0u) {
                                return;
                            }
                            a.r[0] = param_1;
                            a.r[1] = param_2;
                            a.r[2] = r28;
                            a.r[3] = r3;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(rd32(rd32(param_1) + 8u), &a);
                            return;
                        }
                        if (!c0lt) {
                            return;
                        }
                        if ((s32)r28 >= 128) {
                            r7 = 3u;
                            r4 = param_2 + 0x54u;
                            if (r3 != 0u) {
                                r7 = r0;
                            }
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = r31;
                            a.r[3] = param_2;
                            a.r[4] = r7;
                            r3 = tc_call(0x802fbf34u, &a);
                            if (r29 == 0u) {
                                return;
                            }
                            wr32(param_2 + 0x78u, r3);
                            return;
                        }
                        return;
                    }
                    return;
                }
                if (r5 != 0xb0u) {
                    return;
                }
            }
        }
        r7 = 1u;
        r4 = param_2 + 0x54u;
        if (r3 != 0u) {
            r7 = r0;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r31;
        a.r[3] = param_2;
        a.r[4] = r7;
        r3 = tc_call(0x802fbf34u, &a);
        f1 = tc_lastf();
        r24 = r3;
        if (r30 != 0u) {
            a.r[0] = param_1;
            a.r[1] = param_2 + 0x54u;
            a.r[2] = r31;
            a.r[3] = param_2;
            a.r[4] = r30;
            r3 = tc_call(0x802fbf34u, &a);
            f1 = tc_lastf();
            r27 = r3;
        }
        if (r29 != 0u) {
            if ((s32)r28 >= 197) {
                r6 = r24 & 0xffu;
            } else if ((s32)r28 >= 195) {
                r6 = (u32)(s8)(r24 & 0xffu);
            } else {
                r6 = r24 & 0xffu;
            }
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r28;
            a.r[3] = r6;
            a.r[4] = r27;
            a.r[5] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 8u), &a);
        }
    } else {
        r8 = rd32(param_2 + 0x54u);
        wr32(param_2 + 0x54u, r8 + 1u);
        r4 = param_2 + 0x54u;
        r7 = 3u;
        r24 = (u32)rd8(r8);
        if (r3 != 0u) {
            r7 = r0;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r31;
        a.r[3] = param_2;
        a.r[4] = r7;
        r3 = tc_call(0x802fbf34u, &a);
        f1 = tc_lastf();
        r23 = r3;
        r3 = r28 + (u32)(s8)rd8(param_2 + 0xbbu);
        if (r29 != 0u) {
            if ((s32)r3 <= 127) {
                r5 = r3 & ~(u32)((s32)r3 >> 31);
            } else {
                r5 = 0x7fu;
            }
            if ((u32)rd8(param_2 + 0x7cu) == 0u && (u32)param_3 != 0u) {
                r7 = 0xffffffffu;
                if ((s32)r23 > 0) {
                    r7 = r23;
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = r5;
                a.r[3] = r24;
                a.r[4] = r7;
                a.r[5] = (u32)rd8(param_2 + 0x5au);
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
            }
            if ((u32)rd8(param_2 + 0x59u) != 0u) {
                wr32(param_2 + 0x78u, r23);
                if (r23 == 0u) {
                    wr8(param_2 + 0x7eu, 1u);
                }
            }
        }
    }
    return;
}
