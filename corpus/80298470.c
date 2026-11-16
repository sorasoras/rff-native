#include "tc_rt.h"

void fn_80298470(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r17 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfc0u, 0u);
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
    r23 = 1u;
    r21 = 0u;
    r22 = rd32(0x8053f00cu);
    r20 = 0u;
    if ((u32)rd8(0x8053f1a0u) != 0u) {
        r28 = (u32)rd8(param_r3);
        r17 = param_r3 + 1u;
        r26 = 0u;
        while ((r26 & 0xffu) < r28) {
            wr8(0x817fdfb1u, rd8(r17));
            wr8(0x817fdfb0u, rd8(r17 + 1u));
            wr8(0x817fdfafu, rd8(r17 + 2u));
            wr8(0x817fdfaeu, rd8(r17 + 3u));
            wr8(0x817fdfadu, rd8(r17 + 4u));
            wr8(0x817fdfacu, rd8(r17 + 5u));
            r29 = (u32)rd8(r17 + 6u);
            r30 = (u32)rd8(r17 + 7u);
            r17 = r17 + 8u;
            if (param_r4 == 0u) {
                r21 = (u32)rd8(r17);
                r17 = r17 + 1u;
            }
            wr8(0x817fdfaau, rd8(r17));
            wr8(0x817fdfa9u, rd8(r17 + 1u));
            wr8(0x817fdfa8u, rd8(r17 + 2u));
            r0 = (u32)rd8(r17 + 4u);
            r3 = (u32)rd8(r17 + 3u);
            r17 = r17 + 5u;
            r0 = (r0 << 8u) & 0xffffff00u;
            r0 = r3 + r0;
            r19 = r0 & 0xffffu;
            if (param_r4 != 0u) {
                r20 = (u32)rd8(r17);
                r17 = r17 + 1u;
            }
            a.r[0] = 0x817fdfacu;
            r3 = tc_call(0x80297f8cu, &a);
            f1 = tc_lastf();
            do {
                if ((r3 & 0xffu) == 0u) {
                    r12 = rd32(0x8053f1a4u);
                    if (r12 != 0u) {
                        a.r[0] = 0x817fdfacu;
                        a.r[1] = 0x817fdfa8u;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                        if ((r3 & 0xffu) == 0u) break;
                    }
                    r25 = 0x8053f03cu;
                    r24 = 0u;
                    for (;;) {
                        if ((u32)rd8(r25 + 0x1au) != 0u) {
                            a.r[0] = r25 + 0xau;
                            a.r[1] = 0x817fdfacu;
                            a.r[2] = 6u;
                            r3 = tc_call(0x802592d8u, &a);
                            if (r3 == 0u) break;
                        }
                        r24 = r24 + 1u;
                        r25 = r25 + 0x1cu;
                        if (r24 >= 0xcu) {
                            r25 = 0u;
                            break;
                        }
                    }
                    if (r25 != 0u) {
                        if (rd32(r25 + 4u) == rd32(0x8053f018u)) {
                            r23 = 0u;
                        }
                    } else {
                        a.r[0] = 0x817fdfacu;
                        r3 = tc_call(0x80298068u, &a);
                        r25 = r3;
                        r23 = 1u;
                    }
                    if (r23 == 1u) {
                        wr8(r25 + 0x13u, (u8)r29);
                        r5 = (u32)rd8(0x817fdfa8u);
                        wr8(r25 + 0x14u, (u8)r30);
                        r24 = r25 + 8u;
                        r4 = (u32)rd8(0x817fdfa9u);
                        wr8(r25 + 0x15u, (u8)r21);
                        r3 = (u32)rd8(0x817fdfaau);
                        wr8(r25 + 0x10u, (u8)r5);
                        wr8(r25 + 0x11u, (u8)r4);
                        wr8(r25 + 0x12u, (u8)r3);
                        wr16(r25 + 8u, (u16)(r19 | 0x8000u));
                        if (param_r4 == 0u) {
                            wr8(r24 + 0xeu, 0x7fu);
                        } else {
                            wr8(r24 + 0xeu, (u8)r20);
                        }
                        r3 = tc_call(0x8028b0f4u, &a);
                        f1 = tc_lastf();
                        r4 = tc_lastr4();
                        wr32(r25, r3);
                        wr32(r25 + 4u, rd32(0x8053f018u));
                        c0eq = ((u32)rd8(0x8053f1a0u) & 4u) == 0u;
                        r0 = (u32)rd8(0x8053f197u) + 1u;
                        wr8(0x8053f197u, (u8)r0);
                        if (c0eq) {
                            r3 = (u32)rd8(0x8053f18eu);
                            if (r3 != 0u) {
                                r0 = r0 & 0xffu;
                                if (r0 == r3) {
                                    f1 = tc_callf(0x8029fbd4u, &a);
                                    r4 = tc_lastr4();
                                }
                            }
                        }
                        wr8(r25 + 0x18u, 0u);
                        if (r22 != 0u) {
                            a.r[0] = r24;
                            a.r[1] = r4;
                            a.r[2] = 0u;
                            a.f[0] = f1;
                            f1 = tc_callf(r22, &a);
                        }
                        r12 = rd32(0x8053f014u);
                        if (r12 != 0u) {
                            a.r[0] = r25 + 8u;
                            a.r[1] = 1u;
                            a.r[2] = 0u;
                            a.f[0] = f1;
                            (void)tc_call(r12, &a);
                        }
                    }
                }
            } while (0);
            r26 = r26 + 1u;
        }
    }
    return;
}
