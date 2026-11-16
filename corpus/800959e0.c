#include "tc_rt.h"

void fn_800959e0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r20 = 0, r21 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
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
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr16(param_r3 + 0x100u, rd16(param_r3 + 0xbeu));
    a.r[0] = param_r3;
    r3 = tc_call(0x80095f58u, &a);
    if (r3 != 0u) {
        return;
    }
    f24 = (f64)rdf32(0x80572a38u);
    f25 = (f64)rdf32(0x80572a58u);
    f26 = (f64)rdf32(0x80572a5cu);
    r25 = 0u;
    f27 = (f64)rdf32(0x80572a60u);
    r26 = 0u;
    f28 = (f64)rdf32(0x80572a50u);
    f29 = (f64)rdf32(0x80572a6cu);
    f30 = (f64)rdf32(0x80572a68u);
    f31 = (f64)rdf32(0x80572a64u);
    while (r25 < (u32)rd8(param_r3 + 6u)) {
        wrf32d(0x817fdf20u, f24);
        wrf32d(0x817fdf24u, f24);
        wrf32d(0x817fdf28u, f24);
        wrf32d(0x817fdf2cu, f24);
        wr32(0x817fdf30u, 0u);
        wr8(0x817fdf34u, 0u);
        wr8(0x817fdf35u, 0u);
        a.r[0] = param_r3;
        a.r[1] = 0x817fdf20u;
        a.r[2] = r25;
        r3 = tc_call(0x80095ff0u, &a);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = (u32)(s8)rd8(param_r3 + (u32)rd8((((u32)rd8(param_r3 + 5u) << 4u) & 0xfffffff0u) + (r26 + param_r3) + 0x4cu) + 7u);
        a.r[1] = rd32(param_r3 + 0xf8u);
        a.r[2] = 0x817fdf20u;
        a.r[3] = param_r3;
        r3 = tc_call(0x800eb4f0u, &a);
        r24 = r3;
        if (r3 == 0u) {
            return;
        }
        a.r[0] = param_r3;
        a.r[1] = r3;
        f1 = tc_callf(0x80095f84u, &a);
        r4 = tc_lastr4();
        wrf32d(r24 + 0x16cu, (f64)(f32)((f64)rdf32(r24 + 0x16cu) + f25));
        if ((u32)((s32)rd32(r24 + 0x148u) >> 31) == 0u) {
            wr32(r24 + 0xccu, 1u);
            wrf32d(r24 + 0x250u, f26);
            wrf32d(r24 + 0xd0u, f26);
        } else {
            wr32(r24 + 0x258u, 0u);
        }
        wr32(r24 + 0x148u, rd32(r24 + 0x148u) | 0x2000000u);
        a.r[0] = r24;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(r24) + 0x28u), &a);
        r7 = rd32(r3);
        f1 = (f64)rdf32(0x80572a3cu);
        wr32(0x817fdf18u, rd32(r3 + 4u));
        wr32(0x817fdf14u, r7);
        f2 = (f64)rdf32(0x817fdf18u);
        wr32(0x817fdf1cu, rd32(r3 + 8u));
        f2 = ppc_fmadds((f64)rdf32(r24 + 0xb4u), f27, f2);
        f0 = (f64)(f32)((f64)rdf32(0x817fdf1cu) + f28);
        wrf32d(0x817fdf18u, f2);
        wrf32d(0x817fdf1cu, f0);
        a.f[0] = f1;
        a.r[0] = 0x74u;
        a.r[1] = 0x817fdf14u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        f1 = tc_callf(0x800d783cu, &a);
        r4 = rd32(param_r3 + 0xf8u) + 1u;
        r3 = ((u32)rd8(param_r3 + 5u) << 4u) & 0xfffffff0u;
        wr32(param_r3 + 0xf8u, r4);
        r3 = r3 + (r26 + param_r3);
        r3 = param_r3 + (u32)rd8(r3 + 0x4cu);
        r3 = (u32)(s8)rd8(r3 + 7u);
        wr8(r3 - 0x7fb79ba4u, (u8)((u32)rd8(r3 - 0x7fb79ba4u) | 1u));
        if ((u32)((s32)rd32(r24 + 0x148u) >> 31) == 0u) {
            r20 = rd32(0x804863d8u);
            a.r[0] = r24;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r24) + 0x28u), &a);
            f1 = tc_lastf();
            r21 = r3;
            a.r[0] = r20;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r20) + 0x28u), &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdf08u, rd32(r3));
            wr32(0x817fdf0cu, r0);
            wr32(0x817fdf10u, rd32(r3 + 8u));
            a.r[0] = 0x817fdf08u;
            a.r[1] = r21;
            a.r[2] = 0x817fdf08u;
            (void)tc_call(0x802343a4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf08u);
            a.f[1] = (f64)rdf32(0x817fdf10u);
            f1 = tc_callf(0x80262c68u, &a);
            if (f31 < (f64)(f32)f1) {
                a.f[0] = (f64)rdf32(0x817fdf08u);
                a.f[1] = (f64)rdf32(0x817fdf10u);
                f1 = tc_callf(0x80262c68u, &a);
                f23 = (f64)(f32)((f64)(f32)f1 - f30);
            } else {
                a.f[0] = (f64)rdf32(0x817fdf08u);
                a.f[1] = (f64)rdf32(0x817fdf10u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
                if ((f29 > f0) || (f29 == f0)) {
                    a.f[0] = (f64)rdf32(0x817fdf08u);
                    a.f[1] = (f64)rdf32(0x817fdf10u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f23 = (f64)(f32)(f30 + (f64)(f32)f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf08u);
                    a.f[1] = (f64)rdf32(0x817fdf10u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f23 = (f64)(f32)f1;
                }
            }
            a.f[0] = (f64)rdf32(r24 + 0x78u);
            a.f[1] = (f64)rdf32(r24 + 0x80u);
            f1 = tc_callf(0x80262c68u, &a);
            if (f31 < (f64)(f32)f1) {
                a.f[0] = (f64)rdf32(r24 + 0x78u);
                a.f[1] = (f64)rdf32(r24 + 0x80u);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)((f64)(f32)f1 - f30);
            } else {
                a.f[0] = (f64)rdf32(r24 + 0x78u);
                a.f[1] = (f64)rdf32(r24 + 0x80u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
                if ((f29 > f0) || (f29 == f0)) {
                    a.f[0] = (f64)rdf32(r24 + 0x78u);
                    a.f[1] = (f64)rdf32(r24 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)(f30 + (f64)(f32)f1);
                } else {
                    a.f[0] = (f64)rdf32(r24 + 0x78u);
                    a.f[1] = (f64)rdf32(r24 + 0x80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                }
            }
            if (f31 < f23) {
                f0 = (f64)(f32)(f23 - f30);
            } else {
                if ((f29 > f23) || (f29 == f23)) {
                    f0 = (f64)(f32)(f30 + f23);
                } else {
                    f0 = f23;
                }
            }
            f0 = (f64)(f32)(f0 - f1);
            if (f0 > f31) {
                f0 = (f64)(f32)(f0 - f30);
            } else {
                if (f0 < f29) {
                    f0 = (f64)(f32)(f0 + f30);
                }
            }
            if (f31 < f0) {
                if (f31 < f23) {
                    f23 = (f64)(f32)(f23 - f30);
                } else {
                    if ((f29 > f23) || (f29 == f23)) {
                        f23 = (f64)(f32)(f30 + f23);
                    }
                }
                f0 = (f64)(f32)(f23 - f1);
                if (f0 > f31) {
                    f0 = (f64)(f32)(f0 - f30);
                } else {
                    if (f0 < f29) {
                        f0 = (f64)(f32)(f0 + f30);
                    }
                }
                f1 = (f64)(f32)(f0 - f30);
            } else {
                if (f31 < f23) {
                    f0 = (f64)(f32)(f23 - f30);
                } else {
                    if ((f29 > f23) || (f29 == f23)) {
                        f0 = (f64)(f32)(f30 + f23);
                    } else {
                        f0 = f23;
                    }
                }
                f0 = (f64)(f32)(f0 - f1);
                if (f0 > f31) {
                    f0 = (f64)(f32)(f0 - f30);
                } else {
                    if (f0 < f29) {
                        f0 = (f64)(f32)(f0 + f30);
                    }
                }
                if ((f29 > f0) || (f29 == f0)) {
                    if (f31 < f23) {
                        f23 = (f64)(f32)(f23 - f30);
                    } else {
                        if ((f29 > f23) || (f29 == f23)) {
                            f23 = (f64)(f32)(f30 + f23);
                        }
                    }
                    f0 = (f64)(f32)(f23 - f1);
                    if (f0 > f31) {
                        f0 = (f64)(f32)(f0 - f30);
                    } else {
                        if (f0 < f29) {
                            f0 = (f64)(f32)(f0 + f30);
                        }
                    }
                    f1 = (f64)(f32)(f30 + f0);
                } else {
                    if (f31 < f23) {
                        f23 = (f64)(f32)(f23 - f30);
                    } else {
                        if ((f29 > f23) || (f29 == f23)) {
                            f23 = (f64)(f32)(f30 + f23);
                        }
                    }
                    f1 = (f64)(f32)(f23 - f1);
                    if (f1 > f31) {
                        f1 = (f64)(f32)(f1 - f30);
                    } else {
                        if (f1 < f29) {
                            f1 = (f64)(f32)(f1 + f30);
                        }
                    }
                }
            }
            a.r[0] = r24;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(r24) + 0x24u), &a);
        }
        r26 = r26 + 4u;
        r25 = r25 + 1u;
        wr32(0x805711b8u, rd32(0x805711b8u) + 1u);
    }
    return;
}
