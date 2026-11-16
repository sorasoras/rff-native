#include "tc_rt.h"

void fn_8024d978(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    r6 = rd32(0x80576c88u);
    r7 = 0u;
    ctr = 2u;
    do {
        r3 = r7 | 0x80u;
        r7 = r7 + 1u;
        wr32(r6 + 0x1cu, rd32(r6 + 0x1cu) | 0x40000000u);
        wr32(r6 + 0x3cu, rd32(r6 + 0x3cu) | 0x80000000u);
        wr8(0xcc008000u, 8u);
        wr8(0xcc008000u, (u8)r3);
        r3 = r7 | 0x80u;
        r7 = r7 + 1u;
        wr32(0xcc008000u, rd32(r6 + 0x3cu));
        wr32(r6 + 0x20u, rd32(r6 + 0x20u) | 0x40000000u);
        wr32(r6 + 0x40u, rd32(r6 + 0x40u) | 0x80000000u);
        wr8(0xcc008000u, 8u);
        wr8(0xcc008000u, (u8)r3);
        r3 = r7 | 0x80u;
        r7 = r7 + 1u;
        wr32(0xcc008000u, rd32(r6 + 0x40u));
        wr32(r6 + 0x24u, rd32(r6 + 0x24u) | 0x40000000u);
        wr32(r6 + 0x44u, rd32(r6 + 0x44u) | 0x80000000u);
        wr8(0xcc008000u, 8u);
        wr8(0xcc008000u, (u8)r3);
        r3 = r7 | 0x80u;
        r7 = r7 + 1u;
        wr32(0xcc008000u, rd32(r6 + 0x44u));
        wr32(r6 + 0x28u, rd32(r6 + 0x28u) | 0x40000000u);
        wr32(r6 + 0x48u, rd32(r6 + 0x48u) | 0x80000000u);
        wr8(0xcc008000u, 8u);
        wr8(0xcc008000u, (u8)r3);
        r0 = rd32(r6 + 0x48u);
        r6 = r6 + 0x10u;
        wr32(0xcc008000u, r0);
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr8(0xcc008000u, 0x10u);
    wr32(0xcc008000u, 0x1000u);
    wr32(0xcc008000u, 0x3fu);
    wr8(0xcc008000u, 0x10u);
    wr32(0xcc008000u, 0x1012u);
    wr32(0xcc008000u, 1u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, 0x5800000fu);
    return;
}
