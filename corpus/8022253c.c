#include "tc_rt.h"

u32 fn_8022253c(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(0x803541bcu);
    if (r6 == 0u) {
        r5 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r5 = rd32(0x80354154u);
        } else {
            if (r0 == 2u) {
                r5 = rd32(0x80354188u);
            } else {
                r5 = 0u;
            }
        }
    }
    if (r6 == 0u) {
        r0 = 0u;
    } else {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 == 1u) {
            r0 = r5 & rd32(rd32(0x803541a4u));
        } else {
            if (r0 == 2u) {
                r0 = r5 & rd32(rd32(0x803541b4u));
            } else {
                r0 = 0u;
            }
        }
    }
    if (r0 != 0u) {
        wr32((u32)param_1 + 0x24u, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80221738u, &a);
    } else {
        if (r6 == 0u) {
            r5 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r5 = rd32(0x80354150u);
            } else {
                if (r0 == 2u) {
                    r5 = rd32(0x80354184u);
                } else {
                    r5 = 0u;
                }
            }
        }
        if (r6 == 0u) {
            r0 = 0u;
        } else {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 == 1u) {
                r0 = r5 & rd32(rd32(0x803541a4u));
            } else {
                if (r0 == 2u) {
                    r0 = r5 & rd32(rd32(0x803541b4u));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 != 0u) {
            wr32((u32)param_1 + 0x24u, 0u);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x802217e4u, &a);
        }
    }
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
            r0 = r4 & rd32(rd32(0x8035419cu));
        } else {
            if (r0 == 2u) {
                r0 = r4 & rd32(rd32(0x803541acu));
            } else {
                r0 = 0u;
            }
        }
    }
    if (r0 == 0u) {
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
                r0 = r4 & rd32(rd32(0x8035419cu));
            } else {
                if (r0 == 2u) {
                    r0 = r4 & rd32(rd32(0x803541acu));
                } else {
                    r0 = 0u;
                }
            }
        }
        if (r0 == 0u) {
            wr32((u32)param_1 + 0x24u, rd32((u32)param_1 + 0x24u) + 1u);
        }
    }
    if ((s32)rd32((u32)param_1 + 0x24u) > 15) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802218d4u, &a);
    }
    return 1u;
}
