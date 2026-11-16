#include "tc_rt.h"

u32 fn_80126a98(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    r6 = rd32(0x803541bcu);
    r0 = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u) + rd32(r3 + 0x10u);
    r3 = rd32(r3 + 0x2cu);
    r0 = (r0 << 2u) & 0xfffffffcu;
    r31 = rd32(r3 + r0);
    if (r6 != 0u) {
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
    if (r6 != 0u) {
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
    do {
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
                        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
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
    } while (0);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = (u32)rd16(r31 + 0xbcu);
    (void)tc_call(0x8014b838u, &a);
    a.r[0] = rd32(rd32(0x80571398u) + 0x38u);
    a.r[1] = r31 + 0xbcu;
    (void)tc_call(0x801c1334u, &a);
    wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 0u);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80126834u, &a);
    }
    r4 = rd32((u32)param_1 + 0x1cu);
    r3 = rd32(r4 + 0xc48u);
    r4 = rd32(r4 + 0xc4cu);
    a.r[0] = r3;
    a.r[1] = r4;
    (void)tc_call(0x801265d4u, &a);
    if (r31 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
