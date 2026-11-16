#include "tc_rt.h"

void fn_80252974(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r11 = rd32(0x80576c88u);
    r10 = r11 + (((u32)param_1 << 2u) & 0xfffffffcu);
    r9 = r11 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r3 = rd32(r10 + 0x564u);
    r6 = r3 & 0x3ffu;
    r3 = (r3 >> 0xau) & 0x3ffu;
    r8 = (rd32(r9 + 0x108u) & 0xffff0000u) | (r6 & 0xffffu);
    wr32(r9 + 0x108u, r8);
    r7 = (rd32(r9 + 0x128u) & 0xffff0000u) | (r3 & 0xffffu);
    wr32(r9 + 0x128u, r7);
    r3 = rd32(r10 + 0x584u);
    r6 = r3 & 3u;
    r3 = (r3 >> 2u) & 3u;
    r6 = r6 - 1u;
    r6 = ppc_cntlzw(r6);
    r3 = r3 - 1u;
    r8 = (r8 & 0xfffeffffu) | ((r6 << 0xbu) & 0x10000u);
    r3 = ppc_cntlzw(r3);
    wr32(r9 + 0x108u, r8);
    r7 = (r7 & 0xfffeffffu) | ((r3 << 0xbu) & 0x10000u);
    wr32(r9 + 0x128u, r7);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r9 + 0x108u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r9 + 0x128u));
    wr16(r11 + 2u, 0u);
    return;
}
