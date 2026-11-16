#include "tc_rt.h"

u32 fn_80122570(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 0u);
    r29 = rd32((u32)param_1 + 0x1cu);
    if (rd32(r29 + 0xdccu) == 0u) {
        a.r[0] = (u32)param_1 + 0x20u;
        a.r[1] = 1u;
        r3 = tc_call(0x800f857cu, &a);
        if (r3 != 0u) {
            wr32((u32)param_1 + 0x60u, 0u);
        } else {
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
            a.r[1] = 2u;
            (void)tc_call(0x800f8544u, &a);
        }
    } else {
        r0 = rd32((u32)param_1 + 0x60u) + 1u;
        wr32((u32)param_1 + 0x60u, r0);
        r3 = rd32(r29 + 0xdccu);
        if ((s32)r0 > 60) {
            (void)tc_call(0x80052dc0u, &a);
            wr32(rd32((u32)param_1 + 0x1cu) + 0xdccu, 0u);
        } else {
            a.r[0] = r3;
            r3 = tc_call(0x801f88d0u, &a);
            if (r3 != 0u) {
                (void)tc_call(0x80052dc0u, &a);
                wr32(rd32((u32)param_1 + 0x1cu) + 0xdccu, 0u);
            }
        }
    }
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x450u;
    (void)tc_call(0x8019387cu, &a);
    r5 = rd32(r29 + 0xdc8u);
    r0 = rd32(r5 + 0x10u);
    r5 = rd32(r5 + 0x2cu);
    r0 = rd32(r29 + 0x430u) + r0;
    r0 = (r0 << 2u) & 0xfffffffcu;
    r31 = rd32(r5 + r0);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = r31 + 0xbcu;
    (void)tc_call(0x801c1334u, &a);
    do {
        if (rd32(rd32((u32)param_1 + 0x1cu) + 0xdc4u) != 2u) {
            r5 = rd32(0x803541bcu);
            if (r5 != 0u) {
                r0 = rd32(rd32(0x805711ccu) + 0xfcu);
                if (r0 != 1u) {
                    if (r0 != 2u) {
                        r4 = 0u;
                    } else {
                        r4 = rd32(0x8035417cu);
                    }
                } else {
                    r4 = rd32(0x80354148u);
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
                        r0 = r4 & rd32(rd32(0x803541a8u));
                    }
                } else {
                    r0 = r4 & rd32(rd32(0x80354198u));
                }
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                if (r31 != 0u) {
                    r4 = (u32)rd16(r31 + 0xbcu);
                    if (r4 != 0x2e8u) {
                        a.r[0] = 0x8049f1b0u;
                        a.r[1] = r4;
                        r3 = tc_call(0x8015f2b0u, &a);
                        r0 = r3 & 0xffu;
                        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                        r0 = r0 & 0x400000u;
                        r3 = 0u;
                        if (r0 != 0u) {
                            r3 = 1u;
                        }
                        if (r3 == 0u) {
                            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5c8u;
                            (void)tc_call(0x8014b81cu, &a);
                            a.r[0] = 0x804b9da0u;
                            a.r[1] = 6u;
                            (void)tc_call(0x8010a75cu, &a);
                            break;
                        }
                    }
                }
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
            }
        }
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5c8u;
    a.r[1] = (u32)rd16(r31 + 0xbcu);
    (void)tc_call(0x8014b774u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x5c8u;
    (void)tc_call(0x8014b36cu, &a);
    return 1u;
}
