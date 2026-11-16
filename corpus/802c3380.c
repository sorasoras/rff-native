#include "tc_rt.h"

void fn_802c3380(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(param_r3 + 4u);
    r28 = 0u;
    r31 = rd32(r4 + 0xcu);
    r3 = r31;
    r30 = r31 + rd32(r4 + 0x28u);
    for (;;) {
        r4 = (u32)rd8(r3);
        if ((u32)(s8)r4 == 0u || (u32)(s8)r4 == 0x2cu) break;
        r28 = r28 + 1u;
        r3 = r3 + 1u;
    }
    a.r[0] = r28 + 1u;
    r3 = tc_call(0x802c2510u, &a);
    wr32(param_r3 + 0xb0u, r3);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = r28;
    (void)tc_call(0x8025bdf4u, &a);
    r27 = 0u;
    r31 = r28 + r31 + 1u;
    wr8(rd32(param_r3 + 0xb0u) + r28, 0u);
    r3 = r31;
    for (;;) {
        r4 = (u32)rd8(r3);
        if ((u32)(s8)r4 == 0u || (u32)(s8)r4 == 0x2cu) break;
        r27 = r27 + 1u;
        r3 = r3 + 1u;
    }
    a.r[0] = r27 + 1u;
    r3 = tc_call(0x802c2510u, &a);
    wr32(param_r3 + 0xb4u, r3);
    a.r[0] = r3;
    a.r[1] = r31;
    a.r[2] = r27;
    (void)tc_call(0x8025bdf4u, &a);
    r5 = param_r3;
    r31 = r31 + r27;
    wr8(rd32(param_r3 + 0xb4u) + r27, 0u);
    r8 = 0u;
    r9 = 0u;
    for (;;) {
        r7 = (u32)rd8(r31 + r8);
        r6 = r31 + r8;
        if ((u32)(s8)r7 == 0u || r6 >= r30) break;
        if ((u32)(s8)r7 == 0x2cu) {
            if ((u32)rd8(r6 + 1u) != 0x31u) {
                wr32(r5 + 0xa0u, 0u);
            } else {
                wr32(r5 + 0xa0u, 1u);
            }
            r5 = r5 + 4u;
            r9 = r9 + 1u;
        }
        r8 = r8 + 1u;
    }
    wr32(param_r3 + 0xcu, r9);
    wr32(param_r3 + 0x10u, ((r9 << 2u) & 0xfffffffcu) - r9);
    return;
}
