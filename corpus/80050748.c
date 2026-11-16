#include "tc_rt.h"

void fn_80050748(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    a.r[0] = 0x803c8db8u;
    (void)tc_call(0x80157b44u, &a);
    wr32(0x805710a4u, 0u);
    a.r[0] = 0x803c865cu;
    (void)tc_call(0x8007ae84u, &a);
    wr32(0x805710a8u, 0u);
    r6 = 0x803c8688u;
    r7 = 0u;
    ctr = 4u;
    do {
        wr32(r6 + 0x54u, r7);
        r5 = r7 + 1u;
        r4 = r7 + 2u;
        r3 = r7 + 3u;
        wr32(r6, 0u);
        r0 = r7 + 4u;
        r7 = r7 + 5u;
        wr32(r6 + 0x40u, 0u);
        wr32(r6 + 0x58u, 0u);
        wr32(r6 + 0x4cu, 0u);
        wr32(r6 + 0x50u, 0u);
        wr32(r6 + 0xb0u, r5);
        wr32(r6 + 0x5cu, 0u);
        wr32(r6 + 0x9cu, 0u);
        wr32(r6 + 0xb4u, 0u);
        wr32(r6 + 0xa8u, 0u);
        wr32(r6 + 0xacu, 0u);
        wr32(r6 + 0x10cu, r4);
        wr32(r6 + 0xb8u, 0u);
        wr32(r6 + 0xf8u, 0u);
        wr32(r6 + 0x110u, 0u);
        wr32(r6 + 0x104u, 0u);
        wr32(r6 + 0x108u, 0u);
        wr32(r6 + 0x168u, r3);
        wr32(r6 + 0x114u, 0u);
        wr32(r6 + 0x154u, 0u);
        wr32(r6 + 0x16cu, 0u);
        wr32(r6 + 0x160u, 0u);
        wr32(r6 + 0x164u, 0u);
        wr32(r6 + 0x1c4u, r0);
        wr32(r6 + 0x170u, 0u);
        wr32(r6 + 0x1b0u, 0u);
        wr32(r6 + 0x1c8u, 0u);
        wr32(r6 + 0x1bcu, 0u);
        wr32(r6 + 0x1c0u, 0u);
        r6 = r6 + 0x1ccu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    (void)tc_call(0x8005088cu, &a);
    a.r[0] = 0x803c81f0u;
    (void)tc_call(0x801dba18u, &a);
    wr32(0x805710a0u, 0u);
    return;
}
