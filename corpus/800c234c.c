#include "tc_rt.h"

s32 fn_800c234c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572eacu);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    wrf32d(0x817fdfe4u, f0);
    a.r[0] = param_1;
    (void)tc_call(0x80146494u, &a);
    r3 = tc_call(0x800c79d0u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800c3afcu, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x800bfac4u, &a);
            r3 = 0xdu;
            return (s32)r3;
        }
    }
    r3 = tc_call(0x800c7b7cu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800c3c88u, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            (void)tc_call(0x800bfbb0u, &a);
            r3 = 0xeu;
            return (s32)r3;
        }
    }
    r3 = tc_call(0x800c8040u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800c4854u, &a);
        if (r3 != 0u) {
            wr16(0x817fdfd8u, 0x2e8u);
            wr8(0x817fdfdau, 1u);
            wr8(0x817fdfdbu, 1u);
            wr16(0x817fdfd8u, (u16)rd32(rd32(param_1 + 0xa48u) + 0x74u));
            wr8(0x817fdfdau, rd8(rd32(param_1 + 0xa48u) + 0x79u));
            wr8(0x817fdfdbu, rd8(rd32(param_1 + 0xa48u) + 0x78u));
            a.r[0] = 0x817fdfd8u;
            r3 = tc_call(0x80082354u, &a);
            if (r3 == 0u) {
                a.r[0] = 0xbu;
                a.r[1] = 0x12u;
                a.r[2] = 0u;
                r3 = tc_call(0x801412f8u, &a);
                a.r[0] = r3;
                a.r[1] = 2u;
                a.r[2] = 0xffffffffu;
                a.r[3] = 0u;
                a.r[4] = 0x80u;
                a.r[5] = 0u;
                a.r[6] = 3u;
                (void)tc_call(0x80052ea0u, &a);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
            } else {
                a.r[0] = param_1;
                (void)tc_call(0x8006c418u, &a);
                r30 = 0x11u;
                wr32(param_1 + 0xa58u, 0x11u);
                a.r[0] = param_1;
                (void)tc_call(0x800bfee8u, &a);
            }
            r3 = r30;
            return (s32)r3;
        }
    }
    r3 = tc_call(0x800c7e94u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800c4090u, &a);
        if (r3 != 0u) {
            r3 = tc_call(0x800c69d4u, &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = r3;
            r3 = tc_call(0x8006c48cu, &a);
            r30 = r3;
            if (r3 != 0u) {
                return (s32)r3;
            }
        }
    }
    r3 = tc_call(0x800c791cu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800c3a3cu, &a);
        if (r3 != 0u) {
            a.r[0] = 0x80471ed0u;
            a.r[1] = param_1 + 0x99cu;
            r3 = tc_call(0x80091990u, &a);
            if (r3 != 0u) {
                a.r[0] = param_1;
                (void)tc_call(0x800bfcacu, &a);
                r3 = 0xau;
                return (s32)r3;
            }
        }
    }
    r3 = tc_call(0x800c7868u, &a);
    do {
        if (r3 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x800c397cu, &a);
            if (r3 != 0u) {
                r31 = rd32(rd32(param_1 + 0xa48u) + 0x74u);
                if ((s32)r31 < 448 || (s32)r31 > 451) {
                    do {
                        if (r31 != 0x2e8u) {
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r31;
                            r3 = tc_call(0x8015f2b0u, &a);
                            r0 = r3 & 0xffu;
                            r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                            r0 = r0 & 0x1fu;
                            r3 = 0u;
                            if (r0 != 0u) {
                                r3 = 1u;
                            }
                            if (r3 == 0u) {
                                a.r[0] = 0x8049f1b0u;
                                a.r[1] = r31;
                                r3 = tc_call(0x8015f2b0u, &a);
                                r0 = r3 & 0xffu;
                                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                r0 = r0 & 0x180000u;
                                r3 = 0u;
                                if (r0 != 0u) {
                                    r3 = 1u;
                                }
                                if (r3 == 0u) {
                                    a.r[0] = 0x8049f1b0u;
                                    a.r[1] = r31;
                                    r3 = tc_call(0x8015f2b0u, &a);
                                    r0 = r3 & 0xffu;
                                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                    r0 = r0 & 0x400000u;
                                    r3 = 0u;
                                    if (r0 != 0u) {
                                        r3 = 1u;
                                    }
                                    if (r3 == 0u) {
                                        a.r[0] = 0x8049f1b0u;
                                        a.r[1] = r31;
                                        r3 = tc_call(0x8015f2b0u, &a);
                                        r0 = r3 & 0xffu;
                                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                                        r0 = r0 & 0x200000u;
                                        r3 = 0u;
                                        if (r0 != 0u) {
                                            r3 = 1u;
                                        }
                                        if (r3 == 0u) {
                                            r0 = 0u;
                                            break;
                                        }
                                    }
                                }
                            }
                            a.r[0] = 0x8049f1b0u;
                            a.r[1] = r31;
                            r3 = tc_call(0x8015f2d0u, &a);
                            if ((r3 & 0xffu) != 0u) {
                                r0 = 0u;
                            } else {
                                r0 = 1u;
                            }
                        } else {
                            r0 = 1u;
                        }
                    } while (0);
                    if (r0 == 0u) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                        break;
                    }
                    r28 = 0xfu;
                    a.r[0] = param_1;
                    (void)tc_call(0x800bfa64u, &a);
                } else {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    if (rd32(r3 + 4u) != 0u || (s32)rd32(0x805706e8u) > 8) {
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 4u;
                        (void)tc_call(0x8010a75cu, &a);
                        break;
                    }
                    r28 = 0x14u;
                    a.r[0] = param_1;
                    (void)tc_call(0x800c00d8u, &a);
                    a.r[0] = 0x80475e24u;
                    (void)tc_call(0x8017dc34u, &a);
                }
                r3 = r28;
                return (s32)r3;
            }
        }
        r3 = tc_call(0x800c6cb4u, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x800c3320u, &a);
            if (r3 != 0u) {
                a.r[0] = param_1;
                r3 = tc_call(0x800c2b0cu, &a);
                if (r3 == 5u) {
                    a.r[0] = rd32(0x805706e8u);
                    r3 = tc_call(0x8007d150u, &a);
                    if (rd32(r3 + 4u) == 1u) break;
                }
                r3 = tc_call(0x800c6e50u, &a);
                if (r3 != 0u) {
                    a.r[0] = param_1;
                    r3 = tc_call(0x800c341cu, &a);
                    if (r3 != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = r30;
                        r3 = tc_call(0x800c2c48u, &a);
                        if (r3 != 0u) {
                            r3 = r3;
                            return (s32)r3;
                        }
                        a.r[0] = param_1;
                        a.r[1] = r3;
                        r3 = tc_call(0x800c2e14u, &a);
                        r3 = r3;
                        return (s32)r3;
                    }
                }
                a.r[0] = param_1;
                a.r[1] = r30;
                r3 = tc_call(0x800c2e14u, &a);
                r3 = r3;
                return (s32)r3;
            }
        }
    } while (0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe4u;
    a.r[2] = 0x817fdfdcu;
    a.r[3] = 0x817fdfe0u;
    r3 = tc_call(0x800c68f0u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 == 0u) {
        if ((u32)param_2 == 0u) {
            if (rd32(param_1 + 0x298u) != 1u) {
                a.f[0] = (f64)rdf32(0x80572ea8u);
                a.r[0] = param_1;
                a.r[1] = 1u;
                a.r[2] = 0u;
                (void)tc_call(0x800bf1d4u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
                r4 = tc_lastr4();
                do {
                    if (f1 > (f64)rdf32(0x80572ed8u)) {
                        f0 = (f64)rdf32(0x80572eccu);
                        if ((f1 < f0) || (f1 == f0)) {
                            f1 = (f64)rdf32(0x80572eacu);
                            break;
                        }
                    }
                    if (f1 > (f64)rdf32(0x80572eccu)) {
                        f0 = (f64)rdf32(0x80572edcu);
                        if ((f1 < f0) || (f1 == f0)) {
                            f1 = (f64)rdf32(0x80572ee0u);
                            break;
                        }
                    }
                    if (f1 > (f64)rdf32(0x80572ee4u)) {
                        f0 = (f64)rdf32(0x80572ed8u);
                        if ((f1 < f0) || (f1 == f0)) {
                            f1 = (f64)rdf32(0x80572ee8u);
                            break;
                        }
                    }
                    f1 = (f64)rdf32(0x80572ec0u);
                } while (0);
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
                a.r[0] = param_1;
                (void)tc_call(0x800bfc9cu, &a);
            }
        } else {
            a.f[0] = (f64)rdf32(0x80572ea8u);
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            (void)tc_call(0x800bf1d4u, &a);
        }
    } else {
        a.r[0] = param_1;
        a.r[1] = 0x817fdfe4u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.f[0] = (f64)rdf32(0x817fdfdcu);
        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        a.r[0] = param_1;
        a.r[1] = rd32(0x817fdfe0u);
        (void)tc_call(0x800c05d0u, &a);
        r30 = 1u;
    }
    r3 = r30;
    return (s32)r3;
}
