#include "tc_rt.h"

void fn_801ba524(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32(0x803541c8u);
    r4 = rd32((u32)param_1 + 0x2cu);
    r8 = r0 & 8u;
    r31 = r4;
    do {
        if (r8 != 0u) {
            r31 = r4 - 1u;
        } else {
            r7 = r0 & 2u;
            if (r7 == 0u) {
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x8035416cu);
                        }
                    } else {
                        r5 = rd32(0x80354138u);
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
                            r0 = r5 & rd32(rd32(0x803541acu));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x8035419cu));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 != 0u) {
                    r31 = r4 - 1u;
                    break;
                }
            }
            if (r7 == 0u) {
                if (r8 != 0u) break;
                r6 = rd32(0x803541bcu);
                if (r6 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r5 = 0u;
                        } else {
                            r5 = rd32(0x80354170u);
                        }
                    } else {
                        r5 = rd32(0x8035413cu);
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
                            r0 = r5 & rd32(rd32(0x803541acu));
                        }
                    } else {
                        r0 = r5 & rd32(rd32(0x8035419cu));
                    }
                } else {
                    r0 = 0u;
                }
                if (r0 == 0u) break;
            }
            r31 = r4 + 1u;
        }
    } while (0);
    if ((s32)r31 >= 0) {
        if ((s32)r31 > 128) {
            r31 = 0x80u;
        }
    } else {
        r31 = 0u;
    }
    if (r31 != r4) {
        a.r[0] = 0x804b9da0u;
        a.r[1] = 1u;
        (void)tc_call(0x8010a75cu, &a);
    }
    wr32((u32)param_1 + 0x2cu, r31);
    return;
}
