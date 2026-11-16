#include "tc_rt.h"

void fn_8003c64c(void)
{
    u32 c0eq = 0, c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = rd32(0x803be2acu);
    if ((r3 & 1u) != 0u) {
        if ((r3 & 2u) == 0u) {
            r3 = tc_call(0x80035df4u, &a);
            if (r3 == 0u) {
                r3 = tc_call(0x80035b50u, &a);
                if (r3 == 1u) {
                    r25 = 0u;
                    for (;;) {
                        a.r[0] = r25;
                        r3 = tc_call(0x80043c20u, &a);
                        r28 = r3;
                        a.r[0] = r25;
                        a.r[1] = 0x817fdfc8u;
                        r3 = tc_call(0x8027a174u, &a);
                        if (r3 == 0u && ((rd32(r28 + 4u) & 0x8000u) != 0u || (rd32(r28 + 0x14u) & 0x800u) != 0u)) break;
                        r25 = r25 + 1u;
                        if ((s32)r25 >= 4) {
                            return;
                        }
                    }
                    r3 = tc_call(0x80041144u, &a);
                    if (r3 != 0u) {
                        (void)tc_call(0x800410c0u, &a);
                    }
                    a.r[0] = 1u;
                    a.r[1] = 5u;
                    (void)tc_call(0x8004f3bcu, &a);
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = 0u;
                    (void)tc_call(0x80120d14u, &a);
                    a.r[0] = 4u;
                    (void)tc_call(0x8004f284u, &a);
                    r3 = tc_call(0x80042e74u, &a);
                    if (r3 != 0u) {
                        (void)tc_call(0x80042e90u, &a);
                    }
                    f1 = tc_callf(0x80043ab4u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802c2658u, &a);
                    a.r[0] = 0x803be220u;
                    (void)tc_call(0x8003c108u, &a);
                    (void)tc_call(0x8003c2e4u, &a);
                    wr32(0x803be2acu, rd32(0x803be2acu) | 2u);
                    a.r[0] = 1u;
                    (void)tc_call(0x80042fd4u, &a);
                }
            }
        } else {
            r30 = 0u;
            r29 = 0u;
            r28 = 0u;
            do {
                a.r[0] = r30;
                a.r[1] = 0x817fdfccu;
                r3 = tc_call(0x8027a174u, &a);
                r26 = r3;
                wr32(r28 - 0x7fc41d90u, rd32(0x817fdfccu));
                a.r[0] = r30;
                a.r[1] = 0x817fdfd0u;
                (void)tc_call(0x80043c58u, &a);
                c0lt = (s32)r26 < -1;
                do {
                    if (r26 == 0xffffffffu) {
                        wr32(r28 - 0x7fc41d9cu, 0u);
                    } else {
                        if (!c0lt) {
                            if ((s32)r26 >= 1) {
                                wr32(r28 - 0x7fc41d9cu, 0u);
                                break;
                            }
                        } else {
                            if ((s32)r26 < -3) {
                                wr32(r28 - 0x7fc41d9cu, 0u);
                                break;
                            }
                            if (r26 == 0xfffffffeu) {
                                r3 = rd32(0x817fdfd0u) + r29;
                                r26 = (u32)rd8(r3 + 0x5cu);
                                r25 = (u32)rd8(r3 + 0x5du);
                                a.r[0] = r3;
                                a.r[1] = 0u;
                                a.r[2] = 0x84u;
                                (void)tc_call(0x8000443cu, &a);
                                wr8(rd32(0x817fdfd0u) + r29 + 0x5cu, (u8)r26);
                                wr8(rd32(0x817fdfd0u) + r29 + 0x5du, (u8)r25);
                            }
                        }
                        r5 = rd32(0x817fdfd0u);
                        r3 = r28 - 0x7fc41de0u;
                        wr32(r3 + 0x44u, r5);
                        a.r[0] = rd32(r5 + 0x60u);
                        a.r[1] = r3 + 0x48u;
                        r3 = tc_call(0x8003bd7cu, &a);
                        r5 = r28 - 0x7fc41de0u;
                        r26 = r3;
                        r4 = rd32(r5 + 0x44u);
                        a.f[0] = (f64)rdf32(r4 + 0x6cu);
                        a.f[1] = (f64)rdf32(r4 + 0x70u);
                        a.r[0] = r5 + 0x48u;
                        r3 = tc_call(0x8003bcc4u, &a);
                        if ((r26 | r3) == 0u) {
                            r4 = r28 - 0x7fc41de0u;
                            r3 = rd32(r4 + 0x44u);
                            if ((s32)(s8)rd8(r3 + 0x5eu) > 0) {
                                wrf32d(r4 + 0x48u, (f64)rdf32(r3 + 0x20u));
                                wrf32d(r4 + 0x4cu, (f64)rdf32(rd32(r4 + 0x44u) + 0x24u));
                            }
                        }
                    }
                } while (0);
                r30 = r30 + 1u;
                r28 = r28 + 0x10u;
                r29 = r29 + 0x84u;
            } while ((s32)r30 < 4);
            a.r[0] = 0x803be264u;
            r3 = tc_call(0x802c2688u, &a);
            c0eq = r3 == 0u;
            if ((s32)r3 >= 0) {
                if (c0eq) {
                    (void)tc_call(0x8004f468u, &a);
                    a.r[0] = 0u;
                    a.r[1] = 5u;
                    (void)tc_call(0x8004f3bcu, &a);
                    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
                    (void)tc_call(0x801e6900u, &a);
                    a.r[0] = 0x804b9e80u;
                    a.r[1] = (u32)rd8(0x8049e122u);
                    (void)tc_call(0x80120d14u, &a);
                    r3 = tc_call(0x80041144u, &a);
                    if (r3 != 0u) {
                        (void)tc_call(0x800410ecu, &a);
                    }
                }
                a.r[0] = 0x803be220u;
                (void)tc_call(0x8003c170u, &a);
                (void)tc_call(0x80043b34u, &a);
                a.r[0] = 0u;
                a.r[1] = 4u;
                a.r[2] = 0u;
                (void)tc_call(0x8027b0acu, &a);
                a.r[0] = 0u;
                (void)tc_call(0x80042fd4u, &a);
                wr32(0x803be2acu, rd32(0x803be2acu) & 0xfffffffdu);
            }
        }
    }
    return;
}
