#include "tc_rt.h"

void fn_80253720(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r4 = 0, r11 = 0, r30 = 0, r31 = 0;
    r11 = ((u32)param_1 << 3u) & 0xfffffff8u;
    r30 = rd32(0x80576c88u);
    r31 = r30 + 0x200u;
    r4 = (((((u32)param_1 << 1u) & 0xfffffffeu) + 1u) << 2u) & 0xfffffffcu;
    wr32(r31 + r11, (((rd32(r31 + r11) & 0xfffffffcu) | (param_2 & 3u)) & 0xfffffff3u) | ((param_3 << 2u) & 0xcu));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r31 + r11));
    wr32(r31 + r4, (((rd32(r31 + r4) & 0xfffffffcu) | (param_4 & 3u)) & 0xfffffff3u) | ((param_5 << 2u) & 0xcu));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r31 + r4));
    wr16(r30 + 2u, 0u);
    return;
}
