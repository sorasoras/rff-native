#include "tc_rt.h"

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

void fn_80170644(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 + 0x16f0u);
    if (r0 <= 8u) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r4 = rd32(r0 - 0x7fc91e98u);
        sw_ = r4;
        switch (sw_) {
        case 0x801706d8u:
            f3 = (f64)rdf32((u32)param_1 + 0x16e8u);
            f2 = (f64)rdf32(0x80574df0u);
            wr8((u32)param_1 + 0x16e4u, 8u);
            if (f3 < f2) {
                f0 = (f64)(f32)(f3 + (f64)(f32)((f64)rdf32(0x80574d10u) - (f64)(f32)px_fdiv(f3, (f64)rdf32(0x80574df4u))));
                wrf32d((u32)param_1 + 0x16e8u, f0);
                if ((f0 > f2) || (f0 == f2)) {
                    wrf32d((u32)param_1 + 0x16e8u, f2);
                    wr8((u32)param_1 + 0x16f0u, 1u);
                }
                f30 = rdf64(0x80574de8u);
                r29 = (u32)param_1;
                f29 = (f64)rdf32(0x80574df8u);
                r30 = 0u;
                f24 = rdf64(0x80574e08u);
                f23 = rdf64(0x80574e00u);
                f28 = (f64)rdf32(0x80574ce4u);
                f27 = (f64)rdf32(0x80574d08u);
                f26 = (f64)rdf32(0x80574d04u);
                f31 = (f64)rdf32(0x80574dfcu);
                f25 = (f64)rdf32(0x80574df0u);
                do {
                    a.f[0] = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f30));
                    f1 = tc_callf(0x80262b10u, &a);
                    wrf32d(r29 + 0x78u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x16e8u) * (f64)(f32)f1));
                    a.f[0] = (f64)(f32)(f29 * (f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f30));
                    f1 = tc_callf(0x80262704u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)(f32)(-(f64)rdf32((u32)param_1 + 0x16e8u) * f1);
                    wrf32d(r29 + 0x7cu, f0);
                    f0 = (f64)(f32)(f0 + f31);
                    wrf32d(r29 + 0x78u, (f64)(f32)((f64)rdf32(r29 + 0x78u) + ppc_fnmsubs((f64)(f32)(f28 * (f64)rdf32((u32)param_1 + 0x1810u)), f27, f26)));
                    wrf32d(r29 + 0x7cu, f0);
                    f0 = (f64)rdf32((u32)param_1 + 0x16e8u);
                    if ((f0 < f25) || (f0 == f25)) {
                        f2 = f24 * f0;
                        f1 = f23 * f2;
                        f2 = f23 * f2;
                        f2 = (f64)(f32)f2;
                        wrf32d(r29 + 0x14u, (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x1810u)));
                        wrf32d(r29 + 0x10u, f2);
                    }
                    r30 = r30 + 1u;
                    f1 = (f64)rdf32(r29 + 0x7cu);
                    wrf32d(r29 + 4u, ppc_fmadds(ppc_fmsubs(f28, (f64)rdf32((u32)param_1 + 0x1810u), (f64)rdf32(r29 + 0x14u)), f27, (f64)rdf32(r29 + 0x78u)));
                    wrf32d(r29 + 8u, f1);
                    r29 = r29 + 0x174u;
                } while ((s32)r30 < 8);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80172c8cu, &a);
            break;
        case 0x80170830u:
            r8 = (u32)rd8((u32)param_1 + 0x16e4u);
            r4 = rd32(0x803541c8u);
            r5 = r4 & 1u;
            if (r5 == 0u || (r4 & 2u) == 0u) {
                r6 = r4 & 2u;
                if (r6 == 0u || (r4 & 4u) == 0u) {
                    r7 = r4 & 4u;
                    if (r7 == 0u || (r4 & 8u) == 0u) {
                        r0 = r4 & 8u;
                        if (r0 == 0u || r5 == 0u) {
                            if (r5 == 0u) {
                                if (r6 == 0u) {
                                    if (r7 == 0u) {
                                        if (r0 != 0u) {
                                            wr8((u32)param_1 + 0x16e4u, 6u);
                                        }
                                    } else {
                                        wr8((u32)param_1 + 0x16e4u, 4u);
                                    }
                                } else {
                                    wr8((u32)param_1 + 0x16e4u, 2u);
                                }
                            } else {
                                wr8((u32)param_1 + 0x16e4u, 0u);
                            }
                        } else {
                            wr8((u32)param_1 + 0x16e4u, 7u);
                        }
                    } else {
                        wr8((u32)param_1 + 0x16e4u, 5u);
                    }
                } else {
                    wr8((u32)param_1 + 0x16e4u, 3u);
                }
            } else {
                wr8((u32)param_1 + 0x16e4u, 1u);
            }
            if (r8 != (u32)rd8((u32)param_1 + 0x16e4u)) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3bu;
                (void)tc_call(0x8010a74cu, &a);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80172c8cu, &a);
            break;
        case 0x80170924u:
            f2 = (f64)rdf32((u32)param_1 + 0x16e8u);
            f26 = (f64)rdf32(0x80574cd8u);
            if (!(f2 > f26)) break;
            r29 = (u32)param_1;
            r30 = 0u;
            f27 = rdf64(0x80574de8u);
            f28 = (f64)rdf32(0x80574df8u);
            f24 = rdf64(0x80574e08u);
            f25 = rdf64(0x80574e00u);
            f29 = (f64)rdf32(0x80574ce4u);
            f30 = (f64)rdf32(0x80574d08u);
            f31 = (f64)rdf32(0x80574d04u);
            f23 = (f64)rdf32(0x80574dfcu);
            wrf32d((u32)param_1 + 0x16e8u, (f64)(f32)(f2 - (f64)(f32)((f64)rdf32(0x80574d10u) - (f64)(f32)px_fdiv(f2, (f64)rdf32(0x80574df4u)))));
            do {
                a.f[0] = (f64)(f32)(f28 * (f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f27));
                f1 = tc_callf(0x80262b10u, &a);
                wrf32d(r29 + 0x78u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x16e8u) * (f64)(f32)f1));
                a.f[0] = (f64)(f32)(f28 * (f64)(f32)(px_b2f((u64)(r30 ^ 0x80000000u) | 0x4330000000000000ull) - f27));
                f1 = tc_callf(0x80262704u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)(-(f64)rdf32((u32)param_1 + 0x16e8u) * f1);
                wrf32d(r29 + 0x7cu, f0);
                f0 = (f64)(f32)(f0 + f23);
                wrf32d(r29 + 0x78u, (f64)(f32)((f64)rdf32(r29 + 0x78u) + ppc_fnmsubs((f64)(f32)(f29 * (f64)rdf32((u32)param_1 + 0x1810u)), f30, f31)));
                wrf32d(r29 + 0x7cu, f0);
                f0 = (f64)rdf32((u32)param_1 + 0x16e8u);
                if (f0 > f26) {
                    f2 = f24 * f0;
                    f1 = f25 * f2;
                    f2 = f25 * f2;
                    f2 = (f64)(f32)f2;
                    wrf32d(r29 + 0x14u, (f64)(f32)(f1 * (f64)rdf32((u32)param_1 + 0x1810u)));
                    wrf32d(r29 + 0x10u, f2);
                }
                r30 = r30 + 1u;
                f1 = (f64)rdf32(r29 + 0x7cu);
                wrf32d(r29 + 4u, ppc_fmadds(ppc_fmsubs(f29, (f64)rdf32((u32)param_1 + 0x1810u), (f64)rdf32(r29 + 0x14u)), f30, (f64)rdf32(r29 + 0x78u)));
                wrf32d(r29 + 8u, f1);
                r29 = r29 + 0x174u;
            } while ((s32)r30 < 8);
            f1 = (f64)rdf32((u32)param_1 + 0x16e8u);
            f0 = (f64)rdf32(0x80574cd8u);
            if (!((f1 < f0) || (f1 == f0))) break;
            r0 = (u32)rd8((u32)param_1 + 0x16f0u);
            wrf32d((u32)param_1 + 0x16e8u, f0);
            if (r0 == 2u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x80171e70u, &a);
                if ((s32)(s8)r3 < 0) {
                    r29 = rd32(0x804863d8u);
                    r5 = 0u;
                    r3 = 0u;
                    ctr = 0x3cu;
                    do {
                        r30 = r3 - 0x7fb66dc0u;
                        if ((u32)rd16(r30) == 0x2e8u) {
                            a.r[0] = r29;
                            a.r[1] = r30;
                            a.r[2] = 0u;
                            a.r[3] = 2u;
                            (void)tc_call(0x80067950u, &a);
                            wr16(r30, (u16)rd32(r29 + 0x5c0u));
                            if (rd32(r29 + 0x5c0u) == 0x2e8u) {
                                r0 = 0u;
                            } else {
                                r0 = (u32)rd8(r29 + 0x5c5u);
                            }
                            wr8(r30 + 2u, (u8)r0);
                            if (rd32(r29 + 0x5c0u) == 0x2e8u) {
                                r0 = 0u;
                            } else {
                                r0 = (u32)rd8(r29 + 0x5c4u);
                            }
                            wr8(r30 + 3u, (u8)r0);
                            r5 = 1u;
                            break;
                        }
                        r3 = r3 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    if (r5 == 0u && rd32(r29 + 0x5c0u) != 0x2e8u) {
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
                    }
                } else {
                    r30 = rd32(0x804863d8u);
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x80171e70u, &a);
                    r29 = (((u32)(s8)r3 << 2u) & 0xfffffffcu) - 0x7fb66dc0u;
                    a.r[0] = r30;
                    a.r[1] = r29;
                    a.r[2] = 0u;
                    a.r[3] = 3u;
                    (void)tc_call(0x80067950u, &a);
                    wr16(r29, (u16)rd32(r30 + 0x5c0u));
                    if (rd32(r30 + 0x5c0u) == 0x2e8u) {
                        r0 = 0u;
                    } else {
                        r0 = (u32)rd8(r30 + 0x5c5u);
                    }
                    wr8(r29 + 2u, (u8)r0);
                    if (rd32(r30 + 0x5c0u) == 0x2e8u) {
                        r0 = 0u;
                    } else {
                        r0 = (u32)rd8(r30 + 0x5c4u);
                    }
                    wr8(r29 + 3u, (u8)r0);
                }
            }
            wr8((u32)param_1 + 0x16f0u, 8u);
            break;
        case 0x80170bdcu:
            a.f[0] = rdf64(0x80574e10u);
            f1 = tc_callf(0x80262704u, &a);
            if ((f64)rdf32((u32)param_1 + 0x7cu) == ppc_fmadds((f64)rdf32(0x80574e18u), (f64)(f32)f1, (f64)rdf32(0x80574dfcu))) {
                a.r[0] = (u32)param_1;
                a.r[1] = 4u;
                (void)tc_call(0x801722b0u, &a);
                wrf32d((u32)param_1 + 0x16ecu, (f64)rdf32(0x80574e1cu));
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3bu;
                (void)tc_call(0x8010a74cu, &a);
            }
            r3 = (u32)param_1;
            f1 = (f64)rdf32(0x80574e20u);
            r4 = 0u;
            f3 = (f64)rdf32(0x80574ce4u);
            f2 = (f64)rdf32(0x80574cd8u);
            ctr = 2u;
            do {
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x7cu) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x7cu, f4);
                wrf32d(r3 + 4u, (f64)rdf32(r3 + 0x78u));
                wrf32d(r3 + 8u, f4);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x7cu, (f64)(f32)((f64)rdf32(r3 + 0x7cu) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x1f0u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x1f0u, f4);
                wrf32d(r3 + 0x178u, (f64)rdf32(r3 + 0x1ecu));
                wrf32d(r3 + 0x17cu, f4);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x1f0u, (f64)(f32)((f64)rdf32(r3 + 0x1f0u) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x364u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x364u, f4);
                wrf32d(r3 + 0x2ecu, (f64)rdf32(r3 + 0x360u));
                wrf32d(r3 + 0x2f0u, f4);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x364u, (f64)(f32)((f64)rdf32(r3 + 0x364u) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x4d8u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x4d8u, f4);
                wrf32d(r3 + 0x460u, (f64)rdf32(r3 + 0x4d4u));
                wrf32d(r3 + 0x464u, f4);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x4d8u, (f64)(f32)((f64)rdf32(r3 + 0x4d8u) + f1));
                }
                r3 = r3 + 0x5d0u;
                r4 = r4 + 3u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            f4 = (f64)rdf32((u32)param_1 + 0x16ecu);
            f2 = (f64)rdf32(0x80574e1cu);
            f1 = (f64)rdf32((u32)param_1 + 0x7cu);
            wrf32d((u32)param_1 + 0x16ecu, (f64)(f32)(f4 - (f64)(f32)px_fdiv(f4, (f64)rdf32(0x80574d68u))));
            if (!((f64)(f32)(f2 + f1) > f2) || !((f2 > f1) || (f2 == f1))) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801719e8u, &a);
            wr8((u32)param_1 + 0x16f0u, 1u);
            break;
        case 0x80170d64u:
            a.f[0] = rdf64(0x80574e10u);
            f1 = tc_callf(0x80262704u, &a);
            if ((f64)rdf32((u32)param_1 + 0x7cu) == ppc_fmadds((f64)rdf32(0x80574e18u), (f64)(f32)f1, (f64)rdf32(0x80574dfcu))) {
                a.r[0] = (u32)param_1;
                a.r[1] = 5u;
                (void)tc_call(0x801722b0u, &a);
                wrf32d((u32)param_1 + 0x16ecu, (f64)rdf32(0x80574e1cu));
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3bu;
                (void)tc_call(0x8010a74cu, &a);
            }
            r3 = (u32)param_1;
            f1 = (f64)rdf32(0x80574e20u);
            r4 = 0u;
            f2 = (f64)rdf32(0x80574e24u);
            ctr = 2u;
            do {
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x7cu) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x7cu, f0);
                wrf32d(r3 + 4u, (f64)rdf32(r3 + 0x78u));
                wrf32d(r3 + 8u, f0);
                if (f0 > f2) {
                    wrf32d(r3 + 0x7cu, (f64)(f32)((f64)rdf32(r3 + 0x7cu) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x1f0u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x1f0u, f0);
                wrf32d(r3 + 0x178u, (f64)rdf32(r3 + 0x1ecu));
                wrf32d(r3 + 0x17cu, f0);
                if (f0 > f2) {
                    wrf32d(r3 + 0x1f0u, (f64)(f32)((f64)rdf32(r3 + 0x1f0u) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x364u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x364u, f0);
                wrf32d(r3 + 0x2ecu, (f64)rdf32(r3 + 0x360u));
                wrf32d(r3 + 0x2f0u, f0);
                if (f0 > f2) {
                    wrf32d(r3 + 0x364u, (f64)(f32)((f64)rdf32(r3 + 0x364u) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x4d8u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x4d8u, f0);
                wrf32d(r3 + 0x460u, (f64)rdf32(r3 + 0x4d4u));
                wrf32d(r3 + 0x464u, f0);
                if (f0 > f2) {
                    wrf32d(r3 + 0x4d8u, (f64)(f32)((f64)rdf32(r3 + 0x4d8u) - f1));
                }
                r3 = r3 + 0x5d0u;
                r4 = r4 + 3u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            f4 = (f64)rdf32((u32)param_1 + 0x16ecu);
            f2 = (f64)rdf32((u32)param_1 + 0x7cu);
            f1 = (f64)rdf32(0x80574e1cu);
            wrf32d((u32)param_1 + 0x16ecu, (f64)(f32)(f4 - (f64)(f32)px_fdiv(f4, (f64)rdf32(0x80574d68u))));
            if (!((f64)(f32)(f2 - f1) < f1) || !((f1 < f2) || (f1 == f2))) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801719e8u, &a);
            wr8((u32)param_1 + 0x16f0u, 1u);
            break;
        case 0x80170ed8u:
            a.f[0] = rdf64(0x80574e10u);
            f1 = tc_callf(0x80262b10u, &a);
            if ((f64)rdf32((u32)param_1 + 0x78u) == ppc_fmadds((f64)rdf32(0x80574df0u), (f64)(f32)f1, ppc_fnmsubs((f64)(f32)((f64)rdf32(0x80574ce4u) * (f64)rdf32((u32)param_1 + 0x1810u)), (f64)rdf32(0x80574d08u), (f64)rdf32(0x80574d04u)))) {
                a.r[0] = (u32)param_1;
                a.r[1] = 6u;
                (void)tc_call(0x801722b0u, &a);
                if ((u32)rd8((u32)param_1 + 0x16f0u) == 1u) break;
                wrf32d((u32)param_1 + 0x16ecu, (f64)rdf32(0x80574e1cu));
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3bu;
                (void)tc_call(0x8010a74cu, &a);
            }
            r3 = (u32)param_1;
            f1 = (f64)rdf32(0x80574e28u);
            r4 = 0u;
            f3 = (f64)rdf32(0x80574ce4u);
            f2 = (f64)rdf32(0x80574cd8u);
            ctr = 2u;
            do {
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x78u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x78u, f4);
                f5 = (f64)rdf32(r3 + 0x7cu);
                wrf32d(r3 + 4u, f4);
                wrf32d(r3 + 8u, f5);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x78u, (f64)(f32)((f64)rdf32(r3 + 0x78u) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x1ecu) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x1ecu, f4);
                f5 = (f64)rdf32(r3 + 0x1f0u);
                wrf32d(r3 + 0x178u, f4);
                wrf32d(r3 + 0x17cu, f5);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x1ecu, (f64)(f32)((f64)rdf32(r3 + 0x1ecu) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x360u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x360u, f4);
                f5 = (f64)rdf32(r3 + 0x364u);
                wrf32d(r3 + 0x2ecu, f4);
                wrf32d(r3 + 0x2f0u, f5);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x360u, (f64)(f32)((f64)rdf32(r3 + 0x360u) + f1));
                }
                f4 = (f64)(f32)((f64)rdf32(r3 + 0x4d4u) - (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x4d4u, f4);
                f5 = (f64)rdf32(r3 + 0x4d8u);
                wrf32d(r3 + 0x460u, f4);
                wrf32d(r3 + 0x464u, f5);
                if ((f64)(f32)(f3 + f4) < f2) {
                    wrf32d(r3 + 0x4d4u, (f64)(f32)((f64)rdf32(r3 + 0x4d4u) + f1));
                }
                r3 = r3 + 0x5d0u;
                r4 = r4 + 3u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            f7 = (f64)rdf32((u32)param_1 + 0x16ecu);
            f4 = (f64)rdf32((u32)param_1 + 0x78u);
            f3 = (f64)(f32)((f64)rdf32(0x80574e1cu) + f4);
            f0 = ppc_fnmsubs((f64)(f32)((f64)rdf32(0x80574ce4u) * (f64)rdf32((u32)param_1 + 0x1810u)), (f64)rdf32(0x80574d08u), (f64)rdf32(0x80574d04u));
            wrf32d((u32)param_1 + 0x16ecu, (f64)(f32)(f7 - (f64)(f32)px_fdiv(f7, (f64)rdf32(0x80574e2cu))));
            if (!(f3 > f0) || !((f0 > f4) || (f0 == f4))) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801719e8u, &a);
            wr8((u32)param_1 + 0x16f0u, 1u);
            break;
        case 0x80171098u:
            a.f[0] = rdf64(0x80574e10u);
            f1 = tc_callf(0x80262b10u, &a);
            if ((f64)rdf32((u32)param_1 + 0x78u) == ppc_fmadds((f64)rdf32(0x80574df0u), (f64)(f32)f1, ppc_fnmsubs((f64)(f32)((f64)rdf32(0x80574ce4u) * (f64)rdf32((u32)param_1 + 0x1810u)), (f64)rdf32(0x80574d08u), (f64)rdf32(0x80574d04u)))) {
                a.r[0] = (u32)param_1;
                a.r[1] = 7u;
                (void)tc_call(0x801722b0u, &a);
                if ((u32)rd8((u32)param_1 + 0x16f0u) == 1u) break;
                wrf32d((u32)param_1 + 0x16ecu, (f64)rdf32(0x80574e1cu));
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd3bu;
                (void)tc_call(0x8010a74cu, &a);
            }
            r3 = (u32)param_1;
            f1 = (f64)rdf32(0x80574e28u);
            r4 = 0u;
            f2 = (f64)rdf32(0x80574d18u);
            ctr = 2u;
            do {
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x78u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x78u, f0);
                f3 = (f64)rdf32(r3 + 0x7cu);
                wrf32d(r3 + 4u, f0);
                wrf32d(r3 + 8u, f3);
                if (f0 > f2) {
                    wrf32d(r3 + 0x78u, (f64)(f32)((f64)rdf32(r3 + 0x78u) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x1ecu) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x1ecu, f0);
                f3 = (f64)rdf32(r3 + 0x1f0u);
                wrf32d(r3 + 0x178u, f0);
                wrf32d(r3 + 0x17cu, f3);
                if (f0 > f2) {
                    wrf32d(r3 + 0x1ecu, (f64)(f32)((f64)rdf32(r3 + 0x1ecu) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x360u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x360u, f0);
                f3 = (f64)rdf32(r3 + 0x364u);
                wrf32d(r3 + 0x2ecu, f0);
                wrf32d(r3 + 0x2f0u, f3);
                if (f0 > f2) {
                    wrf32d(r3 + 0x360u, (f64)(f32)((f64)rdf32(r3 + 0x360u) - f1));
                }
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x4d4u) + (f64)rdf32((u32)param_1 + 0x16ecu));
                wrf32d(r3 + 0x4d4u, f0);
                f3 = (f64)rdf32(r3 + 0x4d8u);
                wrf32d(r3 + 0x460u, f0);
                wrf32d(r3 + 0x464u, f3);
                if (f0 > f2) {
                    wrf32d(r3 + 0x4d4u, (f64)(f32)((f64)rdf32(r3 + 0x4d4u) - f1));
                }
                r3 = r3 + 0x5d0u;
                r4 = r4 + 3u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            f7 = (f64)rdf32((u32)param_1 + 0x16ecu);
            f5 = (f64)rdf32((u32)param_1 + 0x78u);
            f3 = (f64)(f32)(f5 - (f64)rdf32(0x80574e1cu));
            f0 = ppc_fnmsubs((f64)(f32)((f64)rdf32(0x80574ce4u) * (f64)rdf32((u32)param_1 + 0x1810u)), (f64)rdf32(0x80574d08u), (f64)rdf32(0x80574d04u));
            wrf32d((u32)param_1 + 0x16ecu, (f64)(f32)(f7 - (f64)(f32)px_fdiv(f7, (f64)rdf32(0x80574e2cu))));
            if (!(f3 < f0) || !((f0 < f5) || (f0 == f5))) break;
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801719e8u, &a);
            wr8((u32)param_1 + 0x16f0u, 1u);
            break;
        case 0x80171240u:
            break;
        default:
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
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
    return;
}
