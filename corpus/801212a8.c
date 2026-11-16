#include "tc_rt.h"

u32 fn_801212a8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    r3 = rd32(rd32((u32)param_1 + 0x20u) + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x802f6540u, &a);
        if (r3 != 0u) {
            r30 = 1u;
        }
    }
    if (r30 == 0u) {
        r4 = rd32((u32)param_1 + 0x1cu);
        if (rd32(r4 + 0x14u) != 0u) {
            r3 = rd32((u32)param_1 + 0x20u);
            r5 = rd32(r3 + 0x4cu);
            if ((r5 & 2u) == 0u || rd32(r4 + 0x1cu) == 0u) {
                if ((r5 & 0x40u) != 0u) {
                    wr32(r3 + 0x4cu, rd32(r3 + 0x4cu) & 0xffffffbfu);
                }
                r4 = rd32((u32)param_1 + 0x20u);
                if ((rd32(r4 + 0x4cu) & 8u) != 0u && rd32(r4 + 4u) == 0u) {
                    wr32(r4 + 0x60u, rd32(r4 + 0x60u) - 1u);
                    r4 = rd32((u32)param_1 + 0x20u);
                    if ((s32)rd32(r4 + 0x60u) > 0) {
                        a.r[0] = rd32((u32)param_1 + 0x1cu);
                        a.r[1] = r4;
                        (void)tc_call(0x80120428u, &a);
                        a.r[0] = rd32((u32)param_1 + 0x1cu);
                        a.r[1] = rd32((u32)param_1 + 0x20u);
                        (void)tc_call(0x80120f70u, &a);
                    }
                }
                r4 = rd32((u32)param_1 + 0x20u);
                r3 = rd32(r4 + 0x4cu);
                if ((r3 & 2u) != 0u) {
                    if ((r3 & 4u) != 0u) {
                        if (rd32(r4 + 4u) != 0u) {
                            a.r[0] = rd32((u32)param_1 + 0x1cu);
                            a.r[1] = r4;
                            a.r[2] = r4 + 0x54u;
                            f1 = tc_callf(0x80120ae4u, &a);
                            f0 = (f64)rdf32(0x805742a4u);
                            if ((f1 < f0) || (f1 == f0)) {
                                r3 = rd32(rd32((u32)param_1 + 0x20u) + 4u);
                                if (r3 != 0u) {
                                    a.r[0] = r3;
                                    a.r[1] = 0u;
                                    (void)tc_call(0x802f5fd8u, &a);
                                }
                            }
                        } else {
                            a.r[0] = rd32((u32)param_1 + 0x1cu);
                            a.r[1] = r4;
                            a.r[2] = r4 + 0x54u;
                            f1 = tc_callf(0x80120ae4u, &a);
                            if (f1 > (f64)rdf32(0x805742a4u)) {
                                a.r[0] = rd32((u32)param_1 + 0x1cu);
                                a.r[1] = rd32((u32)param_1 + 0x20u);
                                (void)tc_call(0x80120428u, &a);
                                a.r[0] = rd32((u32)param_1 + 0x1cu);
                                a.r[1] = rd32((u32)param_1 + 0x20u);
                                (void)tc_call(0x80120f70u, &a);
                            }
                        }
                    }
                    r4 = rd32((u32)param_1 + 0x20u);
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    a.r[1] = r4;
                    a.r[2] = r4 + 0x54u;
                    (void)tc_call(0x80120c00u, &a);
                    r4 = rd32((u32)param_1 + 0x20u);
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    a.r[1] = r4;
                    a.r[2] = r4 + 0x54u;
                    (void)tc_call(0x80120d70u, &a);
                }
                r4 = rd32((u32)param_1 + 0x20u);
                r3 = rd32(r4 + 0x4cu);
                if ((r3 & 1u) == 0u) {
                    if ((r3 & 4u) == 0u || (r3 & 8u) == 0u) {
                        if (rd32(r4 + 4u) == 0u) {
                            a.r[0] = rd32((u32)param_1 + 0x24u);
                            a.r[1] = 5u;
                            (void)tc_call(0x8011e5a0u, &a);
                        }
                        a.r[0] = rd32((u32)param_1 + 0x20u);
                        (void)tc_call(0x8011f64cu, &a);
                    }
                } else if ((r3 & 2u) == 0u) {
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    a.r[1] = r4;
                    (void)tc_call(0x80120590u, &a);
                } else {
                    a.r[0] = rd32((u32)param_1 + 0x1cu);
                    a.r[1] = r4;
                    a.r[2] = r4 + 0x54u;
                    f1 = tc_callf(0x80120ae4u, &a);
                    if (f1 > (f64)rdf32(0x805742a4u)) {
                        a.r[0] = rd32((u32)param_1 + 0x1cu);
                        a.r[1] = rd32((u32)param_1 + 0x20u);
                        (void)tc_call(0x80120590u, &a);
                        r4 = rd32((u32)param_1 + 0x20u);
                        a.r[0] = rd32((u32)param_1 + 0x1cu);
                        a.r[1] = r4;
                        a.r[2] = r4 + 0x54u;
                        (void)tc_call(0x80120c00u, &a);
                    }
                }
            } else {
                wr32(r3 + 0x4cu, r5 | 0x40u);
                r3 = rd32(rd32((u32)param_1 + 0x20u) + 4u);
                if (r3 != 0u) {
                    a.f[0] = (f64)rdf32(0x805742a4u);
                    a.r[0] = r3;
                    a.r[1] = 0u;
                    (void)tc_call(0x802f7194u, &a);
                }
            }
        }
    }
    return 1u;
}
