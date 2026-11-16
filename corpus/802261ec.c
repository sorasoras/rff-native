#include "tc_rt.h"

void fn_802261ec(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r20 = 0, r27 = 0, r29 = 0;
    TcArgs a = {0};
    r27 = rd32(0x80226520u);
    if (rd32(0x80000060u) == 0u) {
        (void)tc_call(0x80225264u, &a);
        a.r[0] = 0x80000060u;
        a.r[1] = 0x8022646cu;
        a.r[2] = 0x24u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x80000060u;
        a.r[1] = 0x24u;
        (void)tc_call(0x80227798u, &a);
        a.r[0] = 0x80000060u;
        a.r[1] = 0x24u;
        (void)tc_call(0x802277f0u, &a);
    }
    r29 = 0u;
    for (;;) {
        r3 = rd32(0x8057147cu);
        if (r3 != 0u && rd32(r3) >= 2u) {
            a.r[0] = r29 & 0xffu;
            r3 = tc_call(0x8022524cu, &a);
            if (r3 != 0u) {
                (void)tc_call(0x80225264u, &a);
                r29 = r29 + 1u;
                if (r29 < 0xfu) continue;
                break;
            }
        }
        r3 = r29 & 0xffu;
        wr32(0x80226520u, r27 | r3);
        a.r[0] = r3;
        r3 = tc_call(0x8022524cu, &a);
        if (r3 == 0u) {
            r4 = 0x80226510u;
            ctr = 1u;
            do {
                wr32(r4, 0x60000000u);
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        } else {
            (void)tc_call(0x80225264u, &a);
            a.r[0] = 0x80226510u;
            a.r[1] = 0x80226490u;
            a.r[2] = 4u;
            (void)tc_call(0x80004338u, &a);
        }
        r20 = rd32(((r29 << 2u) & 0x3fcu) - 0x7fc86c08u) - 0x80000000u;
        a.r[0] = r20;
        a.r[1] = 0x802264b8u;
        a.r[2] = 0x98u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = r20;
        a.r[1] = 0x98u;
        (void)tc_call(0x80227798u, &a);
        a.r[0] = r20;
        a.r[1] = 0x98u;
        (void)tc_call(0x802277f0u, &a);
        r29 = r29 + 1u;
        if (r29 >= 0xfu) break;
    }
    wr32(0x80571458u, 0x80003000u);
    wr32(0x80003000u, 0x80226554u);
    wr32(rd32(0x80571458u) + 4u, 0x80226554u);
    wr32(rd32(0x80571458u) + 8u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0xcu, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x10u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x14u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x18u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x1cu, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x20u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x24u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x28u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x2cu, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x30u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x34u, 0x80226554u);
    wr32(rd32(0x80571458u) + 0x38u, 0x80226554u);
    wr32(0x80226520u, r27);
    (void)tc_call(0x80225264u, &a);
    return;
}
