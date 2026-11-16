#include "tc_rt.h"

void fn_80254744(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u32 r4 = 0, r8 = 0, r9 = 0;
    r8 = rd32(0x80576c88u);
    r4 = (u32)param_2 + 0x156u;
    r9 = (u32)param_1 + 0x156u;
    wr32(r8 + 0x148u, (((rd32(r8 + 0x148u) & 0xfffff800u) | (r4 & 0x7ffu)) & 0xff800fffu) | ((r9 << 0xcu) & 0x7ff000u));
    wr32(r8 + 0x14cu, (((rd32(r8 + 0x14cu) & 0xfffff800u) | ((r4 + (u32)param_4 - 1u) & 0x7ffu)) & 0xff800fffu) | (((r9 + (u32)param_3 - 1u) << 0xcu) & 0x7ff000u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x148u));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x14cu));
    wr16(r8 + 2u, 0u);
    return;
}
