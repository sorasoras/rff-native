#include "tc_rt.h"

u32 fn_80129a5c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x5d8u, 0u);
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = r4 + 0x1a0u;
    r4 = r4 + 0x1e8u;
    r31 = rd32(r4 + 0x3ecu);
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x10u), &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = rd32(r3 + 0x5d4u);
    r3 = r3 + 0x1a0u;
    a.r[0] = r3;
    a.r[1] = r30;
    (void)tc_call(0x801894d8u, &a);
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = r4 + 0x1e8u;
    r4 = r4 + ((rd32(r4 + 0x5d4u) << 2u) & 0xfffffffcu);
    r4 = rd32(r4 + 0x1dcu);
    a.r[0] = r3;
    a.r[1] = r4;
    (void)tc_call(0x80119ffcu, &a);
    r4 = rd32((u32)param_1 + 0x1cu);
    wr32(r4 + 0x630u, rd32(r4 + ((rd32(r4 + 0x5d4u) << 2u) & 0xfffffffcu) + 0x1dcu));
    if (r31 != r30) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80129594u, &a);
    }
    if ((rd32(0x803541c8u) & 0x116u) != 0u) {
        wr32(rd32((u32)param_1 + 0x1cu) + 0x688u, 0u);
    } else {
        if (rd32(0x803541bcu) != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r0 = 0u;
                } else {
                    r0 = rd32(rd32(0x803541acu)) & 0x1fffu;
                }
            } else {
                r0 = rd32(rd32(0x8035419cu)) & 0x1fffu;
            }
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            wr32(rd32((u32)param_1 + 0x1cu) + 0x688u, 0u);
        }
    }
    a.r[0] = 0u;
    r3 = tc_call(0x80043c20u, &a);
    r0 = rd32(r3 + 4u);
    r5 = rd32(0x803541bcu);
    if (r5 != 0u) {
        r3 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r3 != 1u) {
            if (r3 != 2u) {
                r4 = 0u;
            } else {
                r4 = rd32(0x80354174u);
            }
        } else {
            r4 = rd32(0x80354140u);
        }
    } else {
        r4 = 0u;
    }
    if (r5 != 0u) {
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
        if (r5 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354190u);
                }
            } else {
                r4 = rd32(0x8035415cu);
            }
        } else {
            r4 = 0u;
        }
        if (r5 != 0u) {
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
            r0 = r0 & 0x800u;
            if (r0 == 0u) {
                if ((s32)rd32(rd32((u32)param_1 + 0x1cu) + 0x688u) <= 1350) {
                    if (r31 == r30) {
                        return 1u;
                    }
                    a.r[0] = (u32)param_1;
                    a.r[1] = r30;
                    r3 = tc_call(0x80129554u, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x801e6484u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r31;
                    r3 = tc_call(0x80129554u, &a);
                    a.r[0] = r3;
                    (void)tc_call(0x801e6438u, &a);
                    return 1u;
                }
                r3 = rd32(0x804b9dfcu);
                f1 = (f64)(f32)((f64)rdf32(0x805742fcu) * (f64)rdf32(0x804b9e00u));
                wr32(0x8057113cu, 2u);
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.r[0] = r3;
                    a.r[1] = 0xfu;
                    (void)tc_call(0x802f7194u, &a);
                }
                a.r[0] = (u32)param_1;
                a.r[1] = 2u;
                (void)tc_call(0x80129588u, &a);
                return 1u;
            }
        }
    }
    r4 = 0u;
    if (rd32(rd32((u32)param_1 + 0x1cu) + 0x5d4u) == 0u) {
        r4 = 1u;
    }
    wr32(0x80571138u, r4);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0u;
    (void)tc_call(0x8010a75cu, &a);
    wr32(0x8057113cu, (u32)((s32)~((r30 - 2u) | (2u - r30)) >> 31) + 5u);
    a.r[0] = (u32)param_1;
    a.r[1] = r30;
    r3 = tc_call(0x80129554u, &a);
    a.r[0] = r3;
    (void)tc_call(0x801e63e8u, &a);
    if (r30 != r31) {
        a.r[0] = (u32)param_1;
        a.r[1] = r31;
        r3 = tc_call(0x80129554u, &a);
        a.r[0] = r3;
        (void)tc_call(0x801e6438u, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = 2u;
    (void)tc_call(0x80129588u, &a);
    return 1u;
}
