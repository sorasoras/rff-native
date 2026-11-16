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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801173d4(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, t11 = 0.0, t13 = 0.0, t19 = 0.0, t21 = 0.0, t27 = 0.0, t29 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    c0lt = (s32)param_2 < 48;
    wr32(0x817fdfc0u, 0x43300000u);
    wr32(0x817fdfc8u, 0x43300000u);
    if (param_2 == 0x30u) {
        r25 = 0xffffffffu;
        r4 = rd32(0x80571144u);
        if ((s32)r4 >= 0 && (s32)r4 < 70) {
            a.r[0] = 0x8049c500u;
            a.r[1] = r4;
            r3 = tc_call(0x800c8794u, &a);
            r25 = r3;
        }
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a2d40u, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = r25;
        (void)tc_call(0x8009bf04u, &a);
    } else if (!c0lt) {
        c0lt = (s32)param_2 < 300;
        if (param_2 == 0x12cu) {
            r0 = rd32(0x80571140u);
            if (r0 != 0u) {
                r3 = rd32(0x804863d8u);
                if (rd32(r3 + 0xe0u) == r0) {
                    a.r[0] = r3;
                    (void)tc_call(0x800c4f20u, &a);
                }
            }
        } else if (!c0lt) {
            c0lt = (s32)param_2 < 546;
            if (param_2 == 0x222u) {
                a.r[0] = 0x8049c500u;
                a.r[1] = rd32(param_3);
                r3 = tc_call(0x800c8b88u, &a);
                a.r[0] = 0x8049c500u;
                a.r[1] = rd32(param_3);
                a.r[2] = (rd32(param_3 + 4u) + (r3 & 0xffu)) & 0xffu;
                (void)tc_call(0x800c8b98u, &a);
            } else if (c0lt && param_2 == 0x21cu) {
                a.r[0] = 0x8049c500u;
                a.r[1] = rd32(param_3);
                a.r[2] = rd32(param_3 + 4u) & 0xffu;
                (void)tc_call(0x800c8c68u, &a);
            }
        } else {
            c0lt = (s32)param_2 < 201;
            if (param_2 == 0xc9u) {
                r8 = 0u;
                r9 = 0u;
                r3 = 0u;
                ctr = 0xau;
                do {
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r3 = r3 + 4u;
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r3 = r3 + 4u;
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r3 = r3 + 4u;
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r3 = r3 + 4u;
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r3 = r3 + 4u;
                    r6 = r3 - 0x7fb66fa0u;
                    if ((u32)rd16(r6 + 0x1e0u) == 0x18fu) {
                        r0 = (u32)rd8(r6 + 0x1e2u);
                        wr16(r6 + 0x1e0u, 0x2e8u);
                        r8 = r8 + r0;
                        wr8(r6 + 0x1e2u, 0u);
                        wr8(r6 + 0x1e3u, 0u);
                    }
                    r9 = r9 + 5u;
                    r3 = r3 + 4u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r0 = r8 + (u32)rd16(0x80492836u);
                if ((s32)r0 > 9999) {
                    r0 = 0x270fu;
                }
                wr16(0x80492836u, (u16)r0);
            } else if (!c0lt) {
                if ((s32)param_2 >= 299) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    r3 = tc_call(0x800a2d40u, &a);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    f1 = tc_callf(0x8009bf04u, &a);
                    r4 = tc_lastr4();
                    r25 = rd32(0x80571140u);
                    if (r25 != 0u) {
                        a.r[0] = r25;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        r3 = tc_call(rd32(rd32(r25) + 0x19cu), &a);
                        wr32(0x817fdf5cu, r3);
                        a.r[0] = 0x817fdf5cu;
                        r3 = tc_call(0x801498c8u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r25 + 0x70u);
                            a.r[1] = 0x80339528u;
                            r3 = tc_call(0x80031be0u, &a);
                            if (r3 != 0u) {
                                r7 = rd32(0x804863d8u);
                                wrf32d(r7 + 0x90u, (f64)rdf32(0x804890c8u));
                                wrf32d(r7 + 0x94u, (f64)rdf32(0x804890ccu));
                                wrf32d(r7 + 0x98u, (f64)rdf32(0x804890d0u));
                                wrf32d(r25 + 0x90u, (f64)rdf32(0x804890c8u));
                                wrf32d(r25 + 0x94u, (f64)rdf32(0x804890ccu));
                                wrf32d(r25 + 0x98u, (f64)rdf32(0x804890d0u));
                                a.r[0] = rd32(0x804863d8u);
                                a.r[1] = (u32)rd16(rd32(r3 + 0x3cu) + 0x5eu);
                                a.r[2] = 0x804890c8u;
                                (void)tc_call(0x800c4da0u, &a);
                                r3 = tc_call(0x80097da4u, &a);
                                r3 = rd32(r3);
                                a.r[0] = r3;
                                r3 = tc_call(0x800a2d40u, &a);
                                a.r[0] = r3;
                                a.r[1] = 0u;
                                a.r[2] = 1u;
                                (void)tc_call(0x8009bf04u, &a);
                            }
                        }
                    }
                }
            } else {
                c0lt = (s32)param_2 < 50;
                if (param_2 == 0x32u) {
                    r0 = rd32(param_3);
                    if ((s32)r0 >= 0 && (s32)r0 < 70) {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        r3 = tc_call(0x800a2d40u, &a);
                        a.r[0] = r3;
                        a.r[1] = 0x817fdf64u;
                        a.r[2] = 9u;
                        (void)tc_call(0x8009bf34u, &a);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = rd32(param_3);
                        r3 = tc_call(0x800c8794u, &a);
                        r25 = r3;
                        if ((s32)r3 >= 0 && (s32)r3 < 171) {
                            a.r[0] = rd32(param_3);
                            r3 = tc_call(0x80116608u, &a);
                            r31 = r3;
                            a.r[0] = 3u;
                            (void)tc_call(0x80141170u, &a);
                            r3 = tc_call(0x80040b64u, &a);
                            r3 = r3 & 1u;
                            a.r[0] = 3u;
                            a.r[1] = r3 + ((r25 << 2u) & 0xfffffffcu) + 2u;
                            a.r[2] = 0u;
                            r3 = tc_call(0x801412f8u, &a);
                            r26 = r3;
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = r25;
                            (void)tc_call(0x800c87d4u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            (void)tc_call(0x800c8208u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = r26;
                            (void)tc_call(0x800c8cd4u, &a);
                            a.r[0] = 3u;
                            (void)tc_call(0x80141274u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = 0xau;
                            (void)tc_call(0x800c8c68u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = 0x10u;
                            (void)tc_call(0x800c8cb4u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = 0u;
                            (void)tc_call(0x800c8b68u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = rd32(param_3);
                            r3 = tc_call(0x800c8b88u, &a);
                            r3 = r3 & 0xffu;
                            r0 = r3 + 3u;
                            if ((s32)r0 > 99) {
                                r0 = 0x63u;
                            }
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            a.r[2] = r0 & 0xffu;
                            (void)tc_call(0x800c8b98u, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            (void)tc_call(0x800c834cu, &a);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = rd32(param_3);
                            (void)tc_call(0x800c834cu, &a);
                            wr32(0x817fdf60u, r25);
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            r3 = tc_call(0x800c87e4u, &a);
                            r30 = r3;
                            a.r[0] = 0x8049c500u;
                            a.r[1] = rd32(param_3);
                            r3 = tc_call(0x800c87e4u, &a);
                            r0 = rd32(0x817fdf64u);
                            c0lt = (s32)r0 < 2;
                            if (r0 == 2u) {
                                f4 = rdf64(0x80574178u);
                                f0 = (f64)rdf32(0x8057416cu);
                                wr32(0x817fdfccu, (ppc_mulhwu(0x51eb851fu, rd32(r3 + 0x18u)) >> 5u) & 0x7ffffffu);
                                f0 = (f64)(f32)(f0 * (f64)(f32)(rdf64(0x817fdfc8u) - f4));
                                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                wrf64(0x817fdfd0u, f0);
                                r25 = rd32(0x817fdfd4u);
                                a.r[0] = 0x817fdf60u;
                                r3 = tc_call(0x801495a4u, &a);
                                if ((s32)(r25 + r3) >= 9999) {
                                    r0 = 0x270fu;
                                } else {
                                    a.r[0] = 0x817fdf60u;
                                    r3 = tc_call(0x801495a4u, &a);
                                    r0 = r25 + r3;
                                }
                                wr32(r30 + 0x14u, r0);
                            } else if (!c0lt) {
                                if ((s32)r0 < 4) {
                                    f4 = rdf64(0x80574178u);
                                    wr32(0x817fdfc4u, (u32)rd16(r3 + 0x26u));
                                    f0 = (f64)(f32)((f64)rdf32(0x8057416cu) * (f64)(f32)(rdf64(0x817fdfc0u) - f4));
                                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                    wrf64(0x817fdfd0u, f0);
                                    r25 = rd32(0x817fdfd4u);
                                    a.r[0] = 0x817fdf60u;
                                    r3 = tc_call(0x8014958cu, &a);
                                    if ((s32)(r25 + r3) >= 999) {
                                        r0 = 0x3e7u;
                                    } else {
                                        a.r[0] = 0x817fdf60u;
                                        r3 = tc_call(0x8014958cu, &a);
                                        r0 = r25 + r3;
                                    }
                                    wr32(r30 + 0x10u, r0);
                                }
                            } else {
                                c0lt = (s32)r0 < 0;
                                if (r0 == 0u) {
                                    f4 = rdf64(0x80574178u);
                                    wr32(0x817fdfccu, (u32)rd16(r3 + 0x22u));
                                    f0 = (f64)(f32)((f64)rdf32(0x8057416cu) * (f64)(f32)(rdf64(0x817fdfc8u) - f4));
                                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                    wrf64(0x817fdfd0u, f0);
                                    r25 = rd32(0x817fdfd4u);
                                    a.r[0] = 0x817fdf60u;
                                    r3 = tc_call(0x8014955cu, &a);
                                    if ((s32)(r25 + r3) >= 999) {
                                        r0 = 0x3e7u;
                                    } else {
                                        a.r[0] = 0x817fdf60u;
                                        r3 = tc_call(0x8014955cu, &a);
                                        r0 = r25 + r3;
                                    }
                                    wr32(r30 + 8u, r0);
                                } else if (!c0lt) {
                                    f4 = rdf64(0x80574178u);
                                    wr32(0x817fdfc4u, (u32)rd16(r3 + 0x24u));
                                    f0 = (f64)(f32)((f64)rdf32(0x8057416cu) * (f64)(f32)(rdf64(0x817fdfc0u) - f4));
                                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                                    wrf64(0x817fdfd0u, f0);
                                    r25 = rd32(0x817fdfd4u);
                                    a.r[0] = 0x817fdf60u;
                                    r3 = tc_call(0x80149574u, &a);
                                    if ((s32)(r25 + r3) >= 999) {
                                        r0 = 0x3e7u;
                                    } else {
                                        a.r[0] = 0x817fdf60u;
                                        r3 = tc_call(0x80149574u, &a);
                                        r0 = r25 + r3;
                                    }
                                    wr32(r30 + 0xcu, r0);
                                }
                            }
                            a.r[0] = 0x8049c500u;
                            a.r[1] = r31;
                            (void)tc_call(0x800c834cu, &a);
                            a.r[0] = param_1;
                            r3 = tc_call(0x80116f28u, &a);
                            if (r3 != 0xffffffffu) {
                                a.r[0] = param_1;
                                a.r[1] = r3;
                                a.r[2] = r31;
                                a.r[3] = param_1 + 0x10u;
                                (void)tc_call(0x80117094u, &a);
                            }
                        }
                    }
                } else if (c0lt) {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    r3 = tc_call(0x800a2d40u, &a);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    a.r[2] = 0u;
                    (void)tc_call(0x8009bf04u, &a);
                }
            }
        }
    } else {
        c0lt = (s32)param_2 < 41;
        if (param_2 == 0x29u) {
            f0 = (f64)rdf32(0x80574158u);
            wrf32d(0x817fdfb4u, f0);
            wrf32d(0x817fdfb8u, f0);
            wrf32d(0x817fdfbcu, f0);
            r5 = rd32(param_3);
            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r5) >> 2);
            r4 = (r0 >> 0x1fu) & 1u;
            r0 = r0 + r4;
            r0 = r0 * 0xau;
            r25 = r5 - r0;
            r3 = rd32(param_1 + (r25 * 0x58u) + 0x1cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = (u32)param_4;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = 0.0;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                wrf32d(0x817fdfb4u, (f64)rdf32(r3));
                wrf32d(0x817fdfb8u, (f64)rdf32(r3 + 4u));
                wrf32d(0x817fdfbcu, (f64)rdf32(r3 + 8u));
                a.r[0] = rd32(param_1 + (r25 * 0x58u) + 0x1cu);
                f1 = tc_callf(0x800b2e68u, &a);
                r3 = rd32(param_1 + (r25 * 0x58u) + 0x1cu);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
                r3 = param_1 + (r25 * 0x58u);
                wr32(r3 + 0x1cu, 0u);
                r3 = r3 + 0x20u;
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
            }
            a.r[0] = 0x8049c500u;
            a.r[1] = rd32(param_3);
            r3 = tc_call(0x800c8794u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x80183658u, &a);
            f1 = tc_lastf();
            wr16(0x817fdf5au, (u16)r3);
            r4 = (r3 >> 0x10u) & 0xffffu;
            r3 = (u32)rd8(0x817fdf5au);
            r0 = (u32)rd8(0x817fdf5bu);
            wr16(0x817fdf58u, (u16)r4);
            wr16(0x817fdf68u, (u16)r4);
            wr8(0x817fdf6au, (u8)r3);
            wr8(0x817fdf6bu, (u8)r0);
            if (r4 < 0x2e8u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xb8u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                        r27 = r3;
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xb8u;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                        r27 = r3;
                    }
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xb8u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r27 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x800d5c2cu, &a);
                }
                if (r27 != 0u) {
                    a.r[0] = r27;
                    a.r[1] = (u32)rd16(0x817fdf68u);
                    a.r[2] = 0x817fdfb4u;
                    a.r[3] = 0x804890c8u;
                    a.r[4] = (u32)rd8(0x817fdf6bu);
                    a.r[5] = (u32)rd8(0x817fdf6au);
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    f1 = tc_callf(rd32(rd32(r27) + 0x48u), &a);
                    wr32(r27 + 0x7cu, 1u);
                    a.r[0] = r27;
                    a.r[1] = 0x817fdfb4u;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    (void)tc_call(rd32(rd32(r27) + 0x50u), &a);
                    a.r[0] = rd32(r27 + 0xa4u);
                    (void)tc_call(0x800cf688u, &a);
                }
            }
            r3 = tc_call(0x801567a0u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            a.r[1] = rd32(param_3);
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(rd32(rd32(r3) + 0x2cu), &a);
            a.r[0] = 0x8049c500u;
            a.r[1] = rd32(param_3);
            (void)tc_call(0x800c8570u, &a);
        } else if (!c0lt) {
            c0lt = (s32)param_2 < 45;
            if (param_2 == 0x2du) {
                r3 = rd32(0x80571140u);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    a.r[1] = rd32(param_3);
                    a.r[2] = param_3;
                    a.r[3] = (u32)param_4;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    (void)tc_call(rd32(rd32(r3) + 0x68u), &a);
                }
            } else if (!c0lt) {
                if ((s32)param_2 >= 47) {
                    r6 = rd32(0x80571140u);
                    if (r6 != 0u) {
                        r3 = rd32(param_3 + 4u);
                        r0 = rd32(param_3 + 8u);
                        wr32(0x817fdfccu, rd32(param_3) ^ 0x80000000u);
                        r3 = r3 ^ 0x80000000u;
                        r0 = r0 ^ 0x80000000u;
                        f5 = rdf64(0x80574170u);
                        f0 = rdf64(0x817fdfc8u);
                        wr32(0x817fdfc4u, r3);
                        f4 = (f64)(f32)(f0 - f5);
                        wr32(0x817fdfccu, r0);
                        f0 = rdf64(0x817fdfc8u);
                        f3 = (f64)(f32)(rdf64(0x817fdfc0u) - f5);
                        wrf32d(0x817fdf6cu, f4);
                        f0 = (f64)(f32)(f0 - f5);
                        wrf32d(0x817fdf70u, f3);
                        wrf32d(0x817fdf74u, f0);
                        t27 = (f64)rdf32(0x817fdf70u);
                        t29 = (f64)rdf32(0x817fdf74u);
                        wrf32d(0x817fdf78u, (f64)rdf32(0x817fdf6cu));
                        wrf32d(0x817fdf7cu, t27);
                        wrf32d(0x817fdf80u, t29);
                        f4 = (f64)rdf32(0x817fdf78u);
                        f3 = (f64)rdf32(0x817fdf7cu);
                        wrf32d(r6 + 0x84u, f4);
                        f0 = (f64)rdf32(0x817fdf80u);
                        wrf32d(r6 + 0x88u, f3);
                        wrf32d(r6 + 0x8cu, f0);
                        wrf32d(r6 + 4u, f4);
                        wrf32d(r6 + 8u, f3);
                        wrf32d(r6 + 0xcu, f0);
                    }
                } else {
                    r25 = rd32(0x80571140u);
                    if (r25 != 0u) {
                        r0 = rd32(param_3 + 4u);
                        f4 = rdf64(0x80574170u);
                        wr32(0x817fdfccu, rd32(param_3) ^ 0x80000000u);
                        r0 = r0 ^ 0x80000000u;
                        wr32(0x817fdfc4u, r0);
                        f0 = rdf64(0x817fdfc0u);
                        f3 = (f64)(f32)(rdf64(0x817fdfc8u) - f4);
                        wr32(0x817fdf9cu, 0u);
                        f0 = (f64)(f32)(f0 - f4);
                        wr32(0x817fdfa4u, 0u);
                        wr32(0x817fdfa0u, 0u);
                        wrf32d(0x817fdf9cu, f3);
                        wrf32d(0x817fdfa4u, f0);
                        t11 = (f64)rdf32(0x817fdfa0u);
                        t13 = (f64)rdf32(0x817fdfa4u);
                        wrf32d(0x817fdfa8u, (f64)rdf32(0x817fdf9cu));
                        wrf32d(0x817fdfacu, t11);
                        wrf32d(0x817fdfb0u, t13);
                        f4 = (f64)rdf32(0x817fdfa8u);
                        f3 = (f64)rdf32(0x817fdfacu);
                        wrf32d(r25 + 0x84u, f4);
                        f0 = (f64)rdf32(0x817fdfb0u);
                        wrf32d(r25 + 0x88u, f3);
                        wrf32d(r25 + 0x8cu, f0);
                        wrf32d(r25 + 4u, f4);
                        wrf32d(r25 + 8u, f3);
                        wrf32d(r25 + 0xcu, f0);
                        a.r[0] = r25;
                        a.r[1] = r25 + 0xcf4u;
                        f1 = tc_callf(0x800b42e4u, &a);
                        r0 = rd32(param_3 + 4u);
                        f4 = rdf64(0x80574170u);
                        wr32(0x817fdfccu, rd32(param_3) ^ 0x80000000u);
                        r0 = r0 ^ 0x80000000u;
                        wr32(0x817fdfc4u, r0);
                        f0 = rdf64(0x817fdfc0u);
                        f3 = (f64)(f32)(rdf64(0x817fdfc8u) - f4);
                        wrf32d(0x817fdf88u, f1);
                        f0 = (f64)(f32)(f0 - f4);
                        wrf32d(0x817fdf84u, f3);
                        wrf32d(0x817fdf8cu, f0);
                        t19 = (f64)rdf32(0x817fdf88u);
                        t21 = (f64)rdf32(0x817fdf8cu);
                        wrf32d(0x817fdf90u, (f64)rdf32(0x817fdf84u));
                        wrf32d(0x817fdf94u, t19);
                        wrf32d(0x817fdf98u, t21);
                        f4 = (f64)rdf32(0x817fdf90u);
                        f3 = (f64)rdf32(0x817fdf94u);
                        wrf32d(r25 + 0x84u, f4);
                        f0 = (f64)rdf32(0x817fdf98u);
                        wrf32d(r25 + 0x88u, f3);
                        wrf32d(r25 + 0x8cu, f0);
                        wrf32d(r25 + 4u, f4);
                        wrf32d(r25 + 8u, f3);
                        wrf32d(r25 + 0xcu, f0);
                    }
                }
            } else {
                c0lt = (s32)param_2 < 43;
                if (param_2 == 0x2bu) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = rd32(param_3);
                    r3 = tc_call(0x800c8ca4u, &a);
                    r3 = r3 & 0xffu;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = rd32(param_3);
                    a.r[2] = r3 & 0xfffffffau;
                    (void)tc_call(0x800c8cb4u, &a);
                    r3 = tc_call(0x801567a0u, &a);
                    f1 = tc_lastf();
                    a.r[0] = r3;
                    a.r[1] = rd32(param_3);
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    (void)tc_call(rd32(rd32(r3) + 0x2cu), &a);
                } else if (!c0lt) {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = rd32(param_3);
                    r3 = tc_call(0x800c8ca4u, &a);
                    r0 = r3 & 0xffu;
                    if ((r3 & 2u) == 0u) {
                        r0 = r0 | 2u;
                        a.r[0] = 0x8049c500u;
                        a.r[1] = rd32(param_3);
                        a.r[2] = r0 & 0xffu;
                        (void)tc_call(0x800c8cb4u, &a);
                        r27 = rd32(param_3);
                        r28 = rd32(param_3 + 4u);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        r3 = tc_call(0x800c8b58u, &a);
                        r0 = (r3 & 0xffu) + r28;
                        if ((s32)r0 < 0) {
                            r0 = 0u;
                        }
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r27;
                        a.r[2] = r0 & 0xffu;
                        (void)tc_call(0x800c8b68u, &a);
                    }
                } else {
                    a.r[0] = 0x8049c500u;
                    a.r[1] = rd32(param_3);
                    r3 = tc_call(0x800c8ca4u, &a);
                    r3 = r3 & 0xffu;
                    r3 = r3 & 0xfffffffau;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = rd32(param_3);
                    a.r[2] = r3 | 1u;
                    (void)tc_call(0x800c8cb4u, &a);
                }
            }
        } else {
            c0lt = (s32)param_2 < 38;
            if (param_2 == 0x26u) {
                a.r[0] = param_1;
                (void)tc_call(0x80116ff8u, &a);
                a.r[0] = 0x804bb758u;
                (void)tc_call(0x80163944u, &a);
            } else if (!c0lt) {
                if ((s32)param_2 >= 40) {
                    a.r[0] = 0u;
                    a.r[1] = 0u;
                    (void)tc_call(0x800a796cu, &a);
                    wr32(0x80486da8u, rd32(0x80486da8u) & 0xfffffffdu);
                    r25 = rd32(0x80571140u);
                    r27 = rd32(0x80571144u);
                    if (r25 == 0u) {
                        if (((r27 + 0x10000u) == 0xffffu || ((s32)r27 >= 0 && (s32)r27 < 70)) && (r27 + 0x10000u) != 0xffffu) {
                            a.r[0] = 1u;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                        }
                    } else {
                        a.r[0] = r25;
                        a.r[1] = 0xcu;
                        (void)tc_call(0x800b31a0u, &a);
                        wrf32d(r25 + 0x16cu, (f64)(f32)((f64)rdf32(r25 + 0x16cu) + (f64)rdf32(0x80574168u)));
                        if ((r27 + 0x10000u) != 0xffffu) {
                            a.r[0] = 1u;
                            a.r[1] = 0u;
                            (void)tc_call(0x800a796cu, &a);
                        }
                    }
                    wr32(0x80571144u, 0x46u);
                } else {
                    r4 = rd32(param_3);
                    if ((r4 + 0x10000u) != 0xffffu) {
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r4;
                        r3 = tc_call(0x800c8794u, &a);
                        if ((s32)r3 < 0 || (s32)r3 >= 171) {
                            return;
                        }
                    }
                    wr32(0x80571144u, rd32(param_3));
                    if ((rd32(param_3) + 0x10000u) != 0xffffu) {
                        r3 = tc_call(0x801567a0u, &a);
                        f1 = tc_lastf();
                        a.r[0] = r3;
                        a.r[1] = rd32(param_3);
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        (void)tc_call(rd32(rd32(r3) + 0x2cu), &a);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = rd32(param_3);
                        r3 = tc_call(0x800c8804u, &a);
                        a.r[0] = 0x8049c500u;
                        a.r[1] = rd32(param_3);
                        a.r[2] = r3;
                        (void)tc_call(0x800c8898u, &a);
                    }
                }
            } else {
                c0lt = (s32)param_2 < 36;
                if (param_2 == 0x24u) {
                    a.r[0] = 2u;
                    r3 = tc_call(0x800a7934u, &a);
                    r25 = r3;
                    r26 = 0u;
                    for (;;) {
                        a.r[0] = 0x8049c500u;
                        a.r[1] = r26;
                        r3 = tc_call(0x800c8794u, &a);
                        if ((s32)r3 < 0 || (s32)r3 >= 171) break;
                        r26 = r26 + 1u;
                        if ((s32)r26 >= 70) {
                            return;
                        }
                    }
                    a.r[0] = 3u;
                    (void)tc_call(0x80141170u, &a);
                    r3 = tc_call(0x80040b64u, &a);
                    r3 = r3 & 1u;
                    a.r[0] = 3u;
                    a.r[1] = ((r25 << 2u) & 0xfffffffcu) + r3;
                    a.r[2] = 0u;
                    r3 = tc_call(0x801412f8u, &a);
                    r27 = r3;
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r26;
                    a.r[2] = r25;
                    (void)tc_call(0x800c87d4u, &a);
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r26;
                    (void)tc_call(0x800c8208u, &a);
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r26;
                    (void)tc_call(0x800c834cu, &a);
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r26;
                    a.r[2] = r27;
                    (void)tc_call(0x800c8cd4u, &a);
                    a.r[0] = 3u;
                    (void)tc_call(0x80141274u, &a);
                    a.r[0] = 0x8049c500u;
                    a.r[1] = r26;
                    a.r[2] = 0u;
                    (void)tc_call(0x800c8c68u, &a);
                    a.r[0] = r26;
                    a.r[1] = 9u;
                    (void)tc_call(0x800a796cu, &a);
                    r5 = 0xc350u;
                    r0 = (u32)rd16(0x80492b92u) + 1u;
                    if ((s32)r0 <= 50000) {
                        r5 = r0;
                    }
                    wr16(0x80492b92u, (u16)r5);
                } else if (!c0lt) {
                    a.r[0] = 0x804bb758u;
                    (void)tc_call(0x801638f4u, &a);
                    r5 = 0u;
                    r3 = 0u;
                    ctr = 0xbu;
                    do {
                        wr32(r3 - 0x7fb43fa0u, r5);
                        r5 = r5 + 1u;
                        r3 = r3 + 4u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r26 = 0u;
                    do {
                        r3 = tc_call(0x80040b64u, &a);
                        r25 = r3 - (((ppc_mulhwu(0xba2e8ba3u, r3) >> 3u) & 0x1fffffffu) * 0xbu);
                        r3 = tc_call(0x80040b64u, &a);
                        r4 = (r25 << 2u) & 0xfffffffcu;
                        r26 = r26 + 1u;
                        r5 = rd32(r4 - 0x7fb43fa0u);
                        r3 = ((r3 - (((ppc_mulhwu(0xba2e8ba3u, r3) >> 3u) & 0x1fffffffu) * 0xbu)) << 2u) & 0xfffffffcu;
                        wr32(r4 - 0x7fb43fa0u, rd32(r3 - 0x7fb43fa0u));
                        wr32(r3 - 0x7fb43fa0u, r5);
                    } while ((s32)r26 < 11);
                    a.r[0] = param_1;
                    (void)tc_call(0x80116ff8u, &a);
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    r3 = tc_call(0x800a3578u, &a);
                    if (param_4 >= 5) {
                        r3 = rd32(param_3 + 0x10u);
                    }
                    if ((s32)r3 >= 12 && (s32)r3 <= 18) {
                        f3 = rdf64(0x80574170u);
                        wr32(param_1 + 0xcu, r3 - 0xcu);
                        r25 = 0u;
                        wr32(0x817fdfc4u, rd32(param_3) ^ 0x80000000u);
                        wrf32d(param_1 + 0x10u, (f64)(f32)(rdf64(0x817fdfc0u) - f3));
                        wr32(0x817fdfccu, rd32(param_3 + 4u) ^ 0x80000000u);
                        wrf32d(param_1 + 0x14u, (f64)(f32)(rdf64(0x817fdfc8u) - f3));
                        wr32(0x817fdfc4u, rd32(param_3 + 8u) ^ 0x80000000u);
                        wrf32d(param_1 + 0x18u, (f64)(f32)(rdf64(0x817fdfc0u) - f3));
                        wr32(0x805710a0u, 1u);
                        do {
                            a.r[0] = param_1;
                            a.r[1] = r25;
                            a.r[2] = r25 + (rd32(param_1 + 0xcu) * 0xau);
                            a.r[3] = param_1 + 0x10u;
                            (void)tc_call(0x80117094u, &a);
                            r25 = r25 + 1u;
                        } while ((s32)r25 < 10);
                        wr32(0x805710a0u, 0u);
                    }
                }
            }
        }
    }
    return;
}
