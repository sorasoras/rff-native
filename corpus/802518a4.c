#include "tc_rt.h"

void fn_802518a4(u32 param_1, u32 param_2)
{
    u32 r6 = 0, r7 = 0, r9 = 0, r10 = 0, r11 = 0;
    if (param_2 != 0u) {
        r7 = rd32(0x80576c88u);
        r6 = rd32(r7 + 0x228u);
        wr8(0xcc008000u, 0x61u);
        r6 = r6 | 0xfu;
        wr32(0xcc008000u, r6);
        r6 = rd32(r7 + 0x220u);
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, r6 & 0xfffffffcu);
    }
    r9 = rd32(0x80576c88u);
    r11 = 0u;
    r6 = rd32(r9 + 0x22cu);
    if ((u32)rd8(r9 + 0x250u) != 0u && (r6 & 7u) != 3u) {
        r11 = 1u;
        r6 = (r6 & 0xfffffff8u) | 3u;
    }
    if (param_2 != 0u || (r6 & 7u) == 3u) {
        if (((r6 >> 6u) & 1u) == 1u) {
            r11 = 1u;
            r6 = r6 & 0xffffffbfu;
        }
    }
    if (r11 != 0u) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, r6);
    }
    wr8(0xcc008000u, 0x61u);
    r10 = rd32(0x80576c88u);
    wr32(0xcc008000u, rd32(r10 + 0x240u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r10 + 0x244u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r10 + 0x248u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((param_1 >> 5u) & 0xffffffu) | 0x4b000000u);
    wr32(r10 + 0x24cu, (((rd32(r10 + 0x24cu) & 0xfffff7ffu) | ((param_2 << 0xbu) & 0x800u)) & 0xffbfffu) | 0x52000000u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r10 + 0x24cu));
    if (param_2 != 0u) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r10 + 0x228u));
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r10 + 0x220u));
    }
    if (r11 != 0u) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r9 + 0x22cu));
    }
    wr16(r9 + 2u, 0u);
    return;
}
