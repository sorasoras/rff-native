#include "tc_rt.h"

void fn_801bd284(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0;
    TcArgs a = {0};
    r5 = (u32)param_1 + (rd32((u32)param_2 + 0x3e8u) * 0x68u);
    r29 = rd32(r5 + 0x32cu);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    if (r29 == rd32((u32)param_1 + (rd32((u32)param_2 + 0x3e8u) * 0x68u) + 0x32cu)) {
        r6 = rd32(0x803541ccu);
        if ((r6 & 8u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            (void)tc_call(0x801bd85cu, &a);
        } else {
            r7 = rd32(0x803541c8u);
            if ((r7 & 2u) == 0u) {
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x8035416cu);
                        }
                    } else {
                        r4 = rd32(0x80354138u);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
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
                if (r0 != 0u) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = (u32)param_2;
                    (void)tc_call(0x801bd85cu, &a);
                    return;
                }
            }
            if ((r6 & 2u) == 0u) {
                if ((r7 & 8u) != 0u) {
                    return;
                }
                r5 = rd32(0x803541bcu);
                if (r5 != 0u) {
                    r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                    if (r0 != 1u) {
                        if (r0 != 2u) {
                            r4 = 0u;
                        } else {
                            r4 = rd32(0x80354170u);
                        }
                    } else {
                        r4 = rd32(0x8035413cu);
                    }
                } else {
                    r4 = 0u;
                }
                if (r5 != 0u) {
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
                    return;
                }
            }
            a.r[0] = (u32)param_1;
            a.r[1] = (u32)param_2;
            (void)tc_call(0x801bd9e8u, &a);
        }
    }
    return;
}
