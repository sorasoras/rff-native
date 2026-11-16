#include "tc_rt.h"

void fn_80301a3c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    if ((rd32(param_2) - 0x52530000u) != 0x4152u) {
        r0 = 0u;
    } else {
        r6 = (u32)rd16(param_2 + 6u);
        if (r6 < 0x100u) {
            r0 = 0u;
        } else {
            r0 = (((~r6 | 0x104u) - (((0x104u - r6) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
        }
    }
    if (r0 != 0u) {
        r12 = rd32(param_2 + 4u);
        r11 = rd32(param_2 + 8u);
        r10 = rd32(param_2 + 0xcu);
        r9 = rd32(param_2 + 0x10u);
        r8 = rd32(param_2 + 0x14u);
        r7 = rd32(param_2 + 0x18u);
        r6 = rd32(param_2 + 0x1cu);
        r5 = rd32(param_2 + 0x20u);
        r0 = rd32(param_2 + 0x24u);
        wr32(param_1, rd32(param_2));
        wr32(param_1 + 4u, r12);
        wr32(param_1 + 8u, r11);
        wr32(param_1 + 0xcu, r10);
        wr32(param_1 + 0x10u, r9);
        wr32(param_1 + 0x14u, r8);
        wr32(param_1 + 0x18u, r7);
        wr32(param_1 + 0x1cu, r6);
        wr32(param_1 + 0x20u, r5);
        wr32(param_1 + 0x24u, r0);
    }
    return;
}
