#include "tc_rt.h"

void fn_801f768c(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = 0x804de14cu;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x801f41c0u, &a);
    r6 = rd32(0x803541ccu);
    if ((r6 & 8u) != 0u) {
        a.r[0] = 0x804de14cu;
        (void)tc_call(0x801f4064u, &a);
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
                a.r[0] = 0x804de14cu;
                (void)tc_call(0x801f4064u, &a);
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
        a.r[0] = 0x804de14cu;
        (void)tc_call(0x801f40c8u, &a);
    }
    return;
}
