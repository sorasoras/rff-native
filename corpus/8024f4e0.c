#include "tc_rt.h"

void fn_8024f4e0(void)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r8 = 0;
    wr8(0xcc008000u, 8u);
    r3 = rd32(0x80576c88u);
    wr8(0xcc008000u, 0x50u);
    wr32(0xcc008000u, rd32(r3 + 0x14u));
    wr8(0xcc008000u, 8u);
    wr8(0xcc008000u, 0x60u);
    wr32(0xcc008000u, rd32(r3 + 0x18u));
    if ((u32)rd8(r3 + 0x525u) != 0u) {
        r8 = 2u;
    } else {
        r4 = (u32)rd8(r3 + 0x524u);
        r8 = (((0u - r4) | r4) >> 0x1fu) & 1u;
    }
    r7 = ppc_cntlzw((rd32(r3 + 0x14u) >> 0xdu) & 0xfu);
    r4 = rd32(r3 + 0x18u) & 0xffffu;
    wr8(0xcc008000u, 0x10u);
    r7 = 0x21u - r7;
    r7 = (r7 >> 1u) & 0x7fffffffu;
    wr32(0xcc008000u, 0x1008u);
    wr32(0xcc008000u, (((0x21u - ppc_cntlzw(r4)) << 3u) & 0xfffffff0u) | r7 | ((r8 << 2u) & 0xfffffffcu));
    wr16(r3 + 2u, 1u);
    return;
}
