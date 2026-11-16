#include "tc_rt.h"

u32 fn_80140c8c(u32 param_1, u32 param_2, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r29 = 0;
    u32 r31 = 0;
    u64 t1 = 0, t2 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = param_1;
    wr32(0x817fdfdcu, 0xffffffffu);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0x20u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_2;
    a.r[1] = 0x6bfu;
    a.r[2] = 1u;
    a.r[3] = 0x817fdfd8u;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x80050e70u, &a);
    if (r3 != 0u) {
        r4 = r3;
        if ((u32)rd16(r3) == 0xfefeu) {
            r29 = (u32)rd16(r3 + 2u);
            if (param_1 < r29) {
                r31 = rd32(r3 + 4u);
                if (rd32(param_2 + 0x10u) == 0u) {
                    if (rd32(param_2 + 0x20u) == 0u) {
                        a.r[0] = rd32(param_2);
                        a.r[1] = r4;
                        a.r[2] = rd32(param_2 + 0xcu);
                        a.r[3] = param_2 + 0x18u;
                        f1 = tc_callf(0x80040e98u, &a);
                    } else {
                        a.r[0] = param_2 + 0x24u;
                        a.r[1] = r4;
                        f1 = tc_callf(0x80094ec0u, &a);
                    }
                } else {
                    a.r[0] = rd32(param_2);
                    a.r[1] = r4;
                    a.r[2] = rd32(param_2 + 0xcu);
                    a.r[3] = param_2 + 0x18u;
                    f1 = tc_callf(0x80040e98u, &a);
                }
                wr32(0x817fdfc8u, 0u);
                wr32(0x817fdfccu, 0xffffffffu);
                wr32(0x817fdfd0u, 8u);
                wr32(0x817fdfd4u, (((r29 << 3u) & 0xfffffff8u) + 0x1fu) & 0xffffffe0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_2;
                a.r[1] = 0x6bfu;
                a.r[2] = 1u;
                a.r[3] = 0x817fdfc8u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80050e70u, &a);
                r4 = r3;
                do {
                    if (param_1 > 0u) {
                        r0 = (param_1 >> 3u) & 0x1fffffffu;
                        ctr = r0;
                        if (r0 != 0u) {
                            do {
                                r3 = r3 + 0x40u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                            r28 = param_1 & 7u;
                            if (r28 == 0u) break;
                        }
                        ctr = r28;
                        do {
                            r3 = r3 + 8u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                } while (0);
                r3 = rd32(r3);
                r28 = r31 + r3;
                t1 = (u64)((r31 + r3) < r31);
                if (rd32(param_2 + 0x10u) == 0u) {
                    if (rd32(param_2 + 0x20u) == 0u) {
                        a.r[0] = rd32(param_2);
                        a.r[1] = r4;
                        a.r[2] = rd32(param_2 + 0xcu);
                        a.r[3] = param_2 + 0x18u;
                        f1 = tc_callf(0x80040e98u, &a);
                    } else {
                        a.r[0] = param_2 + 0x24u;
                        a.r[1] = r4;
                        f1 = tc_callf(0x80094ec0u, &a);
                    }
                } else {
                    a.r[0] = rd32(param_2);
                    a.r[1] = r4;
                    a.r[2] = rd32(param_2 + 0xcu);
                    a.r[3] = param_2 + 0x18u;
                    f1 = tc_callf(0x80040e98u, &a);
                }
                r6 = r28 + 3u;
                t2 = (u64)(u32)t1 + (u64)((r28 + 3u) < r28);
                r4 = ((u32)t2 & 0xfffffffcu) | (r6 & 3u);
                wr32(0x817fdfdcu, 0xffffffffu);
                wr32(0x817fdfd8u, 0u);
                wr32(0x817fdfe4u, 0x20u);
                wr32(0x817fdfe0u, ((u32)((u64)((((r6 << 0x1eu) | (r6 >> 2u)) & 0x3fffffffu) | (((u32)t2 << 0x1eu) & 0xc0000000u)) + (u64)(((s32)r4 < 0) && ((r4 & 3u) != 0u))) << 2u) & 0xfffffffcu);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_2;
                a.r[1] = 0x6bfu;
                a.r[2] = 1u;
                a.r[3] = 0x817fdfd8u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80050e70u, &a);
                r4 = r3;
                wr32(0x804beb30u, r28 + 8u);
                r28 = r28 + rd32(r3 + 4u);
                wr32(0x804beb2cu, (u32)rd16(r3 + 2u));
                if (rd32(param_2 + 0x10u) == 0u) {
                    if (rd32(param_2 + 0x20u) == 0u) {
                        a.r[0] = rd32(param_2);
                        a.r[1] = r4;
                        a.r[2] = rd32(param_2 + 0xcu);
                        a.r[3] = param_2 + 0x18u;
                        (void)tc_call(0x80040e98u, &a);
                    } else {
                        a.r[0] = param_2 + 0x24u;
                        a.r[1] = r4;
                        (void)tc_call(0x80094ec0u, &a);
                    }
                } else {
                    a.r[0] = rd32(param_2);
                    a.r[1] = r4;
                    a.r[2] = rd32(param_2 + 0xcu);
                    a.r[3] = param_2 + 0x18u;
                    (void)tc_call(0x80040e98u, &a);
                }
                r31 = (rd32(0x804beb2cu) << 5u) & 0xffffffe0u;
                if (r31 != 0u) {
                    if (rd32(param_2 + 0x10u) == 0u) {
                        if (rd32(param_2 + 0x20u) == 0u) {
                            a.r[0] = rd32(param_2);
                            a.r[1] = r31;
                            a.r[2] = rd32(param_2 + 0xcu);
                            a.r[3] = param_2 + 0x18u;
                            r3 = tc_call(0x80040cd8u, &a);
                        } else {
                            a.r[0] = param_2 + 0x24u;
                            a.r[1] = 0x20u;
                            a.r[2] = r31;
                            r3 = tc_call(0x80094e80u, &a);
                        }
                    } else {
                        a.r[0] = rd32(param_2);
                        a.r[1] = r31;
                        a.r[2] = rd32(param_2 + 0xcu);
                        a.r[3] = param_2 + 0x18u;
                        r3 = tc_call(0x80040db8u, &a);
                    }
                } else {
                    r3 = 0u;
                }
                wr32(0x804beb34u, r3);
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = r31;
                f1 = tc_callf(0x8000443cu, &a);
                r3 = rd32(0x804beb30u);
                r4 = (rd32(0x804beb2cu) << 3u) & 0xfffffff8u;
                wr32(0x817fdfb8u, 0u);
                wr32(0x817fdfbcu, 0xffffffffu);
                wr32(0x817fdfc0u, (r3 + 3u) & 0xfffffffcu);
                wr32(0x817fdfc4u, (r4 + 0x1fu) & 0xffffffe0u);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_2;
                a.r[1] = 0x6bfu;
                a.r[2] = 1u;
                a.r[3] = 0x817fdfb8u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x80050e70u, &a);
                r4 = r3;
                r9 = 0u;
                r8 = 0u;
                r10 = 0u;
                r7 = 0u;
                while (r10 < rd32(0x804beb2cu)) {
                    r6 = rd32(0x804beb34u);
                    wr32(r6 + r7, r10);
                    r6 = r6 + r7;
                    r7 = r7 + 0x20u;
                    r10 = r10 + 1u;
                    wr32(r6 + 8u, r28 + r9);
                    wr32(r6 + 0x14u, rd32(r3 + 4u));
                    wr32(r6 + 0x10u, 0u);
                    r0 = rd32(r3 + 4u);
                    r3 = r3 + 8u;
                    ca = (r9 + r0) < r9;
                    r9 = r9 + r0;
                    r8 = (u32)((u64)r8 + (u64)ca);
                }
                if (rd32(param_2 + 0x10u) == 0u) {
                    if (rd32(param_2 + 0x20u) == 0u) {
                        a.r[0] = rd32(param_2);
                        a.r[1] = r4;
                        a.r[2] = rd32(param_2 + 0xcu);
                        a.r[3] = param_2 + 0x18u;
                        (void)tc_call(0x80040e98u, &a);
                    } else {
                        a.r[0] = param_2 + 0x24u;
                        a.r[1] = r4;
                        (void)tc_call(0x80094ec0u, &a);
                    }
                } else {
                    a.r[0] = rd32(param_2);
                    a.r[1] = r4;
                    a.r[2] = rd32(param_2 + 0xcu);
                    a.r[3] = param_2 + 0x18u;
                    (void)tc_call(0x80040e98u, &a);
                }
                wr32(0x805712c4u, param_2);
                r3 = 1u;
            } else {
                r3 = 0u;
            }
        } else {
            r3 = 0u;
        }
    } else {
        r3 = 0u;
    }
    return r3;
}
