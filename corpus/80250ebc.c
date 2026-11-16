#include "tc_rt.h"

void fn_80250ebc(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r0 = (param_3 << 1u) & 0xfffeu;
    r7 = (param_4 << 1u) & 0xfffeu;
    if (param_1 != param_2) {
        r8 = rd32(param_1 + 4u);
        wr32(param_2, rd32(param_1));
        wr32(param_2 + 4u, r8);
        r8 = rd32(param_1 + 0xcu);
        wr32(param_2 + 8u, rd32(param_1 + 8u));
        wr32(param_2 + 0xcu, r8);
        r8 = rd32(param_1 + 0x14u);
        wr32(param_2 + 0x10u, rd32(param_1 + 0x10u));
        wr32(param_2 + 0x14u, r8);
        r8 = rd32(param_1 + 0x1cu);
        wr32(param_2 + 0x18u, rd32(param_1 + 0x18u));
        wr32(param_2 + 0x1cu, r8);
        r8 = rd32(param_1 + 0x24u);
        wr32(param_2 + 0x20u, rd32(param_1 + 0x20u));
        wr32(param_2 + 0x24u, r8);
        r8 = rd32(param_1 + 0x2cu);
        wr32(param_2 + 0x28u, rd32(param_1 + 0x28u));
        wr32(param_2 + 0x2cu, r8);
        r8 = rd32(param_1 + 0x34u);
        wr32(param_2 + 0x30u, rd32(param_1 + 0x30u));
        wr32(param_2 + 0x34u, r8);
        wr32(param_2 + 0x38u, rd32(param_1 + 0x38u));
    }
    r9 = rd32(param_1);
    wr16(param_2 + 4u, (u16)((u32)rd16(param_1 + 4u) - r0));
    r11 = r9 & 3u;
    r10 = (u32)rd16(param_1 + 6u);
    wr16(param_2 + 6u, (u16)(r10 - ppc_divwu(r7 * r10, (u32)rd16(param_1 + 8u))));
    if (rd32(param_1 + 0x14u) == 0u && r11 == 0u) {
        wr16(param_2 + 8u, (u16)((u32)rd16(param_1 + 8u) - ((r7 >> 1u) & 0x7fffu)));
    } else {
        wr16(param_2 + 8u, (u16)((u32)rd16(param_1 + 8u) - r7));
    }
    r0 = (u32)rd16(param_1 + 0xeu) - r0;
    wr16(param_2 + 0xeu, (u16)r0);
    if (r11 == 1u) {
        r7 = (r7 << 1u) & 0x1fffeu;
        wr16(param_2 + 0x10u, (u16)((u32)rd16(param_1 + 0x10u) - r7));
    } else {
        wr16(param_2 + 0x10u, (u16)((u32)rd16(param_1 + 0x10u) - r7));
    }
    wr16(param_2 + 0xau, (u16)((u32)rd16(param_1 + 0xau) + param_3));
    wr16(param_2 + 0xcu, (u16)((u32)rd16(param_1 + 0xcu) + param_4));
    return;
}
