#include "tc_rt.h"

void fn_8012d244(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    r8 = rd32(0x803541ccu);
    do {
        if ((r8 & 1u) == 0u) {
            r9 = rd32(0x803541c8u);
            if ((r9 & 4u) == 0u) {
                r7 = rd32(0x803541bcu);
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354164u);
                        }
                    } else {
                        r5 = rd32(0x80354130u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r7 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) break;
            }
            if ((r8 & 4u) == 0u) {
                if ((r9 & 1u) != 0u) {
                    return;
                }
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354168u);
                        }
                    } else {
                        r5 = rd32(0x80354134u);
                    }
                } else {
                    r5 = 0u;
                }
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r0 = 0u;
                        } else {
                            r0 = r5 & rd32(rd32(0x803541b4u));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x803541a4u));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) {
                    return;
                }
            }
            a.r[0] = rd32((u32)param_1 + 0x814u);
            r3 = tc_call(0x801f1144u, &a);
            if (r3 == 0u) {
                return;
            }
            a.r[0] = (u32)param_1 + 0x7ccu;
            a.r[1] = 1u;
            (void)tc_call(0x800f8544u, &a);
            if ((s32)rd32((u32)param_1 + 0xcu) <= 1) {
                return;
            }
            a.r[0] = 0x804b9da0u;
            a.r[1] = 8u;
            (void)tc_call(0x8010a75cu, &a);
            return;
        }
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x814u);
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x7ccu;
        a.r[1] = 0u;
        (void)tc_call(0x800f8544u, &a);
        if ((s32)rd32((u32)param_1 + 0xcu) > 1) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 8u;
            (void)tc_call(0x8010a75cu, &a);
        }
    }
    return;
}
