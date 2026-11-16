#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80333adc(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
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
    r24 = rd32(rd32(param_2) + 0x24u);
    r23 = (u32)rd8(r24 + 0x14cu);
    if ((s32)r23 >= 3) {
        r21 = (0u - (((r23 + 1u) << 3u) & 0xfffffff8u)) & 0xfffffff8u;
        wr32(r21 - 0x7e802070u, rd32(0x817fdf90u));
        r21 = r21 - 0x7e802068u;
        if (r21 != 0u) {
            wr32(0x817fdf9cu, r23 ^ 0x80000000u);
            r22 = r21 + 8u;
            f0 = (f64)rdf32(0x80577cf4u);
            r20 = 1u;
            wr32(0x817fdf98u, 0x43300000u);
            f30 = rdf64(0x80577d08u);
            f1 = (f64)rdf32(0x80577d14u);
            f2 = (f64)(f32)(rdf64(0x817fdf98u) - f30);
            wrf32d(r21, f0);
            f31 = (f64)rdf32(0x80577d18u);
            f29 = (f64)(f32)px_fdiv(f1, f2);
            wrf32d(r21 + 4u, (f64)rdf32(0x80577cf0u));
            while ((s32)r20 < (s32)r23) {
                wr32(0x817fdf98u, 0x43300000u);
                wr32(0x817fdf9cu, r20 ^ 0x80000000u);
                a.f[0] = (f64)(f32)(f31 * (f64)(f32)(f29 * (f64)(f32)(rdf64(0x817fdf98u) - f30)));
                a.r[0] = r22 + 4u;
                a.r[1] = r22;
                (void)tc_call(0x802f0038u, &a);
                r22 = r22 + 8u;
                r20 = r20 + 1u;
            }
            r0 = (r23 << 3u) & 0xfffffff8u;
            f0 = (f64)rdf32(0x80577cf0u);
            wrf32d(r21 + r0, (f64)rdf32(0x80577cf4u));
            wrf32d(r21 + r0 + 4u, f0);
            wr32(param_2 + 0xd4u, r21);
            r0 = (u32)rd8(r24 + 0x14eu) & 7u;
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                a.r[0] = 1u;
                (void)tc_call(0x80250e3cu, &a);
                if ((u32)param_5 != 0u) {
                    a.r[0] = 0x98u;
                    a.r[1] = 0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x80250b74u, &a);
                    r5 = param_4 & 1u;
                    r4 = 0u;
                    ctr = 2u;
                    do {
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        r4 = r4 + 3u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x803331b8u, &a);
                a.r[0] = 2u;
                (void)tc_call(0x80250e3cu, &a);
                if ((u32)param_5 != 0u) {
                    a.r[0] = 0x98u;
                    a.r[1] = 0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x80250b74u, &a);
                    r5 = param_4 & 1u;
                    r4 = 0u;
                    ctr = 2u;
                    do {
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        r4 = r4 + 3u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x803331b8u, &a);
            } else {
                if (!c0lt && (s32)r0 < 3) {
                    a.r[0] = 1u;
                    (void)tc_call(0x80250e3cu, &a);
                    if ((u32)param_5 != 0u) {
                        a.r[0] = 0x98u;
                        a.r[1] = 0u;
                        a.r[2] = 8u;
                        (void)tc_call(0x80250b74u, &a);
                        r5 = param_4 & 1u;
                        r4 = 0u;
                        ctr = 2u;
                        do {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            r4 = r4 + 3u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    (void)tc_call(0x8033356cu, &a);
                    a.r[0] = 2u;
                    (void)tc_call(0x80250e3cu, &a);
                    if ((u32)param_5 != 0u) {
                        a.r[0] = 0x98u;
                        a.r[1] = 0u;
                        a.r[2] = 8u;
                        (void)tc_call(0x80250b74u, &a);
                        r5 = param_4 & 1u;
                        r4 = 0u;
                        ctr = 2u;
                        do {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            if (r5 != 0u) {
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                                wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            }
                            r4 = r4 + 3u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    (void)tc_call(0x8033356cu, &a);
                    return;
                }
                a.r[0] = 1u;
                (void)tc_call(0x80250e3cu, &a);
                if ((u32)param_5 != 0u) {
                    a.r[0] = 0x98u;
                    a.r[1] = 0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x80250b74u, &a);
                    r5 = param_4 & 1u;
                    r4 = 0u;
                    ctr = 2u;
                    do {
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        r4 = r4 + 3u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x80332eb8u, &a);
                a.r[0] = 2u;
                (void)tc_call(0x80250e3cu, &a);
                if ((u32)param_5 != 0u) {
                    a.r[0] = 0x98u;
                    a.r[1] = 0u;
                    a.r[2] = 8u;
                    (void)tc_call(0x80250b74u, &a);
                    r5 = param_4 & 1u;
                    r4 = 0u;
                    ctr = 2u;
                    do {
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        if (r5 != 0u) {
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                            wrf32d(0xcc008000u, (f64)rdf32(0x80577cf0u));
                        }
                        r4 = r4 + 3u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                a.r[0] = param_1;
                a.r[1] = param_2;
                a.r[2] = param_3;
                a.r[3] = param_4;
                (void)tc_call(0x80332eb8u, &a);
            }
        }
    }
    return;
}
