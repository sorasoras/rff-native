#include "tc_rt.h"

void fn_8017c304(u32 param_r3, u32 param_r4)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
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
    if (param_r4 <= 8u) {
        a.r[0] = param_r3;
        a.r[1] = param_r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x37cu;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        r23 = r3;
        a.r[0] = 1u;
        (void)tc_call(0x80050b14u, &a);
        a.r[0] = r23;
        a.r[1] = 0u;
        (void)tc_call(0x800510bcu, &a);
        a.r[0] = param_r3;
        a.r[1] = r23;
        a.r[2] = param_r4;
        r3 = tc_call(0x8017c60cu, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(0x800545e4u, &a);
        r6 = r3;
        if (rd32(r3 + 0x10u) == 0u) {
            if (rd32(r3 + 0x20u) == 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r23;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r23;
                (void)tc_call(0x80094ec0u, &a);
            }
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r23;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
        r5 = 0u;
        r28 = 0u;
        if ((u32)rd8(0x80492b98u) != 0u) {
            r28 = 1u;
        }
        f29 = (f64)rdf32(0x80575030u);
        f30 = (f64)rdf32(0x8057502cu);
        r29 = ((param_r4 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
        f31 = (f64)rdf32(0x80575034u);
        r27 = 0u;
        do {
            r26 = (u32)rd8(r29 + (r27 & 0xffu) + 0x39cu);
            if (r26 != 0u) {
                if (r28 != 0u) {
                    r26 = ((r26 >> 2u) & 0x3fffffffu) + 1u;
                }
                r30 = param_r3 + 0x10000u;
                r25 = 0u;
                while (r25 < r26) {
                    r7 = 0u;
                    while (r7 == 0u) {
                        r24 = r5;
                        r3 = r5 * 0x14u;
                        ctr = 0x1eu - r5;
                        do {
                            if (r5 < 0x1eu) {
                                for (;;) {
                                    r6 = r30 + r3;
                                    if ((s32)(s16)rd16(r6 + 0x36au) < (s32)(s16)rd16(r6 + 0x368u)) {
                                        fl_ = 2u;
                                        break;
                                    }
                                    r24 = r24 + 1u;
                                    r3 = r3 + 0x14u;
                                    ctr = ctr - 1u;
                                    if (ctr == 0u) {
                                        fl_ = 1u;
                                        break;
                                    }
                                }
                                if (fl_ == 2u) {
                                    fl_ = 0u;
                                } else if (fl_ == 1u) {
                                    fl_ = 0u;
                                    break;
                                }
                                r4 = rd32(r6 + 0x35cu);
                                r23 = 0x14u;
                                wr32(0x817fdf94u, rd32(r6 + 0x358u));
                                r21 = param_r3 + 0x10000u + (r24 * 0x14u);
                                wr32(0x817fdf98u, r4);
                                wr32(0x817fdf9cu, rd32(r6 + 0x360u));
                                while ((s32)r23 >= 0) {
                                    r3 = rd32(0x817fdf98u);
                                    r0 = rd32(0x817fdf9cu);
                                    wr32(0x817fdf88u, rd32(0x817fdf94u));
                                    wr32(0x817fdf8cu, r3);
                                    wr32(0x817fdf90u, r0);
                                    f1 = tc_callf(0x80040a00u, &a);
                                    wrf32d(0x817fdf88u, ppc_fmadds((f64)rdf32(r21 + 0x364u), (f64)(f32)(f30 * (f64)(f32)(f1 - f29)), (f64)rdf32(0x817fdf88u)));
                                    f1 = tc_callf(0x80040a00u, &a);
                                    f0 = (f64)(f32)(f1 - f29);
                                    f1 = (f64)rdf32(0x817fdf88u);
                                    r3 = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                                    f2 = ppc_fmadds((f64)rdf32(r21 + 0x364u), (f64)(f32)(f30 * f0), (f64)rdf32(0x817fdf90u));
                                    wrf32d(0x817fdf90u, f2);
                                    a.f[0] = f1;
                                    a.f[1] = f2;
                                    a.r[0] = r3;
                                    a.r[1] = 0u;
                                    a.r[2] = 0u;
                                    f1 = tc_callf(0x80089fc8u, &a);
                                    if (f31 != f1) {
                                        f1 = (f64)rdf32(0x817fdf8cu);
                                        f0 = (f64)rdf32(0x817fdf90u);
                                        wrf32d(0x817fdf94u, (f64)rdf32(0x817fdf88u));
                                        wrf32d(0x817fdf98u, f1);
                                        wrf32d(0x817fdf9cu, f0);
                                        break;
                                    }
                                    r23 = r23 - 1u;
                                }
                                a.r[0] = param_r3;
                                a.r[1] = 0x817fdf94u;
                                a.r[2] = r27;
                                a.r[3] = r24;
                                (void)tc_call(0x8017c730u, &a);
                                r5 = r24 + 1u;
                                r4 = param_r3 + 0x10000u + (r24 * 0x14u);
                                wr16(r4 + 0x36au, (u16)((u32)(s16)rd16(r4 + 0x36au) + 1u));
                                if (r5 >= 0x1eu) {
                                    r5 = 0u;
                                }
                                r7 = 1u;
                            }
                        } while (0);
                        if (r7 == 0u) {
                            r5 = 0u;
                        }
                    }
                    r25 = r25 + 1u;
                }
            }
            r27 = r27 + 1u;
        } while (r27 < 4u);
    }
    return;
}
