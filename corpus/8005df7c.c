#include "tc_rt.h"

void fn_8005df7c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
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
    if (rd32(0x805706d0u) != 7u) {
        a.r[0] = param_r3;
        a.r[1] = 0x117u;
        (void)tc_call(0x8005df40u, &a);
        a.r[0] = param_r3;
        a.r[1] = 0x17u;
        (void)tc_call(0x8005df48u, &a);
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803d29f8u;
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        r3 = tc_call(0x80097c5cu, &a);
        if (r3 != 0u) {
            wr32(param_r3 + 0xcu, 4u);
        } else {
            a.r[0] = param_r3;
            r3 = tc_call(0x8005d1f4u, &a);
            if (r3 != 0u) {
                (void)tc_call(0x80072f78u, &a);
                wr32(param_r3 + 0xcu, 7u);
                f0 = (f64)rdf32(0x805724d0u);
                r3 = rd32(0x804863d8u);
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
                r3 = rd32(0x804863d8u);
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x948u) + f0);
                wrf32d(r3 + 0x948u, f0);
                a.r[0] = rd32(0x804863d8u);
                (void)tc_call(0x800c4394u, &a);
            } else {
                r3 = tc_call(0x8005df50u, &a);
                if (r3 != 0u) {
                    (void)tc_call(0x80072f78u, &a);
                    a.r[0] = rd32(0x804863d8u);
                    (void)tc_call(0x8006c388u, &a);
                    a.r[0] = rd32(0x804863d8u);
                    (void)tc_call(0x800c4394u, &a);
                    a.r[0] = param_r3;
                    (void)tc_call(0x80060330u, &a);
                } else {
                    if (rd32(0x80571168u) != 0u) {
                        a.r[0] = rd32(0x804863d8u);
                        (void)tc_call(0x8006c388u, &a);
                        a.f[0] = (f64)rdf32(0x80572434u);
                        a.r[0] = 1u;
                        a.r[1] = 0xcu;
                        (void)tc_call(0x800523b0u, &a);
                        r6 = rd32(0x804863d8u);
                        wr32(r6 + 0x9cu, rd32(r6 + 0x9cu) | 0x40000000u);
                        wr32(0x80571160u, 0u);
                        wr32(param_r3 + 0xcu, 0xbu);
                    } else {
                        if (rd32(0x80571160u) != 0u) {
                            a.r[0] = rd32(0x804863d8u);
                            (void)tc_call(0x8006c388u, &a);
                            (void)tc_call(0x80072f78u, &a);
                            r4 = (u32)rd8(0x805710c0u);
                            f1 = (f64)rdf32(0x80572434u);
                            r0 = 0xdu;
                            if (r4 >= 0xdu) {
                                r0 = r4;
                            }
                            a.f[0] = f1;
                            a.r[0] = 6u;
                            a.r[1] = r0 & 0xffu;
                            (void)tc_call(0x800523b0u, &a);
                            r6 = rd32(0x804863d8u);
                            wr32(r6 + 0x9cu, rd32(r6 + 0x9cu) | 0x40000000u);
                            wr32(param_r3 + 0xcu, 8u);
                            wr32(0x80571168u, 0u);
                        } else {
                            (void)tc_call(0x80076f00u, &a);
                            if (rd32(param_r3 + 0x18u) == 0u) {
                                r3 = 0u;
                                if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
                                    r3 = 1u;
                                }
                                if (r3 != 0u && rd32(0x805711acu) == 0u) {
                                    (void)tc_call(0x80080be0u, &a);
                                }
                            }
                            a.r[0] = param_r3;
                            r3 = tc_call(0x8005d53cu, &a);
                            f1 = tc_lastf();
                            r4 = tc_lastr4();
                            r0 = rd32(param_r3 + 0x18u);
                            wr32(param_r3 + 0xcu, r3);
                            if (r0 == 0u && r3 != 4u) {
                                f30 = (f64)rdf32(0x80572430u);
                                r28 = rd32(0x8046ad74u);
                                f31 = (f64)rdf32(0x805724d4u);
                                while (r28 != 0u) {
                                    r3 = r28;
                                    r28 = rd32(r28);
                                    r27 = rd32(r3 + 8u);
                                    if ((u32)((s32)rd32(r27 + 0x9cu) >> 31) != 0u && (u32)((s32)rd32(r27 + 0x148u) >> 31) == 0u) {
                                        a.r[0] = r27;
                                        a.r[1] = r4;
                                        a.r[2] = 0u;
                                        a.r[3] = 0u;
                                        a.r[4] = 0u;
                                        a.r[5] = 0u;
                                        a.r[6] = 0u;
                                        a.r[7] = 0u;
                                        a.f[0] = f1;
                                        a.f[1] = 0.0;
                                        a.f[2] = 0.0;
                                        a.f[3] = 0.0;
                                        a.f[4] = 0.0;
                                        a.f[5] = 0.0;
                                        a.f[6] = 0.0;
                                        a.f[7] = 0.0;
                                        r3 = tc_call(rd32(rd32(r27) + 0x140u), &a);
                                        f1 = tc_lastf();
                                        r4 = tc_lastr4();
                                        if (r3 == 0u && (u32)((s32)((rd32(r27 + 0x148u) << 9u) & 0xc0000000u) >> 31) == 0u) {
                                            r3 = rd32(0x804863d8u);
                                            a.r[0] = r3;
                                            a.r[1] = r4;
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.r[7] = 0u;
                                            a.f[0] = f1;
                                            a.f[1] = 0.0;
                                            a.f[2] = 0.0;
                                            a.f[3] = 0.0;
                                            a.f[4] = 0.0;
                                            a.f[5] = 0.0;
                                            a.f[6] = 0.0;
                                            a.f[7] = 0.0;
                                            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                                            f1 = tc_lastf();
                                            r29 = r3;
                                            a.r[0] = r27;
                                            a.r[1] = tc_lastr4();
                                            a.r[2] = 0u;
                                            a.r[3] = 0u;
                                            a.r[4] = 0u;
                                            a.r[5] = 0u;
                                            a.r[6] = 0u;
                                            a.r[7] = 0u;
                                            a.f[0] = f1;
                                            a.f[1] = 0.0;
                                            a.f[2] = 0.0;
                                            a.f[3] = 0.0;
                                            a.f[4] = 0.0;
                                            a.f[5] = 0.0;
                                            a.f[6] = 0.0;
                                            a.f[7] = 0.0;
                                            r3 = tc_call(rd32(rd32(r27) + 0x28u), &a);
                                            r0 = rd32(r3 + 4u);
                                            wr32(0x817fdfb8u, rd32(r3));
                                            wr32(0x817fdfbcu, r0);
                                            wr32(0x817fdfc0u, rd32(r3 + 8u));
                                            a.r[0] = 0x817fdfb8u;
                                            a.r[1] = r29;
                                            a.r[2] = 0x817fdfb8u;
                                            (void)tc_call(0x802343a4u, &a);
                                            wrf32d(0x817fdfbcu, f30);
                                            a.r[0] = 0x817fdfb8u;
                                            f1 = tc_callf(0x80234428u, &a);
                                            r4 = tc_lastr4();
                                            if ((f1 > f31) || (f1 == f31)) {
                                                a.r[0] = r27;
                                                a.r[1] = r4;
                                                a.r[2] = 0u;
                                                a.r[3] = 0u;
                                                a.r[4] = 0u;
                                                a.r[5] = 0u;
                                                a.r[6] = 0u;
                                                a.r[7] = 0u;
                                                a.f[0] = f1;
                                                a.f[1] = 0.0;
                                                a.f[2] = 0.0;
                                                a.f[3] = 0.0;
                                                a.f[4] = 0.0;
                                                a.f[5] = 0.0;
                                                a.f[6] = 0.0;
                                                a.f[7] = 0.0;
                                                r3 = tc_call(rd32(rd32(r27) + 0x70u), &a);
                                                f1 = tc_lastf();
                                                r4 = tc_lastr4();
                                                if (r3 == 0u) {
                                                    a.r[0] = r27;
                                                    a.r[1] = 1u;
                                                    a.r[2] = 0u;
                                                    a.r[3] = 0u;
                                                    a.r[4] = 0u;
                                                    a.r[5] = 0u;
                                                    a.r[6] = 0u;
                                                    a.r[7] = 0u;
                                                    a.f[0] = f1;
                                                    a.f[1] = 0.0;
                                                    a.f[2] = 0.0;
                                                    a.f[3] = 0.0;
                                                    a.f[4] = 0.0;
                                                    a.f[5] = 0.0;
                                                    a.f[6] = 0.0;
                                                    a.f[7] = 0.0;
                                                    f1 = tc_callf(rd32(rd32(r27) + 0x174u), &a);
                                                    r4 = tc_lastr4();
                                                }
                                            }
                                        }
                                    }
                                }
                                if (rd32(param_r3 + 0xcu) != 1u) {
                                    wr32(rd32(0x804863d8u) + 0x1648u, 1u);
                                }
                                a.r[0] = param_r3;
                                a.r[1] = 0xffffffffu;
                                (void)tc_call(0x8005df40u, &a);
                                a.r[0] = param_r3;
                                a.r[1] = 0xffffffffu;
                                (void)tc_call(0x8005df48u, &a);
                                wr32(rd32(0x804863d8u) + 0x1648u, 0u);
                            } else {
                                a.r[0] = param_r3;
                                a.r[1] = 0x4000u;
                                (void)tc_call(0x8005df40u, &a);
                                a.r[0] = param_r3;
                                a.r[1] = 0x4000u;
                                (void)tc_call(0x8005df48u, &a);
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
