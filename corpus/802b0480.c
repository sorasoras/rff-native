#include "tc_rt.h"

void fn_802b0480(u32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 4u, 0xcu);
        wr8(r3 + 0x14u, (u8)(((u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31) & 2u) | 0x51u));
        wr8(r3 + 0x15u, 5u);
        wr8(r3 + 0x16u, (u8)((((u32)param_2 << 2u) & 0x3fcu) | 3u));
        wr8(r3 + 0x17u, (u8)(param_4 | 1u));
        wr16(r3 + 2u, 4u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        (void)tc_call(0x802affd8u, &a);
    }
    return;
}
