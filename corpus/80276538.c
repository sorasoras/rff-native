#include "tc_rt.h"

void fn_80276538(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r20 = 0, r21 = 0, r23 = 0, r26 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
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
    r23 = param_3;
    wr32(0x817fdfc4u, 0xffffffffu);
    r21 = param_1;
    wr32(0x817fdfc0u, 0xffffffffu);
    wr32(0x817fdfbcu, 1u);
    wr32(0x817fdfb8u, 1u);
    r29 = 0u;
    r28 = 0u;
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = (((0u - param_1) | param_1) >> 0x1fu) & 1u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfc0u;
    a.r[3] = 0x817fdfbcu;
    a.r[4] = (((0u - param_3) | param_3) >> 0x1fu) & 1u;
    a.r[5] = param_4;
    a.r[6] = 0x817fdfc4u;
    a.r[7] = 0x817fdfb8u;
    r3 = tc_call(0x802762ecu, &a);
    if (r3 == 0u && rd32(0x80570da8u) != 0u) {
        for (;;) {
            r26 = (u32)rd8(r23);
            if (r26 == 0u) {
                fl_ = 1u;
                break;
            }
            r3 = rd32(0x817fdfc4u);
            if ((s32)r29 >= (s32)r3 && rd32(0x817fdfb8u) != 0u) {
                fl_ = 1u;
                break;
            }
            if ((s32)r28 >= (s32)rd32(0x817fdfc0u) && rd32(0x817fdfbcu) != 0u) {
                fl_ = 1u;
                break;
            }
            if (param_5 > 0) {
                r4 = 0u;
                if ((s32)(r3 - r29) > 1 || rd32(0x817fdfb8u) == 0u) {
                    r4 = 1u;
                }
                if (r4 == 0u) {
                    r4 = 0u;
                } else {
                    r4 = (u32)rd8(r23 + 1u);
                }
                a.r[0] = r26;
                a.r[1] = r4;
                r3 = tc_call(0x802763e4u, &a);
                r20 = r3;
                if ((s32)r3 > 0) {
                    a.r[0] = r21;
                    a.r[1] = 2u;
                    a.r[2] = (u32)param_5;
                    a.r[3] = rd32(0x817fdfbcu);
                    r3 = tc_call(0x80276418u, &a);
                    if ((s32)(rd32(0x817fdfc0u) - r28) >= (s32)r3 || rd32(0x817fdfbcu) == 0u) {
                        r23 = r23 + r20;
                        r29 = r29 + r20;
                        r28 = r28 + r3;
                        if (rd32(0x817fdfbcu) == 0u) continue;
                        r21 = r21 + ((r3 << 1u) & 0xfffffffeu);
                        continue;
                    }
                    fl_ = 1u;
                    break;
                }
            }
            if ((r26 < 0x81u || r26 > 0x9fu) && (r26 < 0xe0u || r26 > 0xfcu)) {
                if (r26 > 0x80u) {
                    if (r26 != 0xa0u) {
                        if (r26 >= 0xe0u) {
                            if (r26 < 0xfdu) {
                                fl_ = 2u;
                                break;
                            }
                            r26 = (r26 + 0xf7f4u) & 0xffffu;
                        } else {
                            r26 = (r26 + 0xfec0u) & 0xffffu;
                        }
                    } else {
                        r26 = 0xf8f0u;
                    }
                }
            } else {
                if ((s32)(rd32(0x817fdfc4u) - r29) < 2 && rd32(0x817fdfb8u) != 0u) {
                    fl_ = 1u;
                    break;
                }
                r23 = r23 + 1u;
                r4 = (u32)rd8(r23);
                if ((r4 < 0x40u || r4 > 0x7eu) && (r4 < 0x80u || r4 > 0xfcu)) {
                    fl_ = 1u;
                    break;
                }
                if (r26 >= 0xf0u) {
                    if (r26 < 0xfau) {
                        r3 = (r26 - 0xf0u) * 0xbcu;
                        r0 = r4 - 0x41u;
                        if (r4 < 0x7fu) {
                            r0 = r4 - 0x40u;
                        }
                        r3 = r3 + r0;
                        r3 = r3 + 0x10000u;
                        r26 = (r3 - 0x2000u) & 0xffffu;
                    } else {
                        r3 = (r26 - 0xcbu) * 0xbcu;
                        r0 = r4 - 0x41u;
                        if (r4 < 0x7fu) {
                            r0 = r4 - 0x40u;
                        }
                        r0 = r3 + r0;
                        r0 = (r0 << 1u) & 0xfffffffeu;
                        r26 = (u32)rd16(r0 - 0x7fcc2190u);
                    }
                } else {
                    r3 = r26 - 0xc1u;
                    if (r26 < 0xa0u) {
                        r3 = r26 - 0x81u;
                    }
                    r0 = r4 - 0x41u;
                    r3 = r3 * 0xbcu;
                    if (r4 < 0x7fu) {
                        r0 = r4 - 0x40u;
                    }
                    r0 = r3 + r0;
                    r0 = (r0 << 1u) & 0xfffffffeu;
                    r26 = (u32)rd16(r0 - 0x7fcc2190u);
                }
                r29 = r29 + 1u;
            }
            if ((r26 & 0xffffu) == 0u) {
                fl_ = 3u;
                break;
            }
            if (rd32(0x817fdfbcu) != 0u) {
                wr16(r21, (u16)r26);
                r21 = r21 + 2u;
            }
            r28 = r28 + 1u;
            r23 = r23 + 1u;
            r29 = r29 + 1u;
        }
        if (fl_ == 3u) {
            fl_ = 0u;
        } else if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
        }
        if (param_4 != 0u) {
            wr32(param_4, r29);
        }
        if (param_2 != 0u) {
            wr32(param_2, r28);
        }
    }
    return;
}
