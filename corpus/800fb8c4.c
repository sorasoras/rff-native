#include "tc_rt.h"

u32 fn_800fb8c4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r29 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x1cu);
    r4 = rd32((u32)param_1 + 0x60u);
    r5 = rd32(r6 + 0x1cu);
    r31 = rd32(r5 + 0x430u);
    wr32((u32)param_1 + 0x60u, r4 - 1u);
    a.r[0] = r6;
    r3 = tc_call(0x800fa7c0u, &a);
    f1 = tc_lastf();
    r4 = rd32((u32)param_1 + 0x1cu);
    r0 = rd32(r3 + 0x10u);
    r4 = rd32(r4 + 0x1cu);
    r5 = rd32(r3 + 0x2cu);
    r4 = rd32(r4 + 0x430u);
    r0 = r4 + r0;
    r0 = (r0 << 2u) & 0xfffffffcu;
    r29 = rd32(r5 + r0);
    a.r[0] = (u32)param_1;
    a.r[1] = r29;
    r3 = tc_call(0x800fbc18u, &a);
    f1 = tc_lastf();
    r3 = rd32(0x80571398u);
    r3 = rd32(r3 + 0x38u);
    a.r[0] = r3;
    a.r[1] = r29 + 0xbcu;
    r3 = tc_call(0x801c1334u, &a);
    f1 = tc_lastf();
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r5 = rd32(0x803541bcu);
        if (r5 != 0u) {
            r3 = rd32(0x805711ccu);
            r0 = rd32(r3 + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
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
        if (r5 != 0u) {
            r3 = rd32(0x805711ccu);
            r0 = rd32(r3 + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r0 = 0u;
                } else {
                    r3 = rd32(0x803541b4u);
                    r0 = r4 & rd32(r3);
                }
            } else {
                r3 = rd32(0x803541a4u);
                r0 = r4 & rd32(r3);
            }
        } else {
            r0 = 0u;
        }
        if (r0 == 0u) {
            if (r5 != 0u) {
                r3 = rd32(0x805711ccu);
                r0 = rd32(r3 + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
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
            if (r5 != 0u) {
                r3 = rd32(0x805711ccu);
                r0 = rd32(r3 + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r0 = 0u;
                    } else {
                        r3 = rd32(0x803541b4u);
                        r0 = r4 & rd32(r3);
                    }
                } else {
                    r3 = rd32(0x803541a4u);
                    r0 = r4 & rd32(r3);
                }
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                r3 = rd32((u32)param_1 + 0x1cu);
                r4 = rd32(r3 + 0x1cu);
                if (rd32(r4 + 0x9a8u) == 0u) {
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    r3 = tc_call(0x80221890u, &a);
                    f1 = tc_lastf();
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x34u;
                    a.r[1] = 3u;
                    r3 = tc_call(0x800f8544u, &a);
                    f1 = tc_lastf();
                } else {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    r3 = tc_call(0x8010a75cu, &a);
                    f1 = tc_lastf();
                }
            }
        } else {
            r3 = rd32((u32)param_1 + 0x1cu);
            r4 = rd32(r3 + 0x1cu);
            if (rd32(r4 + 0x9a8u) == 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                r3 = tc_call(0x80221890u, &a);
                f1 = tc_lastf();
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x34u;
                a.r[1] = 3u;
                r3 = tc_call(0x800f8544u, &a);
                f1 = tc_lastf();
            } else {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                r3 = tc_call(0x8010a75cu, &a);
                f1 = tc_lastf();
            }
        }
    } else {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x34u;
        a.r[1] = 5u;
        r3 = tc_call(0x800f8544u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = (u32)param_1 + 0x20u;
    r3 = tc_call(0x800f84d0u, &a);
    f1 = tc_lastf();
    if (r3 == 0u) {
        r3 = rd32((u32)param_1 + 0x1cu);
        r29 = rd32(r3 + 0x1cu) + 0x44u;
        a.r[0] = r3;
        r3 = tc_call(0x800fb154u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r29;
        r3 = tc_call(0x80184a68u, &a);
        f1 = tc_lastf();
    }
    return 1u;
}
