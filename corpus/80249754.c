#include "tc_rt.h"

void fn_80249754(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r4 = rd32((u32)param_1 + 0x18u);
    r10 = rd32((u32)param_1 + 0x1cu);
    r5 = 0x7fu - r4;
    r11 = 0x7fu - r10;
    if (rd32(0x80571924u) == 3u) {
        r9 = (r4 << 1u) & 0xfffffffeu;
        r8 = (r5 << 1u) & 0xfffffffeu;
        wr32((u32)param_1 + 0x24u, (u32)(s16)rd16(r9 - 0x7fc72540u));
        wr32((u32)param_1 + 0x28u, (u32)(s16)rd16(r8 - 0x7fc72540u));
        wr32((u32)param_1 + 0x2cu, (u32)(s16)rd16(((r11 << 1u) & 0xfffffffeu) - 0x7fc72540u));
        wr32((u32)param_1 + 0x30u, (u32)(s16)rd16(((r10 << 1u) & 0xfffffffeu) - 0x7fc72540u));
        wr32((u32)param_1 + 0x34u, (u32)(s16)rd16(r8 - 0x7fc72440u));
        wr32((u32)param_1 + 0x38u, (u32)(s16)rd16(r9 - 0x7fc72440u));
        return;
    }
    wr32((u32)param_1 + 0x24u, rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fc72740u));
    wr32((u32)param_1 + 0x28u, rd32(((r5 << 2u) & 0xfffffffcu) - 0x7fc72740u));
    wr32((u32)param_1 + 0x2cu, rd32(((r11 << 2u) & 0xfffffffcu) - 0x7fc72740u));
    wr32((u32)param_1 + 0x30u, rd32(((r10 << 2u) & 0xfffffffcu) - 0x7fc72740u));
    wr32((u32)param_1 + 0x34u, 0u);
    wr32((u32)param_1 + 0x38u, 0u);
    return;
}
