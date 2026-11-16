#include "tc_rt.h"

void fn_8029073c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
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
    r5 = 0x80540000u;
    r27 = 0u;
    r26 = 0u;
    r25 = 0u;
    r24 = 0u;
    r23 = 0u;
    r22 = 0u;
    if ((u32)rd8(0x8053d641u) != 0u) {
        r30 = 0u;
        while ((r30 & 0xffu) < (u32)rd8(0x8053d641u)) {
            r29 = (r30 & 0xffu) * 0xbu;
            a.r[0] = r29 - 0x7fac2a0cu;
            a.r[1] = param_r3;
            r3 = tc_call(0x8028d2d8u, &a);
            f1 = tc_lastf();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if (r3 == 0u) {
                r24 = r29 - 0x7fac2a0cu;
                r25 = (u32)rd8(r24 + 0xau);
                break;
            }
            r30 = r30 + 1u;
        }
        if (r24 != 0u) {
            r28 = 0u;
            while ((r28 & 0xffu) < (u32)rd8(0x8053d6f8u)) {
                r29 = ((r28 << 3u) & 0x7f8u) + (r28 & 0xffu);
                a.r[0] = r29 - 0x7fac2907u;
                a.r[1] = param_r3;
                r3 = tc_call(0x8028d2d8u, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                if (r3 == 0u) {
                    r7 = rd32(0x80570de8u);
                    r8 = r29 - 0x7fac2908u;
                    r3 = (u32)rd8(r8 + 8u);
                    r9 = 1u;
                    r6 = (u32)rd8(r7 + 1u);
                    r4 = (u32)rd8(r8 + 7u);
                    while ((r9 & 0xffu) <= r6) {
                        r0 = ((r9 << 2u) & 0x3fcu) - (r9 & 0xffu);
                        r5 = r7 + r0;
                        r0 = (u32)rd8(r7 + r0);
                        if (r0 == r4) {
                            r0 = (u32)rd8(r5 + 1u);
                            if (r0 == 0xffu || r0 == r3) break;
                        }
                        r9 = r9 + 1u;
                    }
                    r5 = rd32(0x80570decu) + ((u32)rd8(r7 + (((r9 << 2u) & 0x3fcu) - (r9 & 0xffu)) + 2u) * 0x4au);
                    r3 = r5 + (((u32)rd8(r8 + 9u) << 3u) & 0xfffffff8u);
                    r4 = (u32)rd8(r3 + 2u);
                    r23 = r23 | (u32)rd8(r5);
                    if ((r25 & r4) != 0u) {
                        r3 = (u32)rd8(r3 + 6u);
                        if ((r25 & r3) == 0u) {
                            r5 = r5 + (((u32)rd8(r29 - 0x7fac28ffu) << 3u) & 0xfffffff8u);
                            r4 = (u32)rd8(r5 + 6u);
                            r22 = r22 | r4;
                            if (r4 > (r27 & 0xffu)) {
                                r27 = r3;
                                r26 = (u32)rd16(r5 + 8u);
                            }
                        }
                    } else {
                        r5 = r5 + (((u32)rd8(r29 - 0x7fac28ffu) << 3u) & 0xfffffff8u);
                        r3 = (u32)rd8(r5 + 2u);
                        r22 = r22 | r3;
                        if (r3 > (r27 & 0xffu)) {
                            r26 = (u32)rd16(r5 + 4u);
                            r27 = r4;
                        }
                    }
                }
                r28 = r28 + 1u;
            }
            if ((r27 & 3u) != 0u && (r23 & 0xffu & (r27 & 0xffu)) == 0u) {
                r27 = r23 & r22 & 3u;
                if (r27 == 0u) {
                    r26 = 0u;
                }
            }
            if (param_r4 == 0u && r26 != 0u) {
                r4 = 0u;
                ctr = 3u;
                do {
                    r22 = (r4 << 5u) & 0x1fe0u;
                    r3 = r22 - 0x7fac2a0cu;
                    if ((u32)rd8(r3 + 0xb6u) == 0u) {
                        wr8(r3 + 0xb6u, 1u);
                        r3 = r3 + 0xb0u;
                        a.r[0] = r3;
                        a.r[1] = param_r3;
                        (void)tc_call(0x8028d2a4u, &a);
                        r3 = r22 - 0x7fac2a0cu;
                        wr32(r3 + 0xa0u, 0x80290b34u);
                        r3 = r3 + 0x98u;
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        a.r[2] = r26;
                        (void)tc_call(0x8028d76cu, &a);
                        return;
                    }
                    r4 = r4 + 1u;
                    r0 = r4 & 0xffu;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                if (r0 == 3u) {
                    if ((u32)rd8(0x80571b80u) < 2u) {
                        return;
                    }
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x501u;
                    a.r[1] = 0x80392b44u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    (void)tc_call(0x8028cc54u, &a);
                    return;
                }
            }
            r0 = r27 & 0xffu;
            if (r0 != 0u) {
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        if (r0 == 4u) {
                            wr8(0x817fdfc4u, 0u);
                            a.r[0] = (u32)rd8(0x8053d689u);
                            a.r[1] = param_r3;
                            a.r[2] = 0x817fdfbcu;
                            (void)tc_call(0x80298becu, &a);
                        }
                    } else {
                        wr8(r24 + 9u, 2u);
                        a.r[0] = param_r3;
                        a.r[1] = 0x817fdfb8u;
                        (void)tc_call(0x80298dbcu, &a);
                        if ((u32)rd8(0x817fdfb8u) != 2u) {
                            a.r[0] = (u32)rd8(0x8053d689u);
                            a.r[1] = param_r3;
                            a.r[2] = rd32(0x80570df0u);
                            (void)tc_call(0x80298becu, &a);
                        }
                    }
                } else {
                    wr8(r24 + 9u, 1u);
                    a.r[0] = param_r3;
                    a.r[1] = 0x817fdfb9u;
                    (void)tc_call(0x80298dbcu, &a);
                    if ((u32)rd8(0x817fdfb9u) != 3u) {
                        a.r[0] = (u32)rd8(0x8053d689u);
                        a.r[1] = param_r3;
                        a.r[2] = rd32(0x80570df0u) + 0xau;
                        (void)tc_call(0x80298becu, &a);
                    }
                }
            }
        }
    }
    return;
}
