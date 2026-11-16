#include "tc_rt.h"

void fn_8024f590(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r9 = 0, r31 = 0;
    r3 = rd32(0x80576c88u);
    if ((u32)rd16(r3 + 4u) != 0u) {
        r9 = rd32(r3 + 0x14u);
        r31 = rd32(r3 + 0x18u);
        r5 = (u32)rd8(((r9 >> 0xbu) & 3u) - 0x7fa8f468u);
        r0 = (r9 & 1u) + ((r9 >> 1u) & 1u) + ((r9 >> 2u) & 1u) + ((r9 >> 3u) & 1u) + ((r9 >> 4u) & 1u) + ((r9 >> 5u) & 1u) + ((r9 >> 6u) & 1u) + ((r9 >> 7u) & 1u);
        r0 = r0 + ((r9 >> 8u) & 1u);
        r4 = 1u;
        r0 = r0 + (u32)rd8(((r9 >> 9u) & 3u) - 0x7fa8f468u);
        if (((rd32(r3 + 0x1cu) >> 9u) & 1u) == 1u) {
            r4 = 3u;
        }
        r0 = r0 + (r5 * r4);
        r0 = r0 + (u32)rd8(((r9 >> 0xdu) & 3u) - 0x7fa8f470u);
        r0 = r0 + (u32)rd8(((r9 >> 0xfu) & 3u) - 0x7fa8f470u);
        r0 = r0 + (u32)rd8((r31 & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 2u) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 4u) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 6u) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 8u) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 0xau) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 0xcu) & 3u) - 0x7fa8f46cu);
        r0 = r0 + (u32)rd8(((r31 >> 0xeu) & 3u) - 0x7fa8f46cu);
        wr16(r3 + 6u, (u16)r0);
    }
    return;
}
