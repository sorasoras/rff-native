#include "tc_rt.h"

u32 fn_801ffc40(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x68u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(r0 + 0x28u) + 0x18u), &a);
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802013e8u, &a);
    }
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x802000a4u, &a);
        r30 = 0u;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8020017cu, &a);
        if (r3 != 0u) {
            r6 = rd32((u32)param_1 + 0x1cu);
            r30 = rd32(rd32(r3 + 0x2cu) + (((rd32(r6 + 0x430u) + rd32(r3 + 0x10u)) << 2u) & 0xfffffffcu));
            a.r[0] = r6 + 0x44cu;
            a.r[1] = (u32)rd16(r30 + 0xbcu);
            (void)tc_call(0x8014b838u, &a);
        }
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
            do {
                if (r30 != 0u) {
                    r4 = (u32)rd16(r30 + 0xbcu);
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
            } while (0);
            a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
            (void)tc_call(0x8014b81cu, &a);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
