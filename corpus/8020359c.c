#include "tc_rt.h"

u32 fn_8020359c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8020017cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
        a.r[1] = rd32(rd32(r3 + 0x2cu) + (((rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x1cu) + 0x430u) + rd32(r3 + 0x10u)) << 2u) & 0xfffffffcu)) + 0xbcu;
        (void)tc_call(0x801c1334u, &a);
    }
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
        a.r[1] = 4u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        r5 = rd32(0x803541bcu);
        if (r5 == 0u) {
            r4 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r4 = rd32(0x80354150u);
            } else {
                if (r0 == 2u) {
                    r4 = rd32(0x80354184u);
                } else {
                    r4 = 0u;
                }
            }
        }
        if (r5 == 0u) {
            r0 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r0 = r4 & rd32(rd32(0x803541a4u));
            } else {
                if (r0 == 2u) {
                    r0 = r4 & rd32(rd32(0x803541b4u));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0x1cu);
            a.r[1] = 1u;
            (void)tc_call(0x80221890u, &a);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
            a.r[1] = 3u;
            (void)tc_call(0x800f8544u, &a);
        } else {
            if (r5 == 0u) {
                r4 = 0u;
            } else {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 == 1u) {
                    r4 = rd32(0x80354154u);
                } else {
                    if (r0 == 2u) {
                        r4 = rd32(0x80354188u);
                    } else {
                        r4 = 0u;
                    }
                }
            }
            if (r5 == 0u) {
                r0 = 0u;
            } else {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 == 1u) {
                    r0 = r4 & rd32(rd32(0x803541a4u));
                } else {
                    if (r0 == 2u) {
                        r0 = r4 & rd32(rd32(0x803541b4u));
                    } else {
                        r0 = 0u;
                    }
                }
            }
            if (r0 != 0u) {
                a.r[0] = rd32((u32)param_1 + 0x1cu);
                a.r[1] = 0u;
                (void)tc_call(0x80221890u, &a);
                a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
                a.r[1] = 3u;
                (void)tc_call(0x800f8544u, &a);
            }
        }
    }
    return 1u;
}
