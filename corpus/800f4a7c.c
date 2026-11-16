#include "tc_rt.h"

void fn_800f4a7c(u32 param_r3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    if (rd32(0x805711a0u) != 0u) {
        (void)tc_call(0x800f5e20u, &a);
    }
    r18 = (param_r3 << 2u) & 0xfffffffcu;
    if ((rd32(r18 - 0x7fca40d8u) + 0x10000u) != 0xffffu) {
        r3 = 0x804b8970u;
        r4 = 1u;
        r28 = 0u;
        r5 = 0u;
        ctr = 0x14u;
        do {
            r0 = rd32(r3);
            if (param_r3 == r0) {
                r4 = 0u;
                r28 = (r5 * 0xfcu) - 0x7fb47690u;
                break;
            }
            if (r0 == 0x40u) {
                r0 = r5 * 0xfcu;
                wr32(r0 - 0x7fb47690u, param_r3);
                r28 = r0 - 0x7fb47690u;
                break;
            }
            r3 = r3 + 0xfcu;
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        if (r4 != 0u) {
            a.r[0] = 0x8046ae40u;
            a.r[1] = param_r3;
            (void)tc_call(0x8013e884u, &a);
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
            a.r[1] = rd32(r18 - 0x7fca40d8u);
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r27 = r3;
            a.r[0] = r3;
            r3 = tc_call(0x80037914u, &a);
            r25 = rd32(r3 + 8u);
            r26 = r3;
            r24 = 0u;
            while (r24 < r25) {
                a.r[0] = r26;
                a.r[1] = r24;
                r3 = tc_call(0x80037988u, &a);
                r23 = r3;
                a.r[0] = r3;
                a.r[1] = 0u;
                (void)tc_call(0x800510bcu, &a);
                r0 = rd32(r23);
                if (r0 != 0u) {
                    if (r0 == 1u) {
                        r17 = rd32(r23 + 8u);
                        r18 = 0u;
                        while (r18 < rd32(r23 + 4u)) {
                            a.r[0] = rd32(r17);
                            r3 = tc_call(0x800f4e20u, &a);
                            r19 = r3;
                            if (r3 != 0u) {
                                a.r[0] = rd32(rd32(r17));
                                a.r[1] = r28;
                                f1 = tc_callf(0x800f5870u, &a);
                                a.r[0] = r19;
                                a.r[1] = tc_lastr4();
                                a.r[2] = 0u;
                                a.r[3] = 0u;
                                a.r[4] = 0u;
                                a.r[5] = 0u;
                                a.r[6] = 0u;
                                a.r[7] = 0u;
                                a.f[0] = f1;
                                r3 = tc_call(rd32(rd32(r19) + 0x68u), &a);
                                a.r[0] = r3;
                                a.r[1] = r28;
                                (void)tc_call(0x800f5870u, &a);
                            }
                            r17 = r17 + 4u;
                            r18 = r18 + 1u;
                        }
                    }
                } else {
                    r29 = rd32(r23 + 8u);
                    r22 = 0u;
                    while (r22 < rd32(r23 + 4u)) {
                        a.r[0] = rd32(r29);
                        a.r[1] = r28;
                        r3 = tc_call(0x800f58c8u, &a);
                        r30 = r3;
                        if (r3 != 0u && (s32)(s16)rd16(rd32(r29) + 0x20u) > 0) {
                            r18 = rd32(0x80338fbcu);
                            r19 = rd32(0x80338fc0u);
                            r20 = rd32(0x80338fc4u);
                            r21 = rd32(0x80338fc8u);
                            r12 = rd32(0x80338fccu);
                            r11 = rd32(0x80338fd0u);
                            r10 = rd32(0x80338fd4u);
                            r9 = rd32(0x80338fd8u);
                            r8 = rd32(0x80338fdcu);
                            r7 = rd32(0x80338fe0u);
                            r6 = rd32(0x80338fe4u);
                            r5 = rd32(0x80338fe8u);
                            r4 = rd32(0x80338fecu);
                            r0 = rd32(0x80338ff0u);
                            wr32(0x817fdf78u, rd32(0x80338fb8u));
                            wr32(0x817fdf7cu, r18);
                            wr32(0x817fdf80u, r19);
                            wr32(0x817fdf84u, r20);
                            wr32(0x817fdf88u, r21);
                            wr32(0x817fdf8cu, r12);
                            wr32(0x817fdf90u, r11);
                            wr32(0x817fdf94u, r10);
                            wr32(0x817fdf98u, r9);
                            wr32(0x817fdf9cu, r8);
                            wr32(0x817fdfa0u, r7);
                            wr32(0x817fdfa4u, r6);
                            wr32(0x817fdfa8u, r5);
                            wr32(0x817fdfacu, r4);
                            wr32(0x817fdfb0u, r0);
                            wr32(0x817fdf7cu, rd32(rd32(r29)));
                            wr8(0x817fdf80u, rd8(rd32(r29) + 4u));
                            wrf32d(0x817fdf84u, (f64)rdf32(rd32(r29) + 0x24u));
                            wrf32d(0x817fdf88u, (f64)rdf32(rd32(r29) + 0x28u));
                            wrf32d(0x817fdf8cu, (f64)rdf32(rd32(r29) + 0x2cu));
                            wr32(0x817fdf98u, (u32)(s16)rd16(rd32(r29) + 0x20u));
                            wr32(0x817fdf9cu, (u32)(s16)rd16(rd32(r29) + 0x22u));
                            a.r[0] = 0x817fdf78u;
                            r3 = tc_call(0x800f4e20u, &a);
                            r21 = r3;
                            a.r[0] = rd32(0x817fdf78u);
                            a.r[1] = r28;
                            (void)tc_call(0x800f5870u, &a);
                            if (r21 != 0u) {
                                wr32(r21 + 0x124u, r30);
                                wr32(r30 + 0x10cu, r21);
                            }
                        }
                        r29 = r29 + 4u;
                        r22 = r22 + 1u;
                    }
                }
                r24 = r24 + 1u;
            }
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = r27;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = r27;
                    (void)tc_call(0x80094ec0u, &a);
                }
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r27;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        r18 = 0u;
        r17 = 0x8048645cu;
        do {
            if ((u32)rd8(r28 + r18 + 4u) == 1u) {
                a.r[0] = r18;
                a.r[1] = 7u;
                a.r[2] = 0x3e7u;
                (void)tc_call(0x800eb44cu, &a);
                wr8(r17, (u8)((u32)rd8(r17) | 1u));
            }
            r18 = r18 + 1u;
            r17 = r17 + 1u;
        } while (r18 < 0xabu);
        (void)tc_call(0x8013e880u, &a);
    }
    return;
}
