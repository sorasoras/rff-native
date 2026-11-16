#include "tc_rt.h"

void fn_802514f8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r10 = 0;
    r6 = (u32)rd8(param_1);
    r0 = (u32)rd8(param_1 + 3u);
    wr8(0xcc008000u, 0x61u);
    r10 = (r6 & 0xffu) | ((r0 << 8u) & 0xff00u);
    r0 = (u32)rd8(param_1 + 2u);
    r10 = (r10 & 0xffffffu) | 0x4f000000u;
    wr32(0xcc008000u, r10);
    r3 = (u32)rd8(param_1 + 1u);
    wr8(0xcc008000u, 0x61u);
    r6 = (r0 & 0xffu) | ((r3 << 8u) & 0xff00u);
    r3 = rd32(0x80576c88u);
    r6 = (r6 & 0xffffffu) | 0x50000000u;
    wr32(0xcc008000u, r6);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, (param_2 & 0xffffffu) | 0x51000000u);
    wr16(r3 + 2u, 0u);
    return;
}
