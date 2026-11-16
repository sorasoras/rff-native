#include "tc_rt.h"

void fn_80245f38(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r26 = 0, r27 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x805718f4u, 0x60u);
    wr32(0x805718e8u, 0x804ea580u);
    wr32(0x805718ecu, 0x804f1d80u);
    wr32(0x805718f0u, 0x804f3580u);
    r4 = rd32(0x800000f8u);
    r0 = rd32(0x805718f4u);
    r5 = ppc_mulhwu(0x8904fd51u, r4);
    wr32(0x805718fcu, 0u);
    r7 = rd32(0x805718e8u);
    r6 = r0 * 0x50u;
    wr32(0x80571900u, (((((r4 - r5) >> 1u) & 0x7fffffffu) + r5) >> 9u) & 0x7fffffu);
    do {
        if (r6 != 0u) {
            r0 = (r6 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    wr32(r7, 0u);
                    wr32(r7 + 4u, 0u);
                    wr32(r7 + 8u, 0u);
                    wr32(r7 + 0xcu, 0u);
                    wr32(r7 + 0x10u, 0u);
                    wr32(r7 + 0x14u, 0u);
                    wr32(r7 + 0x18u, 0u);
                    wr32(r7 + 0x1cu, 0u);
                    r7 = r7 + 0x20u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r6 = r6 & 7u;
                if (r6 == 0u) break;
            }
            ctr = r6;
            do {
                wr32(r7, 0u);
                r7 = r7 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } while (0);
    r4 = rd32(0x805718ecu);
    r5 = (rd32(0x805718f4u) << 4u) & 0xfffffff0u;
    do {
        if (r5 != 0u) {
            r0 = (r5 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    wr32(r4, 0u);
                    wr32(r4 + 4u, 0u);
                    wr32(r4 + 8u, 0u);
                    wr32(r4 + 0xcu, 0u);
                    wr32(r4 + 0x10u, 0u);
                    wr32(r4 + 0x14u, 0u);
                    wr32(r4 + 0x18u, 0u);
                    wr32(r4 + 0x1cu, 0u);
                    r4 = r4 + 0x20u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r5 = r5 & 7u;
                if (r5 == 0u) break;
            }
            ctr = r5;
            do {
                wr32(r4, 0u);
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } while (0);
    r4 = rd32(0x805718f0u);
    r5 = rd32(0x805718f4u) * 0x5au;
    do {
        if (r5 != 0u) {
            r0 = (r5 >> 3u) & 0x1fffffffu;
            ctr = r0;
            if (r0 != 0u) {
                do {
                    wr32(r4, 0u);
                    wr32(r4 + 4u, 0u);
                    wr32(r4 + 8u, 0u);
                    wr32(r4 + 0xcu, 0u);
                    wr32(r4 + 0x10u, 0u);
                    wr32(r4 + 0x14u, 0u);
                    wr32(r4 + 0x18u, 0u);
                    wr32(r4 + 0x1cu, 0u);
                    r4 = r4 + 0x20u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r5 = r5 & 7u;
                if (r5 == 0u) break;
            }
            ctr = r5;
            do {
                wr32(r4, 0u);
                r4 = r4 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    } while (0);
    r31 = 0u;
    r27 = 0u;
    r26 = 0u;
    r25 = 0u;
    for (;;) {
        r0 = rd32(0x805718f4u);
        if (r31 >= r0) break;
        r4 = rd32(0x805718ecu);
        r3 = rd32(0x805718f0u) + r25;
        r5 = rd32(0x805718e8u) + r27;
        wr32(r3 + 0x18u, r31);
        r6 = r4 + r26;
        wr32(r3 + 0x24u, r6);
        wr16(r3 + 0x38u, 0u);
        wr16(r3 + 0x6cu, 0u);
        wr32(r3 + 0x1cu, 0x18a80024u);
        wr16(r3 + 0xe2u, 0u);
        wr16(r3 + 0xeau, 0u);
        wr16(r3 + 0xfeu, 0u);
        wr16(r3 + 0x13cu, 0u);
        wr16(r3 + 0x132u, 0u);
        wr16(r3 + 0x134u, 0u);
        wr16(r3 + 0x136u, 0u);
        wr16(r3 + 0x138u, 0u);
        wr16(r3 + 0x13au, 0u);
        if (r31 != (rd32(0x805718f4u) - 1u)) {
            r0 = r5 + 0x140u;
            r4 = (r0 >> 0x10u) & 0xffffu;
            wr16(r3 + 0x28u, (u16)r4);
            wr16(r3 + 0x2au, (u16)r0);
            wr16(r5, (u16)r4);
            wr16(r5 + 2u, (u16)r0);
        } else {
            wr16(r5 + 2u, 0u);
            wr16(r5, 0u);
            wr16(r3 + 0x2au, 0u);
            wr16(r3 + 0x28u, 0u);
        }
        r0 = (r5 >> 0x10u) & 0xffffu;
        r4 = (r6 >> 0x10u) & 0xffffu;
        wr16(r3 + 0x2cu, (u16)r0);
        wr16(r3 + 0x2eu, (u16)r5);
        wr16(r5 + 4u, (u16)r0);
        wr16(r5 + 6u, (u16)r5);
        wr16(r3 + 0x6eu, (u16)r4);
        wr16(r3 + 0x70u, (u16)r6);
        wr16(r5 + 0x46u, (u16)r4);
        wr16(r5 + 0x48u, (u16)r6);
        wr32(r3 + 0xcu, 1u);
        a.r[0] = r3;
        (void)tc_call(0x80243408u, &a);
        r27 = r27 + 0x140u;
        r26 = r26 + 0x40u;
        r25 = r25 + 0x168u;
        r31 = r31 + 1u;
    }
    a.r[0] = rd32(0x805718e8u);
    a.r[1] = r0 * 0x140u;
    (void)tc_call(0x80227738u, &a);
    return;
}
