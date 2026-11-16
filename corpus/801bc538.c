#include "tc_rt.h"

u32 fn_801bc538(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r0 = rd32((u32)param_1 + 0x28u);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x801bd740u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801bc418u, &a);
    a.r[0] = (u32)param_1 + 0x2cu;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u);
        r3 = tc_call(0x801c09d4u, &a);
        r31 = r3;
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
            if (r3 == 0x2e8u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 4u;
                (void)tc_call(0x8010a75cu, &a);
            } else {
                a.r[0] = 0x8049f1b0u;
                a.r[1] = r3;
                r3 = tc_call(0x8015f2b0u, &a);
                r0 = r3 & 0xffu;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r0 & 0x400000u;
                r3 = 0u;
                if (r0 != 0u) {
                    r3 = 1u;
                }
                if (r3 != 0u) {
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 4u;
                    (void)tc_call(0x8010a75cu, &a);
                } else {
                    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
                    (void)tc_call(0x8014b81cu, &a);
                    a.r[0] = 0x804b9da0u;
                    a.r[1] = 6u;
                    (void)tc_call(0x8010a75cu, &a);
                }
            }
        }
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
        a.r[1] = r31;
        (void)tc_call(0x8014b838u, &a);
        wr16(0x817fdfe8u, (u16)r31);
        r3 = rd32(0x80571398u);
        wr8(0x817fdfeau, 1u);
        wr8(0x817fdfebu, 1u);
        r3 = rd32(r3 + 0x38u);
        a.r[0] = r3;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x801c1334u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
