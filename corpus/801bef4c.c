#include "tc_rt.h"

void fn_801bef4c(s32 param_1, s32 param_2)
{
    u32 ca = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r29 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r7 = 0x817fdf9bu;
    wr32(0x817fdffcu, 0u);
    r6 = 0x8033b8afu;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    ctr = 0x29u;
    do {
        r5 = (u32)rd8(r6 + 1u);
        r6 = r6 + 2u;
        r0 = (u32)rd8(r6);
        wr8(r7 + 1u, (u8)r5);
        wr8(r7 + 2u, (u8)r0);
        r7 = r7 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r7 = 0x817fdf47u;
    r6 = 0x8033b903u;
    ctr = 0x29u;
    do {
        r5 = (u32)rd8(r6 + 1u);
        r6 = r6 + 2u;
        r0 = (u32)rd8(r6);
        wr8(r7 + 1u, (u8)r5);
        wr8(r7 + 2u, (u8)r0);
        r7 = r7 + 2u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32((u32)param_2 + 0x3f0u, 1u);
    r31 = rd32((u32)param_2 + 0x3ecu);
    r6 = rd32(0x803541bcu);
    if (r6 != 0u) {
        r0 = rd32(rd32(0x805711ccu) + 0xfcu);
        if (r0 != 1u) {
            if (r0 != 2u) {
                r5 = 0u;
            } else {
                r5 = rd32(0x8035417cu);
            }
        } else {
            r5 = rd32(0x80354148u);
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
                r0 = r5 & rd32(rd32(0x803541a8u));
            }
        } else {
            r0 = r5 & rd32(rd32(0x80354198u));
        }
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        if (rd32(0x80571144u) < 0x46u) {
            r5 = r31 - 0x32u;
            r0 = rd32((u32)param_1 + 0x98u) + 1u;
            r4 = (r0 >> 0x1fu) & 1u;
            ca = (r5 - 0x7fffffceu) < r5;
            r5 = r5 - 0x7fffffceu;
            r0 = r0 & 1u;
            r0 = r0 ^ r4;
            r4 = r0 - r4;
            wr32((u32)param_1 + 0x98u, r4);
            r29 = ~(u32)((u64)~r5 + (u64)r5 + (u64)ca) & 0x32u;
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            (void)tc_call(0x801bf64cu, &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 6u;
            (void)tc_call(0x8010a75cu, &a);
            a.r[0] = (u32)param_2;
            a.r[1] = r29;
            a.r[2] = rd32((u32)param_2 + 0x3e8u);
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3ecu, r29);
            return;
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 4u;
        f1 = tc_callf(0x8010a75cu, &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
    }
    wr32((u32)param_2 + 0x3f0u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x28u) + 0x10u), &a);
    r6 = rd32(0x803541ccu);
    do {
        if ((r6 & 8u) == 0u) {
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
                if (r0 != 0u) break;
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
            r29 = (u32)(s8)rd8(r31 - 0x7e8020b8u);
            if ((s32)r29 < 0) {
                return;
            }
            a.r[0] = (u32)param_2;
            a.r[1] = r29;
            a.r[2] = rd32((u32)param_2 + 0x3e8u);
            (void)tc_call(0x80119fb0u, &a);
            wr32((u32)param_2 + 0x3ecu, r29);
            return;
        }
    } while (0);
    r29 = (u32)(s8)rd8(r31 - 0x7e802064u);
    if ((s32)r29 >= 0) {
        a.r[0] = (u32)param_2;
        a.r[1] = r29;
        a.r[2] = rd32((u32)param_2 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32((u32)param_2 + 0x3ecu, r29);
    }
    return;
}
