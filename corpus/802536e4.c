#include "tc_rt.h"

void fn_802536e4(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r8 = 0, r9 = 0;
    r9 = rd32(0x80576c88u);
    r8 = r9 + (((u32)param_1 << 2u) & 0xfffffffcu);
    wr32(r8 + 0x1c0u, (((rd32(r8 + 0x1c0u) & 0xfffffffcu) | (param_2 & 3u)) & 0xfffffff3u) | ((param_3 << 2u) & 0xcu));
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, rd32(r8 + 0x1c0u));
    wr16(r9 + 2u, 0u);
    return;
}
