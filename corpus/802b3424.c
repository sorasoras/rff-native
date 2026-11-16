#include "tc_rt.h"

void fn_802b3424(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r4, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
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
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r31 = 0x80542844u;
    r3 = 0u;
    while ((r3 & 0xffffu) < (u32)rd16(0x80542842u)) {
        if (rd32(r31) == param_r3) {
            r30 = r31 + 0xcu;
            if ((u32)rd8(0x80545c50u) >= 3u) {
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                a.f[3] = f4;
                a.f[4] = f5;
                a.f[5] = f6;
                a.f[6] = f7;
                a.f[7] = f8;
                a.r[0] = 0xa0002u;
                a.r[1] = 0x80397990u;
                a.r[2] = param_r4;
                a.r[3] = param_r3;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                f1 = tc_callf(0x8028cc84u, &a);
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
            }
            r4 = (u32)rd16(r31 + 8u);
            r3 = 0u;
            while ((r3 & 0xffffu) < r4) {
                if ((u32)rd16(r30 + 8u) == param_r4) {
                    r0 = rd32(r30);
                    r4 = rd32(r30 + 4u);
                    if (r0 != 0u) {
                        r7 = 0u;
                        while ((r7 & 0xffffu) < (u32)rd16(r31 + 8u)) {
                            r6 = r31 + ((r7 & 0xffffu) * 0xcu);
                            r5 = rd32(r6 + 0x10u);
                            if (r5 > r4) {
                                r5 = r5 - r0;
                                wr32(r6 + 0x10u, r5);
                            }
                            r7 = r7 + 1u;
                        }
                    }
                    wr16(r31 + 8u, (u16)((u32)rd16(r31 + 8u) - 1u));
                    while ((r3 & 0xffffu) < (u32)rd16(r31 + 8u)) {
                        r3 = r3 + 1u;
                        r5 = rd32(r30 + 0x10u);
                        wr32(r30, rd32(r30 + 0xcu));
                        wr32(r30 + 4u, r5);
                        wr32(r30 + 8u, rd32(r30 + 0x14u));
                        r30 = r30 + 0xcu;
                    }
                    if (r0 != 0u) {
                        r6 = r4 + r0;
                        r7 = 0u;
                        r8 = (rd32(r31 + 4u) - (r6 - (r31 + 0x138u))) & 0xffffu;
                        if (r8 != 0u) {
                            r3 = r8 + 0xfff8u;
                            if (r8 > 8u) {
                                r5 = r3 & 0xffffu;
                                ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                                if (r5 > 0u) {
                                    do {
                                        r3 = (u32)rd8(r6);
                                        r5 = r4 + r0;
                                        r7 = r7 + 8u;
                                        r6 = r6 + 8u;
                                        wr8(r4, (u8)r3);
                                        wr8(r4 + 1u, rd8(r5 + 1u));
                                        wr8(r4 + 2u, rd8(r5 + 2u));
                                        wr8(r4 + 3u, rd8(r5 + 3u));
                                        wr8(r4 + 4u, rd8(r5 + 4u));
                                        wr8(r4 + 5u, rd8(r5 + 5u));
                                        wr8(r4 + 6u, rd8(r5 + 6u));
                                        wr8(r4 + 7u, rd8(r5 + 7u));
                                        r4 = r4 + 8u;
                                        ctr = ctr - 1u;
                                    } while (ctr != 0u);
                                }
                            }
                            r6 = r7 & 0xffffu;
                            r5 = r0 + r4;
                            ctr = r8 - r6;
                            if (r6 < r8) {
                                do {
                                    r3 = (u32)rd8(r5);
                                    r7 = r7 + 1u;
                                    r5 = r5 + 1u;
                                    wr8(r4, (u8)r3);
                                    r4 = r4 + 1u;
                                    ctr = ctr - 1u;
                                } while (ctr != 0u);
                            }
                        }
                        r0 = rd32(r31 + 4u) - r0;
                        wr32(r31 + 4u, r0);
                    }
                    return;
                }
                r3 = r3 + 1u;
                r30 = r30 + 0xcu;
            }
        }
        r3 = r3 + 1u;
        r31 = r31 + 0x298u;
    }
    return;
}
