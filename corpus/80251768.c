#include "tc_rt.h"

void fn_80251768(u32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r10 = 0, r11 = 0, r12 = 0;
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
    r12 = 0u;
    do {
        if (param_2 == 0u) {
            r5 = rd32(0x80576c88u);
            r10 = r5 + 0x22cu;
            if ((rd32(r5 + 0x22cu) & 7u) != 3u) break;
        }
        r5 = rd32(0x80576c88u);
        r7 = rd32(r5 + 0x22cu);
        r10 = r5 + 0x22cu;
        if (((r7 >> 6u) & 1u) == 1u) {
            wr8(0xcc008000u, 0x61u);
            r12 = 1u;
            wr32(0xcc008000u, r7 & 0xffffffbfu);
        }
    } while (0);
    wr8(0xcc008000u, 0x61u);
    r11 = rd32(0x80576c88u);
    wr32(0xcc008000u, rd32(r11 + 0x230u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r11 + 0x234u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r11 + 0x238u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((param_1 >> 5u) & 0xffffffu) | 0x4b000000u);
    wr32(r11 + 0x23cu, (((rd32(r11 + 0x23cu) & 0xfffff7ffu) | ((param_2 << 0xbu) & 0x800u) | 0x4000u) & 0xffffffu) | 0x52000000u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r11 + 0x23cu));
    if (param_2 != 0u) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r11 + 0x228u));
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r11 + 0x220u));
    }
    if (r12 != 0u) {
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r10));
    }
    wr16(r5 + 2u, 0u);
    return;
}
