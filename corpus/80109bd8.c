#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80109bd8(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r12 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    c0lt = param_2 < 268;
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfc8u, 0x43300000u);
    wr32(0x817fdfd0u, 0x43300000u);
    do {
        if ((u32)param_2 != 0x10cu) {
            if (!c0lt) {
                c0lt = param_2 < 291;
                if ((u32)param_2 == 0x123u) {
                    a.r[0] = rd32(param_3);
                    r3 = tc_call(0x800a5f14u, &a);
                    if (r3 == 0u) break;
                    r4 = rd32(r3 + 0x148u);
                    if ((u32)((s32)r4 >> 31) == 0u) {
                        if ((u32)((s32)((r4 << 5u) & 0xc0000000u) >> 31) == 0u) break;
                        r3 = 1u;
                        return r3;
                    }
                    a.r[0] = r3;
                    r3 = tc_call(0x801e8720u, &a);
                    if (r3 != 0u) break;
                    r3 = 1u;
                    return r3;
                }
                if (!c0lt) {
                    c0lt = param_2 < 321;
                    if ((u32)param_2 == 0x141u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        if (r3 == 0u) break;
                        if ((s32)rd32(r3 + 0xed4u) <= 0) {
                            r4 = rd32(r3 + 0xda4u);
                            if (r4 == 0u) {
                                r4 = 0xffffffffu;
                            } else {
                                r4 = rd32(r4 + 4u);
                            }
                            if (r4 == rd32(r3 + 0xed0u)) {
                                a.r[0] = r3;
                                r3 = tc_call(0x800b2fe8u, &a);
                                if (r3 != 0u) break;
                                r3 = 1u;
                                return r3;
                            }
                            r3 = 1u;
                            return r3;
                        }
                        r3 = 1u;
                        return r3;
                    }
                    if (!c0lt) {
                        if ((u32)param_2 == 0x187u) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            f1 = tc_lastf();
                            if (r3 == 0u) break;
                            a.r[0] = r3;
                            a.r[1] = rd32(param_3 + 4u);
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
                            break;
                        }
                    } else if ((u32)param_2 == 0x137u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        if (r3 == 0u) break;
                        a.r[0] = r3;
                        (void)tc_call(0x80074de4u, &a);
                        (void)tc_call(0x80074c4cu, &a);
                        break;
                    }
                } else {
                    c0lt = param_2 < 272;
                    if ((u32)param_2 == 0x110u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        c0eq = r3 == 0u;
                        if (c0eq) break;
                        r29 = r3;
                        if (c0eq) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x1d4u), &a);
                        a.r[0] = r29;
                        a.r[1] = r3;
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                    if (c0lt) {
                        c0lt = param_2 < 270;
                        if ((u32)param_2 == 0x10eu) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            c0eq = r3 == 0u;
                            if (c0eq) break;
                            r29 = r3;
                            if (c0eq) break;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x1ccu), &a);
                            a.r[0] = r29;
                            a.r[1] = r3;
                            a.r[2] = rd32(param_3 + 4u);
                            (void)tc_call(0x80109b64u, &a);
                            break;
                        }
                        if (!c0lt) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            c0eq = r3 == 0u;
                            if (c0eq) break;
                            r29 = r3;
                            if (c0eq) break;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x1d0u), &a);
                            a.r[0] = r29;
                            a.r[1] = r3;
                            a.r[2] = rd32(param_3 + 4u);
                            (void)tc_call(0x80109b64u, &a);
                            break;
                        }
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        c0eq = r3 == 0u;
                        if (c0eq) break;
                        r29 = r3;
                        if (c0eq) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x1c8u), &a);
                        a.r[0] = r29;
                        a.r[1] = r3;
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                    c0lt = param_2 < 274;
                    if ((u32)param_2 == 0x112u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        c0eq = r3 == 0u;
                        if (c0eq) break;
                        r29 = r3;
                        if (c0eq) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        do {
                            if (r3 != 0u) {
                                a.r[0] = r29;
                                a.r[1] = r4;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                r3 = tc_call(rd32(rd32(r29) + 0x19cu), &a);
                                f1 = tc_lastf();
                                r4 = tc_lastr4();
                                if (r3 != 1u) break;
                            }
                            a.r[0] = r29;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            f1 = tc_callf(0x8014fd24u, &a);
                            r4 = tc_lastr4();
                        } while (0);
                        a.r[0] = r29;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r29) + 0x1dcu), &a);
                        a.r[0] = r29;
                        a.r[1] = r3;
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                    if (c0lt) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        c0eq = r3 == 0u;
                        if (c0eq) break;
                        r29 = r3;
                        if (c0eq) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x1d8u), &a);
                        a.r[0] = r29;
                        a.r[1] = r3;
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                }
            } else {
                c0lt = param_2 < 236;
                if ((u32)param_2 == 0xecu) {
                    f3 = rdf64(0x805740e8u);
                    f1 = (f64)rdf32(0x805740d8u);
                    wr32(0x817fdfccu, rd32(param_3 + 4u) ^ 0x80000000u);
                    f1 = (f64)(f32)(f1 * (f64)(f32)(rdf64(0x817fdfc8u) - f3));
                    f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x805740dcu));
                    a.r[0] = rd32(param_3);
                    r3 = tc_call(0x800a5f14u, &a);
                    r4 = tc_lastr4();
                    if (r3 == 0u) break;
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = f31;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
                    break;
                }
                if (!c0lt) {
                    c0lt = param_2 < 264;
                    if ((u32)param_2 == 0x108u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        r29 = r3;
                        if (r3 == 0u) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x13cu), &a);
                        if (r3 == 0u) {
                            a.r[0] = r29;
                            a.r[1] = rd32(param_3 + 4u);
                            a.r[2] = rd32(param_3 + 8u);
                            a.r[3] = 1u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = (f64)rdf32(0x805740e4u);
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            (void)tc_call(rd32(rd32(r29) + 0x54u), &a);
                            break;
                        }
                        a.r[0] = r29;
                        a.r[1] = rd32(param_3 + 4u);
                        a.r[2] = rd32(param_3 + 8u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                    if (!c0lt) {
                        c0lt = param_2 < 266;
                        if ((u32)param_2 == 0x10au) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            c0eq = r3 == 0u;
                            if (c0eq) break;
                            r29 = r3;
                            if (c0eq) break;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x1bcu), &a);
                            a.r[0] = r29;
                            a.r[1] = r3;
                            a.r[2] = rd32(param_3 + 4u);
                            (void)tc_call(0x80109b64u, &a);
                            break;
                        }
                        if (!c0lt) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            c0eq = r3 == 0u;
                            if (c0eq) break;
                            r29 = r3;
                            if (c0eq) break;
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x19cu), &a);
                            wr32(0x817fdf6cu, r3);
                            a.r[0] = 0x817fdf6cu;
                            r3 = tc_call(0x80149838u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            if ((s32)r3 > 0) {
                                a.r[0] = 0x817fdf6cu;
                                r3 = tc_call(0x80149838u, &a);
                                a.r[0] = 0x804b9da0u;
                                a.r[1] = r3;
                                f1 = tc_callf(0x8010a75cu, &a);
                                r4 = tc_lastr4();
                            }
                            a.r[0] = r29;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r29) + 0x1c0u), &a);
                            a.r[0] = r29;
                            a.r[1] = r3;
                            a.r[2] = rd32(param_3 + 4u);
                            (void)tc_call(0x80109b64u, &a);
                            break;
                        }
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        c0eq = r3 == 0u;
                        if (c0eq) break;
                        r29 = r3;
                        if (c0eq) break;
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r3) + 0x1b8u), &a);
                        a.r[0] = r29;
                        a.r[1] = r3;
                        a.r[2] = rd32(param_3 + 4u);
                        (void)tc_call(0x80109b64u, &a);
                        break;
                    }
                    if ((u32)param_2 == 0x105u) {
                        a.r[0] = rd32(param_3);
                        r3 = tc_call(0x800a5f14u, &a);
                        if (r3 == 0u || (u32)((s32)((rd32(r3 + 0x148u) << 6u) & 0xc0000000u) >> 31) == 0u) break;
                        r3 = 1u;
                        return r3;
                    }
                } else {
                    c0lt = param_2 < 211;
                    if ((u32)param_2 == 0xd3u) {
                        f2 = (f64)rdf32(0x805740d4u);
                        wr32(0x817fdfa8u, 0u);
                        f1 = rdf64(0x805740e8u);
                        wrf32d(0x817fdf98u, f2);
                        wrf32d(0x817fdf9cu, f2);
                        wrf32d(0x817fdfa0u, f2);
                        wrf32d(0x817fdfa4u, f2);
                        wr8(0x817fdfacu, 0u);
                        wr8(0x817fdfadu, 0u);
                        wr32(0x817fdfd4u, rd32(param_3 + 4u) ^ 0x80000000u);
                        wrf32d(0x817fdf98u, (f64)(f32)(rdf64(0x817fdfd0u) - f1));
                        wr32(0x817fdfccu, rd32(param_3 + 8u) ^ 0x80000000u);
                        wrf32d(0x817fdf9cu, (f64)(f32)(rdf64(0x817fdfc8u) - f1));
                        wr32(0x817fdfd4u, rd32(param_3 + 0xcu) ^ 0x80000000u);
                        wrf32d(0x817fdfa0u, (f64)(f32)(rdf64(0x817fdfd0u) - f1));
                        wr32(0x817fdfa8u, rd32(param_3 + 0x10u));
                        wrf32d(0x817fdfa4u, f2);
                        wr8(0x817fdfacu, 0u);
                        wr8(0x817fdfadu, 0u);
                        a.r[0] = rd32(param_3);
                        a.r[1] = 0u;
                        a.r[2] = 0x817fdf98u;
                        a.r[3] = 0u;
                        r3 = tc_call(0x800eb4f0u, &a);
                        r29 = r3;
                        a.r[0] = 0x8046ad74u;
                        a.r[1] = r3;
                        (void)tc_call(0x8007b03cu, &a);
                        wr32(r29 + 0x15cu, rd32(0x8046ad78u));
                        f2 = (f64)rdf32(0x817fdf98u);
                        wrf32d(r29 + 0x84u, f2);
                        f1 = (f64)rdf32(0x817fdf9cu);
                        wrf32d(r29 + 0x88u, f1);
                        f0 = (f64)rdf32(0x817fdfa0u);
                        wrf32d(r29 + 0x8cu, f0);
                        wrf32d(r29 + 4u, f2);
                        wrf32d(r29 + 8u, f1);
                        wrf32d(r29 + 0xcu, f0);
                        a.r[0] = r29;
                        a.r[1] = 0x8046ad74u;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        (void)tc_call(rd32(rd32(r29) + 0x1a0u), &a);
                        break;
                    }
                    if (!c0lt) {
                        c0lt = param_2 < 223;
                        if ((u32)param_2 == 0xdfu) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            if (r3 == 0u) break;
                            r29 = r3;
                            r4 = rd32(param_3 + 8u);
                            r5 = rd32(param_3 + 0xcu) ^ 0x80000000u;
                            r0 = rd32(param_3 + 4u);
                            wr32(0x817fdfccu, r5);
                            r4 = r4 ^ 0x80000000u;
                            r0 = r0 ^ 0x80000000u;
                            f2 = rdf64(0x805740e8u);
                            f0 = rdf64(0x817fdfc8u);
                            wr32(0x817fdfd4u, r4);
                            f3 = (f64)(f32)(f0 - f2);
                            wr32(0x817fdfccu, r0);
                            f0 = rdf64(0x817fdfc8u);
                            f1 = (f64)(f32)(rdf64(0x817fdfd0u) - f2);
                            wrf32d(0x817fdf84u, f3);
                            f0 = (f64)(f32)(f0 - f2);
                            wrf32d(0x817fdf80u, f1);
                            wrf32d(0x817fdf7cu, f0);
                            a.r[0] = r3;
                            a.r[1] = r4;
                            a.r[2] = r5;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                            r6 = rd32(0x817fdf80u);
                            r0 = rd32(0x817fdf84u);
                            wr32(0x817fdf70u, rd32(0x817fdf7cu));
                            wr32(0x817fdf74u, r6);
                            wr32(0x817fdf78u, r0);
                            a.r[0] = 0x817fdf70u;
                            a.r[1] = r3;
                            a.r[2] = 0x817fdf70u;
                            (void)tc_call(0x802343a4u, &a);
                            r12 = rd32(r29);
                            f2 = rdf64(0x805740e8u);
                            wr32(0x817fdfd4u, rd32(param_3 + 0x10u) ^ 0x80000000u);
                            r12 = rd32(r12 + 0x19cu);
                            f1 = (f64)(f32)(rdf64(0x817fdfd0u) - f2);
                            f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x805740e0u));
                            a.r[0] = r29;
                            a.r[1] = tc_lastr4();
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(r12, &a);
                            wr32(0x817fdf68u, r3);
                            a.r[0] = 0x817fdf68u;
                            f1 = tc_callf(0x8014995cu, &a);
                            f1 = (f64)(f32)(f31 * f1);
                            a.f[0] = f1;
                            a.r[0] = r29;
                            a.r[1] = 0x817fdf7cu;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            (void)tc_call(0x800b2cdcu, &a);
                            break;
                        }
                        if (!c0lt && param_2 >= 235) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x800a5f14u, &a);
                            if (r3 == 0u) break;
                            f4 = (f64)rdf32(0x805740d4u);
                            r0 = rd32(param_3 + 8u);
                            wr32(0x817fdfd4u, rd32(param_3 + 4u) ^ 0x80000000u);
                            r4 = r0 ^ 0x80000000u;
                            r0 = rd32(param_3 + 0xcu);
                            wr32(0x817fdfccu, r4);
                            f3 = rdf64(0x805740e8u);
                            r0 = r0 ^ 0x80000000u;
                            f0 = rdf64(0x817fdfc8u);
                            f2 = (f64)(f32)(rdf64(0x817fdfd0u) - f3);
                            wr32(0x817fdfd4u, r0);
                            f1 = (f64)(f32)(f0 - f3);
                            f0 = rdf64(0x817fdfd0u);
                            wrf32d(r3 + 0x84u, f2);
                            f0 = (f64)(f32)(f0 - f3);
                            wrf32d(r3 + 0x88u, f1);
                            wrf32d(r3 + 0x8cu, f0);
                            wrf32d(r3 + 4u, f2);
                            wrf32d(0x817fdf90u, f4);
                            wrf32d(0x817fdf8cu, f4);
                            wrf32d(0x817fdf88u, f4);
                            wrf32d(r3 + 8u, f1);
                            wrf32d(0x817fdf88u, f2);
                            wrf32d(0x817fdf8cu, f1);
                            wrf32d(0x817fdf90u, f0);
                            wrf32d(r3 + 0xcu, f0);
                            break;
                        }
                    } else if ((u32)param_2 == 0x23u) {
                        f2 = (f64)rdf32(0x805740d4u);
                        wr32(0x817fdfc0u, 0u);
                        f1 = rdf64(0x805740e8u);
                        wrf32d(0x817fdfb0u, f2);
                        wrf32d(0x817fdfb4u, f2);
                        wrf32d(0x817fdfb8u, f2);
                        wrf32d(0x817fdfbcu, f2);
                        wr8(0x817fdfc4u, 0u);
                        wr8(0x817fdfc5u, 0u);
                        wr32(0x817fdfccu, rd32(param_3 + 4u) ^ 0x80000000u);
                        wrf32d(0x817fdfb0u, (f64)(f32)(rdf64(0x817fdfc8u) - f1));
                        wr32(0x817fdfd4u, rd32(param_3 + 8u) ^ 0x80000000u);
                        wrf32d(0x817fdfb4u, (f64)(f32)(rdf64(0x817fdfd0u) - f1));
                        wr32(0x817fdfccu, rd32(param_3 + 0xcu) ^ 0x80000000u);
                        wrf32d(0x817fdfb8u, (f64)(f32)(rdf64(0x817fdfc8u) - f1));
                        wr32(0x817fdfc0u, rd32(param_3 + 0x10u));
                        wrf32d(0x817fdfbcu, f2);
                        wr8(0x817fdfc4u, 0u);
                        wr8(0x817fdfc5u, 0u);
                        a.r[0] = rd32(param_3);
                        a.r[1] = 4u;
                        a.r[2] = 0x270fu;
                        (void)tc_call(0x800eb44cu, &a);
                        a.r[0] = 0x804b9da0u;
                        (void)tc_call(0x8010a6e0u, &a);
                        a.r[0] = rd32(param_3);
                        a.r[1] = 0u;
                        a.r[2] = 0x817fdfb0u;
                        a.r[3] = 0u;
                        r3 = tc_call(0x800eb4f0u, &a);
                        r29 = r3;
                        a.r[0] = 0x8046ad74u;
                        a.r[1] = r3;
                        (void)tc_call(0x8007b03cu, &a);
                        wr32(r29 + 0x15cu, rd32(0x8046ad78u));
                        r3 = rd32(r29 + 0x148u);
                        if ((u32)((s32)r3 >> 31) != 0u) break;
                        wr32(r29 + 0x148u, r3 | 0x400000u);
                        wr8(r29 + 0x162cu, 0u);
                        break;
                    }
                }
            }
            r3 = 2u;
            return r3;
        }
        a.r[0] = rd32(param_3);
        r3 = tc_call(0x800a5f14u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        c0eq = r3 == 0u;
        if (!c0eq) {
            r29 = r3;
            if (!c0eq) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x1c4u), &a);
                a.r[0] = r29;
                a.r[1] = r3;
                a.r[2] = rd32(param_3 + 4u);
                (void)tc_call(0x80109b64u, &a);
            }
        }
    } while (0);
    r3 = 0u;
    return r3;
}
