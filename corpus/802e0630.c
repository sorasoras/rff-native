#include "tc_rt.h"

void fn_802e0630(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0, r31 = 0;
    r6 = rd32(rd32((u32)param_1 + 0x14u) + 8u);
    r31 = (u32)rd16(r6 + 0xcu);
    r10 = r31 * (u32)rd16(r6 + 0xeu);
    r9 = (u32)rd8(r6) + 1u;
    r8 = (u32)rd8(r6 + 1u) + 1u;
    r12 = ppc_divwu(param_3, r10);
    r10 = r12 * r10;
    r30 = param_3 - r10;
    r11 = ppc_divwu(r30, r31);
    wr32(param_2, rd32(r6 + 0x14u) + (r12 * rd32(r6 + 4u)));
    r12 = rd32((u32)param_1 + 0x14u);
    r7 = rd32(r12 + 0xcu);
    r9 = (r30 - (r11 * r31)) * r9;
    r8 = r11 * r8;
    for (;;) {
        if (r7 == 0u) {
            r7 = r12 + 4u;
            break;
        }
        r3 = (u32)rd16(r7);
        if (r3 <= param_3 && param_3 <= (u32)rd16(r7 + 2u)) {
            r3 = param_3 - r3;
            r3 = r7 + (((r3 << 2u) & 0xfffffffcu) - r3);
            r7 = r3 + 8u;
            break;
        }
        r7 = rd32(r7 + 4u);
    }
    wr8(param_2 + 4u, rd8(r7));
    wr8(param_2 + 5u, rd8(r7 + 1u));
    wr8(param_2 + 6u, rd8(r7 + 2u));
    wr8(param_2 + 7u, rd8(r6 + 1u));
    wr32(param_2 + 8u, (u32)rd16(r6 + 0xau));
    wr16(param_2 + 0xcu, rd16(r6 + 0x10u));
    wr16(param_2 + 0xeu, rd16(r6 + 0x12u));
    wr16(param_2 + 0x10u, (u16)(r9 + 1u));
    wr16(param_2 + 0x12u, (u16)(r8 + 1u));
    return;
}
