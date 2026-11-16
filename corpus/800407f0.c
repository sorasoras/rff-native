#include "tc_rt.h"

void fn_800407f0(u32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r31 = 0;
    r5 = 1u;
    wr32(0x803be700u, param_1);
    r3 = 0x803be704u;
    ctr = 0x4du;
    do {
        r6 = rd32(r3 - 4u);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u);
        wr32(r3, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 1u;
        wr32(r3 + 4u, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 2u;
        wr32(r3 + 8u, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 3u;
        wr32(r3 + 0xcu, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 4u;
        wr32(r3 + 0x10u, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 5u;
        wr32(r3 + 0x14u, r6);
        r6 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 6u;
        wr32(r3 + 0x18u, r6);
        r4 = r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u);
        r5 = r5 + 8u;
        r4 = r4 + 7u;
        wr32(r3 + 0x1cu, r4);
        r3 = r3 + 0x20u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r7 = rd32((((r5 - 1u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    r31 = (r5 << 2u) & 0xfffffffcu;
    wr32(0x80570670u, 1u);
    r4 = r31 - 0x7fc41900u;
    r12 = r5 + ((r7 ^ ((r7 >> 0x1eu) & 3u)) * 0x6c078965u);
    wr32(r31 - 0x7fc41900u, r12);
    r12 = (r12 ^ ((r12 >> 0x1eu) & 3u)) * 0x6c078965u;
    wr32(r4 + 4u, r5 + r12 + 1u);
    r11 = rd32((((r5 + 1u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    wr32(r4 + 8u, r5 + ((r11 ^ ((r11 >> 0x1eu) & 3u)) * 0x6c078965u) + 2u);
    r10 = rd32((((r5 + 2u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    wr32(r4 + 0xcu, r5 + ((r10 ^ ((r10 >> 0x1eu) & 3u)) * 0x6c078965u) + 3u);
    r9 = rd32((((r5 + 3u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    wr32(r4 + 0x10u, r5 + ((r9 ^ ((r9 >> 0x1eu) & 3u)) * 0x6c078965u) + 4u);
    r8 = rd32((((r5 + 4u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    wr32(r4 + 0x14u, r5 + ((r8 ^ ((r8 >> 0x1eu) & 3u)) * 0x6c078965u) + 5u);
    r6 = rd32((((r5 + 5u) << 2u) & 0xfffffffcu) - 0x7fc41900u);
    wr32(r4 + 0x18u, r5 + ((r6 ^ ((r6 >> 0x1eu) & 3u)) * 0x6c078965u) + 6u);
    return;
}
