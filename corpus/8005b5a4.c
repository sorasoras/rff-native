#include "tc_rt.h"

void fn_8005b5a4(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r19 = 0, r20 = 0, r21 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x80571130u, (u32)param_4);
    r30 = rd32(0x805710ecu);
    r29 = 0u;
    if ((u32)param_4 == 0u) {
        wr32(0x805710ecu, 0u);
        a.r[0] = 0u;
        (void)tc_call(0x8003d790u, &a);
        wr32(0x803d26d4u, 0u);
        a.r[0] = rd32(0x803d26a8u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
        wr32(0x803d2754u, 0u);
        a.r[0] = rd32(0x803d2730u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
    }
    a.r[0] = 0x817fdf78u;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = 0x817fdf78u;
    f1 = tc_callf(0x8007ae84u, &a);
    r4 = tc_lastr4();
    r31 = rd32(rd32(0x804863d8u) + 0xbcu);
    if ((param_2 & 1u) != 0u) {
        a.r[0] = 1u;
        r3 = tc_call(0x80082730u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            if ((u32)param_3 != 0u) {
                r20 = rd32(0x804863d8u);
                if ((u32)((s32)((rd32(r20 + 0x9cu) << 7u) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = r20;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    r3 = tc_call(rd32(rd32(r20) + 0x28u), &a);
                    a.r[0] = param_1;
                    a.r[1] = r3;
                    a.r[2] = rd32(r20 + 0xbcu);
                    a.r[3] = 0x817fdf68u;
                    r3 = tc_call(0x8005b4a0u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r29 = r3;
                }
            }
            if ((u32)param_4 == 0u) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x88u), &a);
                r4 = tc_lastr4();
            }
            if ((u32)param_4 == 0u) {
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
                a.r[1] = param_5;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
                r4 = tc_lastr4();
            } else {
                r3 = rd32(0x804863d8u);
                if ((u32)((s32)((rd32(r3 + 0x9cu) << 0xau) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = r3;
                    a.r[1] = param_5;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(rd32(rd32(r3) + 0x14u), &a);
                    r4 = tc_lastr4();
                }
            }
            if (r29 != 0u) {
                f1 = (f64)rdf32(0x817fdf68u);
                f4 = (f64)rdf32(0x817fdf74u);
                f3 = (f64)rdf32(0x817fdf70u);
                f2 = (f64)rdf32(0x817fdf6cu);
                wrf32d(0x803d2790u, f1);
                wrf32d(0x803d2794u, f2);
                wrf32d(0x803d2798u, f3);
                wrf32d(0x803d279cu, f4);
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                f1 = tc_callf(0x8003d818u, &a);
                r4 = tc_lastr4();
                r29 = 0u;
            }
            if ((u32)param_4 == 0u && rd32(0x80472ac4u) != 0x19u) {
                a.r[0] = rd32(0x804863d8u);
                f1 = tc_callf(0x80069f9cu, &a);
                r4 = tc_lastr4();
            }
        }
    }
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r4 = rd32(r3 + 4u);
    r0 = rd32(r3 + 8u);
    wr32(0x817fdf5cu, rd32(r3));
    wr32(0x817fdf60u, r4);
    wr32(0x817fdf64u, r0);
    if ((param_2 & 2u) != 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x80082730u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r28 = rd32(0x8046b7e4u);
            f30 = (f64)rdf32(0x80572418u);
            f29 = (f64)rdf32(0x80572420u);
            while (r28 != 0u) {
                r3 = r28;
                r28 = rd32(r28);
                r27 = rd32(r3 + 8u);
                r3 = rd32(r27 + 0x9cu);
                if ((u32)((s32)r3 >> 31) != 0u) {
                    if ((u32)param_4 == 0u) {
                        if ((u32)param_3 != 0u && (u32)((s32)((r3 << 7u) & 0xc0000000u) >> 31) == 0u) {
                            a.r[0] = r27;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                            a.r[0] = param_1;
                            a.r[1] = r3;
                            a.r[2] = rd32(r27 + 0xbcu);
                            a.r[3] = 0x817fdf68u;
                            r3 = tc_call(0x8005b4a0u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r29 = r3;
                        }
                        a.r[0] = r27;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        f1 = tc_callf(rd32(rd32(r27) + 0x88u), &a);
                        if (rd32(r27 + 0xccu) == 0u) {
                            a.r[0] = r27;
                            a.r[1] = param_5;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(r27) + 0x14u), &a);
                            r4 = tc_lastr4();
                        } else {
                            a.r[0] = 0x817fdf78u;
                            a.r[1] = r27;
                            f1 = tc_callf(0x8007b03cu, &a);
                            r4 = tc_lastr4();
                        }
                        if (r29 != 0u) {
                            f4 = (f64)rdf32(0x817fdf74u);
                            f3 = (f64)rdf32(0x817fdf70u);
                            f2 = (f64)rdf32(0x817fdf6cu);
                            f1 = (f64)rdf32(0x817fdf68u);
                            wrf32d(0x803d2794u, f2);
                            wrf32d(0x803d2790u, f1);
                            wrf32d(0x803d2798u, f3);
                            wrf32d(0x803d279cu, f4);
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            f1 = tc_callf(0x8003d818u, &a);
                            r4 = tc_lastr4();
                            r29 = 0u;
                        }
                    } else if ((u32)((s32)((r3 << 0xau) & 0xc0000000u) >> 31) == 0u) {
                        a.r[0] = r27;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                        r6 = rd32(0x817fdf60u);
                        r0 = rd32(0x817fdf64u);
                        wr32(0x817fdf50u, rd32(0x817fdf5cu));
                        wr32(0x817fdf54u, r6);
                        wr32(0x817fdf58u, r0);
                        a.r[0] = 0x817fdf50u;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdf50u;
                        (void)tc_call(0x802343a4u, &a);
                        wrf32d(0x817fdf54u, f30);
                        a.r[0] = 0x817fdf50u;
                        f1 = tc_callf(0x80234428u, &a);
                        r4 = tc_lastr4();
                        if (f1 < f29) {
                            a.r[0] = r27;
                            a.r[1] = param_5;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(r27) + 0x14u), &a);
                            r4 = tc_lastr4();
                        }
                    }
                }
            }
            f30 = (f64)rdf32(0x80572418u);
            r28 = 0x804df9e0u;
            f29 = (f64)rdf32(0x80572420u);
            r19 = 0u;
            do {
                if (r19 < 0x23u) {
                    r20 = rd32(r28);
                } else {
                    r20 = 0u;
                }
                if (r20 != 0u && rd32(r20 + 0x74u) != 0u) {
                    if ((u32)param_4 == 0u) {
                        if ((u32)param_3 != 0u) {
                            a.r[0] = r20;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r20) + 0x28u), &a);
                            a.r[0] = param_1;
                            a.r[1] = r3;
                            a.r[2] = 0u;
                            a.r[3] = 0x817fdf68u;
                            r3 = tc_call(0x8005b4a0u, &a);
                            f1 = tc_lastf();
                            r29 = r3;
                        }
                        a.r[0] = r20;
                        a.r[1] = param_5;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        f1 = tc_callf(rd32(rd32(r20) + 0x14u), &a);
                        r4 = tc_lastr4();
                        if (r29 != 0u) {
                            f4 = (f64)rdf32(0x817fdf74u);
                            f3 = (f64)rdf32(0x817fdf70u);
                            f2 = (f64)rdf32(0x817fdf6cu);
                            f1 = (f64)rdf32(0x817fdf68u);
                            wrf32d(0x803d2794u, f2);
                            wrf32d(0x803d2790u, f1);
                            wrf32d(0x803d2798u, f3);
                            wrf32d(0x803d279cu, f4);
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            f1 = tc_callf(0x8003d818u, &a);
                            r4 = tc_lastr4();
                            r29 = 0u;
                        }
                    } else {
                        a.r[0] = r20;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r20) + 0x28u), &a);
                        r6 = rd32(0x817fdf60u);
                        r0 = rd32(0x817fdf64u);
                        wr32(0x817fdf44u, rd32(0x817fdf5cu));
                        wr32(0x817fdf48u, r6);
                        wr32(0x817fdf4cu, r0);
                        a.r[0] = 0x817fdf44u;
                        a.r[1] = r3;
                        a.r[2] = 0x817fdf44u;
                        (void)tc_call(0x802343a4u, &a);
                        wrf32d(0x817fdf48u, f30);
                        a.r[0] = 0x817fdf44u;
                        f1 = tc_callf(0x80234428u, &a);
                        r4 = tc_lastr4();
                        if (f1 < f29) {
                            a.r[0] = r20;
                            a.r[1] = param_5;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(r20) + 0x14u), &a);
                            r4 = tc_lastr4();
                        }
                    }
                }
                r19 = r19 + 1u;
                r28 = r28 + 4u;
            } while (r19 < 0x21u);
        }
    }
    if ((param_2 & 4u) != 0u) {
        a.r[0] = 4u;
        r3 = tc_call(0x80082730u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            r27 = rd32(0x8046ad74u);
            f29 = (f64)rdf32(0x80572418u);
            f31 = (f64)rdf32(0x80572424u);
            f30 = (f64)rdf32(0x80572420u);
            while (r27 != 0u) {
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                r3 = rd32(r28 + 0x9cu);
                if ((u32)((s32)r3 >> 31) != 0u) {
                    if ((u32)param_4 == 0u) {
                        if ((u32)param_3 != 0u && (u32)((s32)((r3 << 7u) & 0xc0000000u) >> 31) == 0u) {
                            a.r[0] = r28;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r28) + 0x28u), &a);
                            a.r[0] = param_1;
                            a.r[1] = r3;
                            a.r[2] = rd32(r28 + 0xbcu);
                            a.r[3] = 0x817fdf68u;
                            r3 = tc_call(0x8005b4a0u, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r29 = r3;
                        }
                        a.r[0] = r28;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        f1 = tc_callf(rd32(rd32(r28) + 0x88u), &a);
                        if (rd32(r28 + 0xccu) == 0u) {
                            a.r[0] = r28;
                            a.r[1] = param_5;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            f1 = tc_callf(rd32(rd32(r28) + 0x14u), &a);
                            r4 = tc_lastr4();
                        } else {
                            a.r[0] = 0x817fdf78u;
                            a.r[1] = r28;
                            f1 = tc_callf(0x8007b03cu, &a);
                            r4 = tc_lastr4();
                        }
                        if (r29 != 0u) {
                            f4 = (f64)rdf32(0x817fdf74u);
                            f3 = (f64)rdf32(0x817fdf70u);
                            f2 = (f64)rdf32(0x817fdf6cu);
                            f1 = (f64)rdf32(0x817fdf68u);
                            wrf32d(0x803d2794u, f2);
                            wrf32d(0x803d2790u, f1);
                            wrf32d(0x803d2798u, f3);
                            wrf32d(0x803d279cu, f4);
                            a.f[0] = f1;
                            a.f[1] = f2;
                            a.f[2] = f3;
                            a.f[3] = f4;
                            f1 = tc_callf(0x8003d818u, &a);
                            r4 = tc_lastr4();
                            r29 = 0u;
                        }
                    } else if ((u32)((s32)((r3 << 0xau) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((rd32(r28 + 0x148u) << 5u) & 0xc0000000u) >> 31) == 0u) {
                        a.r[0] = r28;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        r3 = tc_call(rd32(rd32(r28) + 0x70u), &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            a.r[0] = r28;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            r3 = tc_call(rd32(rd32(r28) + 0x28u), &a);
                            r6 = rd32(0x817fdf60u);
                            r0 = rd32(0x817fdf64u);
                            wr32(0x817fdf38u, rd32(0x817fdf5cu));
                            wr32(0x817fdf3cu, r6);
                            wr32(0x817fdf40u, r0);
                            a.r[0] = 0x817fdf38u;
                            a.r[1] = r3;
                            a.r[2] = 0x817fdf38u;
                            (void)tc_call(0x802343a4u, &a);
                            wrf32d(0x817fdf3cu, f29);
                            a.r[0] = 0x817fdf38u;
                            f1 = tc_callf(0x80234428u, &a);
                            r4 = tc_lastr4();
                            if (f1 < f30) {
                                if (r31 != rd32(r28 + 0xbcu)) {
                                    a.r[0] = r28;
                                    a.r[1] = r4;
                                    a.r[2] = 0u;
                                    a.r[3] = 0u;
                                    a.r[4] = 0u;
                                    a.f[0] = f1;
                                    a.f[1] = 0.0;
                                    a.f[2] = 0.0;
                                    a.f[3] = 0.0;
                                    r3 = tc_call(rd32(rd32(r28) + 0x28u), &a);
                                    r4 = tc_lastr4();
                                    f1 = (f64)rdf32(r3 + 4u);
                                    if (!((f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdf60u) - f1)) < f31)) continue;
                                }
                                a.r[0] = r28;
                                a.r[1] = param_5;
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                a.f[2] = 0.0;
                                a.f[3] = 0.0;
                                f1 = tc_callf(rd32(rd32(r28) + 0x14u), &a);
                                r4 = tc_lastr4();
                            }
                        }
                    }
                }
            }
            r19 = rd32(0x817fdf78u);
            while (r19 != 0u) {
                r3 = r19;
                r19 = rd32(r19);
                r21 = 0u;
                r20 = rd32(r3 + 8u);
                if ((u32)param_3 != 0u && (u32)((s32)((rd32(r20 + 0x9cu) << 7u) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = r20;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    r3 = tc_call(rd32(rd32(r20) + 0x28u), &a);
                    a.r[0] = param_1;
                    a.r[1] = r3;
                    a.r[2] = rd32(r20 + 0xbcu);
                    a.r[3] = 0x817fdf68u;
                    r3 = tc_call(0x8005b4a0u, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r21 = r3;
                }
                if ((u32)param_4 == 0u) {
                    a.r[0] = r20;
                    a.r[1] = param_5;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(rd32(rd32(r20) + 0x14u), &a);
                    r4 = tc_lastr4();
                } else if ((u32)((s32)((rd32(r20 + 0x9cu) << 0xau) & 0xc0000000u) >> 31) == 0u) {
                    a.r[0] = r20;
                    a.r[1] = param_5;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    f1 = tc_callf(rd32(rd32(r20) + 0x14u), &a);
                    r4 = tc_lastr4();
                }
                if (r21 != 0u) {
                    f4 = (f64)rdf32(0x817fdf74u);
                    f3 = (f64)rdf32(0x817fdf70u);
                    f2 = (f64)rdf32(0x817fdf6cu);
                    f1 = (f64)rdf32(0x817fdf68u);
                    wrf32d(0x803d2794u, f2);
                    wrf32d(0x803d2790u, f1);
                    wrf32d(0x803d2798u, f3);
                    wrf32d(0x803d279cu, f4);
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    f1 = tc_callf(0x8003d818u, &a);
                    r4 = tc_lastr4();
                }
            }
            a.r[0] = 0x817fdf78u;
            (void)tc_call(0x8007ae84u, &a);
        }
    }
    if ((u32)param_4 == 0u) {
        wr32(0x805710ecu, r30);
        a.r[0] = (((0u - r30) | r30) >> 0x1fu) & 1u;
        (void)tc_call(0x8003d790u, &a);
        wr32(0x803d26d4u, 0u);
        a.r[0] = rd32(0x803d26a8u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
        wr32(0x803d2754u, 0u);
        a.r[0] = rd32(0x803d2730u);
        a.r[1] = 0u;
        (void)tc_call(0x8003d7b0u, &a);
    }
    a.r[0] = 0x817fdf78u;
    a.r[1] = 0u;
    (void)tc_call(0x8007ae30u, &a);
    return;
}
