#include "tc_rt.h"

void fn_8024fc08(void)
{
    u32 r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r8 = rd32(0x80576c88u);
    r9 = 0u;
    r10 = (u32)rd8(r8 + 0x5fbu);
    r7 = r8;
    do {
        if ((r10 & 1u) != 0u) {
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, (u8)(r9 | 0x70u));
            wr32(0xcc008000u, rd32(r7 + 0x1cu));
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, (u8)(r9 | 0x80u));
            wr32(0xcc008000u, rd32(r7 + 0x3cu));
            wr8(0xcc008000u, 8u);
            wr8(0xcc008000u, (u8)(r9 | 0x90u));
            wr32(0xcc008000u, rd32(r7 + 0x5cu));
        }
        r10 = (r10 >> 1u) & 0x7fffffffu;
        r9 = r9 + 1u;
        r7 = r7 + 4u;
    } while (r10 != 0u);
    wr8(0xcc008000u, 0u);
    wr8(r8 + 0x5fbu, 0u);
    return;
}
