#include "tc_rt.h"

void fn_800acb20(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r7 = 0;
    TcArgs a = {0};
    r3 = param_1;
    r7 = rd32(0x803541bcu);
    if (r7 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r0 = 0u;
            } else {
                r0 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcabe9cu);
            }
        } else {
            r0 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcabed0u);
        }
    } else {
        r0 = 0u;
    }
    c0lt = (s32)param_1 < 135;
    if (param_1 == 0x87u) {
        if (r7 != 0u) {
            r3 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r3 != 1u) {
                if (r3 != 2u) {
                    r3 = 0u;
                } else {
                    r3 = r0 & rd32(rd32(0x803541b0u));
                }
            } else {
                r3 = r0 & rd32(rd32(0x803541a0u));
            }
        } else {
            r3 = 0u;
        }
    } else if (!c0lt) {
        if ((s32)param_1 < 137) {
            if (r7 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r0 & rd32(rd32(0x803541b4u));
                    }
                } else {
                    r3 = r0 & rd32(rd32(0x803541a4u));
                }
            } else {
                r3 = 0u;
            }
        }
    } else {
        c0lt = (s32)param_1 < 133;
        if (param_1 == 0x85u) {
            if (r7 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r0 & rd32(rd32(0x803541acu));
                    }
                } else {
                    r3 = r0 & rd32(rd32(0x8035419cu));
                }
            } else {
                r3 = 0u;
            }
        } else if (!c0lt) {
            if (r7 != 0u) {
                r3 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r3 != 1u) {
                    if (r3 != 2u) {
                        r3 = 0u;
                    } else {
                        r3 = r0 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r3 = r0 & rd32(rd32(0x80354198u));
                }
            } else {
                r3 = 0u;
            }
        }
    }
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x800a796cu, &a);
    return;
}
