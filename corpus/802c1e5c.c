#include "tc_rt.h"

void fn_802c1e5c(s32 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = rd32(0x80547478u) + 0x1434cu;
    a.r[1] = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fc67330u);
    a.r[2] = 0x817fdfd8u;
    r3 = tc_call(0x80275a14u, &a);
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        a.r[0] = 0x817fdfd8u;
        r3 = tc_call(0x80276134u, &a);
        r31 = r3;
    }
    if (r31 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802c19e4u, &a);
        r30 = r3;
        r6 = rd32(0x80547478u) + 0x10000u;
        r5 = rd32(r6 + 0x46b4u);
        r6 = rd32(r6 + 0x46b8u);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = 0u;
        (void)tc_call(0x802ddd44u, &a);
        a.r[0] = r30;
        a.r[1] = 1u;
        (void)tc_call(0x802dde6cu, &a);
        c0lt = param_1 < 23;
        wr32(r30 + 0x2e28u, (u32)param_1);
        if ((u32)param_1 == 0x17u) {
            r4 = rd32(0x80547478u) + 0x1433cu;
        } else if (!c0lt) {
            if ((u32)param_1 == 0x19u) {
                r4 = rd32(0x80547478u) + 0x1433cu;
            } else {
                r4 = rd32(0x80547478u) + 0x14334u;
            }
        } else if ((u32)param_1 == 4u) {
            r4 = rd32(0x80547478u) + 0x1433cu;
        } else {
            r4 = rd32(0x80547478u) + 0x14334u;
        }
        r3 = rd32(r4 + 4u);
        if (r3 != 0u) {
            wr32(r3 + 0x2e20u, r30);
            wr32(r30 + 0x2e24u, rd32(r4 + 4u));
            wr32(r30 + 0x2e20u, 0u);
            wr32(r4 + 4u, r30);
        } else {
            wr32(r4, r30);
            wr32(r4 + 4u, r30);
            wr32(r30 + 0x2e20u, 0u);
            wr32(r30 + 0x2e24u, 0u);
        }
    }
    return;
}
