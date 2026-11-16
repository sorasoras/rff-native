#include "tc_rt.h"

void fn_8023456c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r3, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0;
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
    r26 = param_r3;
    r29 = rd32(0x80571598u);
    for (;;) {
        r0 = (u32)(s8)rd8(r26);
        if (r0 == 0u) {
            return;
        }
        if (r0 != 0x2fu) {
            if (r0 == 0x2eu) {
                r0 = (u32)(s8)rd8(r26 + 1u);
                if (r0 != 0x2eu) {
                    if (r0 == 0x2fu) {
                        r26 = r26 + 2u;
                        continue;
                    }
                    if (r0 == 0u) break;
                } else {
                    r0 = (u32)(s8)rd8(r26 + 2u);
                    if (r0 == 0x2fu) {
                        r26 = r26 + 3u;
                        r29 = rd32(rd32(0x805715b0u) + (r29 * 0xcu) + 4u);
                        continue;
                    }
                    if (r0 == 0u) {
                        return;
                    }
                }
            }
            if (rd32(0x80570ac0u) != 0u) {
                r24 = r26;
                for (;;) {
                    r0 = (u32)(s8)rd8(r24);
                    if (r0 == 0u || r0 == 0x2fu) break;
                    r24 = r24 + 1u;
                }
            } else {
                r24 = r26;
                r5 = 0u;
                r4 = 0u;
                for (;;) {
                    r3 = (u32)rd8(r24);
                    r0 = (u32)(s8)r3;
                    if (r0 == 0u || r0 == 0x2fu) break;
                    r0 = (u32)(s8)r3;
                    if (r0 != 0x2eu) {
                        if (r0 == 0x20u) {
                            r4 = 1u;
                        }
                    } else {
                        if ((s32)(r24 - r26) > 8 || r5 == 1u) {
                            r4 = 1u;
                            break;
                        }
                        r27 = r24 + 1u;
                        r5 = 1u;
                    }
                    r24 = r24 + 1u;
                }
                if (r5 == 1u && (s32)(r24 - r27) > 3) {
                    r4 = 1u;
                }
                if (r4 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    a.r[0] = 0x80570ac8u;
                    a.r[1] = 0x1bbu;
                    a.r[2] = 0x80386e70u;
                    a.r[3] = param_r3;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    f1 = tc_callf(0x802285e4u, &a);
                    f2 = 0.0;
                    f3 = 0.0;
                    f4 = 0.0;
                    f5 = 0.0;
                    f6 = 0.0;
                    f7 = 0.0;
                    f8 = 0.0;
                }
            }
            r8 = rd32(0x805715b0u);
            r9 = r24 - r26;
            r6 = (u32)(s8)rd8(r24);
            r4 = rd32(0x805715acu);
            r12 = rd32(0x8038ed00u);
            r5 = rd32(r8 + (r29 * 0xcu) + 8u);
            r0 = (((0u - r6) | r6) >> 0x1fu) & 1u;
            r3 = r29 + 1u;
            for (;;) {
                if (r3 >= r5) {
                    return;
                }
                r6 = (r3 * 0xcu) + r8;
                r10 = rd32(r6);
                r7 = r10 & 0xff000000u;
                if (r7 != 0u || r0 != 1u) {
                    r10 = r10 & 0xffffffu;
                    r29 = r26;
                    r25 = r4 + r10;
                    for (;;) {
                        if ((u32)(s8)rd8(r25) == 0u) {
                            fl_ = 1u;
                            break;
                        }
                        r11 = (u32)rd8(r25);
                        r10 = 0u;
                        r25 = r25 + 1u;
                        r24 = (u32)(s8)r11;
                        if ((s32)r24 < 0 || (s32)r24 >= 256) {
                            r10 = 1u;
                        }
                        if (r10 == 0u) {
                            r24 = (u32)rd8(rd32(r12 + 0x10u) + r24);
                        }
                        r11 = (u32)rd8(r29);
                        r10 = 0u;
                        r29 = r29 + 1u;
                        r11 = (u32)(s8)r11;
                        if ((s32)r11 < 0 || (s32)r11 >= 256) {
                            r10 = 1u;
                        }
                        if (r10 == 0u) {
                            r11 = (u32)rd8(rd32(r12 + 0x10u) + r11);
                        }
                        if (r11 != r24) {
                            fl_ = 2u;
                            break;
                        }
                    }
                    do {
                        if (fl_ == 2u) {
                            fl_ = 0u;
                        } else if (fl_ == 1u) {
                            fl_ = 0u;
                            break;
                        }
                        r10 = 0u;
                        fl_ = 3u;
                        break;
                    } while (0);
                    if (fl_ == 3u) {
                        fl_ = 0u;
                    } else {
                        r10 = (u32)(s8)rd8(r29);
                        if (r10 == 0x2fu || r10 == 0u) {
                            r10 = 1u;
                        } else {
                            r10 = 0u;
                        }
                    }
                    if (r10 == 1u) break;
                }
                if (r7 == 0u) {
                    r3 = r3 + 1u;
                } else {
                    r3 = rd32(r6 + 8u);
                }
            }
            if (r0 == 0u) {
                return;
            }
            r29 = r3;
            r26 = r9 + r26 + 1u;
        } else {
            r29 = 0u;
            r26 = r26 + 1u;
        }
    }
    return;
}
