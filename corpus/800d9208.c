#include "tc_rt.h"

void fn_800d9208(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = (u32)param_2 - 0x20u;
    r5 = rd32(r4);
    if (r5 != 0u) {
        wr32(r5 + 4u, rd32(r4 + 4u));
    } else {
        wr32((u32)param_1 + 0x2cu, rd32(r4 + 4u));
    }
    r5 = rd32(r4 + 4u);
    if (r5 != 0u) {
        wr32(r5, rd32(r4));
    }
    r6 = rd32(r4 + 8u);
    r5 = 0u;
    if (r6 != 0u && (u32)rd8(r6 + 0x14u) == 0u) {
        r5 = r6;
    }
    r7 = rd32(r4 + 0xcu);
    r6 = 0u;
    if (r7 != 0u && (u32)rd8(r7 + 0x14u) == 0u) {
        r6 = r7;
    }
    if (r5 != 0u) {
        if (r6 != 0u) {
            r7 = rd32(r6);
            if (r7 != 0u) {
                wr32(r7 + 4u, rd32(r6 + 4u));
            } else {
                wr32((u32)param_1 + 0x30u, rd32(r6 + 4u));
            }
            r3 = rd32(r6 + 4u);
            if (r3 != 0u) {
                wr32(r3, rd32(r6));
            }
            wr32(r5 + 0x10u, rd32(r4 + 0x10u) + rd32(r6 + 0x10u) + rd32(r5 + 0x10u) + 0x40u);
            wr32(r5 + 0xcu, rd32(r6 + 0xcu));
            r3 = rd32(r6 + 0xcu);
            if (r3 == 0u) {
                return;
            }
            wr32(r3 + 8u, r5);
            return;
        }
        wr32(r5 + 0x10u, rd32(r4 + 0x10u) + rd32(r5 + 0x10u) + 0x20u);
        wr32(r5 + 0xcu, rd32(r4 + 0xcu));
        r3 = rd32(r4 + 0xcu);
        if (r3 == 0u) {
            return;
        }
        wr32(r3 + 8u, r5);
        return;
    }
    if (r6 != 0u) {
        r7 = rd32(r6);
        if (r7 != 0u) {
            wr32(r7 + 4u, r4);
        } else {
            wr32((u32)param_1 + 0x30u, r4);
        }
        r3 = rd32(r6 + 4u);
        if (r3 != 0u) {
            wr32(r3, r4);
        }
        r7 = rd32(r4 + 0x10u);
        wr32(r4, rd32(r6));
        wr32(r4 + 4u, rd32(r6 + 4u));
        r3 = rd32(r6 + 0x10u) + r7;
        wr8(r4 + 0x14u, 0u);
        wr32(r4 + 0x10u, r3 + 0x20u);
        wr32(r4 + 0xcu, rd32(r6 + 0xcu));
        r3 = rd32(r6 + 0xcu);
        if (r3 == 0u) {
            return;
        }
        wr32(r3 + 8u, r5);
        return;
    }
    r5 = rd32((u32)param_1 + 0x30u);
    if (r5 != 0u) {
        wr32(r5, r4);
    }
    wr32(r4 + 4u, rd32((u32)param_1 + 0x30u));
    wr32(r4, 0u);
    wr8(r4 + 0x14u, 0u);
    wr32((u32)param_1 + 0x30u, r4);
    return;
}
