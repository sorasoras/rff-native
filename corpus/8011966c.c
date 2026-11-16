#include "tc_rt.h"

u32 fn_8011966c(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf90u, 0u);
    r0 = rd32((u32)param_1 + 0x4cu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
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
        if (r3 == 0u) {
            wr32((u32)param_1 + 0x4cu, 3u);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            r3 = rd32((u32)param_1 + 0x48u);
            r4 = rd32(r3 + 0xda4u);
            if (r4 == 0u) {
                r0 = 0xffffffffu;
            } else {
                r0 = rd32(r4 + 4u);
            }
            if (r0 != 0xcu) {
                a.r[0] = r3;
                a.r[1] = rd32(r3 + 0xed0u);
                (void)tc_call(0x800b31dcu, &a);
            }
            r3 = 0u;
            wr32((u32)param_1 + 0x4cu, 0u);
            return r3;
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            r29 = rd32((u32)param_1 + 0x48u);
            wrf32d(r29 + 0x90u, (f64)rdf32(0x804890c8u));
            wrf32d(r29 + 0x94u, (f64)rdf32(0x804890ccu));
            wrf32d(r29 + 0x98u, (f64)rdf32(0x804890d0u));
            r6 = rd32(0x804863d8u);
            wrf32d(r6 + 0x90u, (f64)rdf32(0x804890c8u));
            wrf32d(r6 + 0x94u, (f64)rdf32(0x804890ccu));
            wrf32d(r6 + 0x98u, (f64)rdf32(0x804890d0u));
            a.r[0] = r29;
            (void)tc_call(0x800b037cu, &a);
            a.r[0] = r29;
            (void)tc_call(0x800b516cu, &a);
            a.r[0] = r29;
            a.r[1] = 9u;
            (void)tc_call(0x800b31dcu, &a);
            r0 = rd32((u32)param_1 + 0x20u);
            if (r0 != 0u) {
                if (r0 != 1u) {
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = 0x20u;
                a.r[1] = r29;
                (void)tc_call(0x80116698u, &a);
            } else {
                r4 = rd32(0x804863d8u);
                r3 = rd32(r4 + 0xa48u);
                if (r3 == 0u) {
                    r0 = 0x2e8u;
                } else {
                    r0 = rd32(r3 + 0x74u);
                }
                c0lt = (s32)r0 < 744;
                r0 = rd32(r4 + 0x5c0u);
                if (!c0lt) {
                    if (r0 != 0x285u) {
                        if (r0 != 0x286u) {
                            a.r[0] = 0x1du;
                            a.r[1] = r29;
                            (void)tc_call(0x80116698u, &a);
                        } else {
                            a.r[0] = 0x1eu;
                            a.r[1] = r29;
                            (void)tc_call(0x80116698u, &a);
                        }
                    } else {
                        a.r[0] = 0x1fu;
                        a.r[1] = r29;
                        (void)tc_call(0x80116698u, &a);
                    }
                } else {
                    a.r[0] = 0x1du;
                    a.r[1] = r29;
                    (void)tc_call(0x80116698u, &a);
                }
            }
            wr32((u32)param_1 + 0x4cu, 1u);
        } else if (!c0lt) {
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
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                r28 = rd32((u32)param_1 + 0x48u);
                a.r[0] = r28;
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
                r3 = tc_call(rd32(rd32(r28) + 0x28u), &a);
                f1 = tc_lastf();
                r29 = r3;
                r3 = rd32(0x804863d8u);
                a.r[0] = r3;
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
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdf78u, rd32(r3));
                wr32(0x817fdf7cu, r0);
                wr32(0x817fdf80u, rd32(r3 + 8u));
                a.r[0] = 0x817fdf78u;
                a.r[1] = r29;
                a.r[2] = 0x817fdf78u;
                (void)tc_call(0x802343a4u, &a);
                f31 = (f64)rdf32(0x805741c0u);
                r29 = 0u;
                f27 = (f64)rdf32(0x805741b4u);
                f29 = (f64)rdf32(0x805741acu);
                f30 = (f64)rdf32(0x805741bcu);
                f28 = (f64)rdf32(0x805741b8u);
                for (;;) {
                    if (r29 != 1u) {
                        f26 = (f64)rdf32(r28 + 0x14u);
                    } else {
                        a.f[0] = (f64)rdf32(0x805741b0u);
                        a.r[0] = 0x817fdf78u;
                        a.r[1] = 0x817fdf78u;
                        f1 = tc_callf(0x802343c8u, &a);
                        r3 = rd32(0x804863d8u);
                        a.r[0] = r3;
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
                        f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
                        f26 = f1;
                    }
                    a.f[0] = (f64)rdf32(0x817fdf78u);
                    a.f[1] = (f64)rdf32(0x817fdf80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)((f64)(f32)f1 - f26);
                    f0 = (f64)(f32)ppc_fabs(f1);
                    if (f0 < f27) break;
                    if (f0 > f28) {
                        if (!(f1 < f29)) {
                            f1 = -(f64)(f32)(f30 - f1);
                        } else {
                            f1 = (f64)(f32)(f30 + f1);
                        }
                    }
                    if (r29 != 1u) {
                        f1 = ppc_fmadds(f31, f1, f26);
                        a.r[0] = r28;
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
                        (void)tc_call(rd32(rd32(r28) + 0x24u), &a);
                    } else {
                        r3 = rd32(0x804863d8u);
                        f1 = ppc_fmadds(f31, f1, f26);
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
                        (void)tc_call(rd32(rd32(r3) + 0x24u), &a);
                    }
                    r29 = r29 + 1u;
                    if ((s32)r29 >= 2) {
                        r3 = 1u;
                        return r3;
                    }
                }
                wr32((u32)param_1 + 0x4cu, 2u);
            } else {
                wr32((u32)param_1 + 0x4cu, 3u);
            }
        }
    }
    r3 = 1u;
    return r3;
}
