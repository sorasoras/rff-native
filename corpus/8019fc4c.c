#include "tc_rt.h"

void fn_8019fc4c(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r8 = rd32(param_4);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = rd32(param_4 + 4u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_4 + 8u);
    wr32(0x817fdff8u, 0u);
    r30 = (u32)param_2;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfe4u, r8);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r0);
    if ((u32)param_2 != 0xcu) {
        if ((u32)param_2 != 0x5du) {
            if ((u32)param_2 != 0xe9u) {
                if ((u32)param_2 != 0xe1u) {
                    if ((u32)param_2 != 0xe3u) {
                        if ((u32)param_2 != 0xe5u) {
                            if ((u32)param_2 != 0xe7u) {
                                if ((u32)param_2 != 0x18u) {
                                    if ((u32)param_2 != 0x50u) {
                                        if ((u32)param_2 != 0x59u) {
                                            if ((u32)param_2 != 0x65u) {
                                                if ((u32)param_2 == 0xau && (u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) >= 3u) {
                                                    r30 = 0xbu;
                                                }
                                            } else {
                                                r30 = (u32)param_2 + (u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) - 1u;
                                            }
                                        } else if ((u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) >= 3u) {
                                            r30 = 0x5au;
                                        }
                                    } else {
                                        r30 = (u32)param_2 + (u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) - 1u;
                                    }
                                } else {
                                    f2 = (f64)rdf32(0x804890c8u);
                                    f1 = (f64)rdf32(0x804890ccu);
                                    f0 = (f64)rdf32(0x804890d0u);
                                    wrf32d(0x817fdfe4u, f2);
                                    wrf32d(0x817fdfe8u, f1);
                                    wrf32d(0x817fdfecu, f0);
                                    a.r[0] = param_1;
                                    a.r[1] = 0x804890c8u;
                                    a.r[2] = 0x80490000u;
                                    a.r[3] = param_4;
                                    a.r[4] = r7;
                                    a.r[5] = r8;
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                                    wrf32d(0x817fdfe8u, f1);
                                    a.r[0] = param_1;
                                    r3 = tc_call(0x801a04c4u, &a);
                                    r30 = r3;
                                }
                            } else {
                                if ((u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) == 4u) {
                                    r30 = 0xe8u;
                                }
                                f2 = (f64)rdf32(0x804890c8u);
                                f1 = (f64)rdf32(0x804890ccu);
                                f0 = (f64)rdf32(0x804890d0u);
                                wrf32d(0x817fdfe4u, f2);
                                wrf32d(0x817fdfe8u, f1);
                                wrf32d(0x817fdfecu, f0);
                                a.r[0] = param_1;
                                a.r[1] = 0x804890c8u;
                                a.r[2] = 0x80490000u;
                                a.r[3] = param_4;
                                a.r[4] = r7;
                                a.r[5] = r8;
                                a.f[0] = f1;
                                a.f[1] = f2;
                                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                                wrf32d(0x817fdfe8u, f1);
                            }
                        } else {
                            if ((u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) == 2u) {
                                r30 = 0xe6u;
                            }
                            f2 = (f64)rdf32(0x804890c8u);
                            f1 = (f64)rdf32(0x804890ccu);
                            f0 = (f64)rdf32(0x804890d0u);
                            wrf32d(0x817fdfe4u, f2);
                            wrf32d(0x817fdfe8u, f1);
                            wrf32d(0x817fdfecu, f0);
                            a.r[0] = param_1;
                            a.r[1] = 0x804890c8u;
                            a.r[2] = 0x80490000u;
                            a.r[3] = param_4;
                            a.r[4] = r7;
                            a.r[5] = r8;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                            wrf32d(0x817fdfe8u, f1);
                        }
                    } else {
                        if ((u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) == 4u) {
                            r30 = 0xe4u;
                        }
                        f2 = (f64)rdf32(0x804890c8u);
                        f1 = (f64)rdf32(0x804890ccu);
                        f0 = (f64)rdf32(0x804890d0u);
                        wrf32d(0x817fdfe4u, f2);
                        wrf32d(0x817fdfe8u, f1);
                        wrf32d(0x817fdfecu, f0);
                        a.r[0] = param_1;
                        a.r[1] = 0x804890c8u;
                        a.r[2] = 0x80490000u;
                        a.r[3] = param_4;
                        a.r[4] = r7;
                        a.r[5] = r8;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                        wrf32d(0x817fdfe8u, f1);
                    }
                } else {
                    if ((u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u) == 2u) {
                        r30 = 0xe2u;
                    }
                    f2 = (f64)rdf32(0x804890c8u);
                    f1 = (f64)rdf32(0x804890ccu);
                    f0 = (f64)rdf32(0x804890d0u);
                    wrf32d(0x817fdfe4u, f2);
                    wrf32d(0x817fdfe8u, f1);
                    wrf32d(0x817fdfecu, f0);
                    a.r[0] = param_1;
                    a.r[1] = 0x804890c8u;
                    a.r[2] = 0x80490000u;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                    wrf32d(0x817fdfe8u, f1);
                }
            } else {
                r0 = (u32)rd8(((rd32(param_1 + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb60831u);
                c0lt = (s32)r0 < 3;
                if (r0 == 3u) {
                    r30 = 0xebu;
                } else if (!c0lt) {
                    if ((s32)r0 < 5) {
                        r30 = 0xecu;
                    }
                } else if ((s32)r0 >= 2) {
                    r30 = 0xeau;
                }
                f2 = (f64)rdf32(0x804890c8u);
                f1 = (f64)rdf32(0x804890ccu);
                f0 = (f64)rdf32(0x804890d0u);
                wrf32d(0x817fdfe4u, f2);
                wrf32d(0x817fdfe8u, f1);
                wrf32d(0x817fdfecu, f0);
                a.r[0] = param_1;
                a.r[1] = 0x804890c8u;
                a.r[2] = 0x80490000u;
                a.r[3] = param_4;
                a.r[4] = r7;
                a.r[5] = r8;
                a.f[0] = f1;
                a.f[1] = f2;
                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                wrf32d(0x817fdfe8u, f1);
            }
        } else {
            f2 = (f64)rdf32(0x804890c8u);
            f1 = (f64)rdf32(0x804890ccu);
            f0 = (f64)rdf32(0x804890d0u);
            wrf32d(0x817fdfe4u, f2);
            wrf32d(0x817fdfe8u, f1);
            wrf32d(0x817fdfecu, f0);
            a.r[0] = param_1;
            a.r[1] = 0x804890c8u;
            a.r[2] = 0x80490000u;
            a.r[3] = param_4;
            a.r[4] = r7;
            a.r[5] = r8;
            a.f[0] = f1;
            a.f[1] = f2;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            wrf32d(0x817fdfe8u, f1);
        }
    } else {
        r5 = rd32(param_1 + 0x5c0u);
        if ((rd32(param_1 + 0xa08u) - 0x1fu) <= 1u) {
            r0 = r5 - 0x266u;
            if (r0 <= 0xau) {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r4 = rd32(r0 - 0x7fc8f168u);
                sw_ = r4;
                switch (sw_) {
                case 0x8019fcc8u:
                    r30 = 0xfu;
                    break;
                case 0x8019fcd0u:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = 0x1eu;
                    a.r[1] = r3;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r30 = 0xfu;
                    break;
                case 0x8019fd08u:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = 0x1fu;
                    a.r[1] = r3;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r30 = 0xfu;
                    break;
                case 0x8019fd40u:
                    r30 = 0xeu;
                    break;
                case 0x8019fd48u:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = 0x23u;
                    a.r[1] = r3;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r30 = 0xdu;
                    break;
                case 0x8019fd80u:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = 0x97u;
                    a.r[1] = r3;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                case 0x8019fdb0u:
                    r30 = 0xdu;
                    break;
                case 0x8019fdb8u:
                    r30 = 0xcu;
                    break;
                case 0x8019fdc0u:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                    f0 = (f64)rdf32(0x80575830u);
                    wrf32d(0x817fdfdcu, f1);
                    wrf32d(0x817fdfd8u, f0);
                    wrf32d(0x817fdfe0u, f0);
                    a.r[0] = param_1;
                    a.r[1] = tc_lastr4();
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                    a.f[0] = (f64)rdf32(0x8057582cu);
                    a.r[0] = 0x49u;
                    a.r[1] = r3;
                    a.r[2] = 0x817fdfd8u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r30 = 0xcu;
                    break;
                case 0x8019fe18u:
                    r30 = 0xcu;
                    break;
                default:
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = param_4;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
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
        }
    }
    if (r30 != 0xffffffffu && rd32(((r30 << 2u) & 0xfffffffcu) - 0x7fca9e94u) == 0u) {
        a.f[0] = (f64)rdf32(0x8057582cu);
        a.r[0] = r30;
        a.r[1] = param_3;
        a.r[2] = 0x817fdfe4u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x800d783cu, &a);
    }
    return;
}
