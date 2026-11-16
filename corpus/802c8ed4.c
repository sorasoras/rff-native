#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_802c8ed4(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x802ca370u, &a);
    f1 = tc_lastf();
    r31 = r3;
    if (rd32(param_r3 + 0x14u) == 2u && r3 != 0xffffffffu) {
        r4 = rd32(param_r3);
        if (r4 != 0u || (s32)r3 >= (s32)rd32(param_r3 + 0xcu)) {
            r0 = r3 - rd32(param_r3 + 0xcu);
            if (r0 <= 9u) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r3 = rd32(r0 - 0x7fc66680u);
                sw_ = r3;
                switch (sw_) {
                case 0x802c91bcu:
                    r3 = rd32(param_r3 + 0x448u);
                    if (rd32(r3 + 0x14u) == 1u) {
                        wr32(r3 + 0x14u, 0u);
                    }
                    r3 = rd32(param_r3 + 0x424u);
                    if (rd32(r3 + 0x14u) == 1u) {
                        wr32(r3 + 0x14u, 0u);
                    }
                    wr32(param_r3 + 0xb8u, 0u);
                    wr32(param_r3 + 0x18u, 4u);
                    r28 = rd32(param_r3 + 0x428u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r3 = 0u;
                    wr32(param_r3 + 0x14u, 0xeu);
                    r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 1u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 != 0u) break;
                    a.r[0] = 1u;
                    (void)tc_call(0x802c1e5cu, &a);
                    break;
                case 0x802c9250u:
                    if (r4 != 1u) {
                        if (r4 != 0u) break;
                        r28 = rd32(param_r3 + 0x41cu);
                        a.r[0] = r28;
                        (void)tc_call(0x802bed24u, &a);
                        wr32(r28 + 0x14u, 1u);
                        wr32(param_r3 + 0x18u, 9u);
                        r28 = rd32(param_r3 + 0x43cu);
                        a.r[0] = r28;
                        f1 = tc_callf(0x802bed24u, &a);
                        wr32(r28 + 0x14u, 1u);
                        r30 = 2u;
                        wr32(param_r3 + 0x14u, 0xau);
                        r28 = 0x80399730u;
                        do {
                            r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
                            a.r[0] = r3;
                            a.r[1] = rd32(r28);
                            a.r[2] = 1u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                            f1 = tc_lastf();
                            r30 = r30 + 1u;
                            r28 = r28 + 4u;
                            wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
                        } while ((s32)r30 < 7);
                        r4 = rd32(param_r3 + 4u);
                        wr32(param_r3, 1u);
                        r3 = 0u;
                        r12 = rd32(r4 + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 5u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 != 0u) break;
                        a.r[0] = 5u;
                        (void)tc_call(0x802c1e5cu, &a);
                        break;
                    }
                    r28 = rd32(param_r3 + 0x428u);
                    a.r[0] = r28;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r28 = rd32(param_r3 + 0x444u);
                    a.r[0] = r28;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    wr32(param_r3 + 0x18u, 2u);
                    r28 = rd32(param_r3 + 0x420u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    wr32(param_r3 + 0x14u, 0xau);
                    r3 = 0u;
                    r4 = rd32(param_r3 + 4u);
                    wr32(param_r3, 0u);
                    r12 = rd32(r4 + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 8u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 != 0u) break;
                    a.r[0] = 8u;
                    (void)tc_call(0x802c1e5cu, &a);
                    break;
                case 0x802c93a8u:
                    r3 = rd32(param_r3 + 0x84u);
                    if ((s32)r3 <= 0) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 != 0u) break;
                        a.r[0] = 0xdu;
                        (void)tc_call(0x802c1e5cu, &a);
                        break;
                    }
                    r3 = r3 - 1u;
                    wr32(param_r3 + 0x84u, r3);
                    r3 = r3 + 0x15u;
                    r5 = 0x803486e8u;
                    r4 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (r3 == rd32(r5) && rd32(r5 + 4u) == 0xau) {
                            fl_ = 3u;
                            break;
                        }
                        r4 = r4 + 1u;
                        if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 0xau) {
                            fl_ = 2u;
                            break;
                        }
                        r5 = r5 + 0x10u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r4 = 0xffffffffu;
                            fl_ = 1u;
                            break;
                        }
                    }
                    if (fl_ == 3u) {
                        fl_ = 0u;
                    } else if (fl_ == 2u) {
                        fl_ = 0u;
                    } else if (fl_ == 1u) {
                        fl_ = 0u;
                    }
                    r6 = 0x803486e8u;
                    r5 = 0u;
                    wr32(rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u, 0u);
                    r3 = rd32(param_r3 + 0x84u) + 0x15u;
                    ctr = 0x25u;
                    for (;;) {
                        if (r3 == rd32(r6) && rd32(r6 + 4u) == 9u) {
                            fl_ = 6u;
                            break;
                        }
                        r5 = r5 + 1u;
                        if (r3 == rd32(r6 + 8u) && rd32(r6 + 0xcu) == 9u) {
                            fl_ = 4u;
                            break;
                        }
                        r6 = r6 + 0x10u;
                        r5 = r5 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 5u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 6u) {
                            fl_ = 0u;
                            fl_ = 7u;
                            break;
                        }
                        if (fl_ == 5u) {
                            fl_ = 0u;
                        } else if (fl_ == 4u) {
                            fl_ = 0u;
                            break;
                        }
                        r5 = 0xffffffffu;
                        fl_ = 8u;
                        break;
                    } while (0);
                    if (fl_ == 8u) {
                        fl_ = 0u;
                    } else if (fl_ == 7u) {
                        fl_ = 0u;
                    }
                    r28 = rd32(param_r3 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    if (rd32(param_r3 + 0x84u) != 0u) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xau;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xau;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                        f31 = rdf64(0x80348990u);
                        r28 = param_r3;
                        f30 = (f64)rdf32(0x80348988u);
                        r31 = 0u;
                        do {
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_r3 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                            a.r[0] = rd32(r28 + 0x2acu);
                            (void)tc_call(0x802c0c38u, &a);
                            a.r[0] = rd32(r28 + 0x2acu);
                            a.r[1] = 1u;
                            (void)tc_call(0x802c0c40u, &a);
                            r31 = r31 + 1u;
                            r28 = r28 + 4u;
                        } while ((s32)r31 < 4);
                    } else {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xcu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xcu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                        f31 = rdf64(0x80348990u);
                        r28 = param_r3;
                        f30 = (f64)rdf32(0x80348988u);
                        r31 = 0u;
                        do {
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_r3 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                            a.r[0] = rd32(r28 + 0x2acu);
                            (void)tc_call(0x802c0c38u, &a);
                            a.r[0] = rd32(r28 + 0x2acu);
                            a.r[1] = 1u;
                            (void)tc_call(0x802c0c40u, &a);
                            r31 = r31 + 1u;
                            r28 = r28 + 4u;
                        } while ((s32)r31 < 4);
                    }
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0xbu && rd32(r4 + 4u) == 5u) {
                            fl_ = 11u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0xbu && rd32(r4 + 0xcu) == 5u) {
                            fl_ = 9u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 10u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 11u) {
                            fl_ = 0u;
                            fl_ = 12u;
                            break;
                        }
                        if (fl_ == 10u) {
                            fl_ = 0u;
                        } else if (fl_ == 9u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 13u;
                        break;
                    } while (0);
                    if (fl_ == 13u) {
                        fl_ = 0u;
                    } else if (fl_ == 12u) {
                        fl_ = 0u;
                    }
                    r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                    r28 = rd32(r3 + 0x2f0u);
                    a.r[0] = r28;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    break;
                case 0x802c9674u:
                    r3 = rd32(param_r3 + 0x84u);
                    if ((s32)r3 >= 10) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 != 0u) break;
                        a.r[0] = 0xdu;
                        (void)tc_call(0x802c1e5cu, &a);
                        break;
                    }
                    r3 = r3 + 0x15u;
                    r5 = 0x803486e8u;
                    r4 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (r3 == rd32(r5) && rd32(r5 + 4u) == 9u) {
                            fl_ = 16u;
                            break;
                        }
                        r4 = r4 + 1u;
                        if (r3 == rd32(r5 + 8u) && rd32(r5 + 0xcu) == 9u) {
                            fl_ = 14u;
                            break;
                        }
                        r5 = r5 + 0x10u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 15u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 16u) {
                            fl_ = 0u;
                            fl_ = 17u;
                            break;
                        }
                        if (fl_ == 15u) {
                            fl_ = 0u;
                        } else if (fl_ == 14u) {
                            fl_ = 0u;
                            break;
                        }
                        r4 = 0xffffffffu;
                        fl_ = 18u;
                        break;
                    } while (0);
                    if (fl_ == 18u) {
                        fl_ = 0u;
                    } else if (fl_ == 17u) {
                        fl_ = 0u;
                    }
                    r6 = 0x803486e8u;
                    r5 = 0u;
                    wr32(rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2f0u) + 0x14u, 0u);
                    r3 = rd32(param_r3 + 0x84u) + 0x15u;
                    ctr = 0x25u;
                    for (;;) {
                        if (r3 == rd32(r6) && rd32(r6 + 4u) == 0xau) {
                            fl_ = 21u;
                            break;
                        }
                        r5 = r5 + 1u;
                        if (r3 == rd32(r6 + 8u) && rd32(r6 + 0xcu) == 0xau) {
                            fl_ = 19u;
                            break;
                        }
                        r6 = r6 + 0x10u;
                        r5 = r5 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 20u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 21u) {
                            fl_ = 0u;
                            fl_ = 22u;
                            break;
                        }
                        if (fl_ == 20u) {
                            fl_ = 0u;
                        } else if (fl_ == 19u) {
                            fl_ = 0u;
                            break;
                        }
                        r5 = 0xffffffffu;
                        fl_ = 23u;
                        break;
                    } while (0);
                    if (fl_ == 23u) {
                        fl_ = 0u;
                    } else if (fl_ == 22u) {
                        fl_ = 0u;
                    }
                    r28 = rd32(param_r3 + ((r5 << 2u) & 0xfffffffcu) + 0x2f0u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r0 = rd32(param_r3 + 0x84u) + 1u;
                    wr32(param_r3 + 0x84u, r0);
                    if (r0 != 0xau) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 9u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 9u;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                        f30 = rdf64(0x80348990u);
                        r28 = param_r3;
                        f31 = (f64)rdf32(0x80348988u);
                        r31 = 0u;
                        do {
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_r3 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f30), f31);
                            a.r[0] = rd32(r28 + 0x2acu);
                            (void)tc_call(0x802c0c38u, &a);
                            a.r[0] = rd32(r28 + 0x2acu);
                            a.r[1] = 1u;
                            (void)tc_call(0x802c0c40u, &a);
                            r31 = r31 + 1u;
                            r28 = r28 + 4u;
                        } while ((s32)r31 < 4);
                    } else {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xbu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xbu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                        f31 = rdf64(0x80348990u);
                        r28 = param_r3;
                        f30 = (f64)rdf32(0x80348988u);
                        r31 = 0u;
                        do {
                            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_r3 + 0x84u) ^ 0x80000000u) | 0x4330000000000000ull) - f31), f30);
                            a.r[0] = rd32(r28 + 0x2acu);
                            (void)tc_call(0x802c0c38u, &a);
                            a.r[0] = rd32(r28 + 0x2acu);
                            a.r[1] = 1u;
                            (void)tc_call(0x802c0c40u, &a);
                            r31 = r31 + 1u;
                            r28 = r28 + 4u;
                        } while ((s32)r31 < 4);
                    }
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0xcu && rd32(r4 + 4u) == 5u) {
                            fl_ = 26u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0xcu && rd32(r4 + 0xcu) == 5u) {
                            fl_ = 24u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 25u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 26u) {
                            fl_ = 0u;
                            fl_ = 27u;
                            break;
                        }
                        if (fl_ == 25u) {
                            fl_ = 0u;
                        } else if (fl_ == 24u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 28u;
                        break;
                    } while (0);
                    if (fl_ == 28u) {
                        fl_ = 0u;
                    } else if (fl_ == 27u) {
                        fl_ = 0u;
                    }
                    r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                    r28 = rd32(r3 + 0x2f0u);
                    a.r[0] = r28;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    break;
                case 0x802c9940u:
                    if ((u32)rd8(param_r3 + 0x8cu) != 0u) {
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0x10u && rd32(r4 + 4u) == 0xeu) {
                                fl_ = 31u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0x10u && rd32(r4 + 0xcu) == 0xeu) {
                                fl_ = 29u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 30u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 31u) {
                                fl_ = 0u;
                                fl_ = 32u;
                                break;
                            }
                            if (fl_ == 30u) {
                                fl_ = 0u;
                            } else if (fl_ == 29u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 33u;
                            break;
                        } while (0);
                        if (fl_ == 33u) {
                            fl_ = 0u;
                        } else if (fl_ == 32u) {
                            fl_ = 0u;
                        }
                        wr32(param_r3 + 0x18u, r3);
                        r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                        r28 = rd32(r3 + 0x2f0u);
                        a.r[0] = r28;
                        f1 = tc_callf(0x802bed24u, &a);
                        r3 = 0u;
                        wr32(r28 + 0x14u, 1u);
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xdu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                    } else {
                        wr8(param_r3 + 0x8cu, 1u);
                        a.r[0] = 1u;
                        (void)tc_call(0x8027a80cu, &a);
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0xeu && rd32(r4 + 4u) == 8u) {
                                fl_ = 36u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0xeu && rd32(r4 + 0xcu) == 8u) {
                                fl_ = 34u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 35u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 36u) {
                                fl_ = 0u;
                                fl_ = 37u;
                                break;
                            }
                            if (fl_ == 35u) {
                                fl_ = 0u;
                            } else if (fl_ == 34u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 38u;
                            break;
                        } while (0);
                        if (fl_ == 38u) {
                            fl_ = 0u;
                        } else if (fl_ == 37u) {
                            fl_ = 0u;
                        }
                        r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                        r28 = rd32(r3 + 0x2f0u);
                        a.r[0] = r28;
                        (void)tc_call(0x802bed24u, &a);
                        wr32(r28 + 0x14u, 1u);
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0x10u && rd32(r4 + 4u) == 6u) {
                                fl_ = 41u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0x10u && rd32(r4 + 0xcu) == 6u) {
                                fl_ = 39u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 40u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 41u) {
                                fl_ = 0u;
                                fl_ = 42u;
                                break;
                            }
                            if (fl_ == 40u) {
                                fl_ = 0u;
                            } else if (fl_ == 39u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 43u;
                            break;
                        } while (0);
                        if (fl_ == 43u) {
                            fl_ = 0u;
                        } else if (fl_ == 42u) {
                            fl_ = 0u;
                        }
                        wr32(param_r3 + 0x18u, r3);
                        r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                        r28 = rd32(r3 + 0x2f0u);
                        a.r[0] = r28;
                        f1 = tc_callf(0x802bed24u, &a);
                        r3 = 0u;
                        wr32(r28 + 0x14u, 1u);
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xeu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xeu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                    }
                    f31 = (f64)rdf32(0x80348960u);
                    r28 = param_r3;
                    r30 = 0u;
                    do {
                        a.r[0] = rd32(r28 + 0x2acu);
                        (void)tc_call(0x802c0f98u, &a);
                        wrf32d(r28 + 0x210u, f31);
                        r30 = r30 + 1u;
                        wrf32d(r28 + 0x220u, f31);
                        r28 = r28 + 4u;
                    } while ((s32)r30 < 4);
                    wr32(param_r3 + 0x14u, 9u);
                    break;
                case 0x802c9b70u:
                    if ((u32)rd8(param_r3 + 0x8cu) == 0u) {
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xdu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xdu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                    } else {
                        wr8(param_r3 + 0x8cu, 0u);
                        a.r[0] = 0u;
                        (void)tc_call(0x8027a80cu, &a);
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0xeu && rd32(r4 + 4u) == 6u) {
                                fl_ = 46u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0xeu && rd32(r4 + 0xcu) == 6u) {
                                fl_ = 44u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 45u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 46u) {
                                fl_ = 0u;
                                fl_ = 47u;
                                break;
                            }
                            if (fl_ == 45u) {
                                fl_ = 0u;
                            } else if (fl_ == 44u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 48u;
                            break;
                        } while (0);
                        if (fl_ == 48u) {
                            fl_ = 0u;
                        } else if (fl_ == 47u) {
                            fl_ = 0u;
                        }
                        r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                        r28 = rd32(r3 + 0x2f0u);
                        a.r[0] = r28;
                        (void)tc_call(0x802bed24u, &a);
                        wr32(r28 + 0x14u, 1u);
                        r4 = 0x803486e8u;
                        r3 = 0u;
                        ctr = 0x25u;
                        for (;;) {
                            if (rd32(r4) == 0xdu && rd32(r4 + 4u) == 8u) {
                                fl_ = 51u;
                                break;
                            }
                            r3 = r3 + 1u;
                            if (rd32(r4 + 8u) == 0xdu && rd32(r4 + 0xcu) == 8u) {
                                fl_ = 49u;
                                break;
                            }
                            r4 = r4 + 0x10u;
                            r3 = r3 + 1u;
                            ctr = ctr - 1u;
                            if (ctr == 0u) {
                                fl_ = 50u;
                                break;
                            }
                        }
                        do {
                            if (fl_ == 51u) {
                                fl_ = 0u;
                                fl_ = 52u;
                                break;
                            }
                            if (fl_ == 50u) {
                                fl_ = 0u;
                            } else if (fl_ == 49u) {
                                fl_ = 0u;
                                break;
                            }
                            r3 = 0xffffffffu;
                            fl_ = 53u;
                            break;
                        } while (0);
                        if (fl_ == 53u) {
                            fl_ = 0u;
                        } else if (fl_ == 52u) {
                            fl_ = 0u;
                        }
                        wr32(param_r3 + 0x18u, r3);
                        r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                        r28 = rd32(r3 + 0x2f0u);
                        a.r[0] = r28;
                        f1 = tc_callf(0x802bed24u, &a);
                        r3 = 0u;
                        wr32(r28 + 0x14u, 1u);
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 0xfu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 0xfu;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                    }
                    wr32(param_r3 + 0x14u, 9u);
                    break;
                case 0x802c9cf8u:
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0xfu && rd32(r4 + 4u) == 5u) {
                            fl_ = 56u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0xfu && rd32(r4 + 0xcu) == 5u) {
                            fl_ = 54u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 55u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 56u) {
                            fl_ = 0u;
                            fl_ = 57u;
                            break;
                        }
                        if (fl_ == 55u) {
                            fl_ = 0u;
                        } else if (fl_ == 54u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 58u;
                        break;
                    } while (0);
                    if (fl_ == 58u) {
                        fl_ = 0u;
                    } else if (fl_ == 57u) {
                        fl_ = 0u;
                    }
                    wr32(param_r3 + 0x18u, r3);
                    r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                    r28 = rd32(r3 + 0x2f0u);
                    a.r[0] = r28;
                    (void)tc_call(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r28 = param_r3;
                    f31 = (f64)rdf32(0x80348960u);
                    r27 = 0u;
                    wr32(param_r3 + 0x14u, 3u);
                    wr8(param_r3 + 0x90u, 1u);
                    do {
                        wrf32d(r28 + 0x210u, f31);
                        wrf32d(r28 + 0x220u, f31);
                        a.r[0] = rd32(r28 + 0x2acu);
                        (void)tc_call(0x802c0ffcu, &a);
                        r3 = rd32(r28 + 0x2acu);
                        r27 = r27 + 1u;
                        r28 = r28 + 4u;
                        wr8(r3 + 0x44u, 0u);
                    } while ((s32)r27 < 4);
                    f1 = (f64)rdf32(0x8034897cu);
                    r3 = rd32(param_r3 + 0x238u);
                    f0 = (f64)(f32)px_fdiv(f1, (f64)rdf32(rd32(rd32(0x80547490u) + 4u) + 0x30u));
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wr32(param_r3 + 0x230u, (u32)px_f2b(f0));
                    r3 = rd32(r3 + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80399774u);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
                    r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
                    a.r[0] = r3;
                    a.r[1] = rd32(0x80399778u);
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                    f1 = tc_lastf();
                    r4 = 0u;
                    wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
                    r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 5u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                        f1 = tc_lastf();
                        r4 = r3;
                    }
                    if (r4 == 0u) {
                        a.r[0] = 5u;
                        f1 = tc_callf(0x802c1e5cu, &a);
                    }
                    r3 = 0u;
                    r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 0x10u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 != 0u) break;
                    a.r[0] = 0x10u;
                    (void)tc_call(0x802c1e5cu, &a);
                    break;
                case 0x802c9eb8u:
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0x13u && rd32(r4 + 4u) == 0xdu) {
                            fl_ = 61u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0x13u && rd32(r4 + 0xcu) == 0xdu) {
                            fl_ = 59u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 60u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 61u) {
                            fl_ = 0u;
                            fl_ = 62u;
                            break;
                        }
                        if (fl_ == 60u) {
                            fl_ = 0u;
                        } else if (fl_ == 59u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 63u;
                        break;
                    } while (0);
                    if (fl_ == 63u) {
                        fl_ = 0u;
                    } else if (fl_ == 62u) {
                        fl_ = 0u;
                    }
                    wr32(param_r3 + 0x18u, r3);
                    r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                    r28 = rd32(r3 + 0x2f0u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r4 = rd32(param_r3 + 0xb8u);
                    wr32(param_r3 + 0x14u, 0xdu);
                    wr32(param_r3, 0u);
                    if (r4 != 1u) {
                        if (r4 != 2u) {
                            if (r4 != 4u) break;
                            r3 = 0u;
                            r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                            if (r12 != 0u) {
                                a.r[0] = 5u;
                                a.r[1] = 3u;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(r12, &a);
                            }
                            if (r3 == 0u) {
                                a.r[0] = 3u;
                                (void)tc_call(0x802c1e5cu, &a);
                            }
                            wr8(param_r3 + 0x460u, 0u);
                            break;
                        }
                        r3 = 0u;
                        r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                        if (r12 != 0u) {
                            a.r[0] = 5u;
                            a.r[1] = 3u;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            r3 = tc_call(r12, &a);
                        }
                        if (r3 == 0u) {
                            a.r[0] = 3u;
                            (void)tc_call(0x802c1e5cu, &a);
                        }
                        wr8(param_r3 + 0x460u, 1u);
                        break;
                    }
                    r3 = 0u;
                    r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 2u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 == 0u) {
                        a.r[0] = 2u;
                        (void)tc_call(0x802c1e5cu, &a);
                    }
                    wr8(param_r3 + 0x460u, 0u);
                    break;
                case 0x802ca020u:
                    r4 = 0x803486e8u;
                    r3 = 0u;
                    ctr = 0x25u;
                    for (;;) {
                        if (rd32(r4) == 0x14u && rd32(r4 + 4u) == 0xdu) {
                            fl_ = 66u;
                            break;
                        }
                        r3 = r3 + 1u;
                        if (rd32(r4 + 8u) == 0x14u && rd32(r4 + 0xcu) == 0xdu) {
                            fl_ = 64u;
                            break;
                        }
                        r4 = r4 + 0x10u;
                        r3 = r3 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 65u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 66u) {
                            fl_ = 0u;
                            fl_ = 67u;
                            break;
                        }
                        if (fl_ == 65u) {
                            fl_ = 0u;
                        } else if (fl_ == 64u) {
                            fl_ = 0u;
                            break;
                        }
                        r3 = 0xffffffffu;
                        fl_ = 68u;
                        break;
                    } while (0);
                    if (fl_ == 68u) {
                        fl_ = 0u;
                    } else if (fl_ == 67u) {
                        fl_ = 0u;
                    }
                    wr32(param_r3 + 0x18u, r3);
                    r3 = param_r3 + ((r3 << 2u) & 0xfffffffcu);
                    r28 = rd32(r3 + 0x2f0u);
                    a.r[0] = r28;
                    f1 = tc_callf(0x802bed24u, &a);
                    wr32(r28 + 0x14u, 1u);
                    r3 = 0u;
                    wr32(param_r3 + 0x14u, 0xdu);
                    r4 = rd32(param_r3 + 4u);
                    wr32(param_r3 + 0xb8u, 0xffffffffu);
                    wr32(param_r3, 0u);
                    r12 = rd32(r4 + 0x14u);
                    if (r12 != 0u) {
                        a.r[0] = 5u;
                        a.r[1] = 6u;
                        a.r[2] = 0xffffffffu;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                    }
                    if (r3 != 0u) break;
                    a.r[0] = 6u;
                    (void)tc_call(0x802c1e5cu, &a);
                    break;
                default:
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(sw_, &a);
                    r0 = 0u;
                    r4 = tc_lastr4();
                    r5 = 0u;
                    r6 = 0u;
                    r7 = 0u;
                    r8 = 0u;
                    r9 = 0u;
                    r10 = 0u;
                    r11 = 0u;
                    r12 = 0u;
                    f0 = 0.0;
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                    f9 = 0.0;
                    f10 = 0.0;
                    f11 = 0.0;
                    f12 = 0.0;
                    f13 = 0.0;
                    ctr = 0u;
                    return;
                }
            }
        } else {
            r6 = rd32(param_r3 + 0x10u);
            wr32(param_r3 + 0xb8u, r3 + 1u);
            r5 = 0x80348688u;
            r3 = r3 + 4u;
            r4 = 0u;
            ctr = r6;
            do {
                if ((s32)r6 > 0) {
                    for (;;) {
                        if (r3 == rd32(r5) && rd32(r5 + 4u) == 1u) {
                            fl_ = 70u;
                            break;
                        }
                        r5 = r5 + 8u;
                        r4 = r4 + 1u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            fl_ = 69u;
                            break;
                        }
                    }
                    if (fl_ == 70u) {
                        fl_ = 0u;
                    } else if (fl_ == 69u) {
                        fl_ = 0u;
                        break;
                    }
                    fl_ = 71u;
                    break;
                }
            } while (0);
            if (fl_ == 71u) {
                fl_ = 0u;
            } else {
                r4 = 0xffffffffu;
            }
            wr32(param_r3 + 0x18u, r4);
            r30 = rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x2c0u);
            a.r[0] = r30;
            f1 = tc_callf(0x802bed24u, &a);
            r3 = 0u;
            wr32(r30 + 0x14u, 1u);
            r12 = rd32(rd32(param_r3 + 4u) + 0x14u);
            if (r12 != 0u) {
                a.r[0] = 5u;
                a.r[1] = 5u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
            }
            if (r3 == 0u) {
                a.r[0] = 5u;
                f1 = tc_callf(0x802c1e5cu, &a);
            }
            if (rd32(param_r3 + ((r31 << 2u) & 0xfffffffcu) + 0xa0u) == 0u) {
                wr32(param_r3 + 0x14u, 0xfu);
            } else {
                wr32(param_r3 + 0x14u, 0xbu);
                r3 = rd32(param_r3 + 0x238u);
                wr32(param_r3, 2u);
                r3 = rd32(r3 + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(0x8039977cu);
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                f1 = tc_lastf();
                r30 = r3;
                a.r[0] = r3;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0xcu), &a);
                f1 = tc_lastf();
                for (;;) {
                    if (r3 == 0u) {
                        fl_ = 72u;
                        break;
                    }
                    if (r3 == 0x805474f8u) {
                        fl_ = 73u;
                        break;
                    }
                    r3 = rd32(r3);
                }
                do {
                    if (fl_ == 73u) {
                        fl_ = 0u;
                    } else if (fl_ == 72u) {
                        fl_ = 0u;
                        break;
                    }
                    r0 = 1u;
                    fl_ = 74u;
                    break;
                } while (0);
                if (fl_ == 74u) {
                    fl_ = 0u;
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    r30 = 0u;
                }
                r5 = rd32(param_r3 + 4u);
                if ((rd32(r5 + 0x24u) & (r31 + 1u)) == 0u) {
                    r7 = ((r31 + 2u) << 2u) & 0xfffffffcu;
                    r6 = 0u;
                    r4 = rd32((rd32(r5 + 0x1cu) * 0x18u) + (r7 + param_r3) + 0xbcu);
                    while ((u32)rd16(r4 + ((r6 << 1u) & 0x1fffeu) + 2u) != 0x22u) {
                        r6 = r6 + 1u;
                    }
                } else {
                    r7 = ((r31 + 2u) << 2u) & 0xfffffffcu;
                    r6 = 0u;
                    r3 = rd32(param_r3 + (rd32(r5 + 0x1cu) * 0x18u) + r7 + 0xbcu);
                    for (;;) {
                        r0 = (u32)rd16(r3 + ((r6 << 1u) & 0x1fffeu));
                        if (r0 == 0xff1fu || r0 == 0x3fu) break;
                        r6 = r6 + 1u;
                    }
                }
                a.r[0] = r30;
                a.r[1] = rd32(param_r3 + (rd32(r5 + 0x1cu) * 0x18u) + r7 + 0xbcu);
                a.r[2] = 0u;
                a.r[3] = ((r6 & 0xffffu) + 1u) & 0xffffu;
                a.r[4] = r7;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r30) + 0x70u), &a);
                r3 = rd32(rd32(param_r3 + 0x238u) + 0x10u);
                a.r[0] = r3;
                a.r[1] = rd32(0x8039977cu);
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(r3) + 0x3cu), &a);
                wr8(r3 + 0xcfu, (u8)(((u32)rd8(r3 + 0xcfu) & 0xfeu) | 1u));
            }
        }
    }
    return;
}
