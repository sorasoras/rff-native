#include "tc_rt.h"

u32 fn_801282fc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32(0x803541bcu);
    if (r0 != 0u) {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 != 1u) {
            if (r4 != 2u) {
                r5 = 0u;
            } else {
                r5 = rd32(0x80354174u);
            }
        } else {
            r5 = rd32(0x80354140u);
        }
    } else {
        r5 = 0u;
    }
    if (r0 != 0u) {
        r4 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r4 != 1u) {
            if (r4 != 2u) {
                r4 = 0u;
            } else {
                r4 = r5 & rd32(rd32(0x803541a8u));
            }
        } else {
            r4 = r5 & rd32(rd32(0x80354198u));
        }
    } else {
        r4 = 0u;
    }
    if (r4 == 0u) {
        if (r0 != 0u) {
            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r4 != 1u) {
                if (r4 != 2u) {
                    r5 = 0u;
                } else {
                    r5 = rd32(0x80354190u);
                }
            } else {
                r5 = rd32(0x8035415cu);
            }
        } else {
            r5 = 0u;
        }
        if (r0 != 0u) {
            r4 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r4 != 1u) {
                if (r4 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = r5 & rd32(rd32(0x803541a8u));
                }
            } else {
                r4 = r5 & rd32(rd32(0x80354198u));
            }
        } else {
            r4 = 0u;
        }
        if (r4 == 0u) {
            if (r0 != 0u) {
                r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r4 != 1u) {
                    if (r4 != 2u) {
                        r5 = 0u;
                    } else {
                        r5 = rd32(0x80354178u);
                    }
                } else {
                    r5 = rd32(0x80354144u);
                }
            } else {
                r5 = 0u;
            }
            if (r0 != 0u) {
                r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r4 != 1u) {
                    if (r4 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = r5 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r4 = r5 & rd32(rd32(0x80354198u));
                }
            } else {
                r4 = 0u;
            }
            if (r4 == 0u) {
                if (r0 != 0u) {
                    r4 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r4 != 1u) {
                        if (r4 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354194u);
                        }
                    } else {
                        r5 = rd32(0x80354160u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r0 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541a8u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x80354198u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    return 1u;
                }
            }
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
            (void)tc_call(0x8011a424u, &a);
            wr32(rd32((u32)param_1 + 0x1cu) + 0xf24u, 0u);
            a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
            a.r[1] = 0u;
            (void)tc_call(0x800f8544u, &a);
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x7b4u;
            f1 = tc_callf(0x80188c80u, &a);
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
            a.r[1] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80119edcu, &a);
            r30 = rd32((u32)param_1 + 0x24u);
            r3 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
            r29 = r3 + 0x44u;
            a.r[0] = r29;
            a.r[1] = rd32(r3 + 0x430u);
            a.r[2] = r30;
            (void)tc_call(0x80119fb0u, &a);
            wr32(r29 + 0x3e8u, r30);
            r30 = rd32((u32)param_1 + 0x28u);
            r3 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
            r29 = r3 + 0x44u;
            a.r[0] = r29;
            a.r[1] = r30;
            a.r[2] = rd32(r3 + 0x42cu);
            (void)tc_call(0x80119fb0u, &a);
            wr32(r29 + 0x3ecu, r30);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 3u;
            (void)tc_call(0x8010a75cu, &a);
            return 1u;
        }
    }
    r3 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
    r30 = rd32(r3 + 0xb90u);
    if ((s32)r30 <= 0) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        (void)tc_call(0x8010a75cu, &a);
    } else {
        r3 = r3 + 0x44u;
        a.r[0] = r3;
        r3 = tc_call(0x8011a4b4u, &a);
        wr8(r3 + 0xbeu, (u8)r30);
        r29 = rd32(rd32((u32)param_1 + 0x1cu) + 0xf24u);
        r3 = (u32)rd8(r29 + 0xbeu) - r30;
        wr8(r29 + 0xbeu, (u8)r3);
        if ((r3 & 0xffu) == 0u) {
            a.r[0] = r29;
            (void)tc_call(0x80161ac4u, &a);
            wr16(r29 + 0xbcu, 0x2e8u);
            wr8(r29 + 0xbfu, 0u);
            wr8(r29 + 0xbeu, 0u);
        }
        a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x7b4u;
        f1 = tc_callf(0x80188c80u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu) + 0x44u;
        a.r[1] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80119edcu, &a);
        r30 = rd32((u32)param_1 + 0x24u);
        r3 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
        r29 = r3 + 0x44u;
        a.r[0] = r29;
        a.r[1] = rd32(r3 + 0x430u);
        a.r[2] = r30;
        (void)tc_call(0x80119fb0u, &a);
        wr32(r29 + 0x3e8u, r30);
        r30 = rd32((u32)param_1 + 0x28u);
        r3 = rd32(rd32((u32)param_1 + 0x20u) + 0x1cu);
        r29 = r3 + 0x44u;
        a.r[0] = r29;
        a.r[1] = r30;
        a.r[2] = rd32(r3 + 0x42cu);
        (void)tc_call(0x80119fb0u, &a);
        wr32(r29 + 0x3ecu, r30);
        a.r[0] = rd32((u32)param_1 + 0x20u) + 0x20u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 2u;
        (void)tc_call(0x8010a75cu, &a);
    }
    return 1u;
}
