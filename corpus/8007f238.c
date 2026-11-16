#include "tc_rt.h"

void fn_8007f238(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x805711e8u) == 0u) {
        a.r[0] = 0x817fdfc8u;
        a.r[1] = param_1;
        a.r[2] = param_3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0xb4u), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r3 = rd32(param_2 + 0x2cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                a.r[0] = param_1;
                a.r[1] = r3;
                (void)tc_call(0x8007f8d8u, &a);
            } else {
                a.r[0] = param_1;
                a.r[1] = param_2 + 8u;
                (void)tc_call(0x8007f8d8u, &a);
            }
            a.f[0] = (f64)rdf32(param_2 + 0x24u);
            r3 = tc_call(0x802558e4u, &a);
            f1 = tc_lastf();
            wr32(0x817fdfacu, r3);
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = 0x817fdfa8u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0xe8u), &a);
            f1 = tc_lastf();
            wr32(0x817fdfacu, r3 & 0xffffu);
            r29 = 0u;
            a.r[0] = param_1;
            a.r[1] = 0x817fdfacu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x16cu), &a);
            if (r3 != 0u) {
                if ((u32)((s32)((rd32(param_1 + 0x148u) << 7u) & 0xc0000000u) >> 31) != 0u) {
                    r29 = 1u;
                }
            } else {
                r29 = 1u;
            }
            if (r29 == 0u) {
                f1 = tc_callf(0x80040a00u, &a);
                f2 = (f64)rdf32(param_2 + 0xa4u);
                f0 = (f64)(f32)((f64)rdf32(0x8057288cu) * f1);
                if (!((f2 > f0) || (f2 == f0))) {
                    if ((rd32(param_2 + 0x30u) & 0x10000u) != 0u) {
                        if (rd32(param_2 + 0x34u) != 4u) {
                            a.r[0] = 1u;
                            a.r[1] = (ppc_mulhwu(0xcccccccdu, rd32(0x817fdfacu)) >> 3u) & 0x1fffffffu;
                            a.r[2] = param_3;
                            a.r[3] = rd32(0x804863d8u);
                            f1 = tc_callf(0x8020b414u, &a);
                            f2 = 0.0;
                        } else {
                            a.r[0] = 0u;
                            a.r[1] = (ppc_mulhwu(0xcccccccdu, rd32(0x817fdfacu)) >> 3u) & 0x1fffffffu;
                            a.r[2] = param_3;
                            a.r[3] = rd32(0x804863d8u);
                            f1 = tc_callf(0x8020b414u, &a);
                            f2 = 0.0;
                        }
                    }
                    if ((u32)((s32)((rd32(param_1 + 0x148u) << 1u) & 0xc0000000u) >> 31) != 0u) {
                        r3 = rd32(0x817fdfacu);
                        wr32(0x817fdfd8u, 0x43300000u);
                        f2 = rdf64(0x80572898u);
                        wr32(0x817fdfdcu, r3);
                        a.f[0] = (f64)(f32)((f64)rdf32(0x80572890u) * (f64)(f32)(rdf64(0x817fdfd8u) - f2));
                        r3 = tc_call(0x802558e4u, &a);
                        f1 = tc_lastf();
                        f2 = 0.0;
                        wr32(0x817fdfacu, r3);
                    }
                    r30 = 0u;
                    a.r[0] = param_1;
                    a.r[1] = rd32(0x817fdfacu);
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(param_1) + 0xe0u), &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (rd32(param_1 + 0x1b4u) != 0u || r3 != 0u) {
                        r31 = 0u;
                        if (rd32(0x817fdfacu) == 0u) {
                            r31 = 2u;
                        }
                    } else {
                        r31 = 1u;
                        r30 = 1u;
                        if ((rd32(param_2 + 0x30u) & 0x40000u) != 0u) {
                            a.r[0] = param_1;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.r[3] = 0u;
                            a.r[4] = 0u;
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                            r7 = rd32(r3 + 4u);
                            r0 = rd32(0x80471a18u);
                            wr32(0x817fdfbcu, rd32(r3));
                            r0 = r0 * 0x4150u;
                            wr32(0x817fdfc0u, r7);
                            f1 = (f64)rdf32(0x817fdfbcu);
                            wr32(0x817fdfc4u, rd32(r3 + 8u));
                            a.f[0] = f1;
                            a.f[1] = (f64)rdf32(0x817fdfc4u);
                            a.r[0] = r0 - 0x7fb92738u;
                            a.r[1] = 0u;
                            a.r[2] = 0u;
                            f1 = tc_callf(0x80089fc8u, &a);
                            wrf32d(0x817fdfc0u, f1);
                            a.r[0] = rd32(0x805706e8u);
                            r3 = tc_call(0x8007d150u, &a);
                            r6 = rd32(r3 + 0xcu);
                            a.r[0] = 0x817fdfbcu;
                            a.r[1] = (((4u - r6) | (r6 - 4u)) >> 0x1fu) & 1u;
                            a.r[2] = 0u;
                            (void)tc_call(0x80077cf0u, &a);
                        }
                    }
                    a.r[0] = param_1 + 0x1fcu;
                    a.r[1] = rd32(0x817fdfacu);
                    r3 = tc_call(0x80094a40u, &a);
                    r4 = rd32(param_2 + 0x30u);
                    r29 = r3;
                    if ((r4 & 0x80u) != 0u) {
                        r29 = 2u;
                    }
                    r25 = r4 & 0x20000u;
                    a.r[0] = param_2;
                    a.r[1] = r25;
                    r3 = tc_call(0x8007f0c4u, &a);
                    a.f[0] = (f64)rdf32(0x80572864u);
                    a.r[0] = r3;
                    a.r[1] = param_3;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    r3 = tc_call(0x800d783cu, &a);
                    r28 = r3;
                    a.r[0] = param_2;
                    a.r[1] = r25;
                    r3 = tc_call(0x8007f03cu, &a);
                    if (r28 != 0u && r3 != 0xffffffffu) {
                        a.r[1] = r3;
                        r3 = tc_call(0x8010b43cu, &a);
                        wr32(r28 + 0x20u, r3);
                        wr32(r28 + 0x24u, 0u);
                    }
                    r4 = rd32(0x817fdfa8u);
                    r5 = 0u;
                    c0lt = (s32)r4 < 0;
                    r3 = (ppc_mulhwu(0x51eb851fu, rd32(0x817fdfacu)) >> 5u) & 0x7ffffffu;
                    if ((s32)r4 <= 0) {
                        if (c0lt) {
                            r5 = 1u;
                        }
                    } else {
                        r5 = 2u;
                    }
                    r6 = rd32(0x817fdfccu);
                    r0 = rd32(0x817fdfd0u);
                    wr32(0x817fdfb0u, rd32(0x817fdfc8u));
                    wr32(0x817fdfb4u, r6);
                    wr32(0x817fdfb8u, r0);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfb0u;
                    a.r[2] = r5;
                    (void)tc_call(0x800d7d2cu, &a);
                    if (r29 == 2u) {
                        wr32(param_1 + 0x204u, 0u);
                    }
                    a.r[0] = param_1;
                    r3 = tc_call(0x8007f974u, &a);
                    f1 = tc_lastf();
                    a.r[0] = param_1;
                    a.r[1] = r3;
                    a.r[2] = (ppc_cntlzw(r29 - 2u) >> 5u) & 0x7ffffffu;
                    a.r[3] = rd32(0x817fdfacu);
                    a.r[4] = param_2;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    f1 = tc_callf(rd32(rd32(param_1) + 0x164u), &a);
                    r4 = tc_lastr4();
                    if (r30 != 0u) {
                        a.r[0] = param_1;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        (void)tc_call(rd32(rd32(param_1) + 0xb8u), &a);
                    }
                    if (r31 != 2u) {
                        wrf32d(param_1 + 0x308u, (f64)rdf32(0x80572894u));
                    }
                } else {
                    a.f[0] = (f64)rdf32(0x80572864u);
                    a.r[0] = 0x8bu;
                    a.r[1] = 0x817fdfc8u;
                    a.r[2] = 0x804b15c0u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                }
            }
        }
    }
    return;
}
