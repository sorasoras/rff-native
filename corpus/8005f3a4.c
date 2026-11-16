#include "tc_rt.h"

u32 fn_8005f3a4(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if (rd32(0x805706d0u) != 7u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8010u;
        (void)tc_call(0x8005df48u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x8110u;
        (void)tc_call(0x8005df40u, &a);
        f1 = (f64)rdf32(0x80572430u);
        f0 = (f64)rdf32(0x8057250cu);
        wrf32d(0x804865c8u, f1);
        wrf32d(0x804865ccu, f0);
        wrf32d(0x804865d0u, f1);
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
            wr32(0x80571170u, 0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffcfffu;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffcfffu;
            f1 = tc_callf(0x8005df48u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x803d29f8u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x80097c5cu, &a);
            if (r3 == 0u) {
                r3 = rd32(0x804863d8u);
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
                a.r[0] = rd32(0x805706e8u);
                r3 = tc_call(0x8007d150u, &a);
                r4 = rd32(r3 + 8u);
                wr32(0x80571170u, (((1u - r4) | (r4 - 1u)) >> 0x1fu) & 1u);
            }
        } else {
            r3 = 0u;
            if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
                r3 = 1u;
            }
            if (r3 != 0u) {
                (void)tc_call(0x80080be0u, &a);
                a.r[0] = 0x8046d8c8u;
                r3 = tc_call(0x8008bf24u, &a);
                f1 = tc_lastf();
                if (r3 != 0xffffffffu) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x803d29f8u;
                    a.r[1] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80097c14u, &a);
                }
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8005d1f4u, &a);
            if (r3 != 0u) {
                wr32((u32)param_1 + 0xcu, 7u);
                f0 = (f64)rdf32(0x805724d0u);
                r3 = rd32(0x804863d8u);
                wr32(r3 + 0x9cu, rd32(r3 + 0x9cu) | 0x40000000u);
                r3 = rd32(0x804863d8u);
                f0 = (f64)(f32)((f64)rdf32(r3 + 0x948u) + f0);
                wrf32d(r3 + 0x948u, f0);
            } else {
                r3 = tc_call(0x8005df50u, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.r[0] = (u32)param_1;
                    (void)tc_call(0x80060330u, &a);
                } else {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x803d29f8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x80097c5cu, &a);
                    if (r3 == 0u) {
                        r5 = rd32(0x803541bcu);
                        if (r5 == 0u) {
                            r4 = 0u;
                        } else {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 == 1u) {
                                r4 = rd32(0x80354144u);
                            } else {
                                if (r0 == 2u) {
                                    r4 = rd32(0x80354178u);
                                } else {
                                    r4 = 0u;
                                }
                            }
                        }
                        if (r5 == 0u) {
                            r0 = 0u;
                        } else {
                            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                            if (r0 == 1u) {
                                r0 = r4 & rd32(rd32(0x80354198u));
                            } else {
                                if (r0 == 2u) {
                                    r0 = r4 & rd32(rd32(0x803541a8u));
                                } else {
                                    r0 = 0u;
                                }
                            }
                        }
                        if (r0 != 0u) {
                            a.f[0] = (f64)rdf32(0x80572434u);
                            a.r[0] = 3u;
                            a.r[1] = 0xcu;
                            (void)tc_call(0x800523b0u, &a);
                            f2 = (f64)rdf32(0x80572430u);
                            f1 = (f64)rdf32(0x805724c4u);
                            f0 = (f64)rdf32(0x80572510u);
                            wr32((u32)param_1 + 0x10u, 0u);
                            wr32((u32)param_1 + 0xcu, 2u);
                            r3 = rd32(0x803d2a30u);
                            wrf32d(0x804865c8u, f2);
                            wrf32d(0x804865ccu, f1);
                            wrf32d(0x804865d0u, f0);
                            a.r[0] = r3;
                            a.r[1] = 1u;
                            (void)tc_call(0x80141d6cu, &a);
                        }
                    }
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005df40u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xffffffffu;
            (void)tc_call(0x8005df48u, &a);
        }
    }
    return 1u;
}
