#include "tc_rt.h"

void fn_802d83e8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0, r31 = 0;
    r12 = rd32((u32)param_1 + 0x14u);
    r3 = rd32(r12 + 8u);
    r31 = (u32)rd16(r3 + 0xcu);
    r9 = r31 * (u32)rd16(r3 + 0xeu);
    r7 = (u32)rd8(r3 + 1u) + 1u;
    r11 = ppc_divwu(param_3, r9);
    r9 = r11 * r9;
    r30 = param_3 - r9;
    r10 = ppc_divwu(r30, r31);
    r8 = (r30 - (r10 * r31)) * ((u32)rd8(r3) + 1u);
    wr32(param_2, rd32(r3 + 0x14u) + (r11 * rd32(r3 + 4u)));
    r6 = rd32(r12 + 0xcu);
    r9 = r10 * r7;
    for (;;) {
        if (r6 == 0u) {
            r7 = r12 + 4u;
            break;
        }
        r7 = (u32)rd16(r6);
        if (r7 <= param_3 && param_3 <= (u32)rd16(r6 + 2u)) {
            r5 = param_3 - r7;
            r5 = r6 + (((r5 << 2u) & 0xfffffffcu) - r5);
            r7 = r5 + 8u;
            break;
        }
        r6 = rd32(r6 + 4u);
    }
    wr8(param_2 + 4u, rd8(r7));
    wr8(param_2 + 5u, rd8(r7 + 1u));
    wr8(param_2 + 6u, rd8(r7 + 2u));
    wr8(param_2 + 7u, rd8(r3 + 1u));
    wr32(param_2 + 8u, (u32)rd16(r3 + 0xau));
    wr16(param_2 + 0xcu, rd16(r3 + 0x10u));
    r3 = (u32)rd16(r3 + 0x12u);
    wr16(param_2 + 0xeu, (u16)r3);
    wr16(param_2 + 0x10u, (u16)(r8 + 1u));
    wr16(param_2 + 0x12u, (u16)(r9 + 1u));
    return;
}
