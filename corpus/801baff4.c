#include "tc_rt.h"

u32 fn_801baff4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x801ba998u, &a);
    r29 = 0u;
    wr32(r3 + 0x3f0u, 0u);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r3 + 0x28u);
    if (r30 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x801ba998u, &a);
        f1 = tc_lastf();
        a.r[0] = r30;
        a.r[1] = r3;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r30 + 0x28u) + 0xcu), &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        r3 = tc_call(0x801ba998u, &a);
        r3 = rd32(r3 + 0x3ecu);
        r29 = rd32(rd32(r30 + 0x2cu) + (((r3 + rd32(r30 + 0x10u)) << 2u) & 0xfffffffcu));
    }
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x44cu;
    a.r[1] = (u32)rd16(r29 + 0xbcu);
    (void)tc_call(0x8014b838u, &a);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = r29 + 0xbcu;
    (void)tc_call(0x801c1334u, &a);
    r0 = rd32(0x803541bcu);
    if (r0 != 0u) {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r4 = 0u;
            } else {
                r4 = rd32(0x80354178u);
            }
        } else {
            r4 = rd32(0x80354144u);
        }
    } else {
        r4 = 0u;
    }
    if (r0 != 0u) {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r3 = 0u;
            } else {
                r3 = r4 & rd32(rd32(0x803541a8u));
            }
        } else {
            r3 = r4 & rd32(rd32(0x80354198u));
        }
    } else {
        r3 = 0u;
    }
    if (r3 == 0u) {
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354194u);
                }
            } else {
                r4 = rd32(0x80354160u);
            }
        } else {
            r4 = 0u;
        }
        if (r0 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r3 = 0u;
                } else {
                    r3 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r3 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r3 = 0u;
        }
        if (r3 == 0u) {
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x80354184u);
                    }
                } else {
                    r4 = rd32(0x80354150u);
                }
            } else {
                r4 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r4 & rd32(rd32(0x803541b4u));
                    }
                } else {
                    r3 = r4 & rd32(rd32(0x803541a4u));
                }
            } else {
                r3 = 0u;
            }
            if (r3 == 0u) {
                if (r0 != 0u) {
                    r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r3 != 1u) {
                        if (r3 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354188u);
                        }
                    } else {
                        r4 = rd32(0x80354154u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r0 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r4 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r4 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    return 1u;
                }
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                a.r[1] = 0u;
                (void)tc_call(0x80221890u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
                a.r[1] = 3u;
                (void)tc_call(0x800f8544u, &a);
                return 1u;
            }
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = 1u;
            (void)tc_call(0x80221890u, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
            a.r[1] = 3u;
            (void)tc_call(0x800f8544u, &a);
            return 1u;
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
    a.r[1] = 4u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
