#include "tc_rt.h"

void fn_8027aca8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    (void)tc_call(0x80284b24u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = r3;
    r28 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r29 = 0xfffffffcu;
    if (rd32(r28 + 0x8bcu) == 0xffffffffu) {
        r29 = 0xffffffffu;
    }
    r3 = rd32(r28 + 0x8b8u);
    if (r3 > 2u) {
        if ((r3 - 3u) > 2u) {
            r26 = 0x5au;
            if ((r3 - 6u) <= 2u) {
                r26 = 0x36u;
            }
        } else {
            r26 = 0x32u;
        }
    } else {
        r26 = 0x2au;
    }
    if (param_2 != 0u) {
        a.r[0] = param_2;
        a.r[1] = 0u;
        a.r[2] = r26 * param_3;
        (void)tc_call(0x8000443cu, &a);
        r3 = param_3;
        r4 = 0u;
        do {
            if (param_3 > 0u) {
                r0 = (param_3 >> 3u) & 0x1fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        r3 = param_2 + r4;
                        r4 = r4 + r26;
                        wr8(r3 + 0x29u, (u8)r29);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = param_3 & 7u;
                    if (r3 == 0u) break;
                }
                ctr = r3;
                do {
                    r3 = param_2 + r4;
                    r4 = r4 + r26;
                    wr8(r3 + 0x29u, (u8)r29);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        wr32(r28 + 0x8b0u, 0xffffffffu);
        wr32(r28 + 0x8b4u, param_3);
    }
    wr32(r28 + 0x8acu, param_2);
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
