#include "tc_rt.h"

void fn_802880e4(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = r3;
    r28 = 0x8050f100u;
    r31 = 0u;
    for (;;) {
        a.r[0] = rd32(r28 + 0x6cu) + 0x40u;
        a.r[1] = param_r3 + 0x40u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) break;
        r31 = r31 + 1u;
        r28 = r28 + 0xcu;
        if ((s32)r31 >= 10) {
            a.r[0] = r29;
            (void)tc_call(0x8022c2d8u, &a);
            return;
        }
    }
    r28 = r31 * 0xcu;
    r4 = r28 - 0x7faf0f00u;
    r31 = r4 + 0x6cu;
    r4 = rd32(r4 + 0x6cu);
    r4 = r4 + 0x40u;
    a.r[0] = rd32(rd32(0x8050f164u)) + 0x40u;
    a.r[1] = r4;
    a.r[2] = 6u;
    r3 = tc_call(0x802592d8u, &a);
    if (r3 != 0u) {
        r28 = r28 - 0x7faf0f00u;
        wr32(rd32(r28 + 0x70u) + 8u, rd32(r28 + 0x74u));
        a.r[0] = rd32(rd32(0x8050f168u)) + 0x40u;
        a.r[1] = rd32(r31) + 0x40u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 != 0u) {
            wr32(rd32(r28 + 0x74u) + 4u, rd32(r28 + 0x70u));
        } else {
            wr32(0x8050f168u, rd32(r28 + 0x70u));
        }
        wr32(r28 + 0x74u, rd32(0x8050f164u));
        wr32(rd32(0x8050f164u) + 4u, r31);
        wr32(0x8050f164u, r31);
        wr32(r28 + 0x70u, 0u);
    }
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
