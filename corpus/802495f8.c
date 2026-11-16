#include "tc_rt.h"

void fn_802495f8(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    r3 = param_1;
    ctr = 0x60u;
    do {
        r5 = rd32(param_2 + 0x10u) & 0xffff0000u;
        if (r5 != rd32(param_2 + 0x18u)) {
            wr32(param_2 + 0x18u, r5);
            r5 = (r5 >> 0x10u) & 0xffffu;
            r0 = r5 + 1u;
            r6 = rd32(param_2);
            r5 = (r5 << 2u) & 0xfffffffcu;
            r9 = rd32(param_2 + 0x24u);
            r0 = (r0 << 2u) & 0x1fcu;
            r11 = rd32(r6 + r5);
            r0 = rd32(r6 + r0);
            r5 = rd32(param_2 + 0xcu);
            r10 = r0 - r11;
            r0 = r11 * r5;
            r7 = (u32)((s32)r9 >> 31);
            r6 = r10 * r9;
            r6 = (r6 << 8u) | (r6 >> 0x18u);
            r8 = ppc_mulhwu(r10, r9);
            r12 = (((r0 << 8u) | (r0 >> 0x18u)) & 0xffu) | ((ppc_mulhw((s32)r11, (s32)r5) << 8u) & 0xffffff00u);
            r9 = (u32)((s32)r10 >> 31) * r9;
            r8 = r8 + r9;
            r8 = r8 + (r10 * r7);
            r6 = (r6 & 0xffu) | ((r8 << 8u) & 0xffffff00u);
            wr32(param_2 + 0x20u, r6);
        } else {
            r12 = rd32(param_2 + 0x1cu) + rd32(param_2 + 0x20u);
        }
        r0 = rd32(param_2 + 0x14u);
        wr32(param_2 + 0x1cu, r12);
        if (r0 >= 1u) {
            r12 = 0u - r12;
        }
        r5 = rd32(param_2 + 0x10u) + rd32(param_2 + 4u);
        wr32(param_2 + 0x10u, r5);
        if ((r5 & 0xff800000u) != 0u) {
            r0 = rd32(param_2 + 0x14u);
            r5 = r5 & 0x7fffffu;
            wr32(param_2 + 0x10u, r5);
            r0 = r0 ^ 1u;
            wr32(param_2 + 0x14u, r0);
        }
        wr32(r3, r12);
        r3 = r3 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
