#include "tc_rt.h"

void fn_80288314(u32 param_r3)
{
    u32 r3 = 0, r22 = 0, r23 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = r3;
    r31 = 0x8050f100u;
    r30 = 0x8050f16cu;
    r28 = 0u;
    do {
        r23 = rd32(r31 + 0x6cu) + 0x40u;
        a.r[0] = r23;
        a.r[1] = param_r3 + 0x40u;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            r22 = rd32(0x8050f164u);
            r26 = r22;
            while (r26 != 0u) {
                r24 = rd32(r26);
                a.r[0] = r24 + 0x40u;
                a.r[1] = param_r3 + 0x40u;
                a.r[2] = 6u;
                r3 = tc_call(0x802592d8u, &a);
                if (r3 != 0u && (u32)rd8(r24 + 0x59u) <= 1u) {
                    a.r[0] = rd32(r22) + 0x40u;
                    a.r[1] = r23;
                    a.r[2] = 6u;
                    r3 = tc_call(0x802592d8u, &a);
                    if (r3 != 0u) {
                        wr32(rd32(r31 + 0x70u) + 8u, rd32(r31 + 0x74u));
                    } else {
                        if (r26 == rd32(r22 + 8u)) break;
                        wr32(0x8050f164u, rd32(r31 + 0x74u));
                    }
                    wr32(rd32(r31 + 0x74u) + 4u, rd32(r31 + 0x70u));
                    if (r26 == rd32(0x8050f164u)) {
                        wr32(r31 + 0x70u, r26);
                        wr32(r31 + 0x74u, rd32(r26 + 8u));
                        wr32(rd32(r26 + 8u) + 4u, r30);
                        wr32(r26 + 8u, r30);
                        break;
                    }
                    wr32(r31 + 0x70u, rd32(r26 + 4u));
                    wr32(r31 + 0x74u, r26);
                    wr32(rd32(r26 + 4u) + 8u, r30);
                    wr32(r26 + 4u, r30);
                    break;
                }
                r26 = rd32(r26 + 8u);
            }
        }
        r28 = r28 + 1u;
        r30 = r30 + 0xcu;
        r31 = r31 + 0xcu;
    } while ((s32)r28 < 10);
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
